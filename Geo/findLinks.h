// Gmsh - Copyright (C) 1997-2019 C. Geuzaine, J.-F. Remacle
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/gmsh/gmsh/issues.

#ifndef FIND_LINKS_H
#define FIND_LINKS_H

#include "ListUtils.h"

int allEdgesLinked(int ed, List_T *edges);
int allFacesLinked(int fac, List_T *faces);

#endif
