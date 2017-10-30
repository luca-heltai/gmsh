// Gmsh - Copyright (C) 1997-2017 C. Geuzaine, J.-F. Remacle
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <gmsh@onelab.info>.
//
// Contributor(s):
//   Stephen Guzik
//

#include <limits>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Value_Input.H>
#include <FL/Fl_Toggle_Button.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Toggle_Button.H>
#include <FL/Fl_Return_Button.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Box.H>
#include "GmshConfig.h"
#include "GmshDefines.h"
#include "GmshMessage.h"
#include "FlGui.h"
#include "paletteWindow.h"
#include "GModel.h"
#include "drawContext.h"
#include "Options.h"
#include "meshPartition.h"
#include "Context.h"
#include "fileDialogs.h"

#if defined(HAVE_METIS)

// Forward declarations of some callbacks
void partition_opt_num_partitions_cb(Fl_Widget *widget, void *data);
void partition_defaults_cb(Fl_Widget *widget, void *data);
void partition_partition_cb(Fl_Widget *widget, void *data);
void partition_cancel_cb(Fl_Widget *widget, void *data);
void partition_opt_booleans_cb(Fl_Widget *widget, void *data);
void partition_select_groups_cb(Fl_Widget *widget, void *data);

// Pointers to required widgets
struct PartitionDialog
{
  Fl_Window *window;
  // Group 0
  Fl_Choice *choicePartitioner;
  Fl_Value_Input *inputNumPartition;
  Fl_Check_Button *setPartitionMeshes;
  Fl_Check_Button *setGhostCells;
  Fl_Check_Button *setPartitionBoundaries;
  Fl_Check_Button *setTopologyFile;
  // Group 1
  Fl_Choice *choiceMetisAlg;
  Fl_Toggle_Button *toggleButtonAdvMetis;
  // Group 2
  Fl_Choice *choiceEdgeMatch;
  Fl_Choice *choiceRefineAlg;
  // weight
  Fl_Value_Input *inputTriWeight;
  Fl_Value_Input *inputQuaWeight;
  Fl_Value_Input *inputTetWeight;
  Fl_Value_Input *inputPriWeight;
  Fl_Value_Input *inputPyrWeight;
  Fl_Value_Input *inputHexWeight;
  
  void write_all_options()
  {
    CTX::instance()->partitionOptions.outputDir = CTX::instance()->homeDir;
    // Group 0
    CTX::instance()->partitionOptions.num_partitions = static_cast<unsigned short>(inputNumPartition->value());
    CTX::instance()->partitionOptions.writePartitionMeshes = setPartitionMeshes->value();
    CTX::instance()->partitionOptions.createGhostCells = setGhostCells->value();
    CTX::instance()->partitionOptions.createPartitionBoundaries = setPartitionBoundaries->value();
    CTX::instance()->partitionOptions.writeTopologyFile = setTopologyFile->value();
  
    // Group 1
    CTX::instance()->partitionOptions.algorithm = choiceMetisAlg->value() + 1;

    // Group 2
    CTX::instance()->partitionOptions.edge_matching = choiceEdgeMatch->value() + 1;
    CTX::instance()->partitionOptions.refine_algorithm = choiceRefineAlg->value() + 1;

    CTX::instance()->partitionOptions.triWeight = (int)inputTriWeight->value();
    CTX::instance()->partitionOptions.quaWeight = (int)inputQuaWeight->value();
    CTX::instance()->partitionOptions.tetWeight = (int)inputTetWeight->value();
    CTX::instance()->partitionOptions.priWeight = (int)inputPriWeight->value();
    CTX::instance()->partitionOptions.pyrWeight = (int)inputPyrWeight->value();
    CTX::instance()->partitionOptions.hexWeight = (int)inputHexWeight->value();

  }
  void read_all_options()
  {
    // Group 0
    inputNumPartition->value(CTX::instance()->partitionOptions.num_partitions);
    setPartitionMeshes->value(CTX::instance()->partitionOptions.writePartitionMeshes);
    setGhostCells->value(CTX::instance()->partitionOptions.createGhostCells);
    setPartitionBoundaries->value(CTX::instance()->partitionOptions.createPartitionBoundaries);
    setTopologyFile->value(CTX::instance()->partitionOptions.writeTopologyFile);
  
    // Group 2
    choiceMetisAlg->value(CTX::instance()->partitionOptions.algorithm - 1);

    // Group 3
    choiceEdgeMatch->value(CTX::instance()->partitionOptions.edge_matching - 1);
    choiceRefineAlg->value(CTX::instance()->partitionOptions.refine_algorithm - 1);
    
    inputTriWeight->value(CTX::instance()->partitionOptions.triWeight);
    inputQuaWeight->value(CTX::instance()->partitionOptions.quaWeight);
    inputTetWeight->value(CTX::instance()->partitionOptions.tetWeight);
    inputPriWeight->value(CTX::instance()->partitionOptions.priWeight);
    inputPyrWeight->value(CTX::instance()->partitionOptions.pyrWeight);
    inputHexWeight->value(CTX::instance()->partitionOptions.hexWeight);
    
    // Call all callbacks to ensure consistent options
    partition_opt_num_partitions_cb(inputNumPartition, this);
  }
};

