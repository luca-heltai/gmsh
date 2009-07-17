// Gmsh - Copyright (C) 1997-2009 C. Geuzaine, J.-F. Remacle
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <gmsh@geuz.org>.

#include <stdlib.h>
#include "GModel.h"
#include "gmshFace.h"
#include "Geo.h"
#include "GeoInterpolation.h"
#include "Numeric.h"
#include "GmshMessage.h"
#include "Context.h"

gmshFace::gmshFace(GModel *m, Surface *face)
  : GFace(m, face->Num), s(face)
{
  resetMeshAttributes();

  std::list<GEdge*> l_wire;
  GVertex *first = 0;
  for(int i = 0; i < List_Nbr(s->Generatrices); i++){
    Curve *c;
    List_Read(s->Generatrices, i, &c);
    GEdge *e = m->getEdgeByTag(abs(c->Num));
    if(e){
      GVertex *start = (c->Num > 0) ? e->getBeginVertex() : e->getEndVertex();
      GVertex *next  = (c->Num > 0) ? e->getEndVertex() : e->getBeginVertex();
      if ( ! first ) first = start;
      l_wire.push_back(e);
      if ( next == first ){
	edgeLoops.push_back(GEdgeLoop(l_wire));
	l_wire.clear();
	first = 0;
      }

      l_edges.push_back(e);
      e->addFace(this);
      l_dirs.push_back((c->Num > 0) ? 1 : -1);
      if (List_Nbr(s->Generatrices) == 2){
        e->meshAttributes.minimumMeshSegments = 
          std::max(e->meshAttributes.minimumMeshSegments, 2);
      }
    }
    else
      Msg::Error("Unknown curve %d", c->Num);
  }

  // always compute and store the mean plane for plane surfaces (using
  // the bounding vertices)
  if(s->Typ == MSH_SURF_PLAN) computeMeanPlane();

  if(s->EmbeddedCurves){
    for(int i = 0; i < List_Nbr(s->EmbeddedCurves); i++){
      Curve *c;
      List_Read(s->EmbeddedCurves, i, &c);
      GEdge *e = m->getEdgeByTag(abs(c->Num));
      if(e)
        embedded_edges.push_back(e);
      else
        Msg::Error("Unknown curve %d", c->Num);
    }
  }
  if(s->EmbeddedPoints){
    for(int i = 0; i < List_Nbr(s->EmbeddedPoints); i++){
      Vertex *v;
      List_Read(s->EmbeddedPoints, i, &v);
      GVertex *gv = m->getVertexByTag(v->Num);
      if(gv)
        embedded_vertices.push_back(gv);
      else
        Msg::Error("Unknown point %d", v->Num);
    }
  }
  isSphere = iSRuledSurfaceASphere(s, center, radius);

}

double gmshFace::getMetricEigenvalue(const SPoint2 &pt)
{
  if(!s->geometry) return 1;
  return s->geometry->getMetricEigenvalue(pt);
}

void gmshFace::setModelEdges(std::list<GEdge*> &ed)
{
  for (std::list<GEdge*>::iterator it = ed.begin(); it != ed.end() ; ++it){
    l_edges.push_back(*it);
    (*it)->addFace(this);
    l_dirs.push_back(1);
  }
}

void gmshFace::resetMeshAttributes()
{
  meshAttributes.recombine = s->Recombine;
  meshAttributes.recombineAngle = s->RecombineAngle;
  meshAttributes.Method = s->Method;
  meshAttributes.extrude = s->Extrude;
  if(meshAttributes.Method == MESH_TRANSFINITE){
    meshAttributes.transfiniteArrangement = s->Recombine_Dir;
    meshAttributes.transfiniteSmoothing = s->TransfiniteSmoothing;
    meshAttributes.corners.clear();
    for(int i = 0; i < List_Nbr(s->TrsfPoints); i++){
      Vertex *corn;
      List_Read(s->TrsfPoints, i, &corn);
      GVertex *gv = model()->getVertexByTag(corn->Num);
      if(gv)
        meshAttributes.corners.push_back(gv);
      else
        Msg::Error("Unknown vertex %d in transfinite attributes", corn->Num);
    }
  }
}

Range<double> gmshFace::parBounds(int i) const
{ 
  return Range<double>(0, 1);
}

SVector3 gmshFace::normal(const SPoint2 &param) const
{
  if(geomType() != Plane){
    Vertex vu = InterpolateSurface(s, param[0], param[1], 1, 1);
    Vertex vv = InterpolateSurface(s, param[0], param[1], 1, 2);
    Vertex n = vu % vv;
    n.norme();
    return SVector3(n.Pos.X, n.Pos.Y, n.Pos.Z);
  }
  else{
    // We cannot use InterpolateSurface() for plane surfaces since it
    // relies on the mean plane, which does not respect the
    // orientation

    // FIXME: move this test at the end of the MeanPlane computation
    // routine--and store the correct normal, damn it!

    double n[3] = {meanPlane.a, meanPlane.b, meanPlane.c};
    norme(n);
    double angle = 0.;
    GPoint pt = point(param.x(), param.y());
    double v[3] = {pt.x(), pt.y(), pt.z()};
    for(int i = 0; i < List_Nbr(s->Generatrices); i++) {
      Curve *c;
      List_Read(s->Generatrices, i, &c);
      int N = (c->Typ == MSH_SEGM_LINE) ? 1 : 3;
      for(int j = 0; j < N; j++) {
        double u1 = (double)j / (double)N;
        double u2 = (double)(j + 1) / (double)N;
        Vertex p1 = InterpolateCurve(c, u1, 0);
        Vertex p2 = InterpolateCurve(c, u2, 0);
        double v1[3] = {p1.Pos.X, p1.Pos.Y, p1.Pos.Z};
        double v2[3] = {p2.Pos.X, p2.Pos.Y, p2.Pos.Z};
        angle += angle_plan(v, v1, v2, n);
      }
    }
    if(angle > 0)
      return SVector3(n[0], n[1], n[2]);
    else
      return SVector3(-n[0], -n[1], -n[2]);
  }
}

Pair<SVector3,SVector3> gmshFace::firstDer(const SPoint2 &param) const
{
  if(s->Typ == MSH_SURF_PLAN && !s->geometry){
    double x, y, z, VX[3], VY[3];
    getMeanPlaneData(VX, VY, x, y, z);
    return Pair<SVector3, SVector3>(SVector3(VX[0], VX[1], VX[2]),
                                    SVector3(VY[0], VY[1], VY[2]));
  }
  else{
    Vertex vu = InterpolateSurface(s, param[0], param[1], 1, 1);
    Vertex vv = InterpolateSurface(s, param[0], param[1], 1, 2);
    return Pair<SVector3, SVector3>(SVector3(vu.Pos.X, vu.Pos.Y, vu.Pos.Z),
                                    SVector3(vv.Pos.X, vv.Pos.Y, vv.Pos.Z));
  }
}

void gmshFace::secondDer(const SPoint2 &param, 
                         SVector3 *dudu, SVector3 *dvdv, SVector3 *dudv) const
{
  if(s->Typ == MSH_SURF_PLAN && !s->geometry){
    *dudu = SVector3(0.,0.,0.);
    *dvdv = SVector3(0.,0.,0.);
    *dudv = SVector3(0.,0.,0.);
  }
  else{
    Vertex vuu = InterpolateSurface(s, param[0], param[1], 2, 1);
    Vertex vvv = InterpolateSurface(s, param[0], param[1], 2, 2);
    Vertex vuv = InterpolateSurface(s, param[0], param[1], 2, 3);
    *dudu = SVector3(vuu.Pos.X,vuu.Pos.Y,vuu.Pos.Z);
    *dvdv = SVector3(vvv.Pos.X,vvv.Pos.Y,vvv.Pos.Z);
    *dudv = SVector3(vuv.Pos.X,vuv.Pos.Y,vuv.Pos.Z);
  }
}

GPoint gmshFace::point(double par1, double par2) const
{
  double pp[2] = {par1, par2};
  if(s->Typ == MSH_SURF_PLAN && !s->geometry){
    double x, y, z, VX[3], VY[3];
    getMeanPlaneData(VX, VY, x, y, z);
    return GPoint(x + VX[0] * par1 + VY[0] * par2,
                  y + VX[1] * par1 + VY[1] * par2,
                  z + VX[2] * par1 + VY[2] * par2, this, pp);
  }
  else{
    Vertex v = InterpolateSurface(s, par1, par2, 0, 0);
    return GPoint(v.Pos.X, v.Pos.Y, v.Pos.Z, this, pp);
  }
}