// Match several locations that provide a partition number
void partition_opt_num_partitions_cb(Fl_Widget *widget, void *data)
{
  PartitionDialog *dlg = static_cast<PartitionDialog*>(data);
  unsigned val = 0;
  if(widget == dlg->inputNumPartition)
  {
    val = static_cast<unsigned>(dlg->inputNumPartition->value());
  }

  dlg->choiceMetisAlg->value((val <= 8) ? 0: 1);
}

void partition_defaults_cb(Fl_Widget *widget, void *data)
{
  PartitionDialog *dlg = static_cast<PartitionDialog*>(data);
  CTX::instance()->partitionOptions.setDefaults();
  dlg->read_all_options();
  partition_select_groups_cb(dlg->choicePartitioner, data);
}

void partition_partition_cb(Fl_Widget *widget, void *data)
{
  PartitionDialog *dlg = static_cast<PartitionDialog*>(data);

  // Write all options
  dlg->write_all_options();
  
  if(CTX::instance()->partitionOptions.writePartitionMeshes || CTX::instance()->partitionOptions.writeTopologyFile)
  {
    if(fileChooser(FILE_CHOOSER_DIRECTORY, "Output directory", ""))
    {
      CTX::instance()->partitionOptions.outputDir = fileChooserGetName(1);

      // Partition the mesh
      int ier = PartitionMesh(GModel::current(), CTX::instance()->partitionOptions);

      // Update the screen
      if(!ier)
      {
        opt_mesh_zone_definition(0, GMSH_SET, 2.);  // Define zone by partition
        opt_mesh_color_carousel(0, GMSH_SET | GMSH_GUI, 3.);
        CTX::instance()->mesh.changed = ENT_ALL;
        drawContext::global()->draw();
      }
    }
  }
  else
  {
    // Partition the mesh
    int ier = PartitionMesh(GModel::current(), CTX::instance()->partitionOptions);
    
    // Update the screen
    if(!ier)
    {
      opt_mesh_zone_definition(0, GMSH_SET, 2.);  // Define zone by partition
      opt_mesh_color_carousel(0, GMSH_SET | GMSH_GUI, 3.);
      CTX::instance()->mesh.changed = ENT_ALL;
      drawContext::global()->draw();
    }
  }
}

void partition_cancel_cb(Fl_Widget *widget, void *data)
{
  PartitionDialog *dlg = static_cast<PartitionDialog*>(data);
  dlg->window->hide();
  Fl::delete_widget(dlg->window);
}

// Select groups to display
void partition_select_groups_cb(Fl_Widget *widget, void *data)
{
  PartitionDialog *dlg = static_cast<PartitionDialog*>(data);
  // If this callback was made by the "Advanced" toggle buttons, set the label
  
  if(dlg->toggleButtonAdvMetis == widget)
  {
    dlg->toggleButtonAdvMetis->label((dlg->toggleButtonAdvMetis->value()) ? "Advanced @-28->" : "Advanced @-22->");
  }

  // Get the groups
  Fl_Widget *const *g = dlg->window->array();
  int y = g[0]->h();
  g[1]->show();
  y += g[1]->h();
  if(dlg->toggleButtonAdvMetis->value())
  {
    g[2]->show();
    y += g[2]->h();
  }
  else
  {
    g[2]->hide();
  }

  // Reset the vertical position of all widgets in group 6
  {
    int yG = y;
    g[3]->position(g[3]->x(), yG);
    Fl_Widget *o = static_cast<Fl_Group*>(g[3])->child(0);
    o->position(o->x(), yG);
    yG += WB + o->h();
    o = static_cast<Fl_Group*>(g[3])->child(1);
    o->position(o->x(), yG);
    o = static_cast<Fl_Group*>(g[3])->child(2);
    o->position(o->x(), yG);
    yG += WB + o->h();
  }
  y += g[3]->h();

  dlg->window->size(dlg->window->w(), y);
  dlg->window->redraw();
}