GPoint gmshFace::closestPoint(const SPoint3 & qp, const double initialGuess[2]) const
{
  if (s->Typ == MSH_SURF_PLAN && !s->geometry){
    double XP = qp.x();
    double YP = qp.y();
    double ZP = qp.z();
    double VX[3], VY[3], x, y, z;
    getMeanPlaneData(VX, VY, x, y, z);
    double M[3][2] = {{VX[0], VY[0]}, {VX[1], VY[1]}, {VX[2], VY[2]}};
    double MN[2][2];
    double B[3] = {XP - x, YP - y, ZP - z};
    double BN[2], UV[2];
    for (int i = 0; i < 2; i++){
      BN[i] = 0;
      for (int k = 0; k < 3; k++){
	BN[i] += B[k] * M[k][i];
      }
    }
    for (int i = 0; i < 2; i++){
      for (int j = 0; j < 2; j++){
	MN[i][j] = 0;
	for (int k = 0; k < 3; k++){
	  MN[i][j] += M[k][i] * M[k][j];
	}
      }
    }
    sys2x2(MN, BN, UV);
    return GPoint(XP, YP, ZP, this, UV);    
  }

  Vertex v;
  v.Pos.X = qp.x();
  v.Pos.Y = qp.y();
  v.Pos.Z = qp.z();
  double u[2] = {initialGuess[0], initialGuess[1]};
  bool result = ProjectPointOnSurface(s, v, u);
  if (!result)
    return GPoint(-1.e22, -1.e22, -1.e22, 0, u);
  return GPoint(v.Pos.X, v.Pos.Y, v.Pos.Z, this, u);
}

SPoint2 gmshFace::parFromPoint(const SPoint3 &qp) const
{
  if(s->Typ == MSH_SURF_PLAN){
    double x, y, z, VX[3], VY[3];
    getMeanPlaneData(VX, VY, x, y, z);
    double u, v, vec[3] = {qp.x() - x, qp.y() - y, qp.z() - z};
    prosca(vec, VX, &u);
    prosca(vec, VY, &v);
    return SPoint2(u, v); 
  }
  else{
    return GFace::parFromPoint(qp);
  }
}

GEntity::GeomType gmshFace::geomType() const
{
  switch(s->Typ){
  case MSH_SURF_PLAN: 
    if(s->geometry) 
      return ParametricSurface;
    else
      return Plane;
  case MSH_SURF_REGL:
  case MSH_SURF_TRIC: 
    return RuledSurface;
  case MSH_SURF_DISCRETE: 
    return DiscreteSurface;
  case MSH_SURF_BND_LAYER:
    return BoundaryLayerSurface;
  default: 
    return Unknown;
  }
}

bool gmshFace::containsPoint(const SPoint3 &pt) const
{ 
  if(geomType() == Plane){
    // OK to use the normal from the mean plane here: we compensate
    // for the (possibly wrong) orientation at the end
    double n[3] = {meanPlane.a, meanPlane.b, meanPlane.c};
    norme(n);
    double angle = 0.;
    double v[3] = {pt.x(), pt.y(), pt.z()};
    for(int i = 0; i < List_Nbr(s->Generatrices); i++) {
      Curve *c;
      List_Read(s->Generatrices, i, &c);
      int N = (c->Typ == MSH_SEGM_LINE) ? 1 : 10;
      for(int j = 0; j < N; j++) {
        double u1 = (double)j / (double)N;
        double u2 = (double)(j + 1) / (double)N;
        Vertex p1 = InterpolateCurve(c, u1, 0);
        Vertex p2 = InterpolateCurve(c, u2, 0);
        double v1[3] = {p1.Pos.X, p1.Pos.Y, p1.Pos.Z};
        double v2[3] = {p2.Pos.X, p2.Pos.Y, p2.Pos.Z};
        angle += angle_plan(v, v1, v2, n);
      }
    }
    // we're inside if angle equals 2 * pi
    if(fabs(angle) > 2 * M_PI - 0.5 && fabs(angle) < 2 * M_PI + 0.5) 
      return true;
    return false;
  }

  return false;
}