void partition_dialog()
{
  static PartitionDialog dlg;

  static Fl_Menu_Item partitionTypeMenu[] = {
    {"Metis", 0, 0, 0},
    {0}
  };

  static Fl_Menu_Item metisAlgMenu[] = {
    {"Recursive", 0, 0, 0},
    {"K-way", 0, 0, 0},
    {0}
  };

  static Fl_Menu_Item metisEdgeMatchingMenu[] = {
    {"Random", 0, 0, 0},
    {"Sorted heavy-edge", 0, 0, 0},
    {0}
  };

  static Fl_Menu_Item metisRefineAlgMenu[] = {
    {"FM-based cut", 0, 0, 0},
    {"Greedy", 0, 0, 0},
    {"Two-sided node FM", 0, 0, 0},
    {"One-sided node FM", 0, 0, 0},
    {0}
  };

  const int h = 8 * WB + 5 * BH + 4;    // This will be resized based on groups
                                        // that are displayed
  const int w = 3 * BB + IW + 3 * WB;   // Window width
  int y = 0;

  dlg.window = new paletteWindow (w, h, CTX::instance()->nonModalWindows ? true : false, "Partition");
  dlg.window->box(GMSH_WINDOW_BOX);
  dlg.window->callback((Fl_Callback *)partition_cancel_cb, &dlg);

  // Main options group [0]
  {
    const int GH = 3*BH + 2 + 5*WB;
    y += WB;
    Fl_Group *g = new Fl_Group(0, y, w, GH);
    // Partitioner
    {
      Fl_Choice *const o = new Fl_Choice(WB, y, BB, BH, "Partitioner");
      dlg.choicePartitioner = o;
      o->menu(partitionTypeMenu);
      o->callback((Fl_Callback *)partition_select_groups_cb, &dlg);
#if !defined(HAVE_METIS)
      o->mode(1, FL_MENU_INACTIVE);
#endif
      o->align(FL_ALIGN_RIGHT);
    }
    // Number of partitions
    {
      Fl_Value_Input *const o = new Fl_Value_Input (2*WB + 2*BB, y, IW, BH, "Number of\nPartitions");
      dlg.inputNumPartition = o;
      o->minimum(2);
      o->maximum(std::numeric_limits<unsigned short>::max());
      o->callback((Fl_Callback *)partition_opt_num_partitions_cb, &dlg);
      o->step(1);
      o->align(FL_ALIGN_RIGHT);
    }
    y += BH + WB;
    // Booleans options
    {
      Fl_Check_Button *const o = new Fl_Check_Button (WB, y, 2*BB, BH, "Write partitioned meshes");
      dlg.setPartitionMeshes = o;
    }
    {
      Fl_Check_Button *const o = new Fl_Check_Button (2*WB + 2*BB, y, 2*BB, BH, "Create ghost cells");
      dlg.setGhostCells = o;
    }
    y += BH + WB;
    {
      Fl_Check_Button *const o = new Fl_Check_Button (WB, y, 2*BB, BH, "Create partition boundaries");
      dlg.setPartitionBoundaries = o;
    }
    {
      Fl_Check_Button *const o = new Fl_Check_Button (2*WB + 2*BB, y, 2*BB, BH, "Write a topology file");
      dlg.setTopologyFile = o;
    }
    y += BH + WB;
    // Box (line)
    { Fl_Box* o = new Fl_Box(WB, y, w - 2*WB, 2);
      o->box(FL_ENGRAVED_FRAME);
      o->labeltype(FL_NO_LABEL);
    }
    y += 2 + WB;
    g->end();
    g->show();
  }
  const int yMain = y;


  // Metis options group [1]
  y = yMain;
  {
    const int GH = BH + WB;
    Fl_Group *g = new Fl_Group(0, y, w, GH);
    // Algorithm
    {
      Fl_Choice *const o = new Fl_Choice (WB, y, BB, BH, "Algorithm");
      dlg.choiceMetisAlg = o;
      o->menu(metisAlgMenu);
      o->align(FL_ALIGN_RIGHT);
    }
    // Advanced Button
    {
      Fl_Toggle_Button *const o = new Fl_Toggle_Button (w - (WB + BB), y, BB, BH, "Advanced @-22->");
      dlg.toggleButtonAdvMetis = o;
      o->callback((Fl_Callback *)partition_select_groups_cb, &dlg);
    }
    y += BH + WB;
    g->end();
    g->hide();
  }

  // Metis advanced option group [2]
  {
    const int GH = 2 + WB + 3*(BH + WB) + 2;
    Fl_Group *g = new Fl_Group(0, y, w, GH);
    // Box (line)
    {
      Fl_Box *const o = new Fl_Box(WB, y, w - 2*WB, 2);
      o->box(FL_ENGRAVED_FRAME);
      o->labeltype(FL_NO_LABEL);
    }
    y += 2 + WB + 1;  // +1 for multiline label
    // Edge matching algorithm
    {
      Fl_Choice *const o = new Fl_Choice(WB, y, BB, BH, "Edge matching");
      dlg.choiceEdgeMatch = o;
      o->menu(metisEdgeMatchingMenu);
      o->align(FL_ALIGN_RIGHT);
    }
    // Refinement algorithm
    {
      Fl_Choice *const o = new Fl_Choice (2*WB + 2*BB, y, BB, BH, "Refinement\nalgorithm");
      dlg.choiceRefineAlg = o;
      o->menu(metisRefineAlgMenu);
      o->align(FL_ALIGN_RIGHT);
    }
    y += BH + WB + 1;  // +1 for multiline label
    // element weights - line 1 
    { 
      Fl_Value_Input *const o = new Fl_Value_Input (WB, y, 2*BB/3, BH, "Triangle");
      dlg.inputTriWeight = o;
      o->minimum(1);
      o->maximum(std::numeric_limits<int>::max());
      o->step(1);
      o->align(FL_ALIGN_RIGHT);
    }
    { 
      Fl_Value_Input *const o = new Fl_Value_Input (2*WB + (w/3-WB), y,2*BB/3, BH, "Tetrahedron");
      dlg.inputTetWeight = o;
      o->minimum(1);
      o->maximum(std::numeric_limits<int>::max());
      o->step(1);
      o->align(FL_ALIGN_RIGHT);
    }
    { 
      Fl_Value_Input *const o = new Fl_Value_Input (3*WB + 2*(w/3-WB), y,2*BB/3, BH, "Prism");
      dlg.inputPriWeight = o;
      o->minimum(1);
      o->maximum(std::numeric_limits<int>::max());
      o->step(1);
      o->align(FL_ALIGN_RIGHT);
    }
    y += 2 + WB + BH + 1; 
    // element weights - line 2 
    { 
      Fl_Value_Input *const o = new Fl_Value_Input (WB, y, 2*BB/3, BH, "Quadrangle");
      dlg.inputQuaWeight = o;
      o->minimum(1);
      o->maximum(std::numeric_limits<int>::max());
      o->step(1);
      o->align(FL_ALIGN_RIGHT);
    }
    { 
      Fl_Value_Input *const o = new Fl_Value_Input (2*WB + (w/3-WB), y,2*BB/3, BH, "Hexahedron");
      dlg.inputHexWeight = o;
      o->minimum(1);
      o->maximum(std::numeric_limits<int>::max());
      o->step(1);
      o->align(FL_ALIGN_RIGHT);
    }
    { 
      Fl_Value_Input *const o = new Fl_Value_Input (3*WB + 2*(w/3-WB), y,2*BB/3, BH, "Pyramid");
      dlg.inputPyrWeight = o;
      o->minimum(1);
      o->maximum(std::numeric_limits<int>::max());
      o->step(1);
      o->align(FL_ALIGN_RIGHT);
    }
    y += BH + WB + 1;  // +1 for multiline label
    g->end();
    g->hide();
  }
  
  // Dialog termination group [3]
  {
    const int GH = 2 + BH + 2*WB;
    Fl_Group *g = new Fl_Group(0, y, w, GH);
    // Box (line) [0]
    {
      Fl_Box *const o = new Fl_Box(WB, y, w - 2*WB, 2);
      o->box(FL_ENGRAVED_FRAME);
      o->labeltype(FL_NO_LABEL);
    }
    y += 2 + WB;
    // Defaults Button [1]
    {
      Fl_Button *const o = new Fl_Button
         (WB, y, BB, BH, "Defaults");
      o->callback((Fl_Callback *)partition_defaults_cb, &dlg);
    }
    // Partition Button [2]
    {
      Fl_Return_Button *const o = new Fl_Return_Button
        (w - (WB + BB), y, BB, BH, "Partition");
      o->callback((Fl_Callback *)partition_partition_cb, &dlg);
    }
    y += BH + WB;
    g->end();
    g->show();
  }

  dlg.window->end();
  dlg.window->hotspot(dlg.window);

  dlg.read_all_options();
  // Set the groups to be initally displayed
  CTX::instance()->partitionOptions.setDefaults();
  dlg.read_all_options();
  partition_select_groups_cb(dlg.window, &dlg);
  dlg.window->show();
}

#else

void partition_dialog()
{
  Msg::Error("Gmsh must be compiled with METIS support to partition meshes");
}

#endif
