/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse gmsh_yyparse
#define yylex   gmsh_yylex
#define yyerror gmsh_yyerror
#define yylval  gmsh_yylval
#define yychar  gmsh_yychar
#define yydebug gmsh_yydebug
#define yynerrs gmsh_yynerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tDOUBLE = 258,
     tSTRING = 259,
     tBIGSTR = 260,
     tEND = 261,
     tAFFECT = 262,
     tDOTS = 263,
     tSCOPE = 264,
     tPi = 265,
     tMPI_Rank = 266,
     tMPI_Size = 267,
     tEuclidian = 268,
     tCoordinates = 269,
     tTestLevel = 270,
     tExp = 271,
     tLog = 272,
     tLog10 = 273,
     tSqrt = 274,
     tSin = 275,
     tAsin = 276,
     tCos = 277,
     tAcos = 278,
     tTan = 279,
     tRand = 280,
     tAtan = 281,
     tAtan2 = 282,
     tSinh = 283,
     tCosh = 284,
     tTanh = 285,
     tFabs = 286,
     tFloor = 287,
     tCeil = 288,
     tRound = 289,
     tFmod = 290,
     tModulo = 291,
     tHypot = 292,
     tList = 293,
     tLinSpace = 294,
     tLogSpace = 295,
     tListFromFile = 296,
     tCatenary = 297,
     tPrintf = 298,
     tError = 299,
     tStr = 300,
     tSprintf = 301,
     tStrCat = 302,
     tStrPrefix = 303,
     tStrRelative = 304,
     tStrReplace = 305,
     tAbsolutePath = 306,
     tDirName = 307,
     tStrSub = 308,
     tStrLen = 309,
     tFind = 310,
     tStrFind = 311,
     tStrCmp = 312,
     tStrChoice = 313,
     tUpperCase = 314,
     tLowerCase = 315,
     tLowerCaseIn = 316,
     tTextAttributes = 317,
     tBoundingBox = 318,
     tDraw = 319,
     tSetChanged = 320,
     tToday = 321,
     tFixRelativePath = 322,
     tCurrentDirectory = 323,
     tSyncModel = 324,
     tNewModel = 325,
     tOnelabAction = 326,
     tOnelabRun = 327,
     tCpu = 328,
     tMemory = 329,
     tTotalMemory = 330,
     tCreateTopology = 331,
     tCreateTopologyNoHoles = 332,
     tDistanceFunction = 333,
     tDefineConstant = 334,
     tUndefineConstant = 335,
     tDefineNumber = 336,
     tDefineStruct = 337,
     tNameStruct = 338,
     tAppend = 339,
     tDefineString = 340,
     tSetNumber = 341,
     tSetString = 342,
     tPoint = 343,
     tCircle = 344,
     tEllipse = 345,
     tLine = 346,
     tSphere = 347,
     tPolarSphere = 348,
     tSurface = 349,
     tSpline = 350,
     tVolume = 351,
     tBlock = 352,
     tCylinder = 353,
     tCone = 354,
     tTorus = 355,
     tEllipsoid = 356,
     tQuadric = 357,
     tShapeFromFile = 358,
     tRectangle = 359,
     tDisk = 360,
     tWire = 361,
     tCharacteristic = 362,
     tLength = 363,
     tParametric = 364,
     tElliptic = 365,
     tRefineMesh = 366,
     tAdaptMesh = 367,
     tRelocateMesh = 368,
     tSetFactory = 369,
     tThruSections = 370,
     tWedge = 371,
     tFillet = 372,
     tChamfer = 373,
     tPlane = 374,
     tRuled = 375,
     tTransfinite = 376,
     tPhysical = 377,
     tCompound = 378,
     tPeriodic = 379,
     tUsing = 380,
     tPlugin = 381,
     tDegenerated = 382,
     tRecursive = 383,
     tRotate = 384,
     tTranslate = 385,
     tSymmetry = 386,
     tDilate = 387,
     tExtrude = 388,
     tLevelset = 389,
     tAffine = 390,
     tBooleanUnion = 391,
     tBooleanIntersection = 392,
     tBooleanDifference = 393,
     tBooleanSection = 394,
     tBooleanFragments = 395,
     tThickSolid = 396,
     tRecombine = 397,
     tSmoother = 398,
     tSplit = 399,
     tDelete = 400,
     tCoherence = 401,
     tIntersect = 402,
     tMeshAlgorithm = 403,
     tReverse = 404,
     tLayers = 405,
     tScaleLast = 406,
     tHole = 407,
     tAlias = 408,
     tAliasWithOptions = 409,
     tCopyOptions = 410,
     tQuadTriAddVerts = 411,
     tQuadTriNoNewVerts = 412,
     tRecombLaterals = 413,
     tTransfQuadTri = 414,
     tText2D = 415,
     tText3D = 416,
     tInterpolationScheme = 417,
     tTime = 418,
     tCombine = 419,
     tBSpline = 420,
     tBezier = 421,
     tNurbs = 422,
     tNurbsOrder = 423,
     tNurbsKnots = 424,
     tColor = 425,
     tColorTable = 426,
     tFor = 427,
     tIn = 428,
     tEndFor = 429,
     tIf = 430,
     tElseIf = 431,
     tElse = 432,
     tEndIf = 433,
     tExit = 434,
     tAbort = 435,
     tField = 436,
     tReturn = 437,
     tCall = 438,
     tSlide = 439,
     tMacro = 440,
     tShow = 441,
     tHide = 442,
     tGetValue = 443,
     tGetStringValue = 444,
     tGetEnv = 445,
     tGetString = 446,
     tGetNumber = 447,
     tUnique = 448,
     tHomology = 449,
     tCohomology = 450,
     tBetti = 451,
     tExists = 452,
     tFileExists = 453,
     tGMSH_MAJOR_VERSION = 454,
     tGMSH_MINOR_VERSION = 455,
     tGMSH_PATCH_VERSION = 456,
     tGmshExecutableName = 457,
     tSetPartition = 458,
     tNameToString = 459,
     tStringToName = 460,
     tAFFECTDIVIDE = 461,
     tAFFECTTIMES = 462,
     tAFFECTMINUS = 463,
     tAFFECTPLUS = 464,
     tOR = 465,
     tAND = 466,
     tNOTEQUAL = 467,
     tEQUAL = 468,
     tGREATEROREQUAL = 469,
     tLESSOREQUAL = 470,
     UNARYPREC = 471,
     tMINUSMINUS = 472,
     tPLUSPLUS = 473
   };
#endif
/* Tokens.  */
#define tDOUBLE 258
#define tSTRING 259
#define tBIGSTR 260
#define tEND 261
#define tAFFECT 262
#define tDOTS 263
#define tSCOPE 264
#define tPi 265
#define tMPI_Rank 266
#define tMPI_Size 267
#define tEuclidian 268
#define tCoordinates 269
#define tTestLevel 270
#define tExp 271
#define tLog 272
#define tLog10 273
#define tSqrt 274
#define tSin 275
#define tAsin 276
#define tCos 277
#define tAcos 278
#define tTan 279
#define tRand 280
#define tAtan 281
#define tAtan2 282
#define tSinh 283
#define tCosh 284
#define tTanh 285
#define tFabs 286
#define tFloor 287
#define tCeil 288
#define tRound 289
#define tFmod 290
#define tModulo 291
#define tHypot 292
#define tList 293
#define tLinSpace 294
#define tLogSpace 295
#define tListFromFile 296
#define tCatenary 297
#define tPrintf 298
#define tError 299
#define tStr 300
#define tSprintf 301
#define tStrCat 302
#define tStrPrefix 303
#define tStrRelative 304
#define tStrReplace 305
#define tAbsolutePath 306
#define tDirName 307
#define tStrSub 308
#define tStrLen 309
#define tFind 310
#define tStrFind 311
#define tStrCmp 312
#define tStrChoice 313
#define tUpperCase 314
#define tLowerCase 315
#define tLowerCaseIn 316
#define tTextAttributes 317
#define tBoundingBox 318
#define tDraw 319
#define tSetChanged 320
#define tToday 321
#define tFixRelativePath 322
#define tCurrentDirectory 323
#define tSyncModel 324
#define tNewModel 325
#define tOnelabAction 326
#define tOnelabRun 327
#define tCpu 328
#define tMemory 329
#define tTotalMemory 330
#define tCreateTopology 331
#define tCreateTopologyNoHoles 332
#define tDistanceFunction 333
#define tDefineConstant 334
#define tUndefineConstant 335
#define tDefineNumber 336
#define tDefineStruct 337
#define tNameStruct 338
#define tAppend 339
#define tDefineString 340
#define tSetNumber 341
#define tSetString 342
#define tPoint 343
#define tCircle 344
#define tEllipse 345
#define tLine 346
#define tSphere 347
#define tPolarSphere 348
#define tSurface 349
#define tSpline 350
#define tVolume 351
#define tBlock 352
#define tCylinder 353
#define tCone 354
#define tTorus 355
#define tEllipsoid 356
#define tQuadric 357
#define tShapeFromFile 358
#define tRectangle 359
#define tDisk 360
#define tWire 361
#define tCharacteristic 362
#define tLength 363
#define tParametric 364
#define tElliptic 365
#define tRefineMesh 366
#define tAdaptMesh 367
#define tRelocateMesh 368
#define tSetFactory 369
#define tThruSections 370
#define tWedge 371
#define tFillet 372
#define tChamfer 373
#define tPlane 374
#define tRuled 375
#define tTransfinite 376
#define tPhysical 377
#define tCompound 378
#define tPeriodic 379
#define tUsing 380
#define tPlugin 381
#define tDegenerated 382
#define tRecursive 383
#define tRotate 384
#define tTranslate 385
#define tSymmetry 386
#define tDilate 387
#define tExtrude 388
#define tLevelset 389
#define tAffine 390
#define tBooleanUnion 391
#define tBooleanIntersection 392
#define tBooleanDifference 393
#define tBooleanSection 394
#define tBooleanFragments 395
#define tThickSolid 396
#define tRecombine 397
#define tSmoother 398
#define tSplit 399
#define tDelete 400
#define tCoherence 401
#define tIntersect 402
#define tMeshAlgorithm 403
#define tReverse 404
#define tLayers 405
#define tScaleLast 406
#define tHole 407
#define tAlias 408
#define tAliasWithOptions 409
#define tCopyOptions 410
#define tQuadTriAddVerts 411
#define tQuadTriNoNewVerts 412
#define tRecombLaterals 413
#define tTransfQuadTri 414
#define tText2D 415
#define tText3D 416
#define tInterpolationScheme 417
#define tTime 418
#define tCombine 419
#define tBSpline 420
#define tBezier 421
#define tNurbs 422
#define tNurbsOrder 423
#define tNurbsKnots 424
#define tColor 425
#define tColorTable 426
#define tFor 427
#define tIn 428
#define tEndFor 429
#define tIf 430
#define tElseIf 431
#define tElse 432
#define tEndIf 433
#define tExit 434
#define tAbort 435
#define tField 436
#define tReturn 437
#define tCall 438
#define tSlide 439
#define tMacro 440
#define tShow 441
#define tHide 442
#define tGetValue 443
#define tGetStringValue 444
#define tGetEnv 445
#define tGetString 446
#define tGetNumber 447
#define tUnique 448
#define tHomology 449
#define tCohomology 450
#define tBetti 451
#define tExists 452
#define tFileExists 453
#define tGMSH_MAJOR_VERSION 454
#define tGMSH_MINOR_VERSION 455
#define tGMSH_PATCH_VERSION 456
#define tGmshExecutableName 457
#define tSetPartition 458
#define tNameToString 459
#define tStringToName 460
#define tAFFECTDIVIDE 461
#define tAFFECTTIMES 462
#define tAFFECTMINUS 463
#define tAFFECTPLUS 464
#define tOR 465
#define tAND 466
#define tNOTEQUAL 467
#define tEQUAL 468
#define tGREATEROREQUAL 469
#define tLESSOREQUAL 470
#define UNARYPREC 471
#define tMINUSMINUS 472
#define tPLUSPLUS 473




/* Copy the first part of user declarations.  */
#line 1 "Gmsh.y"

// Gmsh - Copyright (C) 1997-2017 C. Geuzaine, J.-F. Remacle
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <gmsh@onelab.info>.

#include <sstream>
#include <map>
#include <string.h>
#include <stdarg.h>
#include <time.h>
#include "GmshConfig.h"
#include "GmshMessage.h"
#include "fullMatrix.h"
#include "MallocUtils.h"
#include "ListUtils.h"
#include "TreeUtils.h"
#include "StringUtils.h"
#include "Numeric.h"
#include "Context.h"
#include "GModel.h"
#include "GModelIO_GEO.h"
#include "GModelIO_OCC.h"
#include "GeoDefines.h"
#include "Geo.h" // FIXME: remove once Extrusion has been refactored
#include "ExtrudeParams.h"
#include "Options.h"
#include "Parser.h"
#include "OpenFile.h"
#include "CommandLine.h"
#include "FunctionManager.h"
#include "ColorTable.h"
#include "OS.h"
#include "CreateFile.h"
#include "gmshSurface.h"
#include "gmshLevelset.h"
#include "fullMatrix.h"

#if defined(HAVE_MESH)
#include "Generator.h"
#include "Field.h"
#include "BackgroundMesh.h"
#include "HighOrder.h"
#endif

#if defined(HAVE_POST)
#include "PView.h"
#include "PViewDataList.h"
#endif

#if defined(HAVE_PLUGINS)
#include "PluginManager.h"
#endif

#if defined(HAVE_OPENGL)
#include "drawContext.h"
#endif

#if defined(HAVE_POPPLER)
#include "gmshPopplerWrapper.h"
#endif

#define MAX_RECUR_TESTS 100
#define MAX_RECUR_LOOPS 100

// global parser variables
std::string gmsh_yyname;
int gmsh_yyerrorstate = 0;
int gmsh_yyviewindex = 0;
std::map<std::string, gmsh_yysymbol> gmsh_yysymbols;
std::map<std::string, std::vector<std::string> > gmsh_yystringsymbols;

// static parser variables (accessible only in this file)
#if defined(HAVE_POST)
static PViewDataList *ViewData = 0;
#endif
static std::vector<double> ViewCoord;
static std::vector<double> *ViewValueList = 0;
static int *ViewNumList = 0;
static ExtrudeParams extr;
static gmshSurface *myGmshSurface = 0;
static int statusImbricatedTests[MAX_RECUR_TESTS];
static int ImbricatedLoop = 0, ImbricatedTest = 0;
static gmshfpos_t yyposImbricatedLoopsTab[MAX_RECUR_LOOPS];
static int yylinenoImbricatedLoopsTab[MAX_RECUR_LOOPS];
static double LoopControlVariablesTab[MAX_RECUR_LOOPS][3];
static std::string LoopControlVariablesNameTab[MAX_RECUR_LOOPS];
static std::map<std::string, std::vector<double> > floatOptions;
static std::map<std::string, std::vector<std::string> > charOptions;
static std::string factory;
static NameSpaces nameSpaces;
static std::string struct_name, struct_namespace;
static int flag_tSTRING_alloc = 0;

// parser functions defined at the end of this file
void yyerror(const char *s);
void yymsg(int level, const char *fmt, ...);
char *strsave(char *ptr);
void skip(const char *skip, const char *until);
void skipTest(const char *skip, const char *until,
              const char *until2, int l_until2_sub, int *type_until2);
void assignVariable(const std::string &name, int index, int assignType,
                    double value);
void assignVariables(const std::string &name, List_T *indices, int assignType,
                     List_T *values);
void incrementVariable(const std::string &name, int index, double value);
int printListOfDouble(char *format, List_T *list, char *buffer);
fullMatrix<double> ListOfListOfDouble2Matrix(List_T *list);
void ListOfDouble2Vector(List_T *list, std::vector<int> &v);
void ListOfDouble2Vector(List_T *list, std::vector<double> &v);
void ListOfShapes2Vectors(List_T *list, std::vector<int> v[4]);
void Vectors2ListOfShapes(std::vector<int> tags[4], List_T *list);
void addPeriodicEdge(int, int, const std::vector<double>&);
void addPeriodicFace(int, int, const std::map<int, int>&);
void addPeriodicFace(int, int, const std::vector<double>&);
void computeAffineTransformation(SPoint3&, SPoint3&, double, SPoint3&,
                                 std::vector<double>&);
void addEmbedded(int dim, std::vector<int> tags, int dim2, int tag2);
void getAllElementaryTags(int dim, List_T *in);
void getAllPhysicalTags(int dim, List_T *in);
void getElementaryTagsForPhysicalGroups(int dim, List_T *in, List_T *out);
void getElementaryTagsInBoundingBox(int dim, double x1, double y1, double z1,
                                    double x2, double y2, double z2, List_T *out);
void setVisibility(int dim, int visible, bool recursive);
void setVisibility(std::vector<int> tags[4], int visible, bool recursive);
void setColor(std::vector<int> tags[4], unsigned int val, bool recursive);

double treat_Struct_FullName_dot_tSTRING_Float(char* c1, char* c2, char* c3);
char* treat_Struct_FullName_dot_tSTRING_String(char* c1, char* c2, char* c3);

struct doubleXstring{
  double d;
  char *s;
};



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 138 "Gmsh.y"
{
  char *c;
  int i;
  unsigned int u;
  double d;
  double v[5];
  Shape s;
  List_T *l;
  struct TwoChar c2;
}
/* Line 193 of yacc.c.  */
#line 688 "Gmsh.tab.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 701 "Gmsh.tab.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   13413

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  239
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  553
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2058

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   473

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   224,     2,   236,     2,   223,     2,     2,
     229,   230,   221,   219,   238,   220,   235,   222,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     215,     2,   216,   210,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   231,     2,   232,   228,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   233,     2,   234,   237,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   211,   212,   213,   214,   217,
     218,   225,   226,   227
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    14,    16,    18,
      24,    26,    28,    30,    32,    34,    36,    38,    40,    42,
      44,    46,    48,    50,    52,    54,    56,    58,    61,    67,
      73,    81,    89,    97,   107,   114,   121,   128,   137,   138,
     141,   144,   147,   150,   153,   155,   159,   161,   165,   166,
     167,   178,   180,   184,   185,   199,   201,   205,   206,   222,
     231,   246,   247,   254,   256,   258,   260,   262,   264,   266,
     268,   270,   272,   274,   276,   282,   288,   291,   299,   307,
     312,   316,   323,   333,   341,   348,   356,   363,   368,   377,
     387,   397,   404,   414,   421,   431,   437,   446,   455,   467,
     474,   484,   490,   498,   508,   518,   530,   538,   548,   558,
     559,   561,   562,   566,   572,   573,   583,   584,   596,   602,
     603,   613,   614,   618,   622,   628,   634,   635,   638,   642,
     648,   652,   653,   656,   660,   664,   668,   674,   676,   678,
     682,   684,   686,   690,   692,   694,   698,   700,   702,   706,
     707,   713,   714,   717,   725,   733,   741,   750,   759,   767,
     775,   787,   796,   804,   813,   822,   831,   841,   845,   850,
     861,   869,   877,   885,   893,   901,   909,   917,   925,   933,
     941,   950,   963,   972,   980,   988,   997,  1006,  1015,  1024,
    1033,  1042,  1048,  1060,  1066,  1076,  1086,  1091,  1101,  1111,
    1113,  1115,  1116,  1119,  1126,  1133,  1140,  1147,  1156,  1167,
    1182,  1199,  1212,  1227,  1242,  1257,  1272,  1281,  1290,  1297,
    1302,  1309,  1316,  1320,  1325,  1331,  1338,  1344,  1348,  1352,
    1357,  1363,  1368,  1374,  1378,  1384,  1392,  1400,  1404,  1412,
    1416,  1419,  1422,  1425,  1428,  1431,  1447,  1450,  1453,  1456,
    1459,  1462,  1479,  1491,  1498,  1507,  1516,  1527,  1529,  1532,
    1535,  1537,  1541,  1545,  1550,  1555,  1557,  1559,  1565,  1577,
    1591,  1592,  1600,  1601,  1615,  1616,  1632,  1633,  1640,  1650,
    1653,  1657,  1668,  1670,  1673,  1679,  1687,  1690,  1693,  1697,
    1700,  1704,  1707,  1711,  1721,  1728,  1730,  1732,  1734,  1736,
    1738,  1739,  1742,  1746,  1756,  1761,  1776,  1777,  1781,  1782,
    1784,  1785,  1788,  1789,  1792,  1793,  1796,  1803,  1811,  1818,
    1824,  1828,  1837,  1843,  1848,  1855,  1867,  1879,  1898,  1917,
    1930,  1943,  1956,  1967,  1978,  1989,  2000,  2011,  2016,  2021,
    2026,  2031,  2036,  2041,  2046,  2051,  2056,  2059,  2063,  2070,
    2072,  2074,  2076,  2079,  2085,  2093,  2104,  2106,  2110,  2113,
    2116,  2119,  2123,  2127,  2131,  2135,  2139,  2143,  2147,  2151,
    2155,  2159,  2163,  2167,  2171,  2175,  2181,  2186,  2191,  2196,
    2201,  2206,  2211,  2216,  2221,  2226,  2231,  2238,  2243,  2248,
    2253,  2258,  2263,  2268,  2273,  2280,  2287,  2294,  2299,  2301,
    2303,  2305,  2307,  2309,  2311,  2313,  2315,  2317,  2319,  2321,
    2322,  2329,  2331,  2336,  2343,  2345,  2350,  2355,  2360,  2365,
    2370,  2373,  2379,  2385,  2389,  2395,  2402,  2407,  2415,  2422,
    2429,  2436,  2441,  2448,  2453,  2454,  2463,  2465,  2469,  2471,
    2473,  2476,  2477,  2481,  2483,  2486,  2489,  2493,  2497,  2509,
    2519,  2527,  2535,  2537,  2541,  2543,  2545,  2548,  2552,  2557,
    2563,  2565,  2567,  2570,  2574,  2578,  2584,  2589,  2592,  2595,
    2598,  2601,  2605,  2609,  2613,  2617,  2634,  2651,  2668,  2685,
    2687,  2689,  2691,  2695,  2700,  2705,  2710,  2717,  2724,  2733,
    2742,  2747,  2762,  2767,  2769,  2771,  2775,  2779,  2789,  2797,
    2799,  2805,  2809,  2816,  2818,  2822,  2824,  2826,  2831,  2836,
    2840,  2846,  2853,  2859,  2865,  2871,  2877,  2879,  2884,  2886,
    2888,  2890,  2895,  2902,  2907,  2914,  2919,  2924,  2929,  2938,
    2943,  2948,  2953,  2958,  2967,  2976,  2983,  2988,  2995,  3000,
    3002,  3007,  3012,  3013,  3020,  3025,  3028,  3033,  3035,  3039,
    3045,  3051,  3053,  3055
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     240,     0,    -1,   241,    -1,     1,     6,    -1,    -1,   241,
     242,    -1,   244,    -1,   245,    -1,   265,    -1,   114,   229,
     334,   230,     6,    -1,   283,    -1,   284,    -1,   288,    -1,
     289,    -1,   290,    -1,   291,    -1,   295,    -1,   304,    -1,
     305,    -1,   311,    -1,   312,    -1,   294,    -1,   293,    -1,
     292,    -1,   287,    -1,   314,    -1,   216,    -1,   216,   216,
      -1,    43,   229,   334,   230,     6,    -1,    44,   229,   334,
     230,     6,    -1,    43,   229,   334,   230,   243,   334,     6,
      -1,    43,   229,   334,   238,   330,   230,     6,    -1,    44,
     229,   334,   238,   330,   230,     6,    -1,    43,   229,   334,
     238,   330,   230,   243,   334,     6,    -1,   340,   334,   233,
     246,   234,     6,    -1,   153,     4,   231,   315,   232,     6,
      -1,   154,     4,   231,   315,   232,     6,    -1,   155,     4,
     231,   315,   238,   315,   232,     6,    -1,    -1,   246,   249,
      -1,   246,   253,    -1,   246,   256,    -1,   246,   258,    -1,
     246,   259,    -1,   315,    -1,   247,   238,   315,    -1,   315,
      -1,   248,   238,   315,    -1,    -1,    -1,     4,   250,   229,
     247,   230,   251,   233,   248,   234,     6,    -1,   334,    -1,
     252,   238,   334,    -1,    -1,   160,   229,   315,   238,   315,
     238,   315,   230,   254,   233,   252,   234,     6,    -1,   334,
      -1,   255,   238,   334,    -1,    -1,   161,   229,   315,   238,
     315,   238,   315,   238,   315,   230,   257,   233,   255,   234,
       6,    -1,   162,   233,   326,   234,   233,   326,   234,     6,
      -1,   162,   233,   326,   234,   233,   326,   234,   233,   326,
     234,   233,   326,   234,     6,    -1,    -1,   163,   260,   233,
     248,   234,     6,    -1,     7,    -1,   209,    -1,   208,    -1,
     207,    -1,   206,    -1,   227,    -1,   226,    -1,   229,    -1,
     231,    -1,   230,    -1,   232,    -1,    79,   231,   267,   232,
       6,    -1,    80,   231,   271,   232,     6,    -1,   318,     6,
      -1,    86,   263,   335,   238,   315,   264,     6,    -1,    87,
     263,   340,   238,   335,   264,     6,    -1,   340,   261,   327,
       6,    -1,   340,   262,     6,    -1,   340,   263,   264,   261,
     327,     6,    -1,   340,   263,   233,   330,   234,   264,   261,
     327,     6,    -1,   340,   231,   315,   232,   261,   315,     6,
      -1,   340,   231,   315,   232,   262,     6,    -1,   340,   229,
     315,   230,   261,   315,     6,    -1,   340,   229,   315,   230,
     262,     6,    -1,   340,     7,   335,     6,    -1,   340,   263,
     264,     7,    45,   263,   264,     6,    -1,   340,   263,   264,
       7,    45,   263,   338,   264,     6,    -1,   340,   263,   264,
     209,    45,   263,   338,   264,     6,    -1,   340,   235,     4,
       7,   335,     6,    -1,   340,   231,   315,   232,   235,     4,
       7,   335,     6,    -1,   340,   235,     4,   261,   315,     6,
      -1,   340,   231,   315,   232,   235,     4,   261,   315,     6,
      -1,   340,   235,     4,   262,     6,    -1,   340,   231,   315,
     232,   235,     4,   262,     6,    -1,   340,   235,   170,   235,
       4,     7,   331,     6,    -1,   340,   231,   315,   232,   235,
     170,   235,     4,     7,   331,     6,    -1,   340,   235,   171,
       7,   332,     6,    -1,   340,   231,   315,   232,   235,   171,
       7,   332,     6,    -1,   340,   181,     7,   315,     6,    -1,
     181,   231,   315,   232,     7,     4,     6,    -1,   181,   231,
     315,   232,   235,     4,     7,   315,     6,    -1,   181,   231,
     315,   232,   235,     4,     7,   335,     6,    -1,   181,   231,
     315,   232,   235,     4,     7,   233,   330,   234,     6,    -1,
     181,   231,   315,   232,   235,     4,     6,    -1,   126,   229,
       4,   230,   235,     4,     7,   315,     6,    -1,   126,   229,
       4,   230,   235,     4,     7,   335,     6,    -1,    -1,   238,
      -1,    -1,   267,   266,   340,    -1,   267,   266,   340,     7,
     315,    -1,    -1,   267,   266,   340,     7,   233,   327,   268,
     273,   234,    -1,    -1,   267,   266,   340,   263,   264,     7,
     233,   327,   269,   273,   234,    -1,   267,   266,   340,     7,
     335,    -1,    -1,   267,   266,   340,     7,   233,   335,   270,
     275,   234,    -1,    -1,   271,   266,   334,    -1,   315,     7,
     335,    -1,   272,   238,   315,     7,   335,    -1,   329,     7,
     340,   229,   230,    -1,    -1,   273,   274,    -1,   238,     4,
     327,    -1,   238,     4,   233,   272,   234,    -1,   238,     4,
     335,    -1,    -1,   275,   276,    -1,   238,     4,   315,    -1,
     238,     4,   335,    -1,   238,   185,   335,    -1,   238,     4,
     233,   338,   234,    -1,   315,    -1,   335,    -1,   335,   238,
     315,    -1,   315,    -1,   335,    -1,   335,   238,   315,    -1,
     315,    -1,   335,    -1,   335,   238,   315,    -1,   315,    -1,
     335,    -1,   335,   238,   315,    -1,    -1,   173,    92,   233,
     315,   234,    -1,    -1,   119,   324,    -1,    88,   229,   315,
     230,     7,   324,     6,    -1,    91,   229,   315,   230,     7,
     327,     6,    -1,    95,   229,   315,   230,     7,   327,     6,
      -1,    89,   229,   315,   230,     7,   327,   282,     6,    -1,
      90,   229,   315,   230,     7,   327,   282,     6,    -1,   165,
     229,   315,   230,     7,   327,     6,    -1,   166,   229,   315,
     230,     7,   327,     6,    -1,   167,   229,   315,   230,     7,
     327,   169,   327,   168,   315,     6,    -1,   123,    91,   229,
     315,   230,     7,   327,     6,    -1,   106,   229,   315,   230,
       7,   327,     6,    -1,    91,     4,   229,   315,   230,     7,
     327,     6,    -1,   119,    94,   229,   315,   230,     7,   327,
       6,    -1,    94,   229,   315,   230,     7,   327,   281,     6,
      -1,   120,    94,   229,   315,   230,     7,   327,   281,     6,
      -1,    13,    14,     6,    -1,    14,    94,   315,     6,    -1,
     109,    94,   229,   315,   230,     7,     5,     5,     5,     6,
      -1,    92,   229,   315,   230,     7,   327,     6,    -1,    93,
     229,   315,   230,     7,   327,     6,    -1,    97,   229,   315,
     230,     7,   327,     6,    -1,   100,   229,   315,   230,     7,
     327,     6,    -1,   104,   229,   315,   230,     7,   327,     6,
      -1,   105,   229,   315,   230,     7,   327,     6,    -1,    98,
     229,   315,   230,     7,   327,     6,    -1,    99,   229,   315,
     230,     7,   327,     6,    -1,   116,   229,   315,   230,     7,
     327,     6,    -1,   141,   229,   315,   230,     7,   327,     6,
      -1,   123,    94,   229,   315,   230,     7,   327,     6,    -1,
     123,    94,   229,   315,   230,     7,   327,     4,   233,   326,
     234,     6,    -1,    94,     4,   229,   315,   230,     7,   327,
       6,    -1,    96,   229,   315,   230,     7,   327,     6,    -1,
     115,   229,   315,   230,     7,   327,     6,    -1,   120,   115,
     229,   315,   230,     7,   327,     6,    -1,   123,    96,   229,
     315,   230,     7,   327,     6,    -1,   122,    88,   229,   277,
     230,   261,   327,     6,    -1,   122,    91,   229,   278,   230,
     261,   327,     6,    -1,   122,    94,   229,   279,   230,   261,
     327,     6,    -1,   122,    96,   229,   280,   230,   261,   327,
       6,    -1,   130,   324,   233,   285,   234,    -1,   129,   233,
     324,   238,   324,   238,   315,   234,   233,   285,   234,    -1,
     131,   324,   233,   285,   234,    -1,   132,   233,   324,   238,
     315,   234,   233,   285,   234,    -1,   132,   233,   324,   238,
     324,   234,   233,   285,   234,    -1,   340,   233,   285,   234,
      -1,   147,    91,   233,   330,   234,    94,   233,   315,   234,
      -1,   144,    91,   229,   315,   230,   233,   330,   234,     6,
      -1,   286,    -1,   284,    -1,    -1,   286,   283,    -1,   286,
      88,   233,   330,   234,     6,    -1,   286,    91,   233,   330,
     234,     6,    -1,   286,    94,   233,   330,   234,     6,    -1,
     286,    96,   233,   330,   234,     6,    -1,   134,   119,   229,
     315,   230,     7,   327,     6,    -1,   134,    88,   229,   315,
     230,     7,   233,   326,   234,     6,    -1,   134,   119,   229,
     315,   230,     7,   233,   324,   238,   324,   238,   330,   234,
       6,    -1,   134,   119,   229,   315,   230,     7,   233,   324,
     238,   324,   238,   324,   238,   330,   234,     6,    -1,   134,
      92,   229,   315,   230,     7,   233,   324,   238,   330,   234,
       6,    -1,   134,    98,   229,   315,   230,     7,   233,   324,
     238,   324,   238,   330,   234,     6,    -1,   134,    99,   229,
     315,   230,     7,   233,   324,   238,   324,   238,   330,   234,
       6,    -1,   134,   101,   229,   315,   230,     7,   233,   324,
     238,   324,   238,   330,   234,     6,    -1,   134,   102,   229,
     315,   230,     7,   233,   324,   238,   324,   238,   330,   234,
       6,    -1,   134,     4,   229,   315,   230,     7,   327,     6,
      -1,   134,     4,   229,   315,   230,     7,     5,     6,    -1,
     134,     4,   233,   315,   234,     6,    -1,   145,   233,   286,
     234,    -1,   145,   181,   231,   315,   232,     6,    -1,   145,
       4,   231,   315,   232,     6,    -1,   145,   340,     6,    -1,
     145,     4,     4,     6,    -1,   170,   331,   233,   286,   234,
      -1,   128,   170,   331,   233,   286,   234,    -1,   203,   315,
     233,   286,   234,    -1,   186,     5,     6,    -1,   187,     5,
       6,    -1,   186,   233,   286,   234,    -1,   128,   186,   233,
     286,   234,    -1,   187,   233,   286,   234,    -1,   128,   187,
     233,   286,   234,    -1,   340,   335,     6,    -1,    72,   229,
     338,   230,     6,    -1,   340,   340,   231,   315,   232,   334,
       6,    -1,   340,   340,   340,   231,   315,   232,     6,    -1,
     340,   315,     6,    -1,   126,   229,     4,   230,   235,     4,
       6,    -1,   164,     4,     6,    -1,   179,     6,    -1,   180,
       6,    -1,    69,     6,    -1,    70,     6,    -1,    63,     6,
      -1,    63,   233,   315,   238,   315,   238,   315,   238,   315,
     238,   315,   238,   315,   234,     6,    -1,    64,     6,    -1,
      65,     6,    -1,    76,     6,    -1,    77,     6,    -1,   111,
       6,    -1,   112,   233,   330,   234,   233,   330,   234,   233,
     326,   234,   233,   315,   238,   315,   234,     6,    -1,   184,
     229,   233,   330,   234,   238,   335,   238,   335,   230,     6,
      -1,   172,   229,   315,     8,   315,   230,    -1,   172,   229,
     315,     8,   315,     8,   315,   230,    -1,   172,     4,   173,
     233,   315,     8,   315,   234,    -1,   172,     4,   173,   233,
     315,     8,   315,     8,   315,   234,    -1,   174,    -1,   185,
       4,    -1,   185,   335,    -1,   182,    -1,   183,   340,     6,
      -1,   183,   335,     6,    -1,   175,   229,   315,   230,    -1,
     176,   229,   315,   230,    -1,   177,    -1,   178,    -1,   133,
     324,   233,   286,   234,    -1,   133,   233,   324,   238,   324,
     238,   315,   234,   233,   286,   234,    -1,   133,   233,   324,
     238,   324,   238,   324,   238,   315,   234,   233,   286,   234,
      -1,    -1,   133,   324,   233,   286,   296,   300,   234,    -1,
      -1,   133,   233,   324,   238,   324,   238,   315,   234,   233,
     286,   297,   300,   234,    -1,    -1,   133,   233,   324,   238,
     324,   238,   324,   238,   315,   234,   233,   286,   298,   300,
     234,    -1,    -1,   133,   233,   286,   299,   300,   234,    -1,
     133,   233,   286,   234,   125,   106,   233,   315,   234,    -1,
     115,   327,    -1,   120,   115,   327,    -1,   117,   233,   330,
     234,   233,   330,   234,   233,   315,   234,    -1,   301,    -1,
     300,   301,    -1,   150,   233,   315,   234,     6,    -1,   150,
     233,   327,   238,   327,   234,     6,    -1,   151,     6,    -1,
     142,     6,    -1,   142,   315,     6,    -1,   156,     6,    -1,
     156,   158,     6,    -1,   157,     6,    -1,   157,   158,     6,
      -1,   152,   229,   315,   230,     7,   327,   125,   315,     6,
      -1,   125,     4,   231,   315,   232,     6,    -1,   136,    -1,
     137,    -1,   138,    -1,   139,    -1,   140,    -1,    -1,   145,
       6,    -1,   145,   315,     6,    -1,   302,   233,   286,   303,
     234,   233,   286,   303,   234,    -1,   103,   229,   334,   230,
      -1,   302,   229,   315,   230,     7,   233,   286,   303,   234,
     233,   286,   303,   234,     6,    -1,    -1,   125,     4,   315,
      -1,    -1,     4,    -1,    -1,     7,   327,    -1,    -1,     7,
     315,    -1,    -1,   135,   327,    -1,   107,   108,   327,     7,
     315,     6,    -1,   121,    91,   328,     7,   315,   306,     6,
      -1,   121,    94,   328,   308,   307,     6,    -1,   121,    96,
     328,   308,     6,    -1,   159,   328,     6,    -1,   148,    94,
     233,   330,   234,     7,   315,     6,    -1,   142,    94,   328,
     309,     6,    -1,   142,    96,   328,     6,    -1,   143,    94,
     328,     7,   315,     6,    -1,   124,    91,   233,   330,   234,
       7,   233,   330,   234,   310,     6,    -1,   124,    94,   233,
     330,   234,     7,   233,   330,   234,   310,     6,    -1,   124,
      91,   233,   330,   234,     7,   233,   330,   234,   129,   233,
     324,   238,   324,   238,   315,   234,     6,    -1,   124,    94,
     233,   330,   234,     7,   233,   330,   234,   129,   233,   324,
     238,   324,   238,   315,   234,     6,    -1,   124,    91,   233,
     330,   234,     7,   233,   330,   234,   130,   324,     6,    -1,
     124,    94,   233,   330,   234,     7,   233,   330,   234,   130,
     324,     6,    -1,   124,    94,   315,   233,   330,   234,     7,
     315,   233,   330,   234,     6,    -1,    88,   233,   330,   234,
     173,    94,   233,   315,   234,     6,    -1,    91,   233,   330,
     234,   173,    94,   233,   315,   234,     6,    -1,    88,   233,
     330,   234,   173,    96,   233,   315,   234,     6,    -1,    91,
     233,   330,   234,   173,    96,   233,   315,   234,     6,    -1,
      94,   233,   330,   234,   173,    96,   233,   315,   234,     6,
      -1,   149,    94,   328,     6,    -1,   149,    91,   328,     6,
      -1,   113,    88,   328,     6,    -1,   113,    91,   328,     6,
      -1,   113,    94,   328,     6,    -1,   127,    91,   327,     6,
      -1,   123,    91,   327,     6,    -1,   123,    94,   327,     6,
      -1,   123,    96,   327,     6,    -1,   146,     6,    -1,   146,
       4,     6,    -1,   146,    88,   233,   330,   234,     6,    -1,
     194,    -1,   195,    -1,   196,    -1,   313,     6,    -1,   313,
     233,   327,   234,     6,    -1,   313,   233,   327,   238,   327,
     234,     6,    -1,   313,   229,   327,   230,   233,   327,   238,
     327,   234,     6,    -1,   316,    -1,   229,   315,   230,    -1,
     220,   315,    -1,   219,   315,    -1,   224,   315,    -1,   315,
     220,   315,    -1,   315,   219,   315,    -1,   315,   221,   315,
      -1,   315,   222,   315,    -1,   315,   223,   315,    -1,   315,
     228,   315,    -1,   315,   215,   315,    -1,   315,   216,   315,
      -1,   315,   218,   315,    -1,   315,   217,   315,    -1,   315,
     214,   315,    -1,   315,   213,   315,    -1,   315,   212,   315,
      -1,   315,   211,   315,    -1,   315,   210,   315,     8,   315,
      -1,    16,   263,   315,   264,    -1,    17,   263,   315,   264,
      -1,    18,   263,   315,   264,    -1,    19,   263,   315,   264,
      -1,    20,   263,   315,   264,    -1,    21,   263,   315,   264,
      -1,    22,   263,   315,   264,    -1,    23,   263,   315,   264,
      -1,    24,   263,   315,   264,    -1,    26,   263,   315,   264,
      -1,    27,   263,   315,   238,   315,   264,    -1,    28,   263,
     315,   264,    -1,    29,   263,   315,   264,    -1,    30,   263,
     315,   264,    -1,    31,   263,   315,   264,    -1,    32,   263,
     315,   264,    -1,    33,   263,   315,   264,    -1,    34,   263,
     315,   264,    -1,    35,   263,   315,   238,   315,   264,    -1,
      36,   263,   315,   238,   315,   264,    -1,    37,   263,   315,
     238,   315,   264,    -1,    25,   263,   315,   264,    -1,     3,
      -1,    10,    -1,    15,    -1,    11,    -1,    12,    -1,   199,
      -1,   200,    -1,   201,    -1,    73,    -1,    74,    -1,    75,
      -1,    -1,    81,   263,   315,   317,   273,   264,    -1,   318,
      -1,   192,   263,   334,   264,    -1,   192,   263,   334,   238,
     315,   264,    -1,   320,    -1,   340,   231,   315,   232,    -1,
     340,   229,   315,   230,    -1,   197,   229,   340,   230,    -1,
     198,   229,   335,   230,    -1,   236,   340,   263,   264,    -1,
     340,   262,    -1,   340,   231,   315,   232,   262,    -1,   340,
     229,   315,   230,   262,    -1,   340,   235,   321,    -1,   340,
       9,   340,   235,   321,    -1,   340,   231,   315,   232,   235,
       4,    -1,   340,   235,     4,   262,    -1,   340,   231,   315,
     232,   235,     4,   262,    -1,   188,   229,   334,   238,   315,
     230,    -1,    55,   229,   327,   238,   327,   230,    -1,    56,
     263,   334,   238,   334,   264,    -1,    54,   263,   334,   264,
      -1,    57,   263,   334,   238,   334,   264,    -1,    62,   229,
     338,   230,    -1,    -1,    82,   320,   323,   319,   231,   315,
     273,   232,    -1,   340,    -1,   340,     9,   340,    -1,     4,
      -1,    84,    -1,    84,   315,    -1,    -1,   229,   322,   230,
      -1,   325,    -1,   220,   324,    -1,   219,   324,    -1,   324,
     220,   324,    -1,   324,   219,   324,    -1,   233,   315,   238,
     315,   238,   315,   238,   315,   238,   315,   234,    -1,   233,
     315,   238,   315,   238,   315,   238,   315,   234,    -1,   233,
     315,   238,   315,   238,   315,   234,    -1,   229,   315,   238,
     315,   238,   315,   230,    -1,   327,    -1,   326,   238,   327,
      -1,   315,    -1,   329,    -1,   233,   234,    -1,   233,   330,
     234,    -1,   220,   233,   330,   234,    -1,   315,   221,   233,
     330,   234,    -1,   327,    -1,     5,    -1,   220,   329,    -1,
     315,   221,   329,    -1,   315,     8,   315,    -1,   315,     8,
     315,     8,   315,    -1,    88,   233,   315,   234,    -1,    88,
       5,    -1,    91,     5,    -1,    94,     5,    -1,    96,     5,
      -1,   122,    88,   328,    -1,   122,    91,   328,    -1,   122,
      94,   328,    -1,   122,    96,   328,    -1,    88,   173,    63,
     233,   315,   238,   315,   238,   315,   238,   315,   238,   315,
     238,   315,   234,    -1,    91,   173,    63,   233,   315,   238,
     315,   238,   315,   238,   315,   238,   315,   238,   315,   234,
      -1,    94,   173,    63,   233,   315,   238,   315,   238,   315,
     238,   315,   238,   315,   238,   315,   234,    -1,    96,   173,
      63,   233,   315,   238,   315,   238,   315,   238,   315,   238,
     315,   238,   315,   234,    -1,   284,    -1,   295,    -1,   304,
      -1,   340,   263,   264,    -1,    38,   231,   340,   232,    -1,
      38,   231,   329,   232,    -1,    38,   229,   329,   230,    -1,
      38,   263,   233,   330,   234,   264,    -1,   340,   263,   233,
     330,   234,   264,    -1,    39,   263,   315,   238,   315,   238,
     315,   264,    -1,    40,   263,   315,   238,   315,   238,   315,
     264,    -1,    41,   263,   334,   264,    -1,    42,   263,   315,
     238,   315,   238,   315,   238,   315,   238,   315,   238,   315,
     264,    -1,   193,   263,   329,   264,    -1,   315,    -1,   329,
      -1,   330,   238,   315,    -1,   330,   238,   329,    -1,   233,
     315,   238,   315,   238,   315,   238,   315,   234,    -1,   233,
     315,   238,   315,   238,   315,   234,    -1,   340,    -1,     4,
     235,   170,   235,     4,    -1,   233,   333,   234,    -1,   340,
     231,   315,   232,   235,   171,    -1,   331,    -1,   333,   238,
     331,    -1,   335,    -1,   340,    -1,   340,   231,   315,   232,
      -1,   340,   229,   315,   230,    -1,   340,   235,   321,    -1,
     340,     9,   340,   235,   321,    -1,   340,   231,   315,   232,
     235,     4,    -1,   122,    88,   233,   315,   234,    -1,   122,
      91,   233,   315,   234,    -1,   122,    94,   233,   315,   234,
      -1,   122,    96,   233,   315,   234,    -1,     5,    -1,   204,
     231,   340,   232,    -1,    66,    -1,   202,    -1,    71,    -1,
     190,   229,   334,   230,    -1,   189,   229,   334,   238,   334,
     230,    -1,   191,   263,   334,   264,    -1,   191,   263,   334,
     238,   334,   264,    -1,    47,   263,   338,   264,    -1,    48,
     229,   334,   230,    -1,    49,   229,   334,   230,    -1,    50,
     229,   334,   238,   334,   238,   334,   230,    -1,    45,   263,
     338,   264,    -1,    59,   263,   334,   264,    -1,    60,   263,
     334,   264,    -1,    61,   263,   334,   264,    -1,    58,   263,
     315,   238,   334,   238,   334,   264,    -1,    53,   263,   334,
     238,   315,   238,   315,   264,    -1,    53,   263,   334,   238,
     315,   264,    -1,    46,   263,   334,   264,    -1,    46,   263,
     334,   238,   330,   264,    -1,    67,   263,   334,   264,    -1,
      68,    -1,    52,   263,   334,   264,    -1,    51,   263,   334,
     264,    -1,    -1,    85,   263,   335,   336,   275,   264,    -1,
      83,   263,   337,   264,    -1,   236,   315,    -1,   340,     9,
     236,   315,    -1,   334,    -1,   338,   238,   334,    -1,     4,
     237,   233,   315,   234,    -1,   339,   237,   233,   315,   234,
      -1,     4,    -1,   339,    -1,   205,   231,   334,   232,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   237,   237,   238,   243,   245,   249,   250,   251,   252,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   288,   292,   299,   304,
     309,   323,   336,   349,   377,   391,   404,   417,   436,   441,
     442,   443,   444,   445,   449,   451,   456,   458,   464,   568,
     463,   586,   593,   604,   603,   621,   628,   639,   638,   655,
     672,   695,   694,   708,   709,   710,   711,   712,   716,   717,
     723,   723,   724,   724,   730,   731,   732,   733,   738,   744,
     806,   822,   852,   862,   867,   875,   880,   888,   897,   902,
     914,   931,   938,   947,   966,   985,   995,  1007,  1013,  1021,
    1042,  1065,  1076,  1084,  1106,  1129,  1167,  1188,  1200,  1214,
    1214,  1216,  1218,  1227,  1237,  1236,  1257,  1256,  1274,  1284,
    1283,  1297,  1299,  1307,  1313,  1318,  1344,  1345,  1349,  1360,
    1375,  1385,  1386,  1391,  1399,  1408,  1416,  1434,  1438,  1445,
    1453,  1457,  1464,  1472,  1476,  1483,  1491,  1495,  1502,  1511,
    1514,  1521,  1524,  1531,  1552,  1566,  1580,  1615,  1653,  1667,
    1681,  1701,  1710,  1724,  1739,  1753,  1772,  1782,  1788,  1794,
    1801,  1830,  1845,  1865,  1886,  1907,  1928,  1950,  1972,  1993,
    2016,  2025,  2046,  2061,  2075,  2090,  2105,  2114,  2124,  2134,
    2144,  2159,  2170,  2183,  2195,  2207,  2219,  2256,  2267,  2283,
    2284,  2289,  2292,  2296,  2307,  2318,  2329,  2345,  2364,  2385,
    2400,  2416,  2434,  2485,  2506,  2528,  2551,  2656,  2672,  2707,
    2721,  2727,  2742,  2770,  2787,  2793,  2804,  2818,  2824,  2830,
    2836,  2842,  2848,  2859,  2932,  2950,  2967,  2982,  3015,  3027,
    3051,  3055,  3060,  3067,  3072,  3082,  3087,  3093,  3101,  3105,
    3109,  3118,  3182,  3198,  3215,  3232,  3254,  3276,  3311,  3319,
    3327,  3333,  3340,  3347,  3367,  3393,  3405,  3417,  3433,  3449,
    3458,  3457,  3472,  3471,  3486,  3485,  3500,  3499,  3512,  3525,
    3539,  3553,  3572,  3575,  3581,  3593,  3613,  3617,  3621,  3625,
    3629,  3633,  3637,  3641,  3650,  3663,  3664,  3665,  3666,  3667,
    3671,  3672,  3673,  3676,  3694,  3711,  3728,  3731,  3747,  3750,
    3767,  3770,  3776,  3779,  3786,  3789,  3796,  3813,  3854,  3898,
    3937,  3962,  3971,  4001,  4027,  4053,  4085,  4112,  4138,  4164,
    4190,  4216,  4238,  4244,  4250,  4256,  4262,  4268,  4294,  4320,
    4337,  4354,  4371,  4383,  4389,  4395,  4407,  4411,  4421,  4432,
    4433,  4434,  4438,  4444,  4456,  4474,  4502,  4503,  4504,  4505,
    4506,  4507,  4508,  4509,  4510,  4517,  4518,  4519,  4520,  4521,
    4522,  4523,  4524,  4525,  4526,  4527,  4528,  4529,  4530,  4531,
    4532,  4533,  4534,  4535,  4536,  4537,  4538,  4539,  4540,  4541,
    4542,  4543,  4544,  4545,  4546,  4547,  4548,  4549,  4558,  4559,
    4560,  4561,  4562,  4563,  4564,  4565,  4566,  4567,  4568,  4573,
    4572,  4580,  4582,  4587,  4593,  4617,  4635,  4653,  4658,  4664,
    4679,  4698,  4719,  4752,  4776,  4779,  4785,  4796,  4806,  4811,
    4822,  4831,  4836,  4841,  4870,  4869,  4899,  4901,  4906,  4915,
    4917,  4923,  4924,  4930,  4934,  4938,  4942,  4946,  4953,  4957,
    4961,  4965,  4972,  4977,  4984,  4989,  4993,  4998,  5002,  5010,
    5021,  5025,  5037,  5045,  5053,  5060,  5070,  5093,  5099,  5105,
    5111,  5117,  5128,  5139,  5150,  5161,  5167,  5173,  5179,  5185,
    5195,  5205,  5215,  5228,  5240,  5244,  5248,  5252,  5270,  5278,
    5286,  5315,  5325,  5344,  5349,  5353,  5357,  5369,  5373,  5385,
    5402,  5412,  5416,  5431,  5436,  5443,  5447,  5460,  5474,  5491,
    5517,  5521,  5529,  5535,  5541,  5547,  5556,  5560,  5564,  5572,
    5578,  5584,  5592,  5600,  5607,  5615,  5630,  5644,  5658,  5670,
    5686,  5695,  5704,  5714,  5725,  5733,  5741,  5745,  5764,  5771,
    5777,  5784,  5792,  5791,  5801,  5825,  5827,  5833,  5838,  5846,
    5855,  5868,  5871,  5875
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tDOUBLE", "tSTRING", "tBIGSTR", "tEND",
  "tAFFECT", "tDOTS", "tSCOPE", "tPi", "tMPI_Rank", "tMPI_Size",
  "tEuclidian", "tCoordinates", "tTestLevel", "tExp", "tLog", "tLog10",
  "tSqrt", "tSin", "tAsin", "tCos", "tAcos", "tTan", "tRand", "tAtan",
  "tAtan2", "tSinh", "tCosh", "tTanh", "tFabs", "tFloor", "tCeil",
  "tRound", "tFmod", "tModulo", "tHypot", "tList", "tLinSpace",
  "tLogSpace", "tListFromFile", "tCatenary", "tPrintf", "tError", "tStr",
  "tSprintf", "tStrCat", "tStrPrefix", "tStrRelative", "tStrReplace",
  "tAbsolutePath", "tDirName", "tStrSub", "tStrLen", "tFind", "tStrFind",
  "tStrCmp", "tStrChoice", "tUpperCase", "tLowerCase", "tLowerCaseIn",
  "tTextAttributes", "tBoundingBox", "tDraw", "tSetChanged", "tToday",
  "tFixRelativePath", "tCurrentDirectory", "tSyncModel", "tNewModel",
  "tOnelabAction", "tOnelabRun", "tCpu", "tMemory", "tTotalMemory",
  "tCreateTopology", "tCreateTopologyNoHoles", "tDistanceFunction",
  "tDefineConstant", "tUndefineConstant", "tDefineNumber", "tDefineStruct",
  "tNameStruct", "tAppend", "tDefineString", "tSetNumber", "tSetString",
  "tPoint", "tCircle", "tEllipse", "tLine", "tSphere", "tPolarSphere",
  "tSurface", "tSpline", "tVolume", "tBlock", "tCylinder", "tCone",
  "tTorus", "tEllipsoid", "tQuadric", "tShapeFromFile", "tRectangle",
  "tDisk", "tWire", "tCharacteristic", "tLength", "tParametric",
  "tElliptic", "tRefineMesh", "tAdaptMesh", "tRelocateMesh", "tSetFactory",
  "tThruSections", "tWedge", "tFillet", "tChamfer", "tPlane", "tRuled",
  "tTransfinite", "tPhysical", "tCompound", "tPeriodic", "tUsing",
  "tPlugin", "tDegenerated", "tRecursive", "tRotate", "tTranslate",
  "tSymmetry", "tDilate", "tExtrude", "tLevelset", "tAffine",
  "tBooleanUnion", "tBooleanIntersection", "tBooleanDifference",
  "tBooleanSection", "tBooleanFragments", "tThickSolid", "tRecombine",
  "tSmoother", "tSplit", "tDelete", "tCoherence", "tIntersect",
  "tMeshAlgorithm", "tReverse", "tLayers", "tScaleLast", "tHole", "tAlias",
  "tAliasWithOptions", "tCopyOptions", "tQuadTriAddVerts",
  "tQuadTriNoNewVerts", "tRecombLaterals", "tTransfQuadTri", "tText2D",
  "tText3D", "tInterpolationScheme", "tTime", "tCombine", "tBSpline",
  "tBezier", "tNurbs", "tNurbsOrder", "tNurbsKnots", "tColor",
  "tColorTable", "tFor", "tIn", "tEndFor", "tIf", "tElseIf", "tElse",
  "tEndIf", "tExit", "tAbort", "tField", "tReturn", "tCall", "tSlide",
  "tMacro", "tShow", "tHide", "tGetValue", "tGetStringValue", "tGetEnv",
  "tGetString", "tGetNumber", "tUnique", "tHomology", "tCohomology",
  "tBetti", "tExists", "tFileExists", "tGMSH_MAJOR_VERSION",
  "tGMSH_MINOR_VERSION", "tGMSH_PATCH_VERSION", "tGmshExecutableName",
  "tSetPartition", "tNameToString", "tStringToName", "tAFFECTDIVIDE",
  "tAFFECTTIMES", "tAFFECTMINUS", "tAFFECTPLUS", "'?'", "tOR", "tAND",
  "tNOTEQUAL", "tEQUAL", "'<'", "'>'", "tGREATEROREQUAL", "tLESSOREQUAL",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "UNARYPREC", "tMINUSMINUS",
  "tPLUSPLUS", "'^'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'.'",
  "'#'", "'~'", "','", "$accept", "All", "GeoFormatItems", "GeoFormatItem",
  "SendToFile", "Printf", "View", "Views", "ElementCoords",
  "ElementValues", "Element", "@1", "@2", "Text2DValues", "Text2D", "@3",
  "Text3DValues", "Text3D", "@4", "InterpolationMatrix", "Time", "@5",
  "NumericAffectation", "NumericIncrement", "LP", "RP", "Affectation",
  "Comma", "DefineConstants", "@6", "@7", "@8", "UndefineConstants",
  "Enumeration", "FloatParameterOptions", "FloatParameterOption",
  "CharParameterOptions", "CharParameterOption", "PhysicalId0",
  "PhysicalId1", "PhysicalId2", "PhysicalId3", "InSphereCenter",
  "CircleOptions", "Shape", "Transform", "MultipleShape", "ListOfShapes",
  "LevelSet", "Delete", "Colorify", "SetPartition", "Visibility",
  "Command", "Slide", "Loop", "Extrude", "@9", "@10", "@11", "@12",
  "ExtrudeParameters", "ExtrudeParameter", "BooleanOperator",
  "BooleanOption", "Boolean", "BooleanShape", "TransfiniteType",
  "TransfiniteArrangement", "TransfiniteCorners", "RecombineAngle",
  "PeriodicTransform", "Constraints", "Coherence", "HomologyCommand",
  "Homology", "FExpr", "FExpr_Single", "@13", "DefineStruct", "@14",
  "Struct_FullName", "tSTRING_Member_Float", "Append", "AppendOrNot",
  "VExpr", "VExpr_Single", "RecursiveListOfListOfDouble", "ListOfDouble",
  "ListOfDoubleOrAll", "FExpr_Multi", "RecursiveListOfDouble", "ColorExpr",
  "ListOfColor", "RecursiveListOfColor", "StringExprVar", "StringExpr",
  "@15", "NameStruct_Arg", "RecursiveListOfStringExprVar", "StringIndex",
  "String__Index", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
      63,   465,   466,   467,   468,    60,    62,   469,   470,    43,
      45,    42,    47,    37,    33,   471,   472,   473,    94,    40,
      41,    91,    93,   123,   125,    46,    35,   126,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   239,   240,   240,   241,   241,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   243,   243,   244,   244,
     244,   244,   244,   244,   245,   245,   245,   245,   246,   246,
     246,   246,   246,   246,   247,   247,   248,   248,   250,   251,
     249,   252,   252,   254,   253,   255,   255,   257,   256,   258,
     258,   260,   259,   261,   261,   261,   261,   261,   262,   262,
     263,   263,   264,   264,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   266,
     266,   267,   267,   267,   268,   267,   269,   267,   267,   270,
     267,   271,   271,   272,   272,   272,   273,   273,   274,   274,
     274,   275,   275,   276,   276,   276,   276,   277,   277,   277,
     278,   278,   278,   279,   279,   279,   280,   280,   280,   281,
     281,   282,   282,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   284,   284,   284,   284,   284,   284,   284,   284,   285,
     285,   286,   286,   286,   286,   286,   286,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   288,
     288,   288,   288,   288,   289,   289,   290,   291,   291,   291,
     291,   291,   291,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   293,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   295,   295,   295,
     296,   295,   297,   295,   298,   295,   299,   295,   295,   295,
     295,   295,   300,   300,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   302,   302,   302,   302,   302,
     303,   303,   303,   304,   304,   305,   306,   306,   307,   307,
     308,   308,   309,   309,   310,   310,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   312,   312,   312,   313,
     313,   313,   314,   314,   314,   314,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   317,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   319,   318,   320,   320,   321,   322,
     322,   323,   323,   324,   324,   324,   324,   324,   325,   325,
     325,   325,   326,   326,   327,   327,   327,   327,   327,   327,
     328,   328,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329,   330,   330,   330,   330,   331,   331,   331,
     331,   332,   332,   333,   333,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   336,   335,   335,   337,   337,   338,   338,   339,
     339,   340,   340,   340
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     5,     5,
       7,     7,     7,     9,     6,     6,     6,     8,     0,     2,
       2,     2,     2,     2,     1,     3,     1,     3,     0,     0,
      10,     1,     3,     0,    13,     1,     3,     0,    15,     8,
      14,     0,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     5,     2,     7,     7,     4,
       3,     6,     9,     7,     6,     7,     6,     4,     8,     9,
       9,     6,     9,     6,     9,     5,     8,     8,    11,     6,
       9,     5,     7,     9,     9,    11,     7,     9,     9,     0,
       1,     0,     3,     5,     0,     9,     0,    11,     5,     0,
       9,     0,     3,     3,     5,     5,     0,     2,     3,     5,
       3,     0,     2,     3,     3,     3,     5,     1,     1,     3,
       1,     1,     3,     1,     1,     3,     1,     1,     3,     0,
       5,     0,     2,     7,     7,     7,     8,     8,     7,     7,
      11,     8,     7,     8,     8,     8,     9,     3,     4,    10,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       8,    12,     8,     7,     7,     8,     8,     8,     8,     8,
       8,     5,    11,     5,     9,     9,     4,     9,     9,     1,
       1,     0,     2,     6,     6,     6,     6,     8,    10,    14,
      16,    12,    14,    14,    14,    14,     8,     8,     6,     4,
       6,     6,     3,     4,     5,     6,     5,     3,     3,     4,
       5,     4,     5,     3,     5,     7,     7,     3,     7,     3,
       2,     2,     2,     2,     2,    15,     2,     2,     2,     2,
       2,    16,    11,     6,     8,     8,    10,     1,     2,     2,
       1,     3,     3,     4,     4,     1,     1,     5,    11,    13,
       0,     7,     0,    13,     0,    15,     0,     6,     9,     2,
       3,    10,     1,     2,     5,     7,     2,     2,     3,     2,
       3,     2,     3,     9,     6,     1,     1,     1,     1,     1,
       0,     2,     3,     9,     4,    14,     0,     3,     0,     1,
       0,     2,     0,     2,     0,     2,     6,     7,     6,     5,
       3,     8,     5,     4,     6,    11,    11,    18,    18,    12,
      12,    12,    10,    10,    10,    10,    10,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     2,     3,     6,     1,
       1,     1,     2,     5,     7,    10,     1,     3,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     6,     4,     4,     4,
       4,     4,     4,     4,     6,     6,     6,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       6,     1,     4,     6,     1,     4,     4,     4,     4,     4,
       2,     5,     5,     3,     5,     6,     4,     7,     6,     6,
       6,     4,     6,     4,     0,     8,     1,     3,     1,     1,
       2,     0,     3,     1,     2,     2,     3,     3,    11,     9,
       7,     7,     1,     3,     1,     1,     2,     3,     4,     5,
       1,     1,     2,     3,     3,     5,     4,     2,     2,     2,
       2,     3,     3,     3,     3,    16,    16,    16,    16,     1,
       1,     1,     3,     4,     4,     4,     6,     6,     8,     8,
       4,    14,     4,     1,     1,     3,     3,     9,     7,     1,
       5,     3,     6,     1,     3,     1,     1,     4,     4,     3,
       5,     6,     5,     5,     5,     5,     1,     4,     1,     1,
       1,     4,     6,     4,     6,     4,     4,     4,     8,     4,
       4,     4,     4,     8,     8,     6,     4,     6,     4,     1,
       4,     4,     0,     6,     4,     2,     4,     1,     3,     5,
       5,     1,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     2,     3,     1,   551,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   295,   296,   297,   298,   299,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   257,
       0,     0,   265,   266,     0,     0,     0,   260,     0,     0,
       0,     0,     0,   349,   350,   351,     0,     0,     5,     6,
       7,     8,    10,    11,    24,    12,    13,    14,    15,    23,
      22,    21,    16,     0,    17,    18,    19,    20,     0,    25,
       0,   552,     0,     0,     0,     0,     0,     0,   244,     0,
     246,   247,   242,   243,     0,   248,   249,   111,   121,   441,
     436,    70,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   250,
       0,     0,     0,     0,     0,   398,   399,   401,   402,   400,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   406,   407,   408,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   403,   404,
     405,     0,     0,     0,     0,     0,     0,   479,   480,     0,
     481,   454,   356,   411,   414,   279,   455,   436,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   443,     0,     0,   201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   551,     0,   201,     0,     0,   346,
       0,     0,     0,     0,     0,     0,     0,     0,   461,     0,
     460,     0,     0,     0,     0,     0,   551,     0,     0,   499,
       0,     0,     0,     0,   240,   241,     0,   516,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   518,     0,   539,   520,     0,     0,     0,     0,     0,
     519,     0,     0,     0,     0,   258,   259,     0,   201,     0,
     201,     0,     0,   436,     0,     0,   201,   352,     0,     0,
      76,     0,    63,     0,     0,    67,    66,    65,    64,    69,
      68,    70,    71,   201,     0,     0,     0,     0,     0,     0,
     505,   436,     0,   167,     0,     0,   505,   506,     0,     0,
     547,     0,   109,   109,     0,   434,     0,     0,     0,     0,
       0,   493,   494,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   467,     0,     0,   468,
       0,   469,     0,   470,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   359,     0,   358,   462,   360,
       0,   456,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,    71,     0,   420,     0,     0,     0,     0,     0,
       0,   280,     0,   310,   310,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   201,   201,     0,   445,   444,     0,     0,     0,     0,
     201,   201,     0,     0,     0,     0,   276,     0,   201,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   312,
       0,     0,     0,     0,     0,     0,     0,   222,   347,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   320,   239,
       0,     0,     0,     0,     0,   201,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   262,   261,     0,   227,     0,   228,     0,   358,     0,
     201,     0,     0,     0,     0,   300,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   200,     0,   199,
       0,     0,     0,     0,     0,    80,    72,    73,     0,     0,
     237,    38,   233,     0,     0,     0,     0,     0,     0,   168,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,     0,     0,     0,   439,     0,     0,   437,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   304,     0,     0,     0,     0,     0,     0,   339,
     340,   341,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   436,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   409,
       0,     0,     0,     0,     0,   471,   472,   473,   474,     0,
       0,     0,     0,     0,     0,   357,   457,     0,   464,     0,
     374,   373,   372,   371,   367,   368,   370,   369,   362,   361,
       0,   363,   463,   364,   365,   366,   437,     0,     0,   438,
     423,     0,   482,     0,     0,     0,     0,     0,     0,     0,
     308,     0,     0,   137,   138,     0,   140,   141,     0,   143,
     144,     0,   146,   147,     0,   343,     0,   344,     0,   345,
       0,     0,     0,     0,   342,   201,     0,     0,     0,     0,
       0,   447,   446,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   202,     0,     0,   270,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   323,     0,     0,   223,     0,     0,   219,     0,     0,
       0,   338,   337,     0,     0,     0,   357,     0,     0,     0,
       0,     0,     0,     0,     0,   263,   264,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   542,     0,     0,     0,     0,
       0,   229,   231,   363,     0,   553,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,   357,
       0,   196,    63,     0,     0,     0,     0,    79,     0,    63,
      64,     0,     0,   437,     0,     0,   423,     0,   549,    28,
      26,     0,     0,     0,     0,     0,   438,   509,    29,     0,
       0,   234,   548,    74,   112,    75,   122,   440,   442,     0,
       0,     0,     0,     0,   495,   496,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   397,   385,
       0,   387,   388,   389,   390,   391,   392,   393,     0,     0,
       0,   485,   484,   483,     0,     0,     0,   490,     0,   431,
       0,     0,     0,   433,   126,     0,   466,     0,     0,     0,
       0,     0,   412,   492,   417,   418,   458,     0,   419,     0,
       0,     0,     0,   416,   415,   426,     0,     0,     0,     0,
       0,   357,   306,   311,   309,     0,   319,     0,     0,     0,
       0,     0,     0,     0,     0,   357,   357,   357,     0,     0,
       0,     0,     0,   230,   232,     0,     0,     0,   191,   193,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     282,     0,   267,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   313,   322,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,     0,     0,     0,     0,   529,     0,   536,   525,
     526,   527,     0,   541,   540,     0,     0,   530,   531,   532,
     538,   545,   544,     0,   131,     0,   521,     0,   523,   517,
       0,   226,     0,   301,     0,     0,     0,   353,     0,   550,
       0,     0,     0,     0,   101,    63,     0,     0,     0,     0,
       0,     0,     0,    95,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,    61,     0,    39,    40,
      41,    42,    43,     0,   416,   415,     0,    27,     0,     0,
       0,   508,   507,     0,     0,     0,     0,   126,     0,     0,
       0,     0,     0,   151,   151,     0,     0,     0,     0,     0,
       0,     0,   149,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   316,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   465,   375,   459,   424,   422,
       0,   421,     0,     0,     0,     0,     0,     0,     0,     0,
     318,     0,   139,     0,   142,     0,   145,     0,   148,     0,
       0,     0,     0,     0,     0,     0,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   287,     0,     0,   286,     0,   289,     0,
     291,     0,   277,   283,     0,     0,     0,   218,     0,     0,
       0,     0,     0,     0,     0,     0,   324,     0,   221,   220,
     348,     0,     0,    35,    36,     0,     0,     0,     0,   500,
       0,     0,     0,   253,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   302,   201,     0,     0,
     512,   513,   514,   515,     0,    86,     0,     0,     0,     0,
      84,    91,    93,     0,   503,     0,    99,     0,     0,     0,
       0,    81,     0,     0,     0,     0,     0,    34,   424,     0,
       0,     0,    30,    31,     0,   510,     0,    32,     0,     0,
     113,   118,     0,     0,    77,    78,   153,     0,     0,     0,
       0,     0,     0,   154,     0,     0,   170,   171,     0,     0,
       0,     0,   155,   183,   172,   176,   177,   173,   174,   175,
     162,     0,     0,   386,   394,   395,   396,   486,     0,     0,
       0,   429,   430,   432,     0,   410,   127,     0,     0,     0,
       0,   428,   413,   184,   425,   487,   178,     0,     0,   149,
       0,     0,   317,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   238,     0,     0,     0,     0,   201,   201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   288,   454,     0,     0,   290,   292,     0,     0,   271,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,     0,     0,     0,     0,   158,   159,     0,     0,     0,
       0,   102,   106,     0,   537,     0,     0,   535,     0,   546,
       0,   543,   132,   522,   524,     0,   300,   300,     0,   354,
      85,    63,     0,     0,     0,     0,    83,     0,   501,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   452,
       0,   425,   235,   236,     0,   511,     0,   114,   119,     0,
     435,     0,     0,   152,   156,   157,   163,     0,     0,   182,
       0,   165,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   427,     0,   164,     0,   185,   307,   187,
     188,   189,   190,   161,     0,   180,   186,     0,     0,     0,
       0,     0,     0,   451,   450,     0,     0,     0,   203,   204,
     205,   206,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   217,   216,     0,     0,     0,     0,     0,
       0,     0,     0,   207,     0,     0,   321,    37,     0,   498,
       0,     0,   255,   254,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    96,     0,
       0,    97,   504,     0,     0,    88,     0,     0,     0,    44,
       0,     0,     0,     0,     0,    46,    33,     0,   126,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   488,
     489,     0,     0,   128,   130,     0,     0,     0,     0,     0,
     166,     0,   314,   314,     0,   107,   108,   201,     0,   194,
     195,   278,     0,   284,     0,     0,   201,     0,     0,     0,
       0,     0,     0,     0,     0,   198,   197,     0,     0,     0,
       0,   103,   104,   528,   534,   533,     0,   133,   134,   135,
       0,     0,   303,     0,    92,    94,     0,   100,     0,    82,
      89,    90,    49,     0,     0,     0,     0,   453,     0,     0,
       0,     0,     0,   116,   332,   334,   333,   335,     0,   336,
     169,     0,     0,     0,   493,   494,     0,     0,     0,     0,
     281,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   449,     0,   294,     0,     0,   272,     0,   208,     0,
       0,     0,     0,     0,     0,     0,   497,   256,     0,     0,
       0,   201,   355,     0,   502,     0,    45,     0,     0,     0,
      62,    47,     0,   115,   120,   126,   150,     0,     0,   129,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     315,   325,     0,     0,   326,     0,   192,     0,   285,     0,
     268,     0,   201,     0,     0,     0,     0,     0,     0,   160,
     105,   136,   252,   300,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   123,     0,     0,     0,     0,     0,
     181,     0,   329,     0,   330,   331,   448,     0,     0,   274,
     211,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       0,    59,     0,     0,   117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   293,   273,   269,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124,   125,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,   215,     0,   209,   305,    50,
       0,    57,     0,   245,     0,   491,     0,     0,     0,     0,
       0,     0,   275,     0,     0,    51,     0,     0,   251,     0,
       0,     0,     0,     0,     0,   210,     0,     0,     0,     0,
     475,   476,   477,   478,     0,     0,    54,    52,     0,    55,
       0,   327,   328,     0,     0,    60,    58,    56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,   108,   981,   109,   110,   972,  1728,  1734,
    1238,  1432,  1875,  2024,  1239,  1987,  2048,  1240,  2026,  1241,
    1242,  1436,   395,   534,   535,   679,   111,   703,   412,  1738,
    1885,  1739,   413,  1833,  1297,  1496,  1401,  1582,   832,   835,
     838,   841,  1470,  1460,   875,   247,   668,   669,   114,   115,
     116,   117,   118,   119,   120,   121,   248,  1143,  1911,  1978,
     876,  1139,  1140,   249,   948,   250,   125,  1319,  1095,   830,
     890,  1845,   126,   127,   128,   129,   251,   252,  1064,   253,
     708,   254,   820,   707,   415,   565,   286,  1608,   320,   321,
     256,   512,   328,  1226,  1425,   410,   406,  1194,   933,   411,
     131,   373
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1566
static const yytype_int16 yypact[] =
{
    9991,    70,   113, 10138, -1566, -1566,  -121,   169,   129,   -16,
       1,    39,   212,   235,   296,   307,    35,   318,   338,   -67,
     116,    26,  -171,  -171,   -94,    72,   138,    37,   152,   157,
      42,   166,   173,   178,   196,   224,   239,   247,   260,   276,
     287,   365,   447,   541,   317,   146,   329,  5506,   341,   322,
     479,   -47,   550,   327,   674,    55,   349,   517,   -11,   378,
     299,   299,   394,   384,   855, -1566, -1566, -1566, -1566, -1566,
     425,   -29,   570,   596,    12,    48,   605,   614,   109,   716,
     722,   754,  4825,   802,   588,   619,   625,    15,    25, -1566,
     628,   642, -1566, -1566,   833,   849,   719, -1566,  3884,   661,
    4681,    32,    44, -1566, -1566, -1566,  9203,   720, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566,   124, -1566, -1566, -1566, -1566,    67, -1566,
     902,   698,  4591,   676,   912,  9203,  3485,  3485, -1566,  9203,
   -1566, -1566, -1566, -1566,  3485, -1566, -1566, -1566, -1566,   708,
     946, -1566, -1566,  5175,    26,  9203,  8003,  9203,  9203,   723,
    9203,  8003,  9203,  9203,   737,  9203,  8003,  9203,  9203,  9203,
    9203,  9203,  9203,  3485,  9203,  9203,  9203,  5733,   738, -1566,
    8003,  4825,  4825,  4825,  3485, -1566, -1566, -1566, -1566, -1566,
    -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,   480,  -171,  -171,  -171,  -171,  -171,   744,  -171,
    -171,   756, -1566, -1566, -1566,  -171,    22,    38,    43,    46,
    5733,   873,   475,   771,  -171,  -171,   778,   781, -1566, -1566,
   -1566,  9203,  5960,  9203,  9203,  6187,    26, -1566, -1566,   779,
   -1566,  1908, -1566, -1566, -1566, -1566, -1566,   179,  9203,  8003,
     796,   797,  6414,  4825,  4825,  4825,   811,   821,   858,   859,
    6641,  6868,  7095,   865,  3824,  1049,  5733,    15,   867,   874,
     299,   299,   299,  9203,  9203,   -51, -1566,   419,   299,  8840,
     446,   164,   877,   879,   888,   889,   894,   899,   915,  9203,
    4825,  4825,  4825,   916,     7,   954, -1566,  1140,  1164, -1566,
     973,   977,   978,  4825,  4825,   955,   976,   981, -1566,  9203,
   -1566,  1189,  1198,  9203,  9203,  9203,    16,  9203,   980, -1566,
    1041,  9203,  9203,  9203, -1566, -1566,  9203, -1566,  -171,  -171,
    -171,   986,   987,   989,  -171,  -171,  -171,  -171,  -171,  -171,
    -171, -1566,  -171, -1566, -1566,  -171,  -171,   990,   991,  -171,
   -1566,  1005,  1215,  1232,  1006, -1566, -1566,  1234, -1566,  1235,
   -1566,  9203, 11571,   156,  3485,  9203, -1566, -1566,  5733,  5733,
   -1566,  1011,  5175,   634,  1238, -1566, -1566, -1566, -1566, -1566,
   -1566,  9203,  9203,   407,    28,  5733,  1241,   258,   216,  1018,
    1246,    52,  9203, -1566,   529,  -140, -1566,    83,  -100,  4477,
   -1566,   -41,  -160,   214,  1169, -1566,    26,  1016,  1017, 11965,
    8003,  2561, -1566,   371, 11986, 12007,  9203, 12028,   493, 12049,
   12070,  9203, 12091,   500, 12112, 12133, 12154, 12175, 12196, 12217,
    1026, 12238, 12259, 12280,  1250,  9203,   521,  1252,  1253,  1255,
    1033,  9203,  9203,  9203,  9203,  9203,  9203,  9203,  9203,  9203,
    9203,  9203,  9203,  9203,  9203,  9203,  9203,  9203,  9203,  9203,
    9203,  9203,  9203,  8003,  8003,  1031,  9203,  9203,  3485,  9203,
    3485,  5733,  3485,  3485,  3485,  9203, -1566,  1202,  9203, -1566,
    1203, -1566,  1204, -1566,  1206,  5733,  4825,  4825,  4825,  4825,
    3485,  3485,  8003,    26,  5175,  1042,  8003,  1042, -1566,  1042,
   12301, -1566,   546,  -171,  9203,  9203,  9203,  9203,  9203,  9203,
    9203,  9203,  9203,  9203,  9203,  9203,  7322,  9203,  9203,  9203,
      26,  9203,  9203,  1267, -1566,   769, 12322,   582,  9203,  9203,
    9203, -1566,  1265,  1266,  1266,  8618,  8618,  8618,  8618,  9203,
    1269,  9203,  1271,  9203,  1274,  8003,  8003, 11595,  1052,  1279,
    1054, -1566, -1566,  -145, -1566, -1566,  4763,  4991,   299,   299,
     407,   407,  -137,  8840,  8840,  9203,  2076,  -134, -1566,  9203,
    9203,  9203,  9203,  9203,  9203,  9203,  9203,  9203, 12343,  1292,
    1294,  1295,  9203,  1297,  9203,  9203,  2968, -1566, -1566,  8003,
    8003,  8003,  1298,  1299,  9203,  9203,  9203, 12364, -1566, -1566,
   12385, 12406, 12427,  1131,  5217, -1566,  1073,  2588, 12448, 12469,
   11666,  3485,  3485,  3485,  3485,  3485,  3485,  3485,  3485,  3485,
    9203,  3485,  3485,  3485,  3485,    10,  5175,  3485,  3485,  3485,
      26, -1566, -1566,  8003, -1566,  3341, -1566,  9352,  1042,  9203,
   -1566,  9203,  9203,  1075, 12490,  3606,  1079,   591,  9203,  1304,
    1082,  1083,  1084,  1086,  9203, 12511, 11689, -1566,  1087, 10275,
    1096,   353,  1095,  1324,  1327, -1566, -1566, -1566,  8003,   155,
   -1566, -1566, -1566,    26,  9203,  9203,  1267,  1103,  8184, -1566,
      33,  8003,    26,  9203,  9203,  1331,  1330,  8003,  9203,  1332,
    3485,  1333, -1566,    26,  1334,  3485,  9203,  1107,  1110, -1566,
    9203,  5175,  1336,  8003,  1171,  8003,  1343,  1344, 12532,  1346,
    1181,  1348,  1349, 12553,  1350,  1185,  1353,  1355,  1357,  1358,
    1359,  1360, -1566,  1361,  1362,  1363,  9203, 12574,  1139, -1566,
   -1566, -1566,  1367, 11643, 11643, 11643, 11643, 11643, 11643, 11643,
   11643, 11643, 11643, 11643,  5444, 11643, 11643, 11643, 11643, 11643,
   11643, 11643,  5671,  5898,  6125,  2561,  1145,  1144,   119,  8003,
    6352,  6579,   503,  6806,   503,  1141,  1142,  1143,   -34, 10134,
    1149,  8494,  1150,  1151,  1152, -1566, -1566, -1566, -1566,  1148,
    -127,   503,  1147,  1158,   593,  1371, -1566,   503,  2882,  2969,
     920,   939,  1009,  1009,   463,   463,   463,   463,   554,   554,
    8003,  1042, -1566,  1042,  1042,  1042,  1154, 12595, 11712,  -139,
   -1566,  8003, -1566,  1383,  1159, 12616, 12637, 12658,  9203,  5733,
    1387,  1388,  1163, 10134,  1157,  1166, 10134,  1160,  1167, 10134,
    1161,  1172, 10134,  1168, 12679, -1566, 12700, -1566, 12721, -1566,
     604,   606,  8003,  1170, -1566, -1566,  9392,  9446,   299,  9203,
    9203, -1566, -1566,  1173,  1174,  8840,  3547,   617,    51,    53,
     618,  1175,   -35,   717,  1276, -1566,   839,   299,  9540, 12742,
    9162, 12763, 12784, 12805, 12826, 12847, 12868, 12889,  1402,  9203,
    1404, -1566,  9203, 12910, -1566, 11735, 11758, -1566,   657,   658,
     659, -1566, -1566, 11781, 11804,  7033, -1566,  1405,  1406,  1407,
    1176,  9203,  9578,  9203,  9203, -1566, -1566,    57,   415,   460,
     415,  1186,  1187,  1177,   503,   503,  1183,  7260,   503,   503,
     503,   503,  9203,   503,  1410, -1566,  1190,  1193,   469,  1192,
     664, -1566, -1566,  1042,  9672, -1566,  1422,  8913,  1196,  1201,
    1429,  5733,  9830, -1566,  9203,  9203,  9203,  9203,   575,   497,
      82, -1566,  5175,  9203,  1430,  1433,    30, -1566,   665,  1397,
    1398,  5733,    24,  1209, 12931, 11827,  1212,  9203, -1566, -1566,
    1231,  3485,   -24,  1213, 12952, 11850, -1566, -1566, -1566,   186,
    7487, -1566, -1566, -1566,    92, -1566, -1566, 10134, -1566,  9203,
   11643,   503,   299,   677,  2561, -1566,  5733,  5733,  1443,  5733,
     687,  5733,  5733,  1444,  5733,  1356,  5733,  5733,  5733,  5733,
    5733,  5733,  5733,  5733,  5733,   666,  1448,  8003, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
    9203, -1566, -1566, -1566, -1566, -1566, -1566, -1566,  9203,  9203,
    9203, -1566, -1566, -1566,   672,  9203,  9203, -1566,  9203, -1566,
    5733,  3485,  3485, -1566, -1566,  9203, -1566,  9203,  9203,  9203,
    9203,  9203, -1566, -1566, -1566, -1566, -1566,  5733, -1566,  9203,
    9203,   673,  1331,  -139,   139, -1566,   678,  5733,  8003,  1449,
    1450,  1451,  2612, -1566, -1566,  1453, -1566,   300,  9203,   300,
    9203,   300,  9203,   300,  9203,  1454,  1456,  1472,  1473,  1476,
     679,  1480,  9710, -1566, -1566,  -123,  7714,  7941, -1566, -1566,
   10871,  -110,  8003,  8003,  8003,  8003,  9203,  1225,  1256,  1257,
    1258,  1354,  1484,  9135,  1259,  1483,  1261,    36,    47,   -25,
   -1566,  -101, -1566,   839,  1486,  1485,  1487,  1488,  1489,  1496,
    1497,  1498,  1499,  5733, 10134, -1566,   711,  1275,  1501,  1503,
    1504,  1418,  1506,  1508,  1509,  9203,  5733,  5733,  5733,  1512,
    8252, -1566,  3168,   244,  1515,  1517, -1566,  8003, -1566, -1566,
   -1566, -1566,  3485, -1566, -1566,  9203,  3485, -1566, -1566, -1566,
   -1566, 10134, -1566,  1286, -1566,  3485, -1566,  3485, -1566, -1566,
    1285, -1566,  1291, -1566,   850,  1300,  5733, -1566,  1293, -1566,
   10896, 10921, 10946, 10971, -1566, -1566,  9203,  1522,    31,  9203,
    1525,  1526,  1254, -1566,  1529,    15,  1532,  1308,   503,  -171,
    -171,  1534, -1566,  1312,  1313,  1311, -1566,  1539, -1566, -1566,
   -1566, -1566, -1566,  1331,  -164,   610, 11873, -1566,  1540,    34,
    1331, -1566,  1315,  1541,  9203,  8225,   503, 10134,  1542,  1545,
      75,  1319,  1320,  1435,  1435,  5733,  1551,  1325,  1326,  1554,
    1555,  5733,  1389,  1335,  1557,  1559,  1560,  1561,  1563,  1564,
    1565,  1567,  1568, -1566,  1572,   681, 11643, 11643, 11643, 11643,
     503,  8562,  8670,  8743,  1351,   503,   503,   483,  8786,  8868,
    8965,  9033, 12973, 11643,  1573, 10134, 10134, -1566, -1566, -1566,
    1574, -1566,   503,  1576,   704,  5733,  5733,  5733,  1579,  1578,
   -1566,  5733, 10134,  5733, 10134,  5733, 10134,  5733, 10134,  5733,
    5733,  5733,  1347,  1372,  1583,   518, -1566,  9203,  9203,  9203,
    1373,  1374,   706,   731,   741,   746, 12994,  9203,  9203,  9203,
    9203,  1375,  1378, -1566,  1447,  5733, -1566,  9203, -1566,  1580,
   -1566,  1585, -1566, -1566,  8840,   820,  5052, -1566,  1377,  1379,
    1380,  1381,  1384,  1385,  7549,  1588, -1566,  8003, -1566, -1566,
   -1566,  1386,  9203, -1566, -1566, 11896,  1598,  1605,  1452, -1566,
    9203,  9203,  9203, -1566,  1610,   636,   524,  1382,  2694,  1390,
    9203,   531,  1392,   503,  5175, -1566, -1566, -1566,  1391,  1617,
   -1566, -1566, -1566, -1566,  1665, -1566,   626,  1395,  1618,  1725,
   -1566, -1566, -1566,    15, -1566,   748, -1566,  9203,   300,  1044,
    3485, -1566,  1403,  9203,  9203,  5733,  1393, -1566,  1400,  1620,
    1628,  1630, -1566, -1566,  3485, -1566,  1633, -1566,  9076,  4137,
   10134, -1566,  1632,   288, -1566, -1566, -1566,  9203,  9203,   299,
    1634,  1635,  1636, -1566,  9203,  9203, -1566, -1566,  1637,  1552,
    1639,  9203, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566,  1642,  1419, -1566, -1566, -1566, -1566, -1566,  9203,  9203,
    9203, -1566, -1566, -1566,  1647, -1566, -1566,  9203,  9203,  9203,
    9203, -1566, -1566, -1566,  -139, -1566, -1566,  1420,  1648,  1389,
    1649,  9203, -1566,  1666,  1667,  1668,  1671,  1672,   824,  1673,
    8003,  8003,  9203, -1566,  8618, 10996, 13015,  3883,   407,   407,
    1675,  1676,  1677,  1678,  1371, 13036, 13057, 13078, 13099,  9203,
    9203, -1566,   115,  1455, 13120, -1566, -1566, 11021,   -98, -1566,
    1679,  1680,  5733,   299,   299,   299,   299,   299,  5279,  1681,
   -1566,   749,  9203,  1750,  1683, -1566, -1566,  5733,  4084,   372,
   13141, -1566, -1566,  8308, -1566,  3485,  9203, -1566,  3485, 10134,
      27, -1566, -1566, -1566, -1566,  1457,  3606,  3606,  5733, -1566,
   -1566,  5175,  9203,  1684,  1687,    30, -1566,  1686, -1566,    15,
   11919,  5733,  1688,   415,   415,  9203,  9360,  9518,   759, -1566,
    9203,   -66, -1566, -1566,  1690, -1566,  9203, -1566, -1566,  1464,
   -1566, 11046, 11071,   454, -1566, -1566, -1566, 11096, 11121, -1566,
    1465, -1566, 11146,  1694,  5733, 11643, 11643,  9650,  4364,  9801,
   10189, 10233, 10262, -1566,  9203, -1566,  1696, -1566, 10134, -1566,
   -1566, -1566, -1566, -1566,  1467, -1566, -1566,   760,   789, 11619,
    1778,  1697,  1471, -1566, -1566,  9203,  1474,  1475, -1566, -1566,
   -1566, -1566,  1451,  1454,  1456,  1472, 11171, 11942,  1699,  5733,
    1703,  1478,  9203, -1566, -1566,   800,   -72,   -65,   -48,   -28,
     -12,  7776,     9, -1566,  1700, 11196, -1566, -1566,  1544, -1566,
    9203,  9203, -1566, -1566,  8003,  1884,  1707,  1490, 11643,   503,
    8535,  5175,  5175,  1481,  1482,  1495,  1708,  2038, -1566,  1710,
    1712, -1566, -1566,  1500,  1713, -1566,  1716,  1717,   210, 10134,
    9203,  9203,  1505,  5733,   801, 10134, -1566, 10291, -1566, -1566,
    5733,  1726,  1727,  1728,  1730,  9203,  1733,  1734,   807, -1566,
   -1566,  9203,  6187, -1566, -1566,  9203,  9203,  9203,  9203, 11221,
   -1566,  5733,   472,   675,  8003, -1566, -1566,   407,  4302, -1566,
   -1566, -1566,  1735, -1566,  1511,  5733, -1566, 11246,  1736,  8003,
     299,   299,   299,   299,   299, -1566, -1566,  9203, 11271, 11296,
     808, -1566, -1566, -1566, -1566, -1566,  3485, 10134, -1566, -1566,
    1516,  1514, -1566,  1742, -1566, -1566,    15, -1566,  1581, -1566,
   -1566, -1566, -1566,  9203, 10320, 10349,  5733, -1566,  1744,  9203,
    9203,   809,   817, -1566, -1566, -1566, -1566, -1566, 11321, -1566,
   -1566,  1518, 10378,   818,  2485,  1746, 10407, 10436, 10465, 10494,
   -1566,   842,  1521,   299,  5733,  1749,  1524,   299,  1753,   843,
    1528, -1566,  9203, -1566,  1754,  1638,  9804,  1533, -1566,   845,
     150,   158,   181,   231,   291,  2309, -1566, -1566,  1759,   848,
    1761, -1566, -1566,  1762, -1566,  1536, 10134,  9203,  9203,   875,
   -1566, 10134, 10523, -1566, -1566, -1566, -1566,  9203,  9203, -1566,
    9203,  5175,    26,  9203,  9203,  9203,  9203,  1764,   299,    96,
   -1566, -1566,   299,   136, -1566,  1765, -1566, 11346, -1566,  9203,
   -1566,   839, -1566,  1768,  8003,  8003,  8003,  8003,  7776, -1566,
   -1566, -1566, -1566,  3606, -1566,  9203, 13162, 10552,    60,  9203,
     934, 10581, 10610,  2532, -1566,  1546, 10639, 10668, 10697, 10726,
   -1566,   295, -1566,   302, -1566, -1566, -1566,  2410,   880,  9842,
   -1566,   935,   937,   942,   943,   311,   944,  1543,   950, -1566,
    9203, -1566,  5733, 11371, -1566,  9203,  9203,  5175,  1548,  9203,
    9203,  9203,  9203,   299,   299, -1566, -1566, -1566,   839,  1773,
    1774,  1775,  1776,  8003,  1777,  1779,  1780,  1556, 13183,   953,
    1782, 11396, 11643, -1566, -1566, 10755, 10784, 10813, 10842,   326,
     337,   974, -1566, -1566, -1566, -1566,   962, -1566, -1566, -1566,
    3485, -1566,  1562, -1566,  1784, -1566,  9203,  9203,  9203,  9203,
    9203,  9203, -1566,  1786,   963, -1566,  1566,  5733, -1566, 11421,
   11446, 11471, 11496, 11521, 11546, -1566,  1788,  3485,  3485,   964,
   -1566, -1566, -1566, -1566,  1790,  1791, -1566, -1566,   971, -1566,
    1792, -1566, -1566,  1794,  3485, -1566, -1566, -1566
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1566, -1566, -1566, -1566,   552, -1566, -1566, -1566, -1566,  -120,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566,  -656,   -55,  3780,  1919, -1566,  1394, -1566, -1566,
   -1566, -1566, -1566, -1566, -1237, -1566,    63, -1566, -1566, -1566,
   -1566, -1566,   297,   540,  1805,     6,  -568,  -256, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566,  1806, -1566, -1566, -1566,
   -1566, -1137, -1129,  1807, -1565,  1809, -1566, -1566, -1566,  1272,
   -1566,    54, -1566, -1566, -1566, -1566,  1904, -1566, -1566,  1812,
   -1566,  1797,  -678, -1566, -1566,   -56, -1566, -1540,   272,  -157,
    2044,   223,  -276,   225, -1566,   236,   -62, -1566, -1566,  -471,
   -1566,    -3
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -512
static const yytype_int16 yytable[] =
{
     132,   560,   863,   864,   285,   287,  1365,   290,   976,   113,
    1363,   593,  1685,   778,     6,   963,   304,   987,   150,   326,
    1453,  1713,  1714,   971,   447,   448,   449,   486,  1232,   330,
       6,  1710,   671,   576,     6,  1416,   362,   367,   366,   979,
    1443,   159,  1358,   489,   257,   138,   164,   261,   491,   369,
     596,   493,   308,  1360,   309,   159,     6,   164,   151,   261,
     152,   683,   389,   390,  1174,   300,  1961,   301,   262,  -508,
     400,   307,   701,   377,   568,   569,     4,   396,   702,   257,
    1127,  1456,   568,   569,   329,   568,   569,   389,   390,  1215,
     690,   417,   692,   858,  1748,   363,   568,   569,   691,  1255,
    1132,   865,  1942,   676,   877,   677,   542,   543,   544,   568,
     569,  1071,   645,     5,   647,  1337,   133,  1133,   568,   569,
     655,   568,   569,   514,  1341,  1134,  1135,  1136,   530,   401,
     696,  1137,  1138,   407,   407,   155,   310,  1364,   697,   156,
    1682,   407,  1944,   589,   590,   591,   273,   568,   569,   274,
     918,   418,   920,   257,   568,   569,   602,   603,   257,   277,
     389,   390,   969,   257,   147,   530,  1779,  -511,   568,   569,
     407,   568,   569,  1780,   257,   278,   279,   257,   257,   257,
     257,   407,   570,   134,  1233,  1234,  1235,  1236,   530,   699,
    1781,   568,   569,   305,  1359,   487,  1063,   700,   672,   673,
     313,  1417,  1418,   314,   700,  1361,  1249,   568,   569,  1362,
    1782,   490,  1711,   136,   715,   107,   492,   107,   140,   494,
     107,  1841,   680,   135,   563,   564,  1783,   257,   568,   569,
     137,   107,   572,   577,   181,   107,  1363,   182,   594,   257,
     183,   141,   257,   513,   133,   306,   932,  1784,   327,   980,
     980,   613,  1392,   133,   331,   488,   257,   107,  1237,   257,
     257,   257,   257,  1225,   144,   368,   160,   257,   257,   257,
     161,   165,   139,   257,   329,   166,  1879,   370,   389,   390,
     160,   684,   165,   685,  1123,  -506,  1124,   686,   385,   386,
     387,   388,  1175,  1962,   568,   569,   378,   257,   257,   257,
     379,   157,   142,  1216,  1219,   856,   857,  1215,   389,   390,
     257,   257,   693,   143,   694,   568,   569,  1218,   695,   255,
     659,   151,   878,   152,   145,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   785,
     786,   787,   788,   529,   146,   389,   390,   148,   531,  1678,
     532,  1053,   393,   375,   533,   568,   569,   376,  1957,   912,
     962,   385,   386,   387,   970,   389,   390,   158,   399,   568,
     569,   407,   405,   408,  1310,   257,   257,   568,   569,   423,
    1701,   162,   389,   390,   428,   651,   163,   652,  1914,   433,
     670,   533,   257,   579,   944,   167,  1915,   580,   687,   667,
     568,   569,   168,   446,  1308,   389,   390,   169,   531,   440,
     532,     6,   393,   709,   533,   266,  1253,   257,   267,  1916,
     450,   268,  1989,   269,   715,   170,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
    1812,  1321,   793,  1323,   529,  1325,   704,  1327,  1813,   444,
     568,   569,   702,   171,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   649,   527,   528,   172,  1917,
     257,   768,   529,   177,  1393,   407,   173,   407,   257,   407,
     407,   407,   537,   834,   837,   840,   843,  2039,   676,   174,
     677,   678,   257,   257,   257,   257,   257,   407,   407,   257,
     792,  1821,   255,   257,  1215,   175,   385,   386,   387,   388,
     568,   569,   861,   862,   568,   569,   176,   564,   281,   282,
    1620,   568,   569,   257,  1523,  1524,  1494,   816,   283,  1918,
     568,   569,   284,  1973,   541,   689,    59,    60,    61,    62,
    1974,   178,   550,   552,   554,   568,   569,   179,   559,  1983,
     180,    73,   257,   257,    76,   259,   568,   569,   184,   385,
     386,   387,   388,   496,  2020,  1438,   497,   670,   670,   498,
     258,   499,  1445,   260,   935,  2021,   667,   667,   275,   389,
     390,  1214,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,   257,   257,   257,  1112,
     529,  1842,  1843,   281,   282,   714,  1702,  1844,   276,   715,
     653,   280,   107,   283,     6,   337,   964,   289,   407,   407,
     407,   407,   407,   407,   407,   407,   407,   288,   407,   407,
     407,   407,   934,  1591,   407,   407,   407,   939,   568,   569,
     257,   263,  1572,  1573,   264,   676,   265,   677,  1930,  1001,
     656,   657,   571,   700,   299,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   302,   568,   569,   674,   347,   348,
     349,   350,  1283,   568,   569,   257,   351,   352,   353,   578,
     973,   354,   524,   525,   649,   527,   528,   303,   257,   983,
     676,   529,   677,   355,   257,   356,   311,   407,  1177,   676,
     994,   677,   407,   385,   386,   387,   388,  1197,   312,   473,
     257,   474,   257,   676,   772,   677,   774,  1376,   776,   777,
     315,  1494,   660,   389,   390,   661,   316,   720,   662,   794,
     663,   715,   383,   676,   725,   677,   789,   790,   715,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     649,   527,   528,   775,   676,   738,   677,   529,   317,   715,
    1592,   676,   715,   677,  1085,   270,   257,   541,   271,  1580,
     272,  1261,  1601,  1262,  1948,   649,   527,   528,   850,   851,
     796,  1267,   529,  1268,   715,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   649,   527,   528,   357,
     358,   359,  1115,   529,  1846,  1847,   322,   257,  1128,  1121,
    1844,  1129,   360,  1130,   361,   107,   824,   323,   257,  1363,
     715,  1141,   898,   899,   900,   950,   257,  1076,  1654,   951,
    1655,   715,   385,   386,   387,   388,   389,   390,  1108,   334,
    1109,  2001,   715,  -507,   715,  1439,   155,   168,   324,   257,
    1122,  1125,   389,   390,   325,   335,  1406,   332,   919,   291,
     921,   922,   923,   924,   925,   926,   940,   928,   929,   930,
     931,   333,  1363,   936,   937,   938,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
     364,  1160,  1161,  1162,   529,   715,   715,   715,  1200,  1228,
    1221,   968,   715,   715,  1217,  1220,  1290,  1307,   380,   402,
     715,   715,  1312,  1334,   982,  1482,   715,   715,   403,   715,
     989,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,   381,   992,   414,  1507,   529,
    1530,   996,   715,   292,   715,  1132,  1260,   293,   257,  1424,
     336,   374,   426,   294,   295,   416,   296,   297,  1603,  1604,
    1666,  1667,  1133,  1227,  1132,  1531,   431,   445,   257,   715,
    1134,  1135,  1136,   481,   298,  1532,  1137,  1138,   407,   715,
    1533,  1133,  1598,  1694,   715,   484,  1599,   715,   495,  1134,
    1135,  1136,  1054,  1732,  1762,  1137,  1138,  1733,   715,   676,
     500,   677,   821,   257,   257,  1132,   257,   503,   257,   257,
     504,   257,   376,   257,   257,   257,   257,   257,   257,   257,
     257,   257,  1133,  1763,   257,   538,   539,   715,  1309,  1311,
    1134,  1135,  1136,  1081,  1778,  1818,  1137,  1138,  1733,  1819,
     545,  1831,  1868,  1883,  1086,  1733,   715,  1494,     6,   337,
     546,  1884,  1889,   558,  1549,  1580,  1890,   257,   407,   407,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   649,   527,   528,   257,  1110,  1897,  1905,   529,  1913,
    1733,   715,  1921,   715,   257,   257,   700,   547,   548,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   555,  1132,
     561,  1093,   347,   348,   349,   350,   581,   562,   582,  1928,
     351,   352,   353,  1733,  1976,   354,  1133,   583,   584,   257,
     257,   257,   257,   585,  1134,  1135,  1136,   355,   586,   356,
    1137,  1138,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   649,   527,   528,   587,   592,   597,  1597,   529,  1586,
     257,  1587,   518,   519,   520,   521,   522,   523,   524,   525,
     649,   527,   528,   257,   257,   257,   383,   529,  1964,  1979,
     598,  1980,  1494,   715,   257,   715,  1981,  1982,  1984,   407,
     715,   715,   715,   407,  1986,   595,   604,  2012,  1819,  1309,
    1311,  1733,   407,  1451,   407,   608,  2023,  2036,  2050,  1850,
     715,  2037,  1733,   257,   609,  2053,   599,   605,  2022,  2054,
     600,   601,   606,   615,   616,   624,   625,  1248,   626,   637,
     638,   641,   329,  1208,   520,   521,   522,   523,   524,   525,
     649,   527,   528,   357,   358,   359,   640,   529,   642,   643,
     644,   646,   407,  1231,   658,   664,   360,   675,   361,   107,
    1285,   681,   682,   706,   710,   711,   732,   736,   739,   740,
    1422,   741,   257,   742,   769,   780,   782,   783,   257,   784,
     529,   819,   828,   829,   676,   845,   677,   847,  1263,  1264,
     849,  1266,   853,  1269,  1270,   854,  1272,   855,  1274,  1275,
    1276,  1277,  1278,  1279,  1280,  1281,  1282,  1295,  1296,   889,
     891,   910,   892,   894,   901,   902,   913,   945,  1548,   949,
     953,  1314,   257,   257,   257,   954,   955,   956,   257,   957,
     257,   961,   257,  1722,   257,  1869,   257,   257,   257,   393,
     965,   966,  1294,   967,   977,   986,   988,   998,   991,   993,
     995,   999,  1585,  1002,  1003,  1342,  1343,  1344,  1345,  1304,
    1006,  1007,   257,  1009,  1010,  1011,  1012,  1014,  1015,  1313,
    1016,  1593,  1017,   257,  1018,  1019,  1020,  1021,  1022,  1023,
    1024,   257,  1027,  1028,   257,  1051,  1052,  1074,  1077,  1060,
    1061,  1062,  1065,  1067,  1068,  1069,  1070,  1618,  1075,  1082,
    1087,  1094,  1088,  1097,  1096,  1098,  1099,  1101,  1100,  1102,
    1396,  1131,  1103,  1623,  1126,  1111,  1104,  1118,  1119,  1153,
    1155,  1169,  1166,  1167,  1168,  1182,  1180,  1181,  1397,  1193,
     329,  1185,  1399,  1196,  1199,  1375,   407,   407,  1195,  1202,
    1205,  1402,   257,  1403,  1206,  1207,  1223,  1224,  1386,  1387,
    1388,   407,  1229,  1230,  1243,  -509,   257,  1247,  1250,  1643,
    1265,  1271,  1273,  1541,  1347,  1284,  1315,  1316,  1317,  1320,
    1351,  1329,  1661,  1330,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   649,   527,   528,  1408,  1331,
    1332,  1440,   529,  1333,  1335,  1348,  1349,  1350,  1352,  1356,
    1357,  1367,  1355,  1366,  1368,  1369,  1370,  1686,  1687,  1688,
    1689,  1690,  1692,  1371,  1372,  1373,  1374,  1378,  1377,  1379,
    1380,  1706,  1381,  1382,  1383,  1384,  1389,   257,   257,  1394,
    1856,  1395,  1400,  1404,  1405,   670,   670,  1409,  1415,  1716,
    1873,  1420,  1421,  1407,   667,   667,  1423,  1462,  1426,  1427,
    1431,  1433,  1434,  1468,  1435,  1437,  1442,  1447,  1454,   257,
    1446,  1455,  1457,  1458,  1459,   257,  1643,  1463,  1464,  1465,
    1466,  1467,  1469,  1472,   257,  1473,  1474,  1475,  1471,  1476,
    1477,  1478,   407,  1479,  1480,   407,  1754,  1481,  1504,  1503,
    1520,  1491,  1506,  1511,  1512,   257,  1545,  1508,  1509,  1510,
    1522,  1546,  1227,  1513,  1560,  1514,   329,  1515,   257,  1516,
    1561,  1517,  1518,  1519,  1565,  1521,  1528,  1529,  1539,  1540,
    1552,  1566,  1553,  1554,  1555,  1923,  1571,  1556,  1557,  1562,
    1575,  1567,  1583,  1589,  1611,  1595,  1610,  1543,  1578,  1588,
    1594,   257,  1605,  -510,  1612,   257,  1613,  1615,  1551,  1619,
    1624,  1625,  1626,  1629,  1630,  1631,  1559,  1633,  1798,  1799,
    1800,  1638,  1634,  1644,  1645,  1647,  1949,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   649,   527,
     528,  1590,  1649,  1650,  1651,   529,   257,  1652,  1653,  1656,
    1614,  1668,  1669,  1670,  1671,  1683,  1684,  1693,   257,  1697,
    1718,  1719,  1721,  1679,  1725,  1712,  1736,  1740,  1745,  1747,
    1761,   257,  1760,  1766,  1767,  1773,  1785,  1609,  1769,  1770,
    1775,  1776,  1787,  1792,  1804,  1801,  1802,  1806,  1807,  1809,
    1793,  1617,  1810,  1811,  1860,  1861,  1862,  1863,  1864,  1803,
     257,  1596,  1824,  1825,  1826,  1808,  1827,   257,  1816,  1829,
    1830,  1853,  1858,  1657,  1658,  1854,  1870,  1871,  1872,   257,
    1880,  1887,  1874,  1892,  1898,  1901,  1696,  1902,   257,  1904,
    1908,   257,  1906,  1909,   670,  1920,  1912,  1922,  1924,  1925,
    1940,  1945,   257,   667,  1950,  1968,   257,  1985,  1994,  2002,
    2003,  2004,  2005,  2007,  1765,  2008,  2009,  1899,  2013,  2010,
    2028,  1903,  2035,   407,  2046,  2027,  2051,  2052,  2055,  2038,
    2056,  1444,  1822,   329,  1461,  1958,  1646,   705,   112,   122,
     123,  1707,   124,   257,  1709,   130,   831,  1848,   149,     0,
    1720,     0,     0,     0,  1609,     0,     0,     0,     0,  1934,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1698,
       0,   257,  1941,     0,     0,     0,  1943,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1715,     0,  1955,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1724,     0,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   649,   527,   528,  1935,
    1791,     0,     0,   529,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1993,  1609,     0,     0,     0,
    1753,   257,   257,   257,   257,   257,   514,  1999,  2000,     0,
       0,     0,     0,     0,     0,     0,     0,  1790,     0,     0,
       0,     0,     0,     0,     0,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   649,   527,   528,     0,
       0,  1774,     0,   529,     0,     0,     0,     0,     0,   257,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   649,   527,   528,     0,     0,     0,     0,   529,     0,
     257,     0,     0,     0,     0,     0,     0,  1849,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   649,
     527,   528,  1859,     0,     0,  1817,   529,   407,     0,     0,
     372,     0,  1823,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   257,     0,     0,     0,     0,     0,
       0,     0,     0,  1609,   407,   407,   398,     0,     0,   404,
       0,     0,     0,   409,  1805,     0,     0,  1855,     0,     0,
       0,   407,     0,     0,     0,     0,     0,     0,     0,   419,
     421,   424,   425,     0,   427,   421,   429,   430,     0,   432,
     421,   434,   435,   436,   437,   438,   439,     0,   441,   442,
     443,     0,     0,     0,   421,     0,     0,     0,  1609,     7,
       8,     0,     0,     0,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   649,   527,   528,     0,     0,
       0,     0,   529,     0,     0,     0,  1900,     0,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,     0,     0,     0,     0,   529,  1951,  1952,  1953,
    1954,  1956,     0,     0,     0,   505,   507,   509,   510,   421,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   536,   421,   867,    25,    26,   868,    28,    29,
     869,    31,   870,    33,    34,    35,    36,     0,   557,     0,
      38,    39,    40,     0,     0,    42,     0,   566,   567,     0,
       0,   871,    48,   567,     0,    50,   872,     0,    53,   873,
     422,     0,     0,   588,     0,   422,  2006,     0,     0,     0,
     422,     0,     0,     0,     0,     0,     0,    70,     0,     0,
       0,     0,     0,   607,   422,     0,     0,   610,   611,   612,
       0,   614,     0,     0,  1609,   617,   618,   619,     0,     0,
     620,    84,    85,    86,     0,     0,  2025,     0,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   649,
     527,   528,     0,     0,     0,     0,   529,     0,     0,     0,
       0,     0,     0,  2047,  2049,   648,     0,     0,     0,   654,
       0,     0,     0,     0,     0,     0,   508,     0,     0,   422,
    2057,     0,     0,     0,     0,   665,   666,     0,     0,  1609,
       0,     0,     0,   422,     0,     0,   688,     0,     0,     0,
     874,     0,     0,     0,     0,  1919,     0,     0,     0,     0,
       0,     0,     0,     0,   507,     0,     0,     0,     0,     0,
     718,     0,     0,     0,     0,   723,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   737,
       0,     0,     0,     0,     0,   743,   744,   745,   746,   747,
     748,   749,   750,   751,   752,   753,   754,   755,   756,   757,
     758,   759,   760,   761,   762,   763,   764,   765,   765,     0,
     770,   771,     0,   773,     0,     0,     0,     0,     0,   779,
       0,     0,   781,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   765,     0,     0,     0,
     421,     0,     0,     0,     0,     0,  1975,     0,   798,   799,
     800,   801,   802,   803,   804,   805,   806,   807,   808,   809,
     811,   813,   814,   815,     0,   817,   818,     0,     0,     0,
       0,     0,   825,   826,   827,     0,     0,     0,     0,   833,
     836,   839,   842,   844,   822,   846,     0,   848,     0,   421,
     421,     0,     0,     0,   508,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   505,   648,   866,
       0,     0,     0,   879,   880,   881,   882,   883,   884,   885,
     886,   887,  1891,   514,     0,     0,   893,     0,   895,   896,
       0,     0,     0,   421,   421,   421,     0,     0,   903,   904,
     905,     0,     0,     0,     0,     0,     0,   766,   767,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     649,   527,   528,     0,   927,     0,     0,   529,     0,  1967,
       0,     0,     0,     0,     0,     0,   791,   421,     0,     0,
     422,     0,     0,   943,     0,   817,   818,     0,     0,     0,
       0,     0,   952,     0,     0,     0,     0,     0,   958,   514,
     812,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   421,     0,     0,     0,     0,     0,   974,   975,
       0,     0,     0,     0,     0,   421,   914,   984,   985,   422,
     422,   421,   990,     0,     0,     0,     0,     0,     0,     0,
     997,     0,     0,     0,  1000,     0,     0,   811,     0,  1004,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   649,   527,   528,     0,     0,     0,     0,   529,     0,
    1025,     0,     0,   422,   422,   422,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,
    1037,  1038,  1039,   421,  1041,  1042,  1043,  1044,  1045,  1046,
    1047,     0,     0,     0,     0,     0,     0,   422,     0,     0,
       0,  1057,     0,  1059,     0,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   713,   527,   528,  1072,
    1073,     0,     0,   529,   421,     0,  1078,     0,     0,     0,
       0,     0,   422,     0,     0,   421,     0,     0,     0,     0,
       0,     0,  1092,     0,     0,   422,     0,  1318,     0,     0,
       0,   422,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,   421,   812,     0,  1005,
     529,     0,     0,  1116,  1117,     0,     0,     0,     0,  1120,
       0,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   713,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,  1154,     0,     0,  1156,     0,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   649,
     527,   528,     0,   422,     0,  1170,   529,  1172,  1173,     0,
       0,     0,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,  1191,  1176,  1178,  1179,
     529,     0,     0,  1183,  1184,     0,     0,  1187,  1188,  1189,
    1190,  1204,  1192,     0,   422,     0,     0,  1198,  1210,  1211,
    1212,  1213,     0,     0,     0,   422,     0,  1222,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1246,     0,     0,     0,     0,     0,     0,     0,     0,
    1079,     0,     0,     0,     0,     0,   422,     0,     0,     0,
       0,     0,     0,  1257,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   649,   527,   528,     0,  1258,
    1259,     0,   529,     0,   676,     0,   677,     0,     0,     0,
       0,   421,  1576,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1286,     0,     0,     0,     0,     0,
       0,     0,  1287,  1288,  1289,     0,     0,     0,     0,  1291,
    1292,     0,  1293,     0,     0,     0,     0,     0,     0,  1298,
       0,  1299,  1300,  1301,  1302,  1303,     0,  1080,     0,     0,
       0,     7,     8,  1305,  1306,     0,     0,     0,     0,     0,
       0,     0,   421,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1322,     0,  1324,     0,  1326,     0,  1328,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   421,   421,   421,   421,
    1346,     0,     0,     0,     0,     0,     0,  1354,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   867,    25,    26,   868,
      28,    29,   869,    31,   870,    33,    34,    35,    36,  1385,
       0,   422,    38,    39,    40,     0,     0,    42,     0,     0,
       0,   421,     0,   871,    48,     0,     0,    50,   872,  1398,
      53,   873,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,     0,     0,     0,    70,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1414,     0,     0,  1419,     0,     0,     0,     0,     0,     0,
       0,     0,   422,    84,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1428,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1448,  1450,
       0,     0,     0,     0,     0,     0,   422,   422,   422,   422,
       0,     0,     0,     0,     0,  1452,  1391,     0,     0,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     649,   527,   528,     0,     0,     0,     0,   529,     0,     0,
       0,     0,   897,     0,     0,  1483,  1484,  1485,  1486,  1487,
       0,     0,     0,     0,  1492,  1493,  1495,     0,     0,     0,
       0,   422,  1502,     0,     0,     0,     0,     0,     0,     0,
       0,  1505,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1525,  1526,  1527,     0,     0,     0,     0,     0,     0,
       0,  1535,  1536,  1537,  1538,     0,     0,     0,     0,  1542,
       0,  1544,     0,     0,     0,     0,     0,     0,  1547,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   421,     0,     0,     0,     0,  1563,     0,     0,     0,
       0,     0,     0,     0,  1568,  1569,  1570,     0,     0,     0,
       0,     0,     0,     0,  1579,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1574,     0,  1577,     0,     0,
    1581,     0,  1584,     0,     0,     0,     0,     0,     0,     0,
       0,  1600,     0,     0,     0,     0,     0,  1606,  1607,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1602,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,  1621,  1622,     0,     0,     0,     0,     0,  1627,  1628,
       0,     0,     0,     0,     0,  1632,     0,     0,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   649,
     527,   528,  1635,  1636,  1637,     0,   529,     0,     0,     0,
       0,  1639,  1640,  1641,  1642,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1648,     0,     0,     0,     0,
       0,   422,     0,     0,   421,   421,  1659,     0,  1660,   867,
      25,    26,   868,    28,    29,   869,    31,   870,    33,    34,
      35,    36,     0,  1676,  1677,    38,    39,    40,     0,     0,
      42,     0,     0,     0,     0,     0,   871,    48,     0,     0,
      50,   872,   421,    53,   873,     0,  1695,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1705,     0,     0,
    1708,     0,    70,     0,     0,     0,     0,     0,     0,     6,
     337,     0,     0,     0,     0,     0,  1717,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,    85,    86,  1729,
       0,     0,     0,     0,  1735,     0,     0,     0,     0,     0,
    1737,     0,  1726,  1727,     0,     0,     0,     0,     0,     0,
     338,   339,   340,   341,   342,   343,   344,   345,   346,     0,
       0,     0,     0,   347,   348,   349,   350,     0,  1759,     0,
       0,   351,   352,   353,  1749,  1750,   354,     0,     0,     0,
       0,     0,     0,     0,   422,   422,     0,     0,   355,  1768,
     356,     0,     0,     0,     0,   941,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1777,     0,     0,     0,
       0,     0,     0,     0,     0,   507,     0,     0,     0,     0,
       0,     0,   422,     0,  1788,  1789,     0,   383,   421,     0,
       0,     0,     0,     0,  1797,     0,     0,     0,     0,     7,
       8,     0,     0,     0,     0,     0,     0,  1794,  1795,     0,
       0,     0,     0,     0,  1814,  1815,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1828,
       0,     0,     0,     0,     0,  1832,  1834,     0,     0,  1836,
    1837,  1838,  1839,     0,     0,     0,     0,     0,   421,     0,
       0,     0,     0,     0,   357,   358,   359,     0,     0,     0,
       0,     0,     0,   421,     0,     0,     0,   360,     0,   361,
     107,  1865,     0,     0,   867,    25,    26,   868,    28,    29,
     869,    31,   870,    33,    34,    35,    36,     0,     0,     0,
      38,    39,    40,     0,     0,    42,     0,  1876,     0,     0,
       0,   871,    48,  1881,  1882,    50,   872,     0,    53,   873,
       0,     0,     0,     0,     0,   508,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,   422,     0,
       0,   947,     0,     0,     0,     0,  1907,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   649,   527,
     528,    84,    85,    86,     0,   529,     0,   906,     0,     0,
       0,  1926,  1927,     0,     0,   859,     0,     0,     0,     0,
       0,  1931,  1932,     0,  1933,     0,  1835,  1936,  1937,  1938,
    1939,     0,   153,   154,     0,     0,     0,     0,   422,     0,
       0,     0,     0,  1947,     0,     0,     0,     0,   421,   421,
     421,   421,   421,   422,     0,     0,     0,   185,     6,  1735,
       0,     0,     0,  1963,   186,   187,   188,     0,     0,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,     0,     0,  1988,     0,     0,     0,     0,  1991,
    1992,     0,     0,  1995,  1996,  1997,  1998,     0,   217,   218,
     219,   220,     0,     0,     0,     0,   221,   421,     6,   337,
       0,     0,     0,     0,     0,     0,     0,   222,   223,   224,
       0,     0,     0,     0,     0,   225,    21,     0,     0,     0,
       0,  2015,   397,     0,     0,     0,     0,     0,     0,     0,
    2029,  2030,  2031,  2032,  2033,  2034,     0,     0,     0,   338,
     339,   340,   341,   342,   343,   344,   345,   346,     0,     0,
       0,     0,   347,   348,   349,   350,     0,     0,     0,     0,
     351,   352,   353,     0,     0,   354,     0,     0,   422,   422,
     422,   422,   422,     0,     0,     0,     0,   355,     0,   356,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   475,   476,   477,   478,   479,   480,     0,   482,
     483,     0,     0,     0,     0,   485,     0,     0,     0,     0,
       0,     0,   233,     0,   501,   502,   234,     0,     0,     0,
       0,   236,   237,   238,   239,   240,     0,   422,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   241,   371,     0,     0,     0,   243,     0,
       0,     0,     0,   319,     0,     0,     0,   556,     0,     0,
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   357,   358,   359,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   360,     0,   361,   107,
       0,     0,     0,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   649,   527,   528,     0,     0,     0,
       0,   529,     0,     0,     0,     0,     0,  1664,   621,   622,
     623,  1665,     0,     0,   627,   628,   629,   630,   631,   632,
     633,     0,   634,     0,     0,   635,   636,     0,     0,   639,
     185,     6,   337,     0,     0,     0,     0,   186,   187,   188,
       0,     0,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   217,   218,   219,   220,   347,   348,   349,   350,   221,
       0,     0,     0,   351,   352,   353,     0,     0,   354,     0,
     222,   223,   224,     0,     0,     0,     0,     0,   225,    21,
     355,     0,   356,     0,     0,   226,     0,     0,   227,     0,
       0,   228,     0,   229,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   230,     0,    49,     0,     0,   231,     0,   232,
       0,     0,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,    65,    66,    67,    68,    69,     0,     0,
       0,    73,     0,     0,    76,     0,     0,     0,     0,     0,
       0,     0,     0,   797,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   649,   527,   528,     0,     0,
       0,     0,   529,     0,     0,     0,     0,     0,  1699,     0,
       0,     0,  1700,     0,     0,   233,   357,   358,   359,   234,
     235,     0,     0,     0,   236,   237,   238,   239,   240,   360,
       0,   361,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   241,   242,     0,     0,
       0,   243,     0,     0,     0,     0,   319,   185,     6,   337,
     245,     0,     0,   246,   186,   187,   188,     0,     0,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,     0,     0,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   217,   218,
     219,   220,   347,   348,   349,   350,   221,     0,     0,     0,
     351,   352,   353,     0,     0,   354,     0,   222,   223,   224,
       0,     0,     0,     0,     0,   225,    21,   355,     0,   356,
       0,     0,   226,     0,     0,   227,     0,     0,   228,     0,
     229,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   230,
       0,    49,     0,     0,   231,     0,   232,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
      65,    66,    67,    68,    69,     0,     0,     0,    73,     0,
       0,    76,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,     0,     0,     0,     0,
     529,     0,     0,     0,     0,     0,  1851,     0,     0,     0,
    1852,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   233,   357,   358,   359,   234,   235,     0,     0,
       0,   236,   237,   238,   239,   240,   360,     0,   361,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   241,   242,     0,     0,     0,   243,     0,
       0,     0,     0,   319,   185,     6,   337,  1752,   382,     0,
     246,   186,   187,   188,     0,     0,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,     0,
       0,     0,     0,     0,     0,     0,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   217,   218,   219,   220,   347,
     348,   349,   350,   221,     0,     0,     0,   351,   352,   353,
       0,     0,   354,     0,   222,   223,   224,     0,     0,     0,
       0,     0,   225,    21,   355,     0,   356,     0,     0,     0,
       0,     0,     0,     0,     0,   365,   337,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   649,   527,
     528,     0,     0,     0,     0,   529,     0,     0,     0,     0,
       0,     0,     0,   383,     0,   698,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   338,   339,   340,   341,
     342,   343,   344,   345,   346,     0,     0,     0,     0,   347,
     348,   349,   350,     0,     0,     0,     0,   351,   352,   353,
       0,     0,   354,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   355,     0,   356,     0,     0,     0,
       0,     0,   384,     0,  1256,     0,     0,     0,     0,   233,
     357,   358,   359,   234,     0,     0,     0,     0,   236,   237,
     238,   239,   240,   360,     0,   361,   107,   385,   386,   387,
     388,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     241,   371,     0,     0,     0,   243,     0,   389,   390,     0,
     391,     0,   392,     0,   393,     0,   394,   246,   185,     6,
     318,     0,     0,     0,     0,   186,   187,   188,     0,     0,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,     0,     0,
     357,   358,   359,     0,     0,     0,     0,     0,     0,   217,
     218,   219,   220,   360,     0,   361,     0,   221,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   222,   223,
     224,     0,     0,     0,     0,     0,   225,    21,     0,     0,
       0,     0,     0,   226,     0,     0,   227,     0,     0,   228,
       0,   229,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     230,     0,    49,     0,     0,   231,     0,   232,     0,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    65,    66,    67,    68,    69,     0,     0,     0,    73,
       0,     0,    76,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   649,   527,   528,     0,     0,     0,
       0,   529,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   859,     0,     0,     0,     0,     0,     0,     0,  1429,
    1430,     0,     0,   233,     0,     0,     0,   234,   235,     0,
       0,     0,   236,   237,   238,   239,   240,     0,     0,     0,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   241,   242,     0,     0,     0,   243,
       0,     0,     0,     0,   319,   185,     6,  1550,   245,     0,
       0,   246,   186,   187,   188,     0,     0,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   217,   218,   219,   220,
       0,     0,     0,     0,   221,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   222,   223,   224,     0,     0,
       0,     0,     0,   225,    21,     0,     0,     0,     0,     0,
     226,     0,     0,   227,     0,     0,   228,     0,   229,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   230,     0,    49,
       0,     0,   231,     0,   232,     0,     0,     0,     0,     0,
     337,    59,    60,    61,    62,    63,     0,     0,    65,    66,
      67,    68,    69,     0,     0,     0,    73,     0,     0,    76,
       0,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   860,
       0,     0,     0,   347,   348,   349,   350,     0,     0,     0,
     233,   351,   352,   353,   234,   235,   354,     0,     0,   236,
     237,   238,   239,   240,     0,     0,     0,   107,   355,     0,
     356,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   241,   242,     0,     0,     0,   243,     0,     0,     0,
       0,   319,   185,     6,     0,   245,     0,     0,   246,   186,
     187,   188,     0,     0,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   217,   218,   219,   220,     0,     0,     0,
       0,   221,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   222,   223,   224,     0,     0,     0,     0,     0,
     225,    21,     0,     0,   357,   358,   359,   226,     0,     0,
     227,     0,     0,   228,     0,   229,     0,   360,     0,   361,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   230,     0,    49,     0,     0,   231,
       0,   232,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,    65,    66,    67,    68,    69,
       0,     0,     0,    73,     0,     0,    76,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   649,   527,
     528,     0,     0,     0,     0,   529,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   911,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   233,     0,     0,
       0,   234,   235,     0,     0,     0,   236,   237,   238,   239,
     240,     0,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   573,  1691,
       0,     0,     0,   243,     0,     0,     0,     0,   575,   185,
       6,     0,   284,   511,     0,   246,   186,   187,   188,     0,
       0,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     217,   218,   219,   220,     0,     0,     0,     0,   221,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   222,
     223,   224,     0,     0,     0,     0,     0,   225,    21,     0,
       0,     0,     0,     0,   226,     0,     0,   227,     0,     0,
     228,     0,   229,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   230,     0,    49,     0,     0,   231,     0,   232,     0,
       0,     0,     0,     0,     0,    59,    60,    61,    62,    63,
       0,     0,    65,    66,    67,    68,    69,     0,     0,     0,
      73,     0,     0,    76,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   649,   527,   528,     0,     0,
       0,     0,   529,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1040,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   233,     0,     0,     0,   234,   235,
       0,     0,     0,   236,   237,   238,   239,   240,     0,     0,
       0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   241,   242,     0,     0,     0,
     243,     0,     0,     0,     0,   244,   185,     6,     0,   245,
       0,     0,   246,   186,   187,   188,     0,     0,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   217,   218,   219,
     220,     0,     0,     0,     0,   221,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   222,   223,   224,     0,
       0,     0,     0,     0,   225,    21,     0,     0,     0,     0,
       0,   226,     0,     0,   227,     0,     0,   228,     0,   229,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   230,     0,
      49,     0,     0,   231,     0,   232,     0,     0,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,     0,    65,
      66,    67,    68,    69,     0,     0,     0,    73,     0,     0,
      76,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1048,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   233,     0,     0,     0,   234,   235,     0,     0,     0,
     236,   237,   238,   239,   240,     0,     0,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   241,   242,     0,     0,     0,   243,     0,     0,
       0,     0,   319,   185,     6,     0,   245,     0,     0,   246,
     186,   187,   188,     0,     0,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   217,   218,   219,   220,     0,     0,
       0,     0,   221,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   222,   223,   224,     0,     0,     0,     0,
       0,   225,    21,     0,     0,     0,     0,     0,   226,     0,
       0,   227,     0,     0,   228,     0,   229,     0,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   230,     0,    49,     0,     0,
     231,     0,   232,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,     0,     0,    65,    66,    67,    68,
      69,     0,     0,     0,    73,     0,     0,    76,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   649,
     527,   528,     0,     0,     0,     0,   529,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1049,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   233,     0,
       0,     0,   234,   235,     0,     0,     0,   236,   237,   238,
     239,   240,     0,     0,     0,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   241,
     420,     0,     0,     0,   243,     0,     0,     0,     0,   319,
     185,     6,     0,   506,     0,     0,   246,   186,   187,   188,
       0,     0,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   217,   218,   219,   220,     0,     0,     0,     0,   221,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     222,   223,   224,     0,     0,     0,     0,     0,   225,    21,
       0,     0,     0,     0,     0,   226,     0,     0,   227,     0,
       0,   228,     0,   229,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   230,     0,    49,     0,     0,   231,     0,   232,
       0,     0,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,    65,    66,    67,    68,    69,     0,     0,
       0,    73,     0,     0,    76,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   649,   527,   528,     0,
       0,     0,     0,   529,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1050,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   233,     0,     0,     0,   234,
     235,     0,     0,     0,   236,   237,   238,   239,   240,     0,
       0,     0,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   241,   420,     0,     0,
       0,   243,     0,     0,     0,     0,   319,   185,     6,     0,
       0,   511,     0,   246,   186,   187,   188,     0,     0,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   217,   218,
     219,   220,     0,     0,     0,     0,   221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   222,   223,   224,
       0,     0,     0,     0,     0,   225,    21,     0,     0,     0,
       0,     0,   226,     0,     0,   227,     0,     0,   228,     0,
     229,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   230,
       0,    49,     0,     0,   231,     0,   232,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
      65,    66,    67,    68,    69,     0,     0,     0,    73,     0,
       0,    76,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,     0,     0,     0,     0,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1055,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   233,     0,     0,     0,   234,   235,     0,     0,
       0,   236,   237,   238,   239,   240,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   241,   242,     0,     0,     0,   243,     0,
       0,     0,     0,   540,   185,     6,     0,   245,     0,     0,
     246,   186,   187,   188,     0,     0,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   217,   218,   219,   220,     0,
       0,     0,     0,   221,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   222,   223,   224,     0,     0,     0,
       0,     0,   225,    21,     0,     0,     0,     0,     0,   226,
       0,     0,   227,     0,     0,   228,     0,   229,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   230,     0,    49,     0,
       0,   231,     0,   232,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,    65,    66,    67,
      68,    69,     0,     0,     0,    73,     0,     0,    76,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     649,   527,   528,     0,     0,     0,     0,   529,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1056,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   233,
       0,     0,     0,   234,   235,     0,     0,     0,   236,   237,
     238,   239,   240,     0,     0,     0,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     241,   242,     0,     0,     0,   243,     0,     0,     0,     0,
     549,   185,     6,     0,   245,     0,     0,   246,   186,   187,
     188,     0,     0,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   217,   218,   219,   220,     0,     0,     0,     0,
     221,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   222,   223,   224,     0,     0,     0,     0,     0,   225,
      21,     0,     0,     0,     0,     0,   226,     0,     0,   227,
       0,     0,   228,     0,   229,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   230,     0,    49,     0,     0,   231,     0,
     232,     0,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    63,     0,     0,    65,    66,    67,    68,    69,     0,
       0,     0,    73,     0,     0,    76,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1058,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   233,     0,     0,     0,
     234,   235,     0,     0,     0,   236,   237,   238,   239,   240,
       0,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   241,   242,     0,
       0,     0,   243,     0,     0,     0,     0,   551,   185,     6,
       0,   245,     0,     0,   246,   186,   187,   188,     0,     0,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   217,
     218,   219,   220,     0,     0,     0,     0,   221,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   222,   223,
     224,     0,     0,     0,     0,     0,   225,    21,     0,     0,
       0,     0,     0,   226,     0,     0,   227,     0,     0,   228,
       0,   229,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     230,     0,    49,     0,     0,   231,     0,   232,     0,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    65,    66,    67,    68,    69,     0,     0,     0,    73,
       0,     0,    76,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   649,   527,   528,     0,     0,     0,
       0,   529,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1165,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   233,     0,     0,     0,   234,   235,     0,
       0,     0,   236,   237,   238,   239,   240,     0,     0,     0,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   241,   242,     0,     0,     0,   243,
       0,     0,     0,     0,   553,   185,     6,     0,   245,     0,
       0,   246,   186,   187,   188,     0,     0,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   217,   218,   219,   220,
       0,     0,     0,     0,   221,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   222,   223,   224,     0,     0,
       0,     0,     0,   225,    21,     0,     0,     0,     0,     0,
     226,     0,     0,   227,     0,     0,   228,     0,   229,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   230,     0,    49,
       0,     0,   231,     0,   232,     0,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,     0,     0,    65,    66,
      67,    68,    69,     0,     0,     0,    73,     0,     0,    76,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   649,   527,   528,     0,     0,     0,     0,   529,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1186,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     233,     0,     0,     0,   234,   235,     0,     0,     0,   236,
     237,   238,   239,   240,     0,     0,     0,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   241,   420,     0,     0,     0,   243,     0,     0,     0,
       0,   319,   185,     6,     0,   810,     0,     0,   246,   186,
     187,   188,     0,     0,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   217,   218,   219,   220,     0,     0,     0,
       0,   221,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   222,   223,   224,     0,     0,     0,     0,     0,
     225,    21,     0,     0,     0,     0,     0,   226,     0,     0,
     227,     0,     0,   228,     0,   229,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   230,     0,    49,     0,     0,   231,
       0,   232,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,    65,    66,    67,    68,    69,
       0,     0,     0,    73,     0,     0,    76,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   649,   527,
     528,     0,     0,     0,     0,   529,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1254,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   233,     0,     0,
       0,   234,   235,     0,     0,     0,   236,   237,   238,   239,
     240,     0,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   241,   242,
       0,     0,     0,   243,     0,     0,     0,     0,   319,   185,
       6,     0,  1558,     0,     0,   246,   186,   187,   188,     0,
       0,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     217,   218,   219,   220,     0,     0,     0,     0,   221,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   222,
     223,   224,     0,     0,     0,     0,     0,   225,    21,     0,
       0,     0,     0,     0,   226,     0,     0,   227,     0,     0,
     228,     0,   229,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   230,     0,    49,     0,     0,   231,     0,   232,     0,
       0,     0,     0,     0,     0,    59,    60,    61,    62,    63,
       0,     0,    65,    66,    67,    68,    69,     0,     0,     0,
      73,     0,     0,    76,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   649,   527,   528,     0,     0,
       0,     0,   529,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1338,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   233,     0,     0,     0,   234,   235,
       0,     0,     0,   236,   237,   238,   239,   240,     0,     0,
       0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   573,  1691,     0,     0,     0,
     243,     0,     0,     0,     0,   575,   185,     6,     0,   284,
       0,     0,   246,   186,   187,   188,     0,     0,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   217,   218,   219,
     220,     0,     0,     0,     0,   221,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   222,   223,   224,     0,
       0,     0,     0,     0,   225,    21,     0,     0,     0,     0,
       0,   226,     0,     0,   227,     0,     0,   228,     0,   229,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   230,     0,
      49,     0,     0,   231,     0,   232,     0,     0,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,     0,    65,
      66,    67,    68,    69,     0,     0,     0,    73,     0,     0,
      76,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1339,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   233,     0,     0,     0,   234,   235,     0,     0,     0,
     236,   237,   238,   239,   240,     0,     0,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   241,   420,     0,     0,     0,   243,   185,     6,
     337,     0,   319,     0,     0,   186,   187,   188,     0,   246,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,     0,     0,     0,     0,     0,     0,     0,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   217,
     218,   219,   220,   347,   348,   349,   350,   221,     0,     0,
       0,   351,   352,   353,     0,     0,   354,     0,   222,   223,
     224,     0,     0,     0,     0,     0,   225,    21,   355,     0,
     356,   185,     6,   337,     0,     0,     0,     0,   186,   187,
     188,     0,     0,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,     0,     0,     0,     0,
       0,     0,     0,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   217,   218,   219,   220,   347,   348,   349,   350,
     221,     0,     0,     0,   351,   352,   353,     0,     0,   354,
       0,   222,   223,   224,     0,     0,     0,     0,     0,   225,
      21,   355,     0,   356,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   649,   527,   528,     0,     0,
       0,     0,   529,   233,   357,   358,   359,   234,   978,     0,
       0,     0,   236,   237,   238,   239,   240,   360,     0,   361,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   241,   371,     0,     0,     0,   243,
       0,     0,     0,     0,   319,     0,     0,     0,  1449,     0,
       0,   246,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,     0,     0,     0,     0,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1390,     0,     0,     0,     0,     0,   233,   357,   358,   359,
     234,     0,     0,     0,     0,   236,   237,   238,   239,   240,
     360,     0,   361,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   241,   371,     0,
       0,     0,   243,     0,     0,     0,     0,   319,   185,     6,
     337,  1704,     0,     0,   246,   186,   187,   188,     0,     0,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,     0,     0,     0,     0,     0,     0,     0,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   217,
     218,   219,   220,   347,   348,   349,   350,   221,     0,     0,
       0,   351,   352,   353,     0,     0,   354,     0,   222,   223,
     224,     0,     0,     0,     0,     0,   225,    21,   355,     0,
     356,   185,     6,   337,     0,     0,     0,     0,   186,   187,
     188,     0,     0,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,     0,     0,     0,     0,
       0,     0,     0,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   217,   218,   219,   220,   347,   348,   349,   350,
     221,     0,     0,     0,   351,   352,   353,     0,     0,   354,
       0,   222,   223,   224,     0,     0,     0,     0,     0,   225,
      21,   355,     0,   356,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   649,   527,   528,     0,     0,
       0,     0,   529,   233,   357,   358,   359,   234,  1066,     0,
       0,     0,   236,   237,   238,   239,   240,   360,     0,   361,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   241,   371,     0,     0,     0,   243,
       0,     0,     0,     0,   319,     0,     0,     0,  1796,     0,
       0,   246,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,     0,     0,     0,     0,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1488,     0,     0,     0,     0,     0,   233,   357,   358,   359,
     234,     0,     0,     0,     0,   236,   237,   238,   239,   240,
     360,     0,   361,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   241,   371,     0,
       0,     0,   243,   185,     6,     0,     0,   319,     0,     0,
     186,   187,   188,     0,   246,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,     0,     0,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   649,   527,   528,   217,   218,   219,   220,   529,     0,
       0,     0,   221,     0,     0,     0,     0,     0,  1489,     0,
       0,     0,     0,   222,   223,   224,   185,     6,     0,  1203,
       0,   225,    21,   186,   187,   188,     0,     0,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,     0,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   649,   527,   528,   217,   218,   219,
     220,   529,     0,     0,     0,   221,     0,     0,     0,     0,
       0,  1490,     0,     0,     0,     0,   222,   223,   224,     0,
       0,     0,     0,     0,   225,    21,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1497,     0,     0,     0,   233,     0,
       0,     0,   234,     0,     0,     0,     0,   236,   237,   238,
     239,   240,     0,     0,     0,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   573,
     574,     0,     0,     0,   243,     0,     0,     0,     0,   575,
       0,     0,     0,   284,     0,     0,   246,     0,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   649,
     527,   528,     0,     0,     0,     0,   529,     0,     0,     0,
       0,   233,     0,     0,     0,   234,  1498,     0,     0,     0,
     236,   237,   238,   239,   240,     0,     0,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   241,   371,     0,     0,     0,   243,   185,     6,
       0,  1353,   319,     0,     0,   186,   187,   188,     0,   246,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,     0,     0,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   649,   527,   528,   217,
     218,   219,   220,   529,     0,     0,     0,   221,     0,     0,
       0,     0,     0,  1499,     0,     0,   185,     6,   222,   223,
     224,     0,     0,   186,   187,   188,   225,    21,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,     0,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   649,   527,   528,   217,   218,   219,
     220,   529,     0,     0,     0,   221,     0,     0,     0,     0,
       0,  1500,     0,     0,     0,     0,   222,   223,   224,     0,
       0,     0,     0,     0,   225,    21,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1616,     0,     0,     0,     0,     0,
       0,     0,     0,   233,     0,     0,     0,   234,     0,     0,
       0,     0,   236,   237,   238,   239,   240,     0,     0,     0,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   241,   371,     0,     0,     0,   243,
       0,     0,     0,     0,   319,     7,     8,     0,     0,     0,
       0,   246,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,     0,     0,     0,     0,
     529,   233,     0,     0,     0,   234,  1145,     0,     0,     0,
     236,   237,   238,   239,   240,     7,     8,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   241,   371,     0,     0,     0,   243,     0,     0,
       0,     0,   319,     0,     0,     0,     0,     0,     0,   246,
     867,    25,    26,   868,    28,    29,   869,    31,   870,    33,
      34,    35,    36,     0,     0,     0,    38,    39,    40,     7,
       8,    42,     0,     0,     0,     0,     0,   871,    48,     0,
       0,    50,   872,     0,    53,   873,     0,     0,     0,     0,
     867,    25,    26,   868,    28,    29,   869,    31,   870,    33,
      34,    35,    36,    70,     0,     0,    38,    39,    40,     0,
       0,    42,     0,     0,     0,     0,     0,   871,    48,     0,
       0,    50,   872,     0,    53,   873,     0,    84,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,   867,    25,    26,   868,    28,    29,
     869,    31,   870,    33,    34,    35,    36,     0,     0,     0,
      38,    39,    40,     7,     8,    42,     0,    84,    85,    86,
       0,   871,    48,     0,     0,    50,   872,     0,    53,   873,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   649,   527,   528,     0,     0,   942,    70,   529,     0,
       0,     7,     8,     0,     0,     0,     0,     0,  1730,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1113,     0,   867,    25,
      26,   868,    28,    29,   869,    31,   870,    33,    34,    35,
      36,     0,     0,     0,    38,    39,    40,     0,     0,    42,
       0,     0,     0,     0,     0,   871,    48,     0,     0,    50,
     872,     0,    53,   873,     0,     0,   867,    25,    26,   868,
      28,    29,   869,    31,   870,    33,    34,    35,    36,     0,
    1114,    70,    38,    39,    40,     7,     8,    42,     0,     0,
       0,     0,     0,   871,    48,     0,     0,    50,   872,     0,
      53,   873,     0,     0,     0,    84,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
       0,     0,     0,     7,     8,     0,     0,     0,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   649,
     527,   528,     0,    84,    85,    86,   529,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1731,     0,     0,     0,
     867,    25,    26,   868,    28,    29,   869,    31,   870,    33,
      34,    35,    36,     0,  1142,     0,    38,    39,    40,     0,
       0,    42,     0,     0,     0,     0,     0,   871,    48,     0,
       0,    50,   872,     0,    53,   873,     0,     0,   867,    25,
      26,   868,    28,    29,   869,    31,   870,    33,    34,    35,
      36,     0,  1171,    70,    38,    39,    40,     7,     8,    42,
       0,     0,     0,     0,     0,   871,    48,     0,     0,    50,
     872,     0,    53,   873,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,     0,     0,     7,     8,     0,     0,     0,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   649,   527,   528,     0,    84,    85,    86,   529,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1751,     0,
       0,     0,   867,    25,    26,   868,    28,    29,   869,    31,
     870,    33,    34,    35,    36,     0,  1201,     0,    38,    39,
      40,     0,     0,    42,     0,     0,     0,     0,     0,   871,
      48,     0,     0,    50,   872,     0,    53,   873,     0,     0,
     867,    25,    26,   868,    28,    29,   869,    31,   870,    33,
      34,    35,    36,     0,  1336,    70,    38,    39,    40,     0,
       0,    42,     0,     0,     0,     0,     0,   871,    48,     0,
       0,    50,   872,     0,    53,   873,     0,     0,     0,    84,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,     0,     0,     0,     0,     0,     0,
       0,    -4,     1,     0,     0,    -4,     0,     0,     0,     0,
       0,     0,     0,     0,    -4,    -4,     0,    84,    85,    86,
       0,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,    -4,    -4,     0,     0,  1910,  1755,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   649,   527,   528,    -4,    -4,    -4,     0,   529,     0,
      -4,    -4,     0,    -4,  1209,     0,     0,    -4,    -4,     0,
      -4,    -4,     0,    -4,     0,     0,  1977,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,     0,     0,    -4,    -4,    -4,    -4,    -4,     0,
      -4,     0,    -4,    -4,    -4,    -4,    -4,    -4,    -4,     0,
      -4,    -4,    -4,    -4,    -4,    -4,     0,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,     0,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,     0,     6,     0,    -4,    -4,    -4,     0,     0,     0,
      -4,     7,     8,     0,     0,    -4,    -4,    -4,    -4,     0,
       0,    -4,     0,    -4,     0,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,     0,
       0,     9,    10,     0,     0,    -4,    -4,    -4,     0,     0,
       0,     0,     0,     0,    -4,     0,    -4,     0,     0,     0,
       0,    11,    12,    13,     0,     0,     0,    14,    15,     0,
      16,     0,     0,     0,    17,    18,     0,    19,    20,     0,
      21,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     0,
       0,    37,    38,    39,    40,    41,     0,    42,     0,    43,
      44,    45,    46,    47,    48,    49,     0,    50,    51,    52,
      53,    54,    55,     0,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,     7,     8,
       0,    79,    80,    81,     0,     0,     0,    82,     0,     0,
       0,     0,    83,    84,    85,    86,     0,     0,    87,     0,
      88,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,     0,     0,     0,     0,
       0,     0,   103,   104,   105,     0,     0,     0,     0,     0,
       0,   106,     0,   107,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   649,   527,   528,     0,     0,
       0,     0,   529,   867,    25,    26,   868,    28,    29,   869,
      31,   870,    33,    34,    35,    36,     0,     0,     0,    38,
      39,    40,     0,     0,    42,     0,     0,     0,     0,     0,
     871,    48,     0,     0,    50,   872,     0,    53,   873,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     649,   527,   528,     0,     0,     0,    70,   529,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1756,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,    85,    86,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   649,   527,   528,     0,     0,     0,
       0,   529,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1757,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,     0,     0,     0,     0,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1758,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1820,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   649,   527,   528,     0,     0,     0,     0,   529,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1877,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     649,   527,   528,     0,     0,     0,     0,   529,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1878,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   649,
     527,   528,     0,     0,     0,     0,   529,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1888,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   649,   527,
     528,     0,     0,     0,     0,   529,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1893,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1894,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   649,   527,   528,     0,
       0,     0,     0,   529,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1895,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   649,   527,   528,     0,     0,
       0,     0,   529,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1896,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   649,   527,   528,     0,     0,     0,
       0,   529,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1929,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,     0,     0,     0,     0,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1960,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1965,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   649,   527,   528,     0,     0,     0,     0,   529,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1966,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     649,   527,   528,     0,     0,     0,     0,   529,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1969,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   649,
     527,   528,     0,     0,     0,     0,   529,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1970,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   649,   527,
     528,     0,     0,     0,     0,   529,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1971,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1972,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   649,   527,   528,     0,
       0,     0,     0,   529,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2016,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   649,   527,   528,     0,     0,
       0,     0,   529,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2017,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   649,   527,   528,     0,     0,     0,
       0,   529,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2018,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,     0,     0,     0,     0,
     529,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2019,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,     0,  1340,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
    1410,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,     0,  1411,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
    1412,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,     0,  1413,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
    1662,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,     0,  1681,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
    1741,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,     0,  1742,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
    1743,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,     0,  1744,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
    1746,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,     0,  1771,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
    1786,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,     0,  1840,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
    1857,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,     0,  1866,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
    1867,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,     0,  1886,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
    1946,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,     0,  1990,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
    2014,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,     0,  2040,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
    2041,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,     0,  2042,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
    2043,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,     0,  2044,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,     0,     0,
    2045,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,     0,   650,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   649,   527,   528,     0,
       0,     0,     0,   529,     0,     0,     0,     0,   852,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     649,   527,   528,     0,     0,     0,     0,   529,     0,     0,
       0,     0,  1764,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   649,   527,   528,     0,     0,     0,
       0,   529,     0,   676,     0,   677,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,   917,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     649,   527,   528,     0,     0,     0,     0,   529,     0,     0,
       0,   960,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,     0,     0,     0,     0,
     529,     0,     0,     0,  1084,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   649,   527,   528,     0,
       0,     0,     0,   529,     0,     0,     0,  1158,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   649,
     527,   528,     0,     0,     0,     0,   529,     0,     0,     0,
    1159,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,     0,     0,  1163,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   649,   527,   528,     0,     0,
       0,     0,   529,     0,     0,     0,  1164,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   649,   527,
     528,     0,     0,     0,     0,   529,     0,     0,     0,  1245,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   649,   527,   528,     0,     0,     0,     0,   529,     0,
       0,     0,  1252,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   649,   527,   528,     0,     0,     0,
       0,   529,     0,     0,     0,  1441,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,     0,     0,  1564,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     649,   527,   528,     0,     0,     0,     0,   529,     0,     0,
       0,  1723,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,     0,     0,     0,     0,
     529,     0,     0,     0,  1772,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   649,   527,   528,     0,
       0,     0,     0,   529,     0,   712,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,   716,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   649,   527,
     528,     0,     0,     0,     0,   529,     0,   717,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   649,
     527,   528,     0,     0,     0,     0,   529,     0,   719,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     649,   527,   528,     0,     0,     0,     0,   529,     0,   721,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   649,   527,   528,     0,     0,     0,     0,   529,     0,
     722,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,   724,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,     0,     0,     0,     0,
     529,     0,   726,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   649,   527,   528,     0,     0,     0,
       0,   529,     0,   727,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   649,   527,   528,     0,     0,
       0,     0,   529,     0,   728,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   649,   527,   528,     0,
       0,     0,     0,   529,     0,   729,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,   730,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   649,   527,
     528,     0,     0,     0,     0,   529,     0,   731,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   649,
     527,   528,     0,     0,     0,     0,   529,     0,   733,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     649,   527,   528,     0,     0,     0,     0,   529,     0,   734,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   649,   527,   528,     0,     0,     0,     0,   529,     0,
     735,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,   795,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,     0,     0,     0,     0,
     529,     0,   823,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   649,   527,   528,     0,     0,     0,
       0,   529,     0,   888,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   649,   527,   528,     0,     0,
       0,     0,   529,     0,   906,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   649,   527,   528,     0,
       0,     0,     0,   529,     0,   907,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,   908,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   649,   527,
     528,     0,     0,     0,     0,   529,     0,   909,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   649,
     527,   528,     0,     0,     0,     0,   529,     0,   915,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     649,   527,   528,     0,     0,     0,     0,   529,     0,   916,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   649,   527,   528,     0,     0,     0,     0,   529,     0,
     946,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,   959,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,     0,     0,     0,     0,
     529,     0,  1008,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   649,   527,   528,     0,     0,     0,
       0,   529,     0,  1013,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   649,   527,   528,     0,     0,
       0,     0,   529,     0,  1026,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   649,   527,   528,     0,
       0,     0,     0,   529,     0,  1083,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,  1089,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   649,   527,
     528,     0,     0,     0,     0,   529,     0,  1090,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   649,
     527,   528,     0,     0,     0,     0,   529,     0,  1091,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     649,   527,   528,     0,     0,     0,     0,   529,     0,  1105,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   649,   527,   528,     0,     0,     0,     0,   529,     0,
    1106,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,  1107,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,     0,     0,     0,     0,
     529,     0,  1144,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   649,   527,   528,     0,     0,     0,
       0,   529,     0,  1146,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   649,   527,   528,     0,     0,
       0,     0,   529,     0,  1147,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   649,   527,   528,     0,
       0,     0,     0,   529,     0,  1148,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,  1149,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   649,   527,
     528,     0,     0,     0,     0,   529,     0,  1150,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   649,
     527,   528,     0,     0,     0,     0,   529,     0,  1151,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     649,   527,   528,     0,     0,     0,     0,   529,     0,  1152,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   649,   527,   528,     0,     0,     0,     0,   529,     0,
    1157,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,  1244,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,     0,     0,     0,     0,
     529,     0,  1251,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   649,   527,   528,     0,     0,     0,
       0,   529,     0,  1501,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   649,   527,   528,     0,     0,
       0,     0,   529,     0,  1534,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   649,   527,   528,     0,
       0,     0,     0,   529,     0,  1663,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   649,   527,   528,
       0,     0,     0,     0,   529,     0,  1672,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   649,   527,
     528,     0,     0,     0,     0,   529,     0,  1673,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   649,
     527,   528,     0,     0,     0,     0,   529,     0,  1674,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     649,   527,   528,     0,     0,     0,     0,   529,     0,  1675,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   649,   527,   528,     0,     0,     0,     0,   529,     0,
    1680,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   649,   527,   528,     0,     0,     0,     0,   529,
       0,  1703,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   649,   527,   528,     0,     0,     0,     0,
     529,     0,  1959,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   649,   527,   528,     0,     0,     0,
       0,   529,     0,  2011
};

static const yytype_int16 yycheck[] =
{
       3,   277,   570,   571,    60,    61,  1143,    63,   686,     3,
    1139,     4,  1552,   484,     4,   671,     4,   695,    21,     4,
    1257,  1586,  1587,   679,   181,   182,   183,     5,     4,     4,
       4,     4,     4,   289,     4,     4,    98,     5,   100,     6,
       6,     4,     6,     5,    47,     6,     4,    94,     5,     5,
     306,     5,     4,     6,     6,     4,     4,     4,   229,    94,
     231,     9,   226,   227,     7,    94,     6,    96,   115,   233,
     132,    74,   232,     6,   219,   220,     6,   132,   238,    82,
     115,     6,   219,   220,    87,   219,   220,   226,   227,     7,
     230,   153,     9,   238,  1634,    98,   219,   220,   238,     7,
     125,   238,     6,   230,   238,   232,   263,   264,   265,   219,
     220,   238,   368,     0,   370,   238,   237,   142,   219,   220,
     376,   219,   220,     8,   234,   150,   151,   152,     9,   132,
     230,   156,   157,   136,   137,   229,    88,   238,   238,   233,
     238,   144,     6,   300,   301,   302,    91,   219,   220,    94,
     621,   154,   623,   156,   219,   220,   313,   314,   161,   170,
     226,   227,     7,   166,   231,     9,   238,   233,   219,   220,
     173,   219,   220,   238,   177,   186,   187,   180,   181,   182,
     183,   184,   233,    14,   160,   161,   162,   163,     9,   230,
     238,   219,   220,   181,   158,   173,   230,   238,   170,   171,
      91,   170,   171,    94,   238,   158,   230,   219,   220,   234,
     238,   173,   185,   229,   238,   205,   173,   205,     6,   173,
     205,  1761,     6,    94,   280,   281,   238,   230,   219,   220,
     229,   205,   288,   289,    88,   205,  1365,    91,   231,   242,
      94,     6,   245,   246,   237,   233,   236,   238,   233,   216,
     216,   235,     8,   237,   229,   233,   259,   205,   234,   262,
     263,   264,   265,   233,   229,   233,   229,   270,   271,   272,
     233,   229,   233,   276,   277,   233,  1816,   233,   226,   227,
     229,   229,   229,   231,   233,   233,   233,   235,   206,   207,
     208,   209,   235,   233,   219,   220,   229,   300,   301,   302,
     233,   229,     6,   959,   960,   561,   562,     7,   226,   227,
     313,   314,   229,     6,   231,   219,   220,   235,   235,    47,
     382,   229,   578,   231,     6,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   496,
     497,   498,   499,   228,     6,   226,   227,   231,   229,   234,
     231,   232,   233,   229,   235,   219,   220,   233,  1923,   615,
       7,   206,   207,   208,   209,   226,   227,   229,   132,   219,
     220,   374,   136,   137,   235,   378,   379,   219,   220,   156,
       8,   229,   226,   227,   161,   229,   229,   231,   238,   166,
     393,   235,   395,   229,   650,   229,   238,   233,   401,   393,
     219,   220,   229,   180,  1082,   226,   227,   229,   229,   173,
     231,     4,   233,   416,   235,    88,   230,   420,    91,   238,
     184,    94,  1962,    96,   238,   229,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     230,  1097,   504,  1099,   228,  1101,   232,  1103,   238,   177,
     219,   220,   238,   229,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   229,   238,
     473,   474,   228,   108,   230,   478,   229,   480,   481,   482,
     483,   484,   259,   545,   546,   547,   548,  2027,   230,   229,
     232,   233,   495,   496,   497,   498,   499,   500,   501,   502,
     503,  1738,   230,   506,     7,   229,   206,   207,   208,   209,
     219,   220,   568,   569,   219,   220,   229,   573,   219,   220,
     232,   219,   220,   526,     6,     7,   238,   530,   229,   238,
     219,   220,   233,   238,   262,     6,   129,   130,   131,   132,
     238,    94,   270,   271,   272,   219,   220,     6,   276,   238,
     233,   144,   555,   556,   147,   233,   219,   220,   229,   206,
     207,   208,   209,    88,   238,  1243,    91,   570,   571,    94,
     229,    96,  1250,    94,   636,   238,   570,   571,   229,   226,
     227,     6,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   599,   600,   601,   855,
     228,   129,   130,   219,   220,   234,   234,   135,    91,   238,
     374,   233,   205,   229,     4,     5,   671,   233,   621,   622,
     623,   624,   625,   626,   627,   628,   629,   233,   631,   632,
     633,   634,   635,     7,   637,   638,   639,   640,   219,   220,
     643,    91,     6,     7,    94,   230,    96,   232,  1885,   711,
     378,   379,   233,   238,   229,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    94,   219,   220,   395,    58,    59,
      60,    61,     6,   219,   220,   678,    66,    67,    68,   233,
     683,    71,   219,   220,   221,   222,   223,    91,   691,   692,
     230,   228,   232,    83,   697,    85,    91,   700,   238,   230,
     703,   232,   705,   206,   207,   208,   209,   238,    94,   229,
     713,   231,   715,   230,   478,   232,   480,     6,   482,   483,
       4,   238,    88,   226,   227,    91,     4,   234,    94,   506,
      96,   238,   122,   230,   234,   232,   500,   501,   238,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   481,   230,   234,   232,   228,     4,   238,
    1416,   230,   238,   232,   819,    91,   769,   495,    94,   238,
      96,    94,  1428,    96,  1911,   221,   222,   223,   555,   556,
     234,    94,   228,    96,   238,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   189,
     190,   191,   858,   228,   129,   130,     4,   810,    91,   865,
     135,    94,   202,    96,   204,   205,   234,   229,   821,  1948,
     238,   877,   599,   600,   601,   234,   829,   234,     4,   238,
       6,   238,   206,   207,   208,   209,   226,   227,   234,     6,
     234,  1978,   238,   233,   238,   235,   229,   229,   229,   852,
     233,   233,   226,   227,   229,     6,     6,   229,   622,     4,
     624,   625,   626,   627,   628,   629,   643,   631,   632,   633,
     634,   229,  2001,   637,   638,   639,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     229,   234,   234,   234,   228,   238,   238,   238,   234,   234,
     962,   678,   238,   238,   959,   960,   234,   234,     6,   233,
     238,   238,   234,   234,   691,   234,   238,   238,     6,   238,
     697,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   237,   700,   229,   234,   228,
     234,   705,   238,    88,   238,   125,  1002,    92,   951,  1225,
     231,   231,   229,    98,    99,     9,   101,   102,  1429,  1430,
    1528,  1529,   142,   966,   125,   234,   229,   229,   971,   238,
     150,   151,   152,   229,   119,   234,   156,   157,   981,   238,
     234,   142,   234,   234,   238,   229,   238,   238,   115,   150,
     151,   152,   769,   234,   234,   156,   157,   238,   238,   230,
     229,   232,   233,  1006,  1007,   125,  1009,   229,  1011,  1012,
     229,  1014,   233,  1016,  1017,  1018,  1019,  1020,  1021,  1022,
    1023,  1024,   142,   234,  1027,   229,   229,   238,  1083,  1084,
     150,   151,   152,   810,   234,   234,   156,   157,   238,   238,
     229,   234,   234,   234,   821,   238,   238,   238,     4,     5,
     229,   234,   234,     4,   234,   238,   238,  1060,  1061,  1062,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,  1077,   852,   234,   234,   228,   234,
     238,   238,   234,   238,  1087,  1088,   238,   229,   229,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   233,   125,
     233,   829,    58,    59,    60,    61,   229,   233,   229,   234,
      66,    67,    68,   238,   234,    71,   142,   229,   229,  1122,
    1123,  1124,  1125,   229,   150,   151,   152,    83,   229,    85,
     156,   157,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   229,   229,     6,  1423,   228,  1405,
    1153,  1407,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,  1166,  1167,  1168,   122,   228,   234,   234,
       6,   234,   238,   238,  1177,   238,   234,   234,   234,  1182,
     238,   238,   238,  1186,   234,   231,   231,   234,   238,  1244,
    1245,   238,  1195,  1255,  1197,     6,   234,   234,   234,  1767,
     238,   238,   238,  1206,     6,   234,   233,   231,   234,   238,
     233,   233,   231,   233,   173,   229,   229,   981,   229,   229,
     229,     6,  1225,   951,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   189,   190,   191,   231,   228,     6,   233,
       6,     6,  1245,   971,   233,     7,   202,     6,   204,   205,
    1027,   233,     6,    84,   238,   238,   230,     7,     6,     6,
       6,     6,  1265,   230,   233,    63,    63,    63,  1271,    63,
     228,     4,     7,     7,   230,     6,   232,     6,  1006,  1007,
       6,  1009,   230,  1011,  1012,     6,  1014,   233,  1016,  1017,
    1018,  1019,  1020,  1021,  1022,  1023,  1024,  1061,  1062,     7,
       6,   170,     7,     6,     6,     6,   233,   232,  1364,   230,
       6,  1088,  1315,  1316,  1317,   233,   233,   233,  1321,   233,
    1323,   234,  1325,  1599,  1327,  1796,  1329,  1330,  1331,   233,
     235,     7,  1060,     6,   231,     4,     6,   230,     6,     6,
       6,   231,  1404,     7,   173,  1122,  1123,  1124,  1125,  1077,
       7,     7,  1355,     7,   173,     7,     7,     7,   173,  1087,
       7,  1416,     7,  1366,     7,     7,     7,     7,     7,     7,
       7,  1374,   233,     6,  1377,   230,   232,   230,     7,   238,
     238,   238,   233,   233,   233,   233,   238,  1449,   230,   235,
       7,     4,   233,   230,     6,   238,   230,   230,   238,   238,
    1177,   125,   230,  1459,   229,   235,   238,   234,   234,     7,
       6,   235,     7,     7,     7,   238,   230,   230,  1182,     9,
    1423,   238,  1186,   230,   232,  1153,  1429,  1430,   238,     7,
     234,  1195,  1435,  1197,   233,     6,     6,     4,  1166,  1167,
    1168,  1444,    45,    45,   235,   233,  1449,   216,   235,  1504,
       7,     7,    96,     6,   229,     7,     7,     7,     7,     6,
     106,     7,  1524,     7,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,  1206,     7,
       7,  1245,   228,     7,     4,   229,   229,   229,     4,     6,
     229,     6,   233,     7,     7,     7,     7,  1553,  1554,  1555,
    1556,  1557,  1558,     7,     7,     7,     7,     6,   233,     6,
       6,  1573,    94,     7,     6,     6,     4,  1520,  1521,     4,
    1776,     4,   236,   238,   233,  1528,  1529,   234,     6,  1591,
    1806,     6,     6,   233,  1528,  1529,     7,  1265,     6,   231,
       6,   229,   229,  1271,   233,     6,     6,     6,     6,  1552,
     235,     6,   233,   233,   119,  1558,  1611,     6,   233,   233,
       6,     6,   173,     6,  1567,     6,     6,     6,   233,     6,
       6,     6,  1575,     6,     6,  1578,  1638,     5,     4,     6,
     233,   230,     6,     4,     6,  1588,     6,  1315,  1316,  1317,
       7,     6,  1595,  1321,     6,  1323,  1599,  1325,  1601,  1327,
    1377,  1329,  1330,  1331,     6,   233,   233,   233,   233,   231,
     233,     6,   233,   233,   233,  1871,     6,   233,   233,   233,
     238,   169,   230,     6,     4,     7,   233,  1355,   238,   238,
     235,  1634,   229,   233,     6,  1638,     6,     4,  1366,     7,
       6,     6,     6,     6,    92,     6,  1374,     5,  1710,  1711,
    1712,     4,   233,   233,     6,     6,  1912,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,     6,     6,     6,     6,   228,  1679,     6,     6,     6,
    1444,     6,     6,     6,     6,     6,     6,     6,  1691,     6,
       6,     4,     6,   238,     6,   238,     6,   233,   233,     5,
     233,  1704,     6,     6,   233,     6,     6,  1435,   234,   234,
       7,   233,   168,     6,     6,   234,   234,     7,     6,     6,
     230,  1449,     6,     6,  1780,  1781,  1782,  1783,  1784,   234,
    1733,     6,     6,     6,     6,   235,     6,  1740,   233,     6,
       6,     6,     6,  1520,  1521,   234,   230,   233,     6,  1752,
       6,   233,   171,     7,   233,     6,     6,   233,  1761,     6,
       6,  1764,   234,   125,  1767,     6,   233,     6,     6,   233,
       6,     6,  1775,  1767,     6,   229,  1779,   234,   230,     6,
       6,     6,     6,     6,     6,     6,     6,  1843,     6,   233,
       6,  1847,     6,  1796,     6,   233,     6,     6,     6,   233,
       6,  1249,  1739,  1806,  1264,  1925,  1509,   413,     3,     3,
       3,  1575,     3,  1816,  1578,     3,   544,  1763,    21,    -1,
    1595,    -1,    -1,    -1,  1552,    -1,    -1,    -1,    -1,  1891,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1567,
      -1,  1844,  1898,    -1,    -1,    -1,  1902,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1588,    -1,  1918,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1601,    -1,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,  1892,
       6,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1967,  1634,    -1,    -1,    -1,
    1638,  1914,  1915,  1916,  1917,  1918,     8,  1973,  1974,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1704,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,    -1,
      -1,  1679,    -1,   228,    -1,    -1,    -1,    -1,    -1,  1962,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,
    1983,    -1,    -1,    -1,    -1,    -1,    -1,  1764,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,  1779,    -1,    -1,  1733,   228,  2010,    -1,    -1,
     106,    -1,  1740,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2027,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1761,  2037,  2038,   132,    -1,    -1,   135,
      -1,    -1,    -1,   139,     6,    -1,    -1,  1775,    -1,    -1,
      -1,  2054,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,
     156,   157,   158,    -1,   160,   161,   162,   163,    -1,   165,
     166,   167,   168,   169,   170,   171,   172,    -1,   174,   175,
     176,    -1,    -1,    -1,   180,    -1,    -1,    -1,  1816,    13,
      14,    -1,    -1,    -1,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,  1844,    -1,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,    -1,    -1,    -1,   228,  1914,  1915,  1916,
    1917,  1918,    -1,    -1,    -1,   241,   242,   243,   244,   245,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   258,   259,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,   274,    -1,
     104,   105,   106,    -1,    -1,   109,    -1,   283,   284,    -1,
      -1,   115,   116,   289,    -1,   119,   120,    -1,   122,   123,
     156,    -1,    -1,   299,    -1,   161,  1983,    -1,    -1,    -1,
     166,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,
      -1,    -1,    -1,   319,   180,    -1,    -1,   323,   324,   325,
      -1,   327,    -1,    -1,  1962,   331,   332,   333,    -1,    -1,
     336,   165,   166,   167,    -1,    -1,  2010,    -1,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
      -1,    -1,    -1,  2037,  2038,   371,    -1,    -1,    -1,   375,
      -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,   245,
    2054,    -1,    -1,    -1,    -1,   391,   392,    -1,    -1,  2027,
      -1,    -1,    -1,   259,    -1,    -1,   402,    -1,    -1,    -1,
     234,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   420,    -1,    -1,    -1,    -1,    -1,
     426,    -1,    -1,    -1,    -1,   431,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   445,
      -1,    -1,    -1,    -1,    -1,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,    -1,
     476,   477,    -1,   479,    -1,    -1,    -1,    -1,    -1,   485,
      -1,    -1,   488,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   502,    -1,    -1,    -1,
     506,    -1,    -1,    -1,    -1,    -1,     6,    -1,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,    -1,   531,   532,    -1,    -1,    -1,
      -1,    -1,   538,   539,   540,    -1,    -1,    -1,    -1,   545,
     546,   547,   548,   549,   535,   551,    -1,   553,    -1,   555,
     556,    -1,    -1,    -1,   420,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   573,   574,   575,
      -1,    -1,    -1,   579,   580,   581,   582,   583,   584,   585,
     586,   587,     7,     8,    -1,    -1,   592,    -1,   594,   595,
      -1,    -1,    -1,   599,   600,   601,    -1,    -1,   604,   605,
     606,    -1,    -1,    -1,    -1,    -1,    -1,   473,   474,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,   630,    -1,    -1,   228,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,   502,   643,    -1,    -1,
     506,    -1,    -1,   649,    -1,   651,   652,    -1,    -1,    -1,
      -1,    -1,   658,    -1,    -1,    -1,    -1,    -1,   664,     8,
     526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   678,    -1,    -1,    -1,    -1,    -1,   684,   685,
      -1,    -1,    -1,    -1,    -1,   691,     8,   693,   694,   555,
     556,   697,   698,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     706,    -1,    -1,    -1,   710,    -1,    -1,   713,    -1,   715,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,
     736,    -1,    -1,   599,   600,   601,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   743,   744,   745,   746,   747,   748,   749,   750,
     751,   752,   753,   769,   755,   756,   757,   758,   759,   760,
     761,    -1,    -1,    -1,    -1,    -1,    -1,   643,    -1,    -1,
      -1,   772,    -1,   774,    -1,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   790,
     791,    -1,    -1,   228,   810,    -1,   797,    -1,    -1,    -1,
      -1,    -1,   678,    -1,    -1,   821,    -1,    -1,    -1,    -1,
      -1,    -1,   828,    -1,    -1,   691,    -1,   125,    -1,    -1,
      -1,   697,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   852,   713,    -1,   715,
     228,    -1,    -1,   859,   860,    -1,    -1,    -1,    -1,   865,
      -1,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,   889,    -1,    -1,   892,    -1,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   769,    -1,   911,   228,   913,   914,    -1,
      -1,    -1,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   932,   918,   919,   920,
     228,    -1,    -1,   924,   925,    -1,    -1,   928,   929,   930,
     931,   947,   933,    -1,   810,    -1,    -1,   938,   954,   955,
     956,   957,    -1,    -1,    -1,   821,    -1,   963,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   977,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,    -1,    -1,    -1,    -1,    -1,   852,    -1,    -1,    -1,
      -1,    -1,    -1,   999,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,  1000,
    1001,    -1,   228,    -1,   230,    -1,   232,    -1,    -1,    -1,
      -1,  1027,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1040,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1048,  1049,  1050,    -1,    -1,    -1,    -1,  1055,
    1056,    -1,  1058,    -1,    -1,    -1,    -1,    -1,    -1,  1065,
      -1,  1067,  1068,  1069,  1070,  1071,    -1,     8,    -1,    -1,
      -1,    13,    14,  1079,  1080,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1088,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1098,    -1,  1100,    -1,  1102,    -1,  1104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1122,  1123,  1124,  1125,
    1126,    -1,    -1,    -1,    -1,    -1,    -1,  1133,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,  1165,
      -1,  1027,   104,   105,   106,    -1,    -1,   109,    -1,    -1,
      -1,  1177,    -1,   115,   116,    -1,    -1,   119,   120,  1185,
     122,   123,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,   141,
     228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1216,    -1,    -1,  1219,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1088,   165,   166,   167,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1228,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1254,  1255,
      -1,    -1,    -1,    -1,    -1,    -1,  1122,  1123,  1124,  1125,
      -1,    -1,    -1,    -1,    -1,  1256,     8,    -1,    -1,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,    -1,   234,    -1,    -1,  1286,  1287,  1288,  1289,  1290,
      -1,    -1,    -1,    -1,  1295,  1296,  1297,    -1,    -1,    -1,
      -1,  1177,  1303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1337,  1338,  1339,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1347,  1348,  1349,  1350,    -1,    -1,    -1,    -1,  1355,
      -1,  1357,    -1,    -1,    -1,    -1,    -1,    -1,  1364,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1377,    -1,    -1,    -1,    -1,  1382,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1390,  1391,  1392,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1400,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1396,    -1,  1398,    -1,    -1,
    1401,    -1,  1403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1427,    -1,    -1,    -1,    -1,    -1,  1433,  1434,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1429,    -1,
      -1,    -1,    -1,    -1,    13,    14,    -1,    -1,    -1,    -1,
      -1,  1457,  1458,    -1,    -1,    -1,    -1,    -1,  1464,  1465,
      -1,    -1,    -1,    -1,    -1,  1471,    -1,    -1,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,  1488,  1489,  1490,    -1,   228,    -1,    -1,    -1,
      -1,  1497,  1498,  1499,  1500,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1511,    -1,    -1,    -1,    -1,
      -1,  1377,    -1,    -1,  1520,  1521,  1522,    -1,  1524,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,    -1,  1539,  1540,   104,   105,   106,    -1,    -1,
     109,    -1,    -1,    -1,    -1,    -1,   115,   116,    -1,    -1,
     119,   120,  1558,   122,   123,    -1,  1562,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1573,    -1,    -1,
    1576,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,    -1,    -1,    -1,    -1,    -1,  1592,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,   166,   167,  1605,
      -1,    -1,    -1,    -1,  1610,    -1,    -1,    -1,    -1,    -1,
    1616,    -1,  1603,  1604,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    -1,  1644,    -1,
      -1,    66,    67,    68,  1635,  1636,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1520,  1521,    -1,    -1,    83,  1665,
      85,    -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1682,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1691,    -1,    -1,    -1,    -1,
      -1,    -1,  1558,    -1,  1700,  1701,    -1,   122,  1704,    -1,
      -1,    -1,    -1,    -1,  1710,    -1,    -1,    -1,    -1,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,  1708,  1709,    -1,
      -1,    -1,    -1,    -1,  1730,  1731,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1745,
      -1,    -1,    -1,    -1,    -1,  1751,  1752,    -1,    -1,  1755,
    1756,  1757,  1758,    -1,    -1,    -1,    -1,    -1,  1764,    -1,
      -1,    -1,    -1,    -1,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,    -1,  1779,    -1,    -1,    -1,   202,    -1,   204,
     205,  1787,    -1,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
     104,   105,   106,    -1,    -1,   109,    -1,  1813,    -1,    -1,
      -1,   115,   116,  1819,  1820,   119,   120,    -1,   122,   123,
      -1,    -1,    -1,    -1,    -1,  1691,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,  1704,    -1,
      -1,   145,    -1,    -1,    -1,    -1,  1852,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   165,   166,   167,    -1,   228,    -1,   230,    -1,    -1,
      -1,  1877,  1878,    -1,    -1,   238,    -1,    -1,    -1,    -1,
      -1,  1887,  1888,    -1,  1890,    -1,  1752,  1893,  1894,  1895,
    1896,    -1,    22,    23,    -1,    -1,    -1,    -1,  1764,    -1,
      -1,    -1,    -1,  1909,    -1,    -1,    -1,    -1,  1914,  1915,
    1916,  1917,  1918,  1779,    -1,    -1,    -1,     3,     4,  1925,
      -1,    -1,    -1,  1929,    10,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,  1960,    -1,    -1,    -1,    -1,  1965,
    1966,    -1,    -1,  1969,  1970,  1971,  1972,    -1,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,  1983,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      -1,  1992,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2016,  2017,  2018,  2019,  2020,  2021,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
      66,    67,    68,    -1,    -1,    71,    -1,    -1,  1914,  1915,
    1916,  1917,  1918,    -1,    -1,    -1,    -1,    83,    -1,    85,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,    -1,   219,
     220,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,
      -1,    -1,   188,    -1,   234,   235,   192,    -1,    -1,    -1,
      -1,   197,   198,   199,   200,   201,    -1,  1983,    -1,   205,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,    -1,    -1,    -1,   224,    -1,
      -1,    -1,    -1,   229,    -1,    -1,    -1,   233,    -1,    -1,
     236,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   189,   190,   191,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,   204,   205,
      -1,    -1,    -1,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,    -1,    -1,   234,   338,   339,
     340,   238,    -1,    -1,   344,   345,   346,   347,   348,   349,
     350,    -1,   352,    -1,    -1,   355,   356,    -1,    -1,   359,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    66,    67,    68,    -1,    -1,    71,    -1,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    -1,    85,    -1,    -1,    88,    -1,    -1,    91,    -1,
      -1,    94,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   115,    -1,   117,    -1,    -1,   120,    -1,   122,
      -1,    -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,
     133,    -1,    -1,   136,   137,   138,   139,   140,    -1,    -1,
      -1,   144,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   513,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,   234,    -1,
      -1,    -1,   238,    -1,    -1,   188,   189,   190,   191,   192,
     193,    -1,    -1,    -1,   197,   198,   199,   200,   201,   202,
      -1,   204,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,
      -1,   224,    -1,    -1,    -1,    -1,   229,     3,     4,     5,
     233,    -1,    -1,   236,    10,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      66,    67,    68,    -1,    -1,    71,    -1,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,    85,
      -1,    -1,    88,    -1,    -1,    91,    -1,    -1,    94,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,   117,    -1,    -1,   120,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,   131,   132,   133,    -1,    -1,
     136,   137,   138,   139,   140,    -1,    -1,    -1,   144,    -1,
      -1,   147,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,
     238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   188,   189,   190,   191,   192,   193,    -1,    -1,
      -1,   197,   198,   199,   200,   201,   202,    -1,   204,   205,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,    -1,    -1,    -1,   224,    -1,
      -1,    -1,    -1,   229,     3,     4,     5,   233,     7,    -1,
     236,    10,    11,    12,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    66,    67,    68,
      -1,    -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,    -1,   238,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    66,    67,    68,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    -1,    -1,    -1,
      -1,    -1,   181,    -1,   994,    -1,    -1,    -1,    -1,   188,
     189,   190,   191,   192,    -1,    -1,    -1,    -1,   197,   198,
     199,   200,   201,   202,    -1,   204,   205,   206,   207,   208,
     209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,   220,    -1,    -1,    -1,   224,    -1,   226,   227,    -1,
     229,    -1,   231,    -1,   233,    -1,   235,   236,     3,     4,
       5,    -1,    -1,    -1,    -1,    10,    11,    12,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
     189,   190,   191,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,   202,    -1,   204,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    91,    -1,    -1,    94,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,    -1,   117,    -1,    -1,   120,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,    -1,
      -1,   136,   137,   138,   139,   140,    -1,    -1,    -1,   144,
      -1,    -1,   147,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1229,
    1230,    -1,    -1,   188,    -1,    -1,    -1,   192,   193,    -1,
      -1,    -1,   197,   198,   199,   200,   201,    -1,    -1,    -1,
     205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,   224,
      -1,    -1,    -1,    -1,   229,     3,     4,     5,   233,    -1,
      -1,   236,    10,    11,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    91,    -1,    -1,    94,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,   117,
      -1,    -1,   120,    -1,   122,    -1,    -1,    -1,    -1,    -1,
       5,   129,   130,   131,   132,   133,    -1,    -1,   136,   137,
     138,   139,   140,    -1,    -1,    -1,   144,    -1,    -1,   147,
      -1,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   238,
      -1,    -1,    -1,    58,    59,    60,    61,    -1,    -1,    -1,
     188,    66,    67,    68,   192,   193,    71,    -1,    -1,   197,
     198,   199,   200,   201,    -1,    -1,    -1,   205,    83,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   220,    -1,    -1,    -1,   224,    -1,    -1,    -1,
      -1,   229,     3,     4,    -1,   233,    -1,    -1,   236,    10,
      11,    12,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,   189,   190,   191,    88,    -1,    -1,
      91,    -1,    -1,    94,    -1,    96,    -1,   202,    -1,   204,
      -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   115,    -1,   117,    -1,    -1,   120,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,    -1,    -1,   136,   137,   138,   139,   140,
      -1,    -1,    -1,   144,    -1,    -1,   147,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,
      -1,   192,   193,    -1,    -1,    -1,   197,   198,   199,   200,
     201,    -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,
      -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,   229,     3,
       4,    -1,   233,   234,    -1,   236,    10,    11,    12,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    -1,    -1,
      94,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,   117,    -1,    -1,   120,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
      -1,    -1,   136,   137,   138,   139,   140,    -1,    -1,    -1,
     144,    -1,    -1,   147,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   188,    -1,    -1,    -1,   192,   193,
      -1,    -1,    -1,   197,   198,   199,   200,   201,    -1,    -1,
      -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,
     224,    -1,    -1,    -1,    -1,   229,     3,     4,    -1,   233,
      -1,    -1,   236,    10,    11,    12,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    91,    -1,    -1,    94,    -1,    96,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,
     117,    -1,    -1,   120,    -1,   122,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,   132,   133,    -1,    -1,   136,
     137,   138,   139,   140,    -1,    -1,    -1,   144,    -1,    -1,
     147,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,
     197,   198,   199,   200,   201,    -1,    -1,    -1,   205,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,   224,    -1,    -1,
      -1,    -1,   229,     3,     4,    -1,   233,    -1,    -1,   236,
      10,    11,    12,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    91,    -1,    -1,    94,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    -1,   117,    -1,    -1,
     120,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,   129,
     130,   131,   132,   133,    -1,    -1,   136,   137,   138,   139,
     140,    -1,    -1,    -1,   144,    -1,    -1,   147,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,
      -1,    -1,   192,   193,    -1,    -1,    -1,   197,   198,   199,
     200,   201,    -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,   229,
       3,     4,    -1,   233,    -1,    -1,   236,    10,    11,    12,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    -1,
      -1,    94,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   115,    -1,   117,    -1,    -1,   120,    -1,   122,
      -1,    -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,
     133,    -1,    -1,   136,   137,   138,   139,   140,    -1,    -1,
      -1,   144,    -1,    -1,   147,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,    -1,   192,
     193,    -1,    -1,    -1,   197,   198,   199,   200,   201,    -1,
      -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,
      -1,   224,    -1,    -1,    -1,    -1,   229,     3,     4,    -1,
      -1,   234,    -1,   236,    10,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    91,    -1,    -1,    94,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,   117,    -1,    -1,   120,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,   131,   132,   133,    -1,    -1,
     136,   137,   138,   139,   140,    -1,    -1,    -1,   144,    -1,
      -1,   147,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,
      -1,   197,   198,   199,   200,   201,    -1,    -1,    -1,   205,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,    -1,    -1,    -1,   224,    -1,
      -1,    -1,    -1,   229,     3,     4,    -1,   233,    -1,    -1,
     236,    10,    11,    12,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    91,    -1,    -1,    94,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,   117,    -1,
      -1,   120,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,   131,   132,   133,    -1,    -1,   136,   137,   138,
     139,   140,    -1,    -1,    -1,   144,    -1,    -1,   147,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,
      -1,    -1,    -1,   192,   193,    -1,    -1,    -1,   197,   198,
     199,   200,   201,    -1,    -1,    -1,   205,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,   220,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,
     229,     3,     4,    -1,   233,    -1,    -1,   236,    10,    11,
      12,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,
      -1,    -1,    94,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,    -1,   117,    -1,    -1,   120,    -1,
     122,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,   131,
     132,   133,    -1,    -1,   136,   137,   138,   139,   140,    -1,
      -1,    -1,   144,    -1,    -1,   147,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,    -1,
     192,   193,    -1,    -1,    -1,   197,   198,   199,   200,   201,
      -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,
      -1,    -1,   224,    -1,    -1,    -1,    -1,   229,     3,     4,
      -1,   233,    -1,    -1,   236,    10,    11,    12,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    91,    -1,    -1,    94,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,    -1,   117,    -1,    -1,   120,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,    -1,
      -1,   136,   137,   138,   139,   140,    -1,    -1,    -1,   144,
      -1,    -1,   147,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   188,    -1,    -1,    -1,   192,   193,    -1,
      -1,    -1,   197,   198,   199,   200,   201,    -1,    -1,    -1,
     205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,   224,
      -1,    -1,    -1,    -1,   229,     3,     4,    -1,   233,    -1,
      -1,   236,    10,    11,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    91,    -1,    -1,    94,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,   117,
      -1,    -1,   120,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      -1,   129,   130,   131,   132,   133,    -1,    -1,   136,   137,
     138,   139,   140,    -1,    -1,    -1,   144,    -1,    -1,   147,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     188,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,   197,
     198,   199,   200,   201,    -1,    -1,    -1,   205,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   220,    -1,    -1,    -1,   224,    -1,    -1,    -1,
      -1,   229,     3,     4,    -1,   233,    -1,    -1,   236,    10,
      11,    12,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      91,    -1,    -1,    94,    -1,    96,    -1,    -1,    -1,    -1,
      -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   115,    -1,   117,    -1,    -1,   120,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,    -1,    -1,   136,   137,   138,   139,   140,
      -1,    -1,    -1,   144,    -1,    -1,   147,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,
      -1,   192,   193,    -1,    -1,    -1,   197,   198,   199,   200,
     201,    -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,
      -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,   229,     3,
       4,    -1,   233,    -1,    -1,   236,    10,    11,    12,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    -1,    -1,
      94,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,   117,    -1,    -1,   120,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
      -1,    -1,   136,   137,   138,   139,   140,    -1,    -1,    -1,
     144,    -1,    -1,   147,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   188,    -1,    -1,    -1,   192,   193,
      -1,    -1,    -1,   197,   198,   199,   200,   201,    -1,    -1,
      -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,
     224,    -1,    -1,    -1,    -1,   229,     3,     4,    -1,   233,
      -1,    -1,   236,    10,    11,    12,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    91,    -1,    -1,    94,    -1,    96,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,
     117,    -1,    -1,   120,    -1,   122,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,   132,   133,    -1,    -1,   136,
     137,   138,   139,   140,    -1,    -1,    -1,   144,    -1,    -1,
     147,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   188,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,
     197,   198,   199,   200,   201,    -1,    -1,    -1,   205,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,   224,     3,     4,
       5,    -1,   229,    -1,    -1,    10,    11,    12,    -1,   236,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    66,    67,    68,    -1,    -1,    71,    -1,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,
      85,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,    -1,    66,    67,    68,    -1,    -1,    71,
      -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    -1,    85,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,   228,   188,   189,   190,   191,   192,   234,    -1,
      -1,    -1,   197,   198,   199,   200,   201,   202,    -1,   204,
     205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,   224,
      -1,    -1,    -1,    -1,   229,    -1,    -1,    -1,   233,    -1,
      -1,   236,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     238,    -1,    -1,    -1,    -1,    -1,   188,   189,   190,   191,
     192,    -1,    -1,    -1,    -1,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,
      -1,    -1,   224,    -1,    -1,    -1,    -1,   229,     3,     4,
       5,   233,    -1,    -1,   236,    10,    11,    12,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    66,    67,    68,    -1,    -1,    71,    -1,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,
      85,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,    -1,    66,    67,    68,    -1,    -1,    71,
      -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    -1,    85,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,   228,   188,   189,   190,   191,   192,   234,    -1,
      -1,    -1,   197,   198,   199,   200,   201,   202,    -1,   204,
     205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,   224,
      -1,    -1,    -1,    -1,   229,    -1,    -1,    -1,   233,    -1,
      -1,   236,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     238,    -1,    -1,    -1,    -1,    -1,   188,   189,   190,   191,
     192,    -1,    -1,    -1,    -1,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,
      -1,    -1,   224,     3,     4,    -1,    -1,   229,    -1,    -1,
      10,    11,    12,    -1,   236,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    54,    55,    56,    57,   228,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,    -1,    73,    74,    75,     3,     4,    -1,     6,
      -1,    81,    82,    10,    11,    12,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,    54,    55,    56,
      57,   228,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    81,    82,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,   188,    -1,
      -1,    -1,   192,    -1,    -1,    -1,    -1,   197,   198,   199,
     200,   201,    -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,   229,
      -1,    -1,    -1,   233,    -1,    -1,   236,    -1,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
      -1,   188,    -1,    -1,    -1,   192,   238,    -1,    -1,    -1,
     197,   198,   199,   200,   201,    -1,    -1,    -1,   205,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,   224,     3,     4,
      -1,     6,   229,    -1,    -1,    10,    11,    12,    -1,   236,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,    54,
      55,    56,    57,   228,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,   238,    -1,    -1,     3,     4,    73,    74,
      75,    -1,    -1,    10,    11,    12,    81,    82,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,    54,    55,    56,
      57,   228,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    81,    82,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   188,    -1,    -1,    -1,   192,    -1,    -1,
      -1,    -1,   197,   198,   199,   200,   201,    -1,    -1,    -1,
     205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,   224,
      -1,    -1,    -1,    -1,   229,    13,    14,    -1,    -1,    -1,
      -1,   236,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,
     228,   188,    -1,    -1,    -1,   192,   234,    -1,    -1,    -1,
     197,   198,   199,   200,   201,    13,    14,    -1,   205,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,   224,    -1,    -1,
      -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,   236,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,    -1,    -1,   104,   105,   106,    13,
      14,   109,    -1,    -1,    -1,    -1,    -1,   115,   116,    -1,
      -1,   119,   120,    -1,   122,   123,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   141,    -1,    -1,   104,   105,   106,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,   115,   116,    -1,
      -1,   119,   120,    -1,   122,   123,    -1,   165,   166,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
     104,   105,   106,    13,    14,   109,    -1,   165,   166,   167,
      -1,   115,   116,    -1,    -1,   119,   120,    -1,   122,   123,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,    -1,   234,   141,   228,    -1,
      -1,    13,    14,    -1,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   165,   166,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,    -1,    -1,   104,   105,   106,    -1,    -1,   109,
      -1,    -1,    -1,    -1,    -1,   115,   116,    -1,    -1,   119,
     120,    -1,   122,   123,    -1,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
     234,   141,   104,   105,   106,    13,    14,   109,    -1,    -1,
      -1,    -1,    -1,   115,   116,    -1,    -1,   119,   120,    -1,
     122,   123,    -1,    -1,    -1,   165,   166,   167,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    13,    14,    -1,    -1,    -1,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   165,   166,   167,   228,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,   234,    -1,   104,   105,   106,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,   115,   116,    -1,
      -1,   119,   120,    -1,   122,   123,    -1,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,   234,   141,   104,   105,   106,    13,    14,   109,
      -1,    -1,    -1,    -1,    -1,   115,   116,    -1,    -1,   119,
     120,    -1,   122,   123,    -1,    -1,    -1,   165,   166,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,    13,    14,    -1,    -1,    -1,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,   165,   166,   167,   228,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,   234,    -1,   104,   105,
     106,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,   115,
     116,    -1,    -1,   119,   120,    -1,   122,   123,    -1,    -1,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,   234,   141,   104,   105,   106,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,   115,   116,    -1,
      -1,   119,   120,    -1,   122,   123,    -1,    -1,    -1,   165,
     166,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     0,     1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    14,    -1,   165,   166,   167,
      -1,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,   234,   238,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    63,    64,    65,    -1,   228,    -1,
      69,    70,    -1,    72,   234,    -1,    -1,    76,    77,    -1,
      79,    80,    -1,    82,    -1,    -1,   234,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,    -1,    -1,   103,   104,   105,   106,   107,    -1,
     109,    -1,   111,   112,   113,   114,   115,   116,   117,    -1,
     119,   120,   121,   122,   123,   124,    -1,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    -1,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,    -1,     4,    -1,   153,   154,   155,    -1,    -1,    -1,
     159,    13,    14,    -1,    -1,   164,   165,   166,   167,    -1,
      -1,   170,    -1,   172,    -1,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,    -1,
      -1,    43,    44,    -1,    -1,   194,   195,   196,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,   205,    -1,    -1,    -1,
      -1,    63,    64,    65,    -1,    -1,    -1,    69,    70,    -1,
      72,    -1,    -1,    -1,    76,    77,    -1,    79,    80,    -1,
      82,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
      -1,   103,   104,   105,   106,   107,    -1,   109,    -1,   111,
     112,   113,   114,   115,   116,   117,    -1,   119,   120,   121,
     122,   123,   124,    -1,   126,   127,   128,   129,   130,   131,
     132,   133,   134,    -1,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,    13,    14,
      -1,   153,   154,   155,    -1,    -1,    -1,   159,    -1,    -1,
      -1,    -1,   164,   165,   166,   167,    -1,    -1,   170,    -1,
     172,    -1,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    -1,    -1,    -1,    -1,
      -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,
      -1,   203,    -1,   205,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,   228,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    -1,    -1,    -1,   104,
     105,   106,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,
     115,   116,    -1,    -1,   119,   120,    -1,   122,   123,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,    -1,    -1,   141,   228,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,   166,   167,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   238,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     238,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   238,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   238,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   238,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   238,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   238,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   238,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     238,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   238,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   238,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   238,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   238,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   238,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   238,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     238,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,   234,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
     234,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,   234,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
     234,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,   234,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
     234,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,   234,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
     234,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,   234,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
     234,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,   234,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
     234,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,   234,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
     234,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,   234,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
     234,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,   234,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
     234,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,   234,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
     234,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,   234,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
     234,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,   234,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
     234,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,   234,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
     234,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,    -1,   234,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
     234,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,   233,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,   233,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,    -1,   233,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,    -1,    -1,
      -1,   228,    -1,   230,    -1,   232,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,   232,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
     232,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,   232,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,   232,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,   232,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,   232,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,   232,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,    -1,
      -1,   232,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,
     228,    -1,    -1,    -1,   232,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,    -1,
      -1,    -1,    -1,   228,    -1,   230,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,   230,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,    -1,    -1,    -1,    -1,   228,    -1,   230,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,    -1,    -1,    -1,   228,    -1,   230,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,   230,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,
     230,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,   230,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,
     228,    -1,   230,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,    -1,    -1,
      -1,   228,    -1,   230,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,   228,    -1,   230,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,    -1,
      -1,    -1,    -1,   228,    -1,   230,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,   230,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,    -1,    -1,    -1,    -1,   228,    -1,   230,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,    -1,    -1,    -1,   228,    -1,   230,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,   230,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,
     230,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,   230,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,
     228,    -1,   230,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,    -1,    -1,
      -1,   228,    -1,   230,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,   228,    -1,   230,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,    -1,
      -1,    -1,    -1,   228,    -1,   230,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,   230,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,    -1,    -1,    -1,    -1,   228,    -1,   230,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,    -1,    -1,    -1,   228,    -1,   230,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,   230,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,
     230,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,   230,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,
     228,    -1,   230,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,    -1,    -1,
      -1,   228,    -1,   230,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,   228,    -1,   230,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,    -1,
      -1,    -1,    -1,   228,    -1,   230,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,   230,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,    -1,    -1,    -1,    -1,   228,    -1,   230,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,    -1,    -1,    -1,   228,    -1,   230,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,   230,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,
     230,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,   230,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,
     228,    -1,   230,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,    -1,    -1,
      -1,   228,    -1,   230,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,   228,    -1,   230,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,    -1,
      -1,    -1,    -1,   228,    -1,   230,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,   230,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,    -1,    -1,    -1,    -1,   228,    -1,   230,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,    -1,    -1,    -1,   228,    -1,   230,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,   230,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,
     230,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,   230,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,
     228,    -1,   230,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,    -1,    -1,
      -1,   228,    -1,   230,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,   228,    -1,   230,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,    -1,
      -1,    -1,    -1,   228,    -1,   230,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,   228,    -1,   230,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,    -1,    -1,    -1,    -1,   228,    -1,   230,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,    -1,    -1,    -1,   228,    -1,   230,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,   230,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,    -1,
     230,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,   228,
      -1,   230,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,
     228,    -1,   230,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,    -1,    -1,
      -1,   228,    -1,   230
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,   240,   241,     6,     0,     4,    13,    14,    43,
      44,    63,    64,    65,    69,    70,    72,    76,    77,    79,
      80,    82,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   103,   104,   105,
     106,   107,   109,   111,   112,   113,   114,   115,   116,   117,
     119,   120,   121,   122,   123,   124,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   153,
     154,   155,   159,   164,   165,   166,   167,   170,   172,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   194,   195,   196,   203,   205,   242,   244,
     245,   265,   283,   284,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   302,   304,   305,   311,   312,   313,   314,
     318,   339,   340,   237,    14,    94,   229,   229,     6,   233,
       6,     6,     6,     6,   229,     6,     6,   231,   231,   320,
     340,   229,   231,   263,   263,   229,   233,   229,   229,     4,
     229,   233,   229,   229,     4,   229,   233,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   108,    94,     6,
     233,    88,    91,    94,   229,     3,    10,    11,    12,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    54,    55,    56,
      57,    62,    73,    74,    75,    81,    88,    91,    94,    96,
     115,   120,   122,   188,   192,   193,   197,   198,   199,   200,
     201,   219,   220,   224,   229,   233,   236,   284,   295,   302,
     304,   315,   316,   318,   320,   327,   329,   340,   229,   233,
      94,    94,   115,    91,    94,    96,    88,    91,    94,    96,
      91,    94,    96,    91,    94,   229,    91,   170,   186,   187,
     233,   219,   220,   229,   233,   324,   325,   324,   233,   233,
     324,     4,    88,    92,    98,    99,   101,   102,   119,   229,
      94,    96,    94,    91,     4,   181,   233,   340,     4,     6,
      88,    91,    94,    91,    94,     4,     4,     4,     5,   229,
     327,   328,     4,   229,   229,   229,     4,   233,   331,   340,
       4,   229,   229,   229,     6,     6,   231,     5,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    58,    59,    60,
      61,    66,    67,    68,    71,    83,    85,   189,   190,   191,
     202,   204,   335,   340,   229,     4,   335,     5,   233,     5,
     233,   220,   315,   340,   231,   229,   233,     6,   229,   233,
       6,   237,     7,   122,   181,   206,   207,   208,   209,   226,
     227,   229,   231,   233,   235,   261,   262,   263,   315,   334,
     335,   340,   233,     6,   315,   334,   335,   340,   334,   315,
     334,   338,   267,   271,   229,   323,     9,   335,   340,   315,
     220,   315,   329,   330,   315,   315,   229,   315,   330,   315,
     315,   229,   315,   330,   315,   315,   315,   315,   315,   315,
     334,   315,   315,   315,   327,   229,   330,   328,   328,   328,
     334,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   229,   231,   263,   263,   263,   263,   263,
     263,   229,   263,   263,   229,   263,     5,   173,   233,     5,
     173,     5,   173,     5,   173,   115,    88,    91,    94,    96,
     229,   263,   263,   229,   229,   315,   233,   315,   329,   315,
     315,   234,   330,   340,     8,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   228,
       9,   229,   231,   235,   262,   263,   315,   330,   229,   229,
     229,   327,   328,   328,   328,   229,   229,   229,   229,   229,
     327,   229,   327,   229,   327,   233,   233,   315,     4,   327,
     331,   233,   233,   324,   324,   324,   315,   315,   219,   220,
     233,   233,   324,   219,   220,   229,   286,   324,   233,   229,
     233,   229,   229,   229,   229,   229,   229,   229,   315,   328,
     328,   328,   229,     4,   231,   231,   286,     6,     6,   233,
     233,   233,   328,   328,   231,   231,   231,   315,     6,     6,
     315,   315,   315,   235,   315,   233,   173,   315,   315,   315,
     315,   263,   263,   263,   229,   229,   229,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   229,   229,   263,
     231,     6,     6,   233,     6,   286,     6,   286,   315,   221,
     233,   229,   231,   334,   315,   286,   327,   327,   233,   335,
      88,    91,    94,    96,     7,   315,   315,   284,   285,   286,
     340,     4,   170,   171,   327,     6,   230,   232,   233,   264,
       6,   233,     6,     9,   229,   231,   235,   340,   315,     6,
     230,   238,     9,   229,   231,   235,   230,   238,   238,   230,
     238,   232,   238,   266,   232,   266,    84,   322,   319,   340,
     238,   238,   230,   221,   234,   238,   230,   230,   315,   230,
     234,   230,   230,   315,   230,   234,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,     7,   315,   234,     6,
       6,     6,   230,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   329,   329,   340,   233,
     315,   315,   334,   315,   334,   327,   334,   334,   338,   315,
      63,   315,    63,    63,    63,   328,   328,   328,   328,   334,
     334,   329,   340,   335,   330,   230,   234,   263,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     233,   315,   329,   315,   315,   315,   340,   315,   315,     4,
     321,   233,   264,   230,   234,   315,   315,   315,     7,     7,
     308,   308,   277,   315,   335,   278,   315,   335,   279,   315,
     335,   280,   315,   335,   315,     6,   315,     6,   315,     6,
     330,   330,   233,   230,     6,   233,   286,   286,   238,   238,
     238,   324,   324,   285,   285,   238,   315,    88,    91,    94,
      96,   115,   120,   123,   234,   283,   299,   238,   286,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   230,     7,
     309,     6,     7,   315,     6,   315,   315,   234,   330,   330,
     330,     6,     6,   315,   315,   315,   230,   230,   230,   230,
     170,   238,   286,   233,     8,   230,   230,   232,   338,   334,
     338,   334,   334,   334,   334,   334,   334,   315,   334,   334,
     334,   334,   236,   337,   340,   335,   334,   334,   334,   340,
     330,   234,   234,   315,   286,   232,   230,   145,   303,   230,
     234,   238,   315,     6,   233,   233,   233,   233,   315,   230,
     232,   234,     7,   261,   262,   235,     7,     6,   330,     7,
     209,   261,   246,   340,   315,   315,   321,   231,   234,     6,
     216,   243,   330,   340,   315,   315,     4,   321,     6,   330,
     315,     6,   334,     6,   340,     6,   334,   315,   230,   231,
     315,   335,     7,   173,   315,   329,     7,     7,   230,     7,
     173,     7,     7,   230,     7,   173,     7,     7,     7,     7,
       7,     7,     7,     7,     7,   315,   230,   233,     6,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     238,   264,   264,   264,   264,   264,   264,   264,   238,   238,
     238,   230,   232,   232,   330,   238,   238,   264,   238,   264,
     238,   238,   238,   230,   317,   233,   234,   233,   233,   233,
     238,   238,   264,   264,   230,   230,   234,     7,   264,     8,
       8,   330,   235,   230,   232,   262,   330,     7,   233,   230,
     230,   230,   315,   327,     4,   307,     6,   230,   238,   230,
     238,   230,   238,   230,   238,   230,   230,   230,   234,   234,
     330,   235,   286,   234,   234,   324,   315,   315,   234,   234,
     315,   324,   233,   233,   233,   233,   229,   115,    91,    94,
      96,   125,   125,   142,   150,   151,   152,   156,   157,   300,
     301,   324,   234,   296,   230,   234,   230,   230,   230,   230,
     230,   230,   230,     7,   315,     6,   315,   230,   232,   232,
     234,   234,   234,   232,   232,   238,     7,     7,     7,   235,
     315,   234,   315,   315,     7,   235,   264,   238,   264,   264,
     230,   230,   238,   264,   264,   238,   238,   264,   264,   264,
     264,   315,   264,     9,   336,   238,   230,   238,   264,   232,
     234,   234,     7,     6,   315,   234,   233,     6,   327,   234,
     315,   315,   315,   315,     6,     7,   261,   262,   235,   261,
     262,   335,   315,     6,     4,   233,   332,   340,   234,    45,
      45,   327,     4,   160,   161,   162,   163,   234,   249,   253,
     256,   258,   259,   235,   230,   232,   315,   216,   334,   230,
     235,   230,   232,   230,   238,     7,   263,   315,   264,   264,
     324,    94,    96,   327,   327,     7,   327,    94,    96,   327,
     327,     7,   327,    96,   327,   327,   327,   327,   327,   327,
     327,   327,   327,     6,     7,   330,   315,   315,   315,   315,
     234,   315,   315,   315,   327,   334,   334,   273,   315,   315,
     315,   315,   315,   315,   327,   315,   315,   234,   321,   262,
     235,   262,   234,   327,   330,     7,     7,     7,   125,   306,
       6,   261,   315,   261,   315,   261,   315,   261,   315,     7,
       7,     7,     7,     7,   234,     4,   234,   238,   238,   238,
     234,   234,   330,   330,   330,   330,   315,   229,   229,   229,
     229,   106,     4,     6,   315,   233,     6,   229,     6,   158,
       6,   158,   234,   301,   238,   300,     7,     6,     7,     7,
       7,     7,     7,     7,     7,   327,     6,   233,     6,     6,
       6,    94,     7,     6,     6,   315,   327,   327,   327,     4,
     238,     8,     8,   230,     4,     4,   330,   334,   315,   334,
     236,   275,   334,   334,   238,   233,     6,   233,   327,   234,
     234,   234,   234,   234,   315,     6,     4,   170,   171,   315,
       6,     6,     6,     7,   331,   333,     6,   231,   264,   263,
     263,     6,   250,   229,   229,   233,   260,     6,   321,   235,
     334,   232,     6,     6,   243,   321,   235,     6,   315,   233,
     315,   335,   264,   273,     6,     6,     6,   233,   233,   119,
     282,   282,   327,     6,   233,   233,     6,     6,   327,   173,
     281,   233,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     5,   234,   264,   264,   264,   264,   264,   238,   238,
     238,   230,   264,   264,   238,   264,   274,   238,   238,   238,
     238,   230,   264,     6,     4,   264,     6,   234,   327,   327,
     327,     4,     6,   327,   327,   327,   327,   327,   327,   327,
     233,   233,     7,     6,     7,   315,   315,   315,   233,   233,
     234,   234,   234,   234,   230,   315,   315,   315,   315,   233,
     231,     6,   315,   327,   315,     6,     6,   315,   324,   234,
       5,   327,   233,   233,   233,   233,   233,   233,   233,   327,
       6,   330,   233,   315,   232,     6,     6,   169,   315,   315,
     315,     6,     6,     7,   264,   238,   238,   264,   238,   315,
     238,   264,   276,   230,   264,   335,   286,   286,   238,     6,
       6,     7,   261,   262,   235,     7,     6,   331,   234,   238,
     315,   261,   264,   338,   338,   229,   315,   315,   326,   327,
     233,     4,     6,     6,   334,     4,   238,   327,   335,     7,
     232,   315,   315,   324,     6,     6,     6,   315,   315,     6,
      92,     6,   315,     5,   233,   315,   315,   315,     4,   315,
     315,   315,   315,   262,   233,     6,   281,     6,   315,     6,
       6,     6,     6,     6,     4,     6,     6,   330,   330,   315,
     315,   335,   234,   230,   234,   238,   285,   285,     6,     6,
       6,     6,   230,   230,   230,   230,   315,   315,   234,   238,
     230,   234,   238,     6,     6,   326,   324,   324,   324,   324,
     324,   220,   324,     6,   234,   315,     6,     6,   327,   234,
     238,     8,   234,   230,   233,   315,   335,   334,   315,   334,
       4,   185,   238,   303,   303,   327,   335,   315,     6,     4,
     332,     6,   331,   232,   327,     6,   264,   264,   247,   315,
     238,   238,   234,   238,   248,   315,     6,   315,   268,   270,
     233,   234,   234,   234,   234,   233,   234,     5,   326,   264,
     264,   238,   233,   327,   335,   238,   238,   238,   238,   315,
       6,   233,   234,   234,   233,     6,     6,   233,   315,   234,
     234,   234,   232,     6,   327,     7,   233,   315,   234,   238,
     238,   238,   238,   238,   238,     6,   234,   168,   315,   315,
     330,     6,     6,   230,   264,   264,   233,   315,   335,   335,
     335,   234,   234,   234,     6,     6,     7,     6,   235,     6,
       6,     6,   230,   238,   315,   315,   233,   327,   234,   238,
     238,   273,   275,   327,     6,     6,     6,     6,   315,     6,
       6,   234,   315,   272,   315,   329,   315,   315,   315,   315,
     234,   326,   129,   130,   135,   310,   129,   130,   310,   330,
     285,   234,   238,     6,   234,   327,   286,   234,     6,   330,
     324,   324,   324,   324,   324,   315,   234,   234,   234,   338,
     230,   233,     6,   331,   171,   251,   315,   238,   238,   326,
       6,   315,   315,   234,   234,   269,   234,   233,   238,   234,
     238,     7,     7,   238,   238,   238,   238,   234,   233,   324,
     327,     6,   233,   324,     6,   234,   234,   315,     6,   125,
     234,   297,   233,   234,   238,   238,   238,   238,   238,     6,
       6,   234,     6,   286,     6,   233,   315,   315,   234,   238,
     273,   315,   315,   315,   335,   340,   315,   315,   315,   315,
       6,   324,     6,   324,     6,     6,   234,   315,   300,   286,
       6,   330,   330,   330,   330,   324,   330,   303,   248,   230,
     238,     6,   233,   315,   234,   238,   238,     7,   229,   238,
     238,   238,   238,   238,   238,     6,   234,   234,   298,   234,
     234,   234,   234,   238,   234,   234,   234,   254,   315,   326,
     234,   315,   315,   335,   230,   315,   315,   315,   315,   324,
     324,   300,     6,     6,     6,     6,   330,     6,     6,     6,
     233,   230,   234,     6,   234,   264,   238,   238,   238,   238,
     238,   238,   234,   234,   252,   334,   257,   233,     6,   315,
     315,   315,   315,   315,   315,     6,   234,   238,   233,   326,
     234,   234,   234,   234,   234,   234,     6,   334,   255,   334,
     234,     6,     6,   234,   238,     6,     6,   334
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 238 "Gmsh.y"
    { yyerrok; return 1; ;}
    break;

  case 6:
#line 249 "Gmsh.y"
    { return 1; ;}
    break;

  case 7:
#line 250 "Gmsh.y"
    { return 1; ;}
    break;

  case 8:
#line 251 "Gmsh.y"
    { return 1; ;}
    break;

  case 9:
#line 253 "Gmsh.y"
    {
      factory = (yyvsp[(3) - (5)].c);
      if(factory == "OpenCASCADE"){
        if(!GModel::current()->getOCCInternals())
          GModel::current()->createOCCInternals();
        for(int dim = -2; dim <= 3; dim++)
          GModel::current()->getOCCInternals()->setMaxTag
            (dim, GModel::current()->getGEOInternals()->getMaxTag(dim));
      }
      else if(GModel::current()->getOCCInternals()){
        for(int dim = -2; dim <= 3; dim++)
          GModel::current()->getGEOInternals()->setMaxTag
            (dim, GModel::current()->getOCCInternals()->getMaxTag(dim));
      }
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 10:
#line 269 "Gmsh.y"
    { return 1; ;}
    break;

  case 11:
#line 270 "Gmsh.y"
    { List_Delete((yyvsp[(1) - (1)].l)); return 1; ;}
    break;

  case 12:
#line 271 "Gmsh.y"
    { return 1; ;}
    break;

  case 13:
#line 272 "Gmsh.y"
    { return 1; ;}
    break;

  case 14:
#line 273 "Gmsh.y"
    { return 1; ;}
    break;

  case 15:
#line 274 "Gmsh.y"
    { return 1; ;}
    break;

  case 16:
#line 275 "Gmsh.y"
    { List_Delete((yyvsp[(1) - (1)].l)); return 1; ;}
    break;

  case 17:
#line 276 "Gmsh.y"
    { List_Delete((yyvsp[(1) - (1)].l)); return 1; ;}
    break;

  case 18:
#line 277 "Gmsh.y"
    { return 1; ;}
    break;

  case 19:
#line 278 "Gmsh.y"
    { return 1; ;}
    break;

  case 20:
#line 279 "Gmsh.y"
    { return 1; ;}
    break;

  case 21:
#line 280 "Gmsh.y"
    { return 1; ;}
    break;

  case 22:
#line 281 "Gmsh.y"
    { return 1; ;}
    break;

  case 23:
#line 282 "Gmsh.y"
    { return 1; ;}
    break;

  case 24:
#line 283 "Gmsh.y"
    { return 1; ;}
    break;

  case 25:
#line 284 "Gmsh.y"
    { return 1; ;}
    break;

  case 26:
#line 289 "Gmsh.y"
    {
      (yyval.c) = (char*)"w";
    ;}
    break;

  case 27:
#line 293 "Gmsh.y"
    {
      (yyval.c) = (char*)"a";
    ;}
    break;

  case 28:
#line 300 "Gmsh.y"
    {
      Msg::Direct((yyvsp[(3) - (5)].c));
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 29:
#line 305 "Gmsh.y"
    {
      Msg::Error((yyvsp[(3) - (5)].c));
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 30:
#line 310 "Gmsh.y"
    {
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(6) - (7)].c));
      FILE *fp = Fopen(tmp.c_str(), (yyvsp[(5) - (7)].c));
      if(!fp){
	yymsg(0, "Unable to open file '%s'", tmp.c_str());
      }
      else{
	fprintf(fp, "%s\n", (yyvsp[(3) - (7)].c));
	fclose(fp);
      }
      Free((yyvsp[(3) - (7)].c));
      Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 31:
#line 324 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = printListOfDouble((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].l), tmpstring);
      if(i < 0)
	yymsg(0, "Too few arguments in Printf");
      else if(i > 0)
	yymsg(0, "%d extra argument%s in Printf", i, (i > 1) ? "s" : "");
      else
	Msg::Direct(tmpstring);
      Free((yyvsp[(3) - (7)].c));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 32:
#line 337 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = printListOfDouble((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].l), tmpstring);
      if(i < 0)
	yymsg(0, "Too few arguments in Error");
      else if(i > 0)
	yymsg(0, "%d extra argument%s in Error", i, (i > 1) ? "s" : "");
      else
	Msg::Error(tmpstring);
      Free((yyvsp[(3) - (7)].c));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 33:
#line 350 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = printListOfDouble((yyvsp[(3) - (9)].c), (yyvsp[(5) - (9)].l), tmpstring);
      if(i < 0)
	yymsg(0, "Too few arguments in Printf");
      else if(i > 0)
	yymsg(0, "%d extra argument%s in Printf", i, (i > 1) ? "s" : "");
      else{
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(8) - (9)].c));
	FILE *fp = Fopen(tmp.c_str(), (yyvsp[(7) - (9)].c));
	if(!fp){
	  yymsg(0, "Unable to open file '%s'", tmp.c_str());
	}
	else{
	  fprintf(fp, "%s\n", tmpstring);
	  fclose(fp);
	}
      }
      Free((yyvsp[(3) - (9)].c));
      Free((yyvsp[(8) - (9)].c));
      List_Delete((yyvsp[(5) - (9)].l));
    ;}
    break;

  case 34:
#line 378 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(1) - (6)].c), "View") && ViewData->finalize()){
	ViewData->setName((yyvsp[(2) - (6)].c));
	ViewData->setFileName(gmsh_yyname);
	ViewData->setFileIndex(gmsh_yyviewindex++);
	new PView(ViewData);
      }
      else
	delete ViewData;
#endif
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 35:
#line 392 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (6)].c), "View")){
	int index = (int)(yyvsp[(4) - (6)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  new PView(PView::list[index], false);
        else
	  yymsg(0, "Unknown view %d", index);
      }
#endif
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 36:
#line 405 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (6)].c), "View")){
	int index = (int)(yyvsp[(4) - (6)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  new PView(PView::list[index], true);
        else
	  yymsg(0, "Unknown view %d", index);
      }
#endif
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 37:
#line 418 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (8)].c), "View")){
	int index = (int)(yyvsp[(4) - (8)].d), index2 = (int)(yyvsp[(6) - (8)].d);
	if(index >= 0 && index < (int)PView::list.size() &&
           index2 >= 0 && index2 < (int)PView::list.size()){
          PView::list[index2]->setOptions(PView::list[index]->getOptions());
        }
        else
	  yymsg(0, "Unknown view %d or %d", index, index2);
      }
#endif
      Free((yyvsp[(2) - (8)].c));
    ;}
    break;

  case 38:
#line 436 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData = new PViewDataList();
#endif
    ;}
    break;

  case 44:
#line 450 "Gmsh.y"
    { ViewCoord.push_back((yyvsp[(1) - (1)].d)); ;}
    break;

  case 45:
#line 452 "Gmsh.y"
    { ViewCoord.push_back((yyvsp[(3) - (3)].d)); ;}
    break;

  case 46:
#line 457 "Gmsh.y"
    { if(ViewValueList) ViewValueList->push_back((yyvsp[(1) - (1)].d)); ;}
    break;

  case 47:
#line 459 "Gmsh.y"
    { if(ViewValueList) ViewValueList->push_back((yyvsp[(3) - (3)].d)); ;}
    break;

  case 48:
#line 464 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strncmp((yyvsp[(1) - (1)].c), "SP", 2)){
	ViewValueList = &ViewData->SP; ViewNumList = &ViewData->NbSP;
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VP", 2)){
	ViewValueList = &ViewData->VP; ViewNumList = &ViewData->NbVP;
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TP", 2)){
	ViewValueList = &ViewData->TP; ViewNumList = &ViewData->NbTP;
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SL", 2)){
	ViewValueList = &ViewData->SL; ViewNumList = &ViewData->NbSL;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_LIN);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VL", 2)){
	ViewValueList = &ViewData->VL; ViewNumList = &ViewData->NbVL;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_LIN);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TL", 2)){
	ViewValueList = &ViewData->TL; ViewNumList = &ViewData->NbTL;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_LIN);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "ST", 2)){
	ViewValueList = &ViewData->ST; ViewNumList = &ViewData->NbST;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VT", 2)){
	ViewValueList = &ViewData->VT; ViewNumList = &ViewData->NbVT;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TT", 2)){
	ViewValueList = &ViewData->TT; ViewNumList = &ViewData->NbTT;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SQ", 2)){
	ViewValueList = &ViewData->SQ; ViewNumList = &ViewData->NbSQ;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_QUA);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VQ", 2)){
	ViewValueList = &ViewData->VQ; ViewNumList = &ViewData->NbVQ;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_QUA);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TQ", 2)){
	ViewValueList = &ViewData->TQ; ViewNumList = &ViewData->NbTQ;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_QUA);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SS", 2)){
	ViewValueList = &ViewData->SS; ViewNumList = &ViewData->NbSS;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TET);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VS", 2)){
	ViewValueList = &ViewData->VS; ViewNumList = &ViewData->NbVS;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TET);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TS", 2)){
	ViewValueList = &ViewData->TS; ViewNumList = &ViewData->NbTS;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TET);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SH", 2)){
	ViewValueList = &ViewData->SH; ViewNumList = &ViewData->NbSH;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_HEX);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VH", 2)){
	ViewValueList = &ViewData->VH; ViewNumList = &ViewData->NbVH;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_HEX);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TH", 2)){
	ViewValueList = &ViewData->TH; ViewNumList = &ViewData->NbTH;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_HEX);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SI", 2)){
	ViewValueList = &ViewData->SI; ViewNumList = &ViewData->NbSI;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VI", 2)){
	ViewValueList = &ViewData->VI; ViewNumList = &ViewData->NbVI;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TI", 2)){
	ViewValueList = &ViewData->TI; ViewNumList = &ViewData->NbTI;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SY", 2)){
	ViewValueList = &ViewData->SY; ViewNumList = &ViewData->NbSY;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PYR);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VY", 2)){
	ViewValueList = &ViewData->VY; ViewNumList = &ViewData->NbVY;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PYR);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TY", 2)){
	ViewValueList = &ViewData->TY; ViewNumList = &ViewData->NbTY;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PYR);
      }
      else{
	yymsg(0, "Unknown element type '%s'", (yyvsp[(1) - (1)].c));
	ViewValueList = 0; ViewNumList = 0;
      }
#endif
      ViewCoord.clear();
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 49:
#line 568 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(ViewValueList){
	for(int i = 0; i < 3; i++)
	  for(unsigned int j = 0; j < ViewCoord.size() / 3; j++)
	    ViewValueList->push_back(ViewCoord[3 * j + i]);
      }
#endif
    ;}
    break;

  case 50:
#line 578 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(ViewValueList) (*ViewNumList)++;
#endif
    ;}
    break;

  case 51:
#line 587 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(1) - (1)].c)) + 1; i++) ViewData->T2C.push_back((yyvsp[(1) - (1)].c)[i]);
#endif
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 52:
#line 594 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(3) - (3)].c)) + 1; i++) ViewData->T2C.push_back((yyvsp[(3) - (3)].c)[i]);
#endif
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 53:
#line 604 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->T2D.push_back((yyvsp[(3) - (8)].d));
      ViewData->T2D.push_back((yyvsp[(5) - (8)].d));
      ViewData->T2D.push_back((yyvsp[(7) - (8)].d));
      ViewData->T2D.push_back(ViewData->T2C.size());
#endif
    ;}
    break;

  case 54:
#line 613 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->NbT2++;
#endif
    ;}
    break;

  case 55:
#line 622 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(1) - (1)].c)) + 1; i++) ViewData->T3C.push_back((yyvsp[(1) - (1)].c)[i]);
#endif
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 56:
#line 629 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(3) - (3)].c)) + 1; i++) ViewData->T3C.push_back((yyvsp[(3) - (3)].c)[i]);
#endif
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 57:
#line 639 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->T3D.push_back((yyvsp[(3) - (10)].d)); ViewData->T3D.push_back((yyvsp[(5) - (10)].d));
      ViewData->T3D.push_back((yyvsp[(7) - (10)].d)); ViewData->T3D.push_back((yyvsp[(9) - (10)].d));
      ViewData->T3D.push_back(ViewData->T3C.size());
#endif
    ;}
    break;

  case 58:
#line 647 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->NbT3++;
#endif
    ;}
    break;

  case 59:
#line 657 "Gmsh.y"
    {
#if defined(HAVE_POST)
      int type =
	(ViewData->NbSL || ViewData->NbVL) ? TYPE_LIN :
	(ViewData->NbST || ViewData->NbVT) ? TYPE_TRI :
	(ViewData->NbSQ || ViewData->NbVQ) ? TYPE_QUA :
	(ViewData->NbSS || ViewData->NbVS) ? TYPE_TET :
	(ViewData->NbSY || ViewData->NbVY) ? TYPE_PYR :
	(ViewData->NbSI || ViewData->NbVI) ? TYPE_PRI :
      	(ViewData->NbSH || ViewData->NbVH) ? TYPE_HEX :
	0;
      ViewData->setInterpolationMatrices(type, ListOfListOfDouble2Matrix((yyvsp[(3) - (8)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(6) - (8)].l)));
#endif
    ;}
    break;

  case 60:
#line 676 "Gmsh.y"
    {
#if defined(HAVE_POST)
      int type =
	(ViewData->NbSL || ViewData->NbVL) ? TYPE_LIN :
	(ViewData->NbST || ViewData->NbVT) ? TYPE_TRI :
	(ViewData->NbSQ || ViewData->NbVQ) ? TYPE_QUA :
	(ViewData->NbSS || ViewData->NbVS) ? TYPE_TET :
      	(ViewData->NbSH || ViewData->NbVH) ? TYPE_HEX :
	0;
      ViewData->setInterpolationMatrices(type, ListOfListOfDouble2Matrix((yyvsp[(3) - (14)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(6) - (14)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(9) - (14)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(12) - (14)].l)));
#endif
    ;}
    break;

  case 61:
#line 695 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewValueList = &ViewData->Time;
#endif
    ;}
    break;

  case 62:
#line 701 "Gmsh.y"
    {
    ;}
    break;

  case 63:
#line 708 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 64:
#line 709 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 65:
#line 710 "Gmsh.y"
    { (yyval.i) = 2; ;}
    break;

  case 66:
#line 711 "Gmsh.y"
    { (yyval.i) = 3; ;}
    break;

  case 67:
#line 712 "Gmsh.y"
    { (yyval.i) = 4; ;}
    break;

  case 68:
#line 716 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 69:
#line 717 "Gmsh.y"
    { (yyval.i) = -1; ;}
    break;

  case 70:
#line 723 "Gmsh.y"
    { (yyval.c) = (char*)"("; ;}
    break;

  case 71:
#line 723 "Gmsh.y"
    { (yyval.c) = (char*)"["; ;}
    break;

  case 72:
#line 724 "Gmsh.y"
    { (yyval.c) = (char*)")"; ;}
    break;

  case 73:
#line 724 "Gmsh.y"
    { (yyval.c) = (char*)"]"; ;}
    break;

  case 77:
#line 734 "Gmsh.y"
    {
      Msg::SetOnelabNumber((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].d));
      Free((yyvsp[(3) - (7)].c));
    ;}
    break;

  case 78:
#line 739 "Gmsh.y"
    {
      Msg::SetOnelabString((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].c));
      Free((yyvsp[(3) - (7)].c));
      Free((yyvsp[(5) - (7)].c));
    ;}
    break;

  case 79:
#line 745 "Gmsh.y"
    {
      if(!gmsh_yysymbols.count((yyvsp[(1) - (4)].c)) && (yyvsp[(2) - (4)].i) && List_Nbr((yyvsp[(3) - (4)].l)) == 1){
        yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (4)].c));
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (4)].c)]);
        if(!(yyvsp[(2) - (4)].i)) s.list = (List_Nbr((yyvsp[(3) - (4)].l)) != 1); // list if 0 or > 1 elements
        if(!s.list){ // single expression
          if(List_Nbr((yyvsp[(3) - (4)].l)) != 1){
            yymsg(0, "Cannot assign list to variable '%s'", (yyvsp[(1) - (4)].c));
          }
          else{
            double d;
            List_Read((yyvsp[(3) - (4)].l), 0, &d);
            if(s.value.empty()){
              if((yyvsp[(2) - (4)].i)) yymsg(1, "Uninitialized variable '%s'", (yyvsp[(1) - (4)].c));
              s.value.resize(1, 0.);
            }
            switch((yyvsp[(2) - (4)].i)){
            case 0 : s.value[0] = d; break;
            case 1 : s.value[0] += d; break;
            case 2 : s.value[0] -= d; break;
            case 3 : s.value[0] *= d; break;
            case 4 :
              if(d) s.value[0] /= d;
              else yymsg(0, "Division by zero in '%s /= %g'", (yyvsp[(1) - (4)].c), d);
              break;
            }
          }
        }
        else{
          // list of expressions; this is not recommended (should use [] or ()
          // notation instead)
          switch((yyvsp[(2) - (4)].i)){
          case 0: // affect
            s.value.clear(); // fall-through
          case 1: // append
            for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
              double d;
              List_Read((yyvsp[(3) - (4)].l), i, &d);
              s.value.push_back(d);
            }
            break;
          case 2: // remove
            for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
              double d;
              List_Read((yyvsp[(3) - (4)].l), i, &d);
              std::vector<double>::iterator it = std::find(s.value.begin(),
                                                           s.value.end(), d);
              if(it != s.value.end()) s.value.erase(it);
            }
            break;
          default:
            yymsg(0, "Operators *= and /= not available for lists");
            break;
          }
        }
      }
      Free((yyvsp[(1) - (4)].c));
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 80:
#line 807 "Gmsh.y"
    {
      if(!gmsh_yysymbols.count((yyvsp[(1) - (3)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (3)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (3)].c)]);
        if(!s.list && s.value.empty())
          yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (3)].c));
        else if(!s.list)
          s.value[0] += (yyvsp[(2) - (3)].i);
        else
          yymsg(0, "Variable '%s' is a list", (yyvsp[(1) - (3)].c));
      }
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 81:
#line 823 "Gmsh.y"
    {
      gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (6)].c)]);
      s.list = true;
      double d;
      switch((yyvsp[(4) - (6)].i)){
      case 0: // affect
        s.value.clear(); // fall-through
      case 1: // append
        for(int i = 0; i < List_Nbr((yyvsp[(5) - (6)].l)); i++){
          List_Read((yyvsp[(5) - (6)].l), i, &d);
          s.value.push_back(d);
        }
        break;
      case 2: // remove
        for(int i = 0; i < List_Nbr((yyvsp[(5) - (6)].l)); i++){
          List_Read((yyvsp[(5) - (6)].l), i, &d);
          std::vector<double>::iterator it = std::find(s.value.begin(),
                                                       s.value.end(), d);
          if(it != s.value.end()) s.value.erase(it);
        }
        break;
      default:
        yymsg(0, "Operators *= and /= not available for lists");
        break;
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 82:
#line 853 "Gmsh.y"
    {
      assignVariables((yyvsp[(1) - (9)].c), (yyvsp[(4) - (9)].l), (yyvsp[(7) - (9)].i), (yyvsp[(8) - (9)].l));
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(4) - (9)].l));
      List_Delete((yyvsp[(8) - (9)].l));
    ;}
    break;

  case 83:
#line 863 "Gmsh.y"
    {
      assignVariable((yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(5) - (7)].i), (yyvsp[(6) - (7)].d));
      Free((yyvsp[(1) - (7)].c));
    ;}
    break;

  case 84:
#line 868 "Gmsh.y"
    {
      incrementVariable((yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].i));
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 85:
#line 876 "Gmsh.y"
    {
      assignVariable((yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(5) - (7)].i), (yyvsp[(6) - (7)].d));
      Free((yyvsp[(1) - (7)].c));
    ;}
    break;

  case 86:
#line 881 "Gmsh.y"
    {
      incrementVariable((yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].i));
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 87:
#line 889 "Gmsh.y"
    {
      gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)] = std::vector<std::string>(1, (yyvsp[(3) - (4)].c));
      Free((yyvsp[(1) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 88:
#line 898 "Gmsh.y"
    {
      gmsh_yystringsymbols[(yyvsp[(1) - (8)].c)] = std::vector<std::string>();
      Free((yyvsp[(1) - (8)].c));
    ;}
    break;

  case 89:
#line 903 "Gmsh.y"
    {
      std::vector<std::string> s;
      for(int i = 0; i < List_Nbr((yyvsp[(7) - (9)].l)); i++){
        char **c = (char**)List_Pointer((yyvsp[(7) - (9)].l), i);
        s.push_back(*c);
        Free(*c);
      }
      gmsh_yystringsymbols[(yyvsp[(1) - (9)].c)] = s;
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 90:
#line 915 "Gmsh.y"
    {
      if(gmsh_yystringsymbols.count((yyvsp[(1) - (9)].c))){
        for(int i = 0; i < List_Nbr((yyvsp[(7) - (9)].l)); i++){
          char **c = (char**)List_Pointer((yyvsp[(7) - (9)].l), i);
          gmsh_yystringsymbols[(yyvsp[(1) - (9)].c)].push_back(*c);
          Free(*c);
        }
      }
      else
        yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (9)].c));
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 91:
#line 932 "Gmsh.y"
    {
      std::string tmp((yyvsp[(5) - (6)].c));
      StringOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (6)].c), 0, (yyvsp[(3) - (6)].c), tmp);
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(3) - (6)].c)); Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 92:
#line 939 "Gmsh.y"
    {
      std::string tmp((yyvsp[(8) - (9)].c));
      StringOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), tmp);
      Free((yyvsp[(1) - (9)].c)); Free((yyvsp[(6) - (9)].c)); Free((yyvsp[(8) - (9)].c));
    ;}
    break;

  case 93:
#line 948 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (6)].c), 0, (yyvsp[(3) - (6)].c), d)){
	switch((yyvsp[(4) - (6)].i)){
	case 0 : d = (yyvsp[(5) - (6)].d); break;
	case 1 : d += (yyvsp[(5) - (6)].d); break;
	case 2 : d -= (yyvsp[(5) - (6)].d); break;
	case 3 : d *= (yyvsp[(5) - (6)].d); break;
	case 4 :
	  if((yyvsp[(5) - (6)].d)) d /= (yyvsp[(5) - (6)].d);
	  else yymsg(0, "Division by zero in '%s.%s /= %g'", (yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].d));
	  break;
	}
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (6)].c), 0, (yyvsp[(3) - (6)].c), d);
      }
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 94:
#line 967 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), d)){
	switch((yyvsp[(7) - (9)].i)){
	case 0 : d = (yyvsp[(8) - (9)].d); break;
	case 1 : d += (yyvsp[(8) - (9)].d); break;
	case 2 : d -= (yyvsp[(8) - (9)].d); break;
	case 3 : d *= (yyvsp[(8) - (9)].d); break;
	case 4 :
	  if((yyvsp[(8) - (9)].d)) d /= (yyvsp[(8) - (9)].d);
	  else yymsg(0, "Division by zero in '%s[%d].%s /= %g'", (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), (yyvsp[(8) - (9)].d));
	  break;
	}
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), d);
      }
      Free((yyvsp[(1) - (9)].c)); Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 95:
#line 986 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (5)].c), 0, (yyvsp[(3) - (5)].c), d)){
	d += (yyvsp[(4) - (5)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (5)].c), 0, (yyvsp[(3) - (5)].c), d);
      }
      Free((yyvsp[(1) - (5)].c)); Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 96:
#line 996 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (8)].c), (int)(yyvsp[(3) - (8)].d), (yyvsp[(6) - (8)].c), d)){
	d += (yyvsp[(7) - (8)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (8)].c), (int)(yyvsp[(3) - (8)].d), (yyvsp[(6) - (8)].c), d);
      }
      Free((yyvsp[(1) - (8)].c)); Free((yyvsp[(6) - (8)].c));
    ;}
    break;

  case 97:
#line 1008 "Gmsh.y"
    {
      ColorOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (8)].c), 0, (yyvsp[(5) - (8)].c), (yyvsp[(7) - (8)].u));
      Free((yyvsp[(1) - (8)].c)); Free((yyvsp[(5) - (8)].c));
    ;}
    break;

  case 98:
#line 1014 "Gmsh.y"
    {
      ColorOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (11)].c), (int)(yyvsp[(3) - (11)].d), (yyvsp[(8) - (11)].c), (yyvsp[(10) - (11)].u));
      Free((yyvsp[(1) - (11)].c)); Free((yyvsp[(8) - (11)].c));
    ;}
    break;

  case 99:
#line 1022 "Gmsh.y"
    {
      GmshColorTable *ct = GetColorTable(0);
      if(!ct)
	yymsg(0, "View[%d] does not exist", 0);
      else{
	ct->size = List_Nbr((yyvsp[(5) - (6)].l));
	if(ct->size > COLORTABLE_NBMAX_COLOR)
	  yymsg(0, "Too many (%d>%d) colors in View[%d].ColorTable",
		ct->size, COLORTABLE_NBMAX_COLOR, 0);
	else
	  for(int i = 0; i < ct->size; i++) List_Read((yyvsp[(5) - (6)].l), i, &ct->table[i]);
	if(ct->size == 1){
	  ct->size = 2;
	  ct->table[1] = ct->table[0];
	}
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 100:
#line 1043 "Gmsh.y"
    {
      GmshColorTable *ct = GetColorTable((int)(yyvsp[(3) - (9)].d));
      if(!ct)
	yymsg(0, "View[%d] does not exist", (int)(yyvsp[(3) - (9)].d));
      else{
	ct->size = List_Nbr((yyvsp[(8) - (9)].l));
	if(ct->size > COLORTABLE_NBMAX_COLOR)
	  yymsg(0, "Too many (%d>%d) colors in View[%d].ColorTable",
		   ct->size, COLORTABLE_NBMAX_COLOR, (int)(yyvsp[(3) - (9)].d));
	else
	  for(int i = 0; i < ct->size; i++) List_Read((yyvsp[(8) - (9)].l), i, &ct->table[i]);
	if(ct->size == 1){
	  ct->size = 2;
	  ct->table[1] = ct->table[0];
	}
      }
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(8) - (9)].l));
    ;}
    break;

  case 101:
#line 1066 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      if(!strcmp((yyvsp[(1) - (5)].c),"Background"))
	GModel::current()->getFields()->setBackgroundFieldId((int)(yyvsp[(4) - (5)].d));
      else if(!strcmp((yyvsp[(1) - (5)].c),"BoundaryLayer"))
	GModel::current()->getFields()->setBoundaryLayerFieldId((int)(yyvsp[(4) - (5)].d));
      else
	yymsg(0, "Unknown command %s Field", (yyvsp[(1) - (5)].c));
#endif
    ;}
    break;

  case 102:
#line 1077 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      if(!GModel::current()->getFields()->newField((int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c)))
	yymsg(0, "Cannot create field %i of type '%s'", (int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c));
#endif
      Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 103:
#line 1085 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (9)].d));
      if(field){
	FieldOption *option = field->options[(yyvsp[(6) - (9)].c)];
	if(option){
	  try { option->numericalValue((yyvsp[(8) - (9)].d)); }
	  catch(...){
	    yymsg(0, "Cannot assign a numerical value to option '%s' "
		  "in field %i of type '%s'", (yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
	  }
	}
	else
	  yymsg(0, "Unknown option '%s' in field %i of type '%s'",
		(yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (9)].d));
#endif
      Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 104:
#line 1107 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (9)].d));
      if(field){
	FieldOption *option = field->options[(yyvsp[(6) - (9)].c)];
	if(option){
	  try { option->string((yyvsp[(8) - (9)].c)); }
	  catch (...){
	    yymsg(0, "Cannot assign a string value to  option '%s' "
		  "in field %i of type '%s'", (yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
	  }
	}
	else
	  yymsg(0, "Unknown option '%s' in field %i of type '%s'",
		(yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (9)].d));
#endif
      Free((yyvsp[(6) - (9)].c));
      Free((yyvsp[(8) - (9)].c));
    ;}
    break;

  case 105:
#line 1130 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (11)].d));
      if(field){
	FieldOption *option = field->options[(yyvsp[(6) - (11)].c)];
	if(option){
	  if (option->getType() == FIELD_OPTION_LIST) {
	    std::list<int> vl = option->list();
	    vl.clear();
	    for(int i = 0; i < List_Nbr((yyvsp[(9) - (11)].l)); i++){
	      double id;
	      List_Read((yyvsp[(9) - (11)].l), i, &id);
	      vl.push_back((int)id);
	    }
	    option->list(vl);
	  }
	  else {
	    std::list<double> vl = option->listdouble();
	    vl.clear();
	    for(int i = 0; i < List_Nbr((yyvsp[(9) - (11)].l)); i++){
	      double id;
	      List_Read((yyvsp[(9) - (11)].l), i, &id);
	      vl.push_back(id);
	    }
	    option->listdouble(vl);
	  }
	}
	else
	  yymsg(0, "Unknown option '%s' in field %i of type '%s'",
		(yyvsp[(6) - (11)].c), (int)(yyvsp[(3) - (11)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (11)].d));
#endif
      Free((yyvsp[(6) - (11)].c));
      List_Delete((yyvsp[(9) - (11)].l));
    ;}
    break;

  case 106:
#line 1168 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (7)].d));
      if(field){
        FieldCallback *callback = field->callbacks[(yyvsp[(6) - (7)].c)];
        if(callback) {
          callback->run();
        }
        else
          yymsg(0, "Unknown callback '%s' in field %i of type '%s'",
              (yyvsp[(6) - (7)].c), (int)(yyvsp[(3) - (7)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (7)].d));
#endif
      Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 107:
#line 1189 "Gmsh.y"
    {
#if defined(HAVE_PLUGINS)
      try {
	PluginManager::instance()->setPluginOption((yyvsp[(3) - (9)].c), (yyvsp[(6) - (9)].c), (yyvsp[(8) - (9)].d));
      }
      catch (...) {
	yymsg(0, "Unknown option '%s' or plugin '%s'", (yyvsp[(6) - (9)].c), (yyvsp[(3) - (9)].c));
      }
#endif
      Free((yyvsp[(3) - (9)].c)); Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 108:
#line 1201 "Gmsh.y"
    {
#if defined(HAVE_PLUGINS)
      try {
	PluginManager::instance()->setPluginOption((yyvsp[(3) - (9)].c), (yyvsp[(6) - (9)].c), (yyvsp[(8) - (9)].c));
      }
      catch (...) {
	yymsg(0, "Unknown option '%s' or plugin '%s'", (yyvsp[(6) - (9)].c), (yyvsp[(3) - (9)].c));
      }
#endif
      Free((yyvsp[(3) - (9)].c)); Free((yyvsp[(6) - (9)].c)); Free((yyvsp[(8) - (9)].c));
    ;}
    break;

  case 112:
#line 1219 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (3)].c));
      std::vector<double> val(1, 0.);
      if(!gmsh_yysymbols.count(key)){
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 113:
#line 1228 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (5)].c));
      std::vector<double> val(1, (yyvsp[(5) - (5)].d));
      if(!gmsh_yysymbols.count(key)){
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 114:
#line 1237 "Gmsh.y"
    { floatOptions.clear(); charOptions.clear(); ;}
    break;

  case 115:
#line 1239 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(6) - (9)].l)) != 1)
	yymsg(1, "List notation should be used to define list '%s[]'", (yyvsp[(3) - (9)].c));
      std::string key((yyvsp[(3) - (9)].c));
      std::vector<double> val;
      for(int i = 0; i < List_Nbr((yyvsp[(6) - (9)].l)); i++){
        double d;
        List_Read((yyvsp[(6) - (9)].l), i, &d);
        val.push_back(d);
      }
      if(!gmsh_yysymbols.count(key)){
        Msg::ExchangeOnelabParameter(key, val, floatOptions, charOptions);
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (9)].c));
      Free((yyvsp[(6) - (9)].l));
    ;}
    break;

  case 116:
#line 1257 "Gmsh.y"
    { floatOptions.clear(); charOptions.clear(); ;}
    break;

  case 117:
#line 1259 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (11)].c));
      std::vector<double> val;
      for(int i = 0; i < List_Nbr((yyvsp[(8) - (11)].l)); i++){
        double d;
        List_Read((yyvsp[(8) - (11)].l), i, &d);
        val.push_back(d);
      }
      if(!gmsh_yysymbols.count(key)){
        Msg::ExchangeOnelabParameter(key, val, floatOptions, charOptions);
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (11)].c));
      Free((yyvsp[(8) - (11)].l));
    ;}
    break;

  case 118:
#line 1275 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (5)].c)), val((yyvsp[(5) - (5)].c));
      if(!gmsh_yystringsymbols.count(key)){
        gmsh_yystringsymbols[key] = std::vector<std::string>(1, val);
      }
      Free((yyvsp[(3) - (5)].c));
      Free((yyvsp[(5) - (5)].c));
    ;}
    break;

  case 119:
#line 1284 "Gmsh.y"
    { floatOptions.clear(); charOptions.clear(); ;}
    break;

  case 120:
#line 1286 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (9)].c)), val((yyvsp[(6) - (9)].c));
      if(!gmsh_yysymbols.count(key)){
        Msg::ExchangeOnelabParameter(key, val, floatOptions, charOptions);
        gmsh_yystringsymbols[key] = std::vector<std::string>(1, val);
      }
      Free((yyvsp[(3) - (9)].c));
      Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 122:
#line 1300 "Gmsh.y"
    {
      std::string name((yyvsp[(3) - (3)].c));
      Msg::UndefineOnelabParameter(name);
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 123:
#line 1308 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(doubleXstring));
      doubleXstring v = {(yyvsp[(1) - (3)].d), (yyvsp[(3) - (3)].c)};
      List_Add((yyval.l), &v);
    ;}
    break;

  case 124:
#line 1314 "Gmsh.y"
    {
      doubleXstring v = {(yyvsp[(3) - (5)].d), (yyvsp[(5) - (5)].c)};
      List_Add((yyval.l), &v);
    ;}
    break;

  case 125:
#line 1319 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(doubleXstring));
      int n = List_Nbr((yyvsp[(1) - (5)].l));
      if(!gmsh_yystringsymbols.count((yyvsp[(3) - (5)].c))){
	yymsg(0, "Unknown string variable '%s'", (yyvsp[(3) - (5)].c));
      }
      else{
        std::vector<std::string> &s(gmsh_yystringsymbols[(yyvsp[(3) - (5)].c)]);
        int m = s.size();
        if(n == m){
          for(int i = 0; i < n; i++){
            double d;
            List_Read((yyvsp[(1) - (5)].l), i, &d);
            doubleXstring v = {d, strsave((char*)s[i].c_str())};
            List_Add((yyval.l), &v);
          }
        }
        else{
          yymsg(0, "Size mismatch in enumeration: %d != %d", n, m);
        }
      }
      List_Delete((yyvsp[(1) - (5)].l));
    ;}
    break;

  case 128:
#line 1350 "Gmsh.y"
    {
      std::string key((yyvsp[(2) - (3)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (3)].l)); i++){
        double v;
        List_Read((yyvsp[(3) - (3)].l), i, &v);
        floatOptions[key].push_back(v);
      }
      Free((yyvsp[(2) - (3)].c));
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 129:
#line 1361 "Gmsh.y"
    {
      std::string key((yyvsp[(2) - (5)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (5)].l)); i++){
        doubleXstring v;
        List_Read((yyvsp[(4) - (5)].l), i, &v);
        floatOptions[key].push_back(v.d);
        charOptions[key].push_back(v.s);
      }
      Free((yyvsp[(2) - (5)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (5)].l)); i++)
        Free(((doubleXstring*)List_Pointer((yyvsp[(4) - (5)].l), i))->s);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 130:
#line 1376 "Gmsh.y"
    {
      std::string key((yyvsp[(2) - (3)].c));
      std::string val((yyvsp[(3) - (3)].c));
      charOptions[key].push_back(val);
      Free((yyvsp[(2) - (3)].c));
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 133:
#line 1392 "Gmsh.y"
    {
      std::string key((yyvsp[(2) - (3)].c));
      double val = (yyvsp[(3) - (3)].d);
      floatOptions[key].push_back(val);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 134:
#line 1400 "Gmsh.y"
    {
      std::string key((yyvsp[(2) - (3)].c));
      std::string val((yyvsp[(3) - (3)].c));
      charOptions[key].push_back(val);
      Free((yyvsp[(2) - (3)].c));
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 135:
#line 1409 "Gmsh.y"
    {
      std::string key("Macro");
      std::string val((yyvsp[(3) - (3)].c));
      charOptions[key].push_back(val);
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 136:
#line 1417 "Gmsh.y"
    {
      std::string key((yyvsp[(2) - (5)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (5)].l)); i++){
        char *s;
        List_Read((yyvsp[(4) - (5)].l), i, &s);
        std::string val(s);
        Free(s);
        charOptions[key].push_back(val);
      }
      Free((yyvsp[(2) - (5)].c));
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 137:
#line 1435 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(1) - (1)].d);
    ;}
    break;

  case 138:
#line 1439 "Gmsh.y"
    {
      int t = GModel::current()->getGEOInternals()->getMaxPhysicalTag();
      GModel::current()->getGEOInternals()->setMaxPhysicalTag(t + 1);
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (1)].c)), 0, t + 1);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 139:
#line 1446 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (3)].c)), 0, (yyvsp[(3) - (3)].d));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 140:
#line 1454 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(1) - (1)].d);
    ;}
    break;

  case 141:
#line 1458 "Gmsh.y"
    {
      int t = GModel::current()->getGEOInternals()->getMaxPhysicalTag();
      GModel::current()->getGEOInternals()->setMaxPhysicalTag(t + 1);
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (1)].c)), 1, t + 1);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 142:
#line 1465 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (3)].c)), 1, (yyvsp[(3) - (3)].d));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 143:
#line 1473 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(1) - (1)].d);
    ;}
    break;

  case 144:
#line 1477 "Gmsh.y"
    {
      int t = GModel::current()->getGEOInternals()->getMaxPhysicalTag();
      GModel::current()->getGEOInternals()->setMaxPhysicalTag(t + 1);
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (1)].c)), 2, t + 1);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 145:
#line 1484 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (3)].c)), 2, (yyvsp[(3) - (3)].d));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 146:
#line 1492 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(1) - (1)].d);
    ;}
    break;

  case 147:
#line 1496 "Gmsh.y"
    {
      int t = GModel::current()->getGEOInternals()->getMaxPhysicalTag();
      GModel::current()->getGEOInternals()->setMaxPhysicalTag(t + 1);
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (1)].c)), 3, t + 1);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 148:
#line 1503 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (3)].c)), 3, (yyvsp[(3) - (3)].d));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 149:
#line 1511 "Gmsh.y"
    {
      (yyval.i) = -1;
    ;}
    break;

  case 150:
#line 1515 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(4) - (5)].d);
    ;}
    break;

  case 151:
#line 1521 "Gmsh.y"
    {
      for(int i = 0; i < 4; i++) (yyval.v)[i] = 0.;
    ;}
    break;

  case 152:
#line 1525 "Gmsh.y"
    {
      for(int i = 0; i < 4; i++) (yyval.v)[i] = (yyvsp[(2) - (2)].v)[i];
    ;}
    break;

  case 153:
#line 1532 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      double x = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[0];
      double y = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[1];
      double z = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[2];
      double lc = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[3];
      if(lc == 0.) lc = MAX_LC; // no mesh size given at the point
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addVertex(num, x, y, z, lc);
      }
      else{
        if(!myGmshSurface)
          GModel::current()->getGEOInternals()->addVertex(num, x, y, z, lc);
        else
          GModel::current()->getGEOInternals()->addVertex(num, x, y, myGmshSurface, lc);
      }
      AddToTemporaryBoundingBox(x, y, z);
      (yyval.s).Type = MSH_POINT;
      (yyval.s).Num = num;
    ;}
    break;

  case 154:
#line 1553 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addLine(num, tags);
      }
      else{
        GModel::current()->getGEOInternals()->addLine(num, tags);
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_LINE;
      (yyval.s).Num = num;
    ;}
    break;

  case 155:
#line 1567 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      if(factory == "OpenCASCADE"){
        yymsg(0, "Spline not available with OpenCASCADE factory");
      }
      else{
        GModel::current()->getGEOInternals()->addSpline(num, tags);
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_SPLN;
      (yyval.s).Num = num;
    ;}
    break;

  case 156:
#line 1581 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (8)].l), tags);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (8)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(tags.size() == 3){
          GModel::current()->getOCCInternals()->addCircleArc
            (num, tags[0], tags[1], tags[2]);
        }
        else if(param.size() >= 4 && param.size() <= 6){
          double r = param[3];
          double a1 = (param.size() == 6) ? param[4] : 0.;
          double a2 = (param.size() == 6) ? param[5] :
            (param.size() == 5) ? param[4] : 2.*M_PI;
          GModel::current()->getOCCInternals()->addCircle
            (num, param[0], param[1], param[2], r, a1, a2);
        }
        else{
          yymsg(0, "Circle requires 3 points or 4 to 6 parameters");
        }
      }
      else{
        if(tags.size() == 3){
          GModel::current()->getGEOInternals()->addCircleArc
            (num, tags[0], tags[1], tags[2], (yyvsp[(7) - (8)].v)[0], (yyvsp[(7) - (8)].v)[1], (yyvsp[(7) - (8)].v)[2]);
        }
        else{
          yymsg(0, "Circle requires 3 points");
        }
      }
      List_Delete((yyvsp[(6) - (8)].l));
      (yyval.s).Type = MSH_SEGM_CIRC;
      (yyval.s).Num = num;
    ;}
    break;

  case 157:
#line 1616 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (8)].l), tags);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (8)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(tags.size() == 3){
          GModel::current()->getOCCInternals()->addEllipseArc
            (num, tags[0], tags[1], tags[2]);
        }
        else if(tags.size() == 4){
          GModel::current()->getOCCInternals()->addEllipseArc
            (num, tags[0], tags[1], tags[3]);
        }
        else if(param.size() >= 5 && param.size() <= 7){
          double a1 = (param.size() == 7) ? param[5] : 0.;
          double a2 = (param.size() == 7) ? param[6] :
            (param.size() == 6) ? param[5] : 2.*M_PI;
          GModel::current()->getOCCInternals()->addEllipse
            (num, param[0], param[1], param[2], param[3], param[4], a1, a2);
        }
        else{
          yymsg(0, "Ellipse requires 3 or 4 points, or 5 to 7 parameters");
        }
      }
      else{
        if(tags.size() == 4){
          GModel::current()->getGEOInternals()->addEllipseArc
            (num, tags[0], tags[1], tags[2], tags[3], (yyvsp[(7) - (8)].v)[0], (yyvsp[(7) - (8)].v)[1], (yyvsp[(7) - (8)].v)[2]);
        }
        else{
          yymsg(0, "Ellipse requires 4 points");
        }
      }
      List_Delete((yyvsp[(6) - (8)].l));
      (yyval.s).Type = MSH_SEGM_ELLI;
      (yyval.s).Num = num;
    ;}
    break;

  case 158:
#line 1654 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addBSpline(num, tags);
      }
      else{
        GModel::current()->getGEOInternals()->addBSpline(num, tags);
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_BSPLN;
      (yyval.s).Num = num;
    ;}
    break;

  case 159:
#line 1668 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addBezier(num, tags);
      }
      else{
        GModel::current()->getGEOInternals()->addBezier(num, tags);
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_BEZIER;
      (yyval.s).Num = num;
    ;}
    break;

  case 160:
#line 1683 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (11)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (11)].l), tags);
      std::vector<double> knots; ListOfDouble2Vector((yyvsp[(8) - (11)].l), knots);
      if(factory == "OpenCASCADE"){
        yymsg(0, "Nurbs not available yet with OpenCASCADE factory");
      }
      else{
        int order = knots.size() - tags.size() - 1;
        if(order != (int)(yyvsp[(10) - (11)].d))
          yymsg(1, "Incompatible Nurbs order: using %d", order);
        GModel::current()->getGEOInternals()->addNurbs(num, tags, knots);
      }
      List_Delete((yyvsp[(6) - (11)].l));
      List_Delete((yyvsp[(8) - (11)].l));
      (yyval.s).Type = MSH_SEGM_NURBS;
      (yyval.s).Num = num;
    ;}
    break;

  case 161:
#line 1702 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      GModel::current()->getGEOInternals()->addCompoundLine(num, tags);
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_SEGM_COMPOUND;
      (yyval.s).Num = num;
    ;}
    break;

  case 162:
#line 1711 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addWire(num, tags, false);
      }
      else{
        yymsg(0, "Wire only available using OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_LOOP;
      (yyval.s).Num = num;
    ;}
    break;

  case 163:
#line 1725 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addLineLoop(num, tags);
      }
      else{
        GModel::current()->getGEOInternals()->addLineLoop(num, tags);
      }
      List_Delete((yyvsp[(7) - (8)].l));
      Free((yyvsp[(2) - (8)].c));
      (yyval.s).Type = MSH_SEGM_LOOP;
      (yyval.s).Num = num;
    ;}
    break;

  case 164:
#line 1740 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addPlaneSurface(num, tags);
      }
      else{
        GModel::current()->getGEOInternals()->addPlaneSurface(num, tags);
      }
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_SURF_PLAN;
      (yyval.s).Num = num;
    ;}
    break;

  case 165:
#line 1754 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (8)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(6) - (8)].l), wires);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(wires.size() != 1){
          yymsg(0, "OpenCASCADE face filling requires a single line loop");
        }
        else{
          GModel::current()->getOCCInternals()->addSurfaceFilling(num, wires[0]);
        }
      }
      else{
        GModel::current()->getGEOInternals()->addSurfaceFilling(num, wires, (yyvsp[(7) - (8)].i));
      }
      List_Delete((yyvsp[(6) - (8)].l));
      (yyval.s).Type = MSH_SURF_REGL;
      (yyval.s).Num = num;
    ;}
    break;

  case 166:
#line 1773 "Gmsh.y"
    {
      yymsg(2, "'Ruled Surface' command is deprecated: use 'Surface' instead");
      int num = (int)(yyvsp[(4) - (9)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(7) - (9)].l), wires);
      GModel::current()->getGEOInternals()->addSurfaceFilling(num, wires, (yyvsp[(8) - (9)].i));
      List_Delete((yyvsp[(7) - (9)].l));
      (yyval.s).Type =  MSH_SURF_REGL;
      (yyval.s).Num = num;
    ;}
    break;

  case 167:
#line 1783 "Gmsh.y"
    {
      myGmshSurface = 0;
      (yyval.s).Type = 0;
      (yyval.s).Num = 0;
    ;}
    break;

  case 168:
#line 1789 "Gmsh.y"
    {
      myGmshSurface = gmshSurface::getSurface((int)(yyvsp[(3) - (4)].d));
      (yyval.s).Type = 0;
      (yyval.s).Num = 0;
    ;}
    break;

  case 169:
#line 1795 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (10)].d);
      myGmshSurface = gmshParametricSurface::NewParametricSurface(num, (yyvsp[(7) - (10)].c), (yyvsp[(8) - (10)].c), (yyvsp[(9) - (10)].c));
      (yyval.s).Type = 0;
      (yyval.s).Num = num;
    ;}
    break;

  case 170:
#line 1802 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      (yyval.s).Type = 0;
      if(param.size() >= 4 && param.size() <= 7){
        if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
          double a1 = (param.size() >= 5) ? param[4] : -M_PI/2;
          double a2 = (param.size() >= 6) ? param[5] : M_PI/2;
          double a3 = (param.size() >= 7) ? param[6] : 2.*M_PI;
          GModel::current()->getOCCInternals()->addSphere
            (num, param[0], param[1], param[2], param[3], a1, a2, a3);
        }
        else{
          yymsg(0, "Sphere only available with OpenCASCADE factory");
        }
        (yyval.s).Type = MSH_VOLUME;
      }
      else if(tags.size() == 2){
        myGmshSurface = GModel::current()->getGEOInternals()->newGeometrySphere
          (num, tags[0], tags[1]);
      }
      else{
        yymsg(0, "Sphere requires 2 points or from 4 to 7 parameters");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Num = num;
    ;}
    break;

  case 171:
#line 1831 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      if(tags.size() == 2){
        myGmshSurface = GModel::current()->getGEOInternals()->newGeometryPolarSphere
          (num, tags[0], tags[1]);
      }
      else{
        yymsg(0, "PolarSphere requires 2 points");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = 0;
      (yyval.s).Num = num;
    ;}
    break;

  case 172:
#line 1846 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 6){
          GModel::current()->getOCCInternals()->addBlock
            (num, param[0], param[1], param[2], param[3], param[4], param[5]);
        }
        else{
          yymsg(0, "Block requires 6 parameters");
        }
      }
      else{
        yymsg(0, "Block only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 173:
#line 1866 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 5 || param.size() == 6){
          double alpha = (param.size() == 6) ? param[5] : 2*M_PI;
          GModel::current()->getOCCInternals()->addTorus
            (num, param[0], param[1], param[2], param[3], param[4], alpha);
        }
        else{
          yymsg(0, "Torus requires 5 ou 6 parameters");
        }
      }
      else{
        yymsg(0, "Torus only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 174:
#line 1887 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 6 || param.size() == 7){
          double r = (param.size() == 7) ? param[6] : 0.;
          GModel::current()->getOCCInternals()->addRectangle
            (num, param[0], param[1], param[2], param[3], param[4], param[5], r);
        }
        else{
          yymsg(0, "Rectangle requires 6 ou 7 parameters");
        }
      }
      else{
        yymsg(0, "Rectangle only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SURF_PLAN;
      (yyval.s).Num = num;
    ;}
    break;

  case 175:
#line 1908 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 4 || param.size() == 5){
          double ry = (param.size() == 5) ? param[4] : param[3];
          GModel::current()->getOCCInternals()->addDisk
            (num, param[0], param[1], param[2], param[3], ry);
        }
        else{
          yymsg(0, "Disk requires 4 or 5 parameters");
        }
      }
      else{
        yymsg(0, "Disk only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SURF_PLAN;
      (yyval.s).Num = num;
    ;}
    break;

  case 176:
#line 1929 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 7 || param.size() == 8){
          double angle = (param.size() == 8) ? param[7] : 2*M_PI;
          GModel::current()->getOCCInternals()->addCylinder
            (num, param[0], param[1], param[2], param[3], param[4], param[5],
             param[6], angle);
        }
        else{
          yymsg(0, "Cylinder requires 7 or 8 parameters");
        }
      }
      else{
        yymsg(0, "Cylinder only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 177:
#line 1951 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 8 || param.size() == 9){
          double alpha = (param.size() == 9) ? param[8] : 2*M_PI;
          GModel::current()->getOCCInternals()->addCone
            (num, param[0], param[1], param[2], param[3], param[4], param[5],
             param[6], param[7], alpha);
        }
        else{
          yymsg(0, "Cone requires 8 or 9 parameters");
        }
      }
      else{
        yymsg(0, "Cone only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 178:
#line 1973 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 7){
          GModel::current()->getOCCInternals()->addWedge
            (num, param[0], param[1], param[2], param[3], param[4], param[5],
             param[6]);
        }
        else{
          yymsg(0, "Wedge requires 7 parameters");
        }
      }
      else{
        yymsg(0, "Wedge only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 179:
#line 1994 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() >= 2){
          int in = (int)param[0];
          double offset = param[1];
          std::vector<int> exclude;
          for(unsigned int i = 2; i < param.size(); i++)
            exclude.push_back(param[i]);
          GModel::current()->getOCCInternals()->addThickSolid
            (num, in, exclude, offset);
        }
        else{
          yymsg(0, "ThickSolid requires at least 2 parameters");
        }
      }
      else{
        yymsg(0, "ThickSolid only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
    ;}
    break;

  case 180:
#line 2017 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      GModel::current()->getGEOInternals()->addCompoundSurface(num, tags);
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_SURF_COMPOUND;
      (yyval.s).Num = num;
    ;}
    break;

  case 181:
#line 2027 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (12)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (12)].l), tags);
      std::vector<int> bndTags[4];
      for(int i = 0; i < List_Nbr((yyvsp[(10) - (12)].l)); i++){
        if(i < 4)
          ListOfDouble2Vector(*(List_T**)List_Pointer((yyvsp[(10) - (12)].l), i), bndTags[i]);
        else
          break;
      }
      GModel::current()->getGEOInternals()->addCompoundSurface(num, tags, bndTags);
      List_Delete((yyvsp[(7) - (12)].l));
      Free((yyvsp[(8) - (12)].c));
      for (int i = 0; i < List_Nbr((yyvsp[(10) - (12)].l)); i++)
        List_Delete(*(List_T**)List_Pointer((yyvsp[(10) - (12)].l), i));
      List_Delete((yyvsp[(10) - (12)].l));
      (yyval.s).Type = MSH_SURF_COMPOUND;
      (yyval.s).Num = num;
    ;}
    break;

  case 182:
#line 2047 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addSurfaceLoop(num, tags);
      }
      else{
        GModel::current()->getGEOInternals()->addSurfaceLoop(num, tags);
      }
      List_Delete((yyvsp[(7) - (8)].l));
      Free((yyvsp[(2) - (8)].c));
      (yyval.s).Type = MSH_SURF_LOOP;
      (yyval.s).Num = num;
    ;}
    break;

  case 183:
#line 2062 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addVolume(num, tags);
      }
      else{
        GModel::current()->getGEOInternals()->addVolume(num, tags);
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 184:
#line 2076 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> wires, out[4]; ListOfDouble2Vector((yyvsp[(6) - (7)].l), wires);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addThruSections
          (num, wires, out, true, false);
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 185:
#line 2091 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> wires, out[4]; ListOfDouble2Vector((yyvsp[(7) - (8)].l), wires);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addThruSections
          (num, wires, out, true, true);
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 186:
#line 2106 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      GModel::current()->getGEOInternals()->addCompoundVolume(num, tags);
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_VOLUME_COMPOUND;
      (yyval.s).Num = num;
    ;}
    break;

  case 187:
#line 2115 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].i);
      int op = (yyvsp[(6) - (8)].i);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      GModel::current()->getGEOInternals()->modifyPhysicalGroup(0, num, op, tags);
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_PHYSICAL_POINT;
      (yyval.s).Num = num;
    ;}
    break;

  case 188:
#line 2125 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].i);
      int op = (yyvsp[(6) - (8)].i);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      GModel::current()->getGEOInternals()->modifyPhysicalGroup(1, num, op, tags);
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_PHYSICAL_LINE;
      (yyval.s).Num = num;
    ;}
    break;

  case 189:
#line 2135 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].i);
      int op = (yyvsp[(6) - (8)].i);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      GModel::current()->getGEOInternals()->modifyPhysicalGroup(2, num, op, tags);
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_PHYSICAL_SURFACE;
      (yyval.s).Num = num;
    ;}
    break;

  case 190:
#line 2145 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].i);
      int op = (yyvsp[(6) - (8)].i);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      GModel::current()->getGEOInternals()->modifyPhysicalGroup(3, num, op, tags);
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_PHYSICAL_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 191:
#line 2160 "Gmsh.y"
    {
      std::vector<int> tags[4]; ListOfShapes2Vectors((yyvsp[(4) - (5)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->translate(tags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2]);
      }
      else{
        GModel::current()->getGEOInternals()->translate(tags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2]);
      }
      (yyval.l) = (yyvsp[(4) - (5)].l);
    ;}
    break;

  case 192:
#line 2171 "Gmsh.y"
    {
      std::vector<int> tags[4]; ListOfShapes2Vectors((yyvsp[(10) - (11)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->rotate
          (tags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d));
      }
      else{
        GModel::current()->getGEOInternals()->rotate
          (tags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d));
      }
      (yyval.l) = (yyvsp[(10) - (11)].l);
    ;}
    break;

  case 193:
#line 2184 "Gmsh.y"
    {
      std::vector<int> tags[4]; ListOfShapes2Vectors((yyvsp[(4) - (5)].l), tags);
      if(factory == "OpenCASCADE"){
        Msg::Error("Symmetry not implemented yet with OpenCASCADE factory");
      }
      else{
        GModel::current()->getGEOInternals()->symmetry
          (tags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], (yyvsp[(2) - (5)].v)[3]);
      }
      (yyval.l) = (yyvsp[(4) - (5)].l);
    ;}
    break;

  case 194:
#line 2196 "Gmsh.y"
    {
      std::vector<int> tags[4]; ListOfShapes2Vectors((yyvsp[(8) - (9)].l), tags);
      if(factory == "OpenCASCADE"){
        yymsg(0, "Dilate not implemented yet with OpenCASCADE factory");
      }
      else{
        GModel::current()->getGEOInternals()->dilate
          (tags, (yyvsp[(3) - (9)].v)[0], (yyvsp[(3) - (9)].v)[1], (yyvsp[(3) - (9)].v)[2], (yyvsp[(5) - (9)].d), (yyvsp[(5) - (9)].d), (yyvsp[(5) - (9)].d));
      }
      (yyval.l) = (yyvsp[(8) - (9)].l);
    ;}
    break;

  case 195:
#line 2208 "Gmsh.y"
    {
      std::vector<int> tags[4]; ListOfShapes2Vectors((yyvsp[(8) - (9)].l), tags);
      if(factory == "OpenCASCADE"){
        yymsg(0, "Dilate not implemented yet with OpenCASCADE factory");
      }
      else{
        GModel::current()->getGEOInternals()->dilate
          (tags, (yyvsp[(3) - (9)].v)[0], (yyvsp[(3) - (9)].v)[1], (yyvsp[(3) - (9)].v)[2], (yyvsp[(5) - (9)].v)[0], (yyvsp[(5) - (9)].v)[1], (yyvsp[(5) - (9)].v)[2]);
      }
      (yyval.l) = (yyvsp[(8) - (9)].l);
    ;}
    break;

  case 196:
#line 2220 "Gmsh.y"
    {
      (yyval.l) = List_Create(3, 3, sizeof(Shape));
      std::string action((yyvsp[(1) - (4)].c));
      if(action == "Duplicata"){
        // don't use per-dimension vectors here, in order to respect the input
        // ordering (points can e.g. be given after surfaces) in the output
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          Shape s; List_Read((yyvsp[(3) - (4)].l), i, &s); int dim = s.Type / 100 - 1;
          if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
            s.Num = GModel::current()->getOCCInternals()->copy(dim, s.Num);
          }
          else{
            s.Num = GModel::current()->getGEOInternals()->copy(dim, s.Num);
          }
          List_Add((yyval.l), &s);
        }
      }
      else if(action == "Boundary" || action == "CombinedBoundary"){
        // boundary operations are performed directly on GModel, which enables
        // to compute the boundary of hybrid CAD models; this also automatically
        // binds all boundary entities for OCC models
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        std::vector<int> in[4], out[4]; ListOfShapes2Vectors((yyvsp[(3) - (4)].l), in);
        GModel::current()->getBoundaryTags(in, out, action == "CombinedBoundary");
        Vectors2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "Unknown action on multiple shapes: %s", (yyvsp[(1) - (4)].c));
      }
      Free((yyvsp[(1) - (4)].c));
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 197:
#line 2257 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE"){
        yymsg(0, "Intersect Line not available with OpenCASCADE");
      }
      else{
        IntersectCurvesWithSurface((yyvsp[(4) - (9)].l), (int)(yyvsp[(8) - (9)].d), (yyval.l));
      }
      List_Delete((yyvsp[(4) - (9)].l));
    ;}
    break;

  case 198:
#line 2268 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape*));
      if(factory == "OpenCASCADE"){
        yymsg(0, "Split Line not available with OpenCASCADE");
      }
      else{
        List_T *tmp = ListOfDouble2ListOfInt((yyvsp[(7) - (9)].l));
        SplitCurve((int)(yyvsp[(4) - (9)].d), tmp, (yyval.l));
        List_Delete(tmp);
      }
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 199:
#line 2283 "Gmsh.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 200:
#line 2284 "Gmsh.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 201:
#line 2289 "Gmsh.y"
    {
      (yyval.l) = List_Create(3, 3, sizeof(Shape));
    ;}
    break;

  case 202:
#line 2293 "Gmsh.y"
    {
      List_Add((yyval.l), &(yyvsp[(2) - (2)].s));
    ;}
    break;

  case 203:
#line 2297 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (6)].l), i, &d);
	Shape s;
	s.Num = (int)d;
        s.Type = MSH_POINT;
        List_Add((yyval.l), &s);
      }
    ;}
    break;

  case 204:
#line 2308 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (6)].l), i, &d);
	Shape s;
	s.Num = (int)d;
        s.Type = MSH_SEGM_LINE;
        List_Add((yyval.l), &s);
      }
    ;}
    break;

  case 205:
#line 2319 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (6)].l), i, &d);
	Shape s;
	s.Num = (int)d;
        s.Type = MSH_SURF_PLAN; // we don't care about the actual type
        List_Add((yyval.l), &s);
      }
    ;}
    break;

  case 206:
#line 2330 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (6)].l), i, &d);
	Shape s;
	s.Num = (int)d;
        s.Type = MSH_VOLUME;
        List_Add((yyval.l), &s);
      }
    ;}
    break;

  case 207:
#line 2346 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(7) - (8)].l)) == 4){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[4];
          for(int i = 0; i < 4; i++)
            List_Read((yyvsp[(7) - (8)].l), i, &d[i]);
          gLevelset *ls = new gLevelsetPlane(d[0], d[1], d[2], d[3], t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(7) - (8)].l));
    ;}
    break;

  case 208:
#line 2365 "Gmsh.y"
    {
      int t = (int)(yyvsp[(4) - (10)].d);
      if(gLevelset::find(t)){
	yymsg(0, "Levelset %d already exists", t);
      }
      else {
	fullMatrix<double> centers(List_Nbr((yyvsp[(8) - (10)].l)),3);
	for (int i = 0; i < List_Nbr((yyvsp[(8) - (10)].l)); i++){
	  List_T *l = *(List_T**)List_Pointer((yyvsp[(8) - (10)].l), i);
	  for (int j = 0; j < List_Nbr(l); j++){
	    centers(i,j) = (double)(*(double*)List_Pointer(l, j));
	  }
	}
        gLevelset *ls = new gLevelsetPoints(centers, t);
        gLevelset::add(ls);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(8) - (10)].l)); i++)
        List_Delete(*(List_T**)List_Pointer((yyvsp[(8) - (10)].l), i));
      List_Delete((yyvsp[(8) - (10)].l));
    ;}
    break;

  case 209:
#line 2387 "Gmsh.y"
    {
      int t = (int)(yyvsp[(4) - (14)].d);
      if(gLevelset::find(t)){
        yymsg(0, "Levelset %d already exists", t);
      }
      else {
        double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
        double n[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
        gLevelset *ls = new gLevelsetPlane(pt, n, t);
        gLevelset::add(ls);
      }
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 210:
#line 2402 "Gmsh.y"
    {
      int t = (int)(yyvsp[(4) - (16)].d);
      if(gLevelset::find(t)){
        yymsg(0, "Levelset %d already exists", t);
      }
      else {
        double pt1[3] = {(yyvsp[(8) - (16)].v)[0], (yyvsp[(8) - (16)].v)[1], (yyvsp[(8) - (16)].v)[2]};
        double pt2[3] = {(yyvsp[(10) - (16)].v)[0], (yyvsp[(10) - (16)].v)[1], (yyvsp[(10) - (16)].v)[2]};
        double pt3[3] = {(yyvsp[(12) - (16)].v)[0], (yyvsp[(12) - (16)].v)[1], (yyvsp[(12) - (16)].v)[2]};
        gLevelset *ls = new gLevelsetPlane(pt1, pt2, pt3, t);
        gLevelset::add(ls);
      }
      List_Delete((yyvsp[(14) - (16)].l));
    ;}
    break;

  case 211:
#line 2417 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(10) - (12)].l)) == 1){
        int t = (int)(yyvsp[(4) - (12)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(10) - (12)].l), 0, &d);
          gLevelset *ls = new gLevelsetSphere((yyvsp[(8) - (12)].v)[0], (yyvsp[(8) - (12)].v)[1], (yyvsp[(8) - (12)].v)[2], d, t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(10) - (12)].l));
    ;}
    break;

  case 212:
#line 2436 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 1){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(12) - (14)].l), 0, &d);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetGenCylinder(pt, dir, d, t);
          gLevelset::add(ls);
        }
      }
      else if(List_Nbr((yyvsp[(12) - (14)].l)) == 2){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[2];
          for(int i = 0; i < 2; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetCylinder(pt, dir, d[0], d[1], t);
          gLevelset::add(ls);
        }
      }
      else if(List_Nbr((yyvsp[(12) - (14)].l)) == 3){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[3];
          for(int i = 0; i < 3; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetCylinder(pt, dir, d[0], d[1], d[2], t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 213:
#line 2487 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 1){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(12) - (14)].l), 0, &d);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetCone(pt, dir, d, t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 214:
#line 2508 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 3){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[3];
          for(int i = 0; i < 3; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetEllipsoid(pt, dir, d[0], d[1], d[2], t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 215:
#line 2530 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 5){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[5];
          for(int i = 0; i < 5; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetGeneralQuadric(pt, dir, d[0], d[1],
                                                      d[2], d[3], d[4], t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 216:
#line 2552 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (8)].c), "Union")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            gLevelset *pl = gLevelset::find((int)d);
	    if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
            else vl.push_back(pl);
          }
          gLevelset *ls = new gLevelsetUnion(vl, true, t);
          gLevelset::add(ls);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Intersection")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            gLevelset *pl = gLevelset::find((int)d);
	    if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
            else vl.push_back(pl);
          }
          gLevelset *ls = new gLevelsetIntersection(vl, true, t);
          gLevelset::add(ls);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Cut")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            gLevelset *pl = gLevelset::find((int)d);
	    if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
            else vl.push_back(pl);
          }
          gLevelset *ls = new gLevelsetCut(vl, true, t);
          gLevelset::add(ls);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Crack")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            gLevelset *pl = gLevelset::find((int)d);
	    if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
            else vl.push_back(pl);
          }
          gLevelset *ls = new gLevelsetCrack(vl, false, t);
          gLevelset::add(ls);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Reverse")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(7) - (8)].l), 0, &d);
          gLevelset *pl = gLevelset::find((int)d);
          gLevelset *ls = NULL;
          if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
          else ls = new gLevelsetReverse(pl, t);
          if(ls) gLevelset::add(ls);
        }
      }
#if defined(HAVE_POST)
      else if(!strcmp((yyvsp[(2) - (8)].c), "PostView")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          if(List_Nbr((yyvsp[(7) - (8)].l)) > 0){
            double d; List_Read((yyvsp[(7) - (8)].l), 0, &d);
            gLevelset *ls = new gLevelsetPostView((int)d, t);
            gLevelset::add(ls);
          }
        }
      }
#endif
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      Free((yyvsp[(2) - (8)].c));
      List_Delete((yyvsp[(7) - (8)].l));
    ;}
    break;

  case 217:
#line 2657 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (8)].c), "MathEval")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          gLevelset *ls = new gLevelsetMathEval((yyvsp[(7) - (8)].c), t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Unknown levelset '%s'", (yyvsp[(2) - (8)].c));
      Free((yyvsp[(2) - (8)].c)); Free((yyvsp[(7) - (8)].c));
    ;}
    break;

  case 218:
#line 2673 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (6)].c), "CutMesh")){
        int t = (int)(yyvsp[(4) - (6)].d);
        if(gLevelset::find(t)){
          GModel::current()->buildCutGModel(gLevelset::find(t), true, false);
        }
        else
          yymsg(0, "Unknown levelset %d", t);
      }
      else if(!strcmp((yyvsp[(2) - (6)].c), "CutMeshTri")){
        int t = (int)(yyvsp[(4) - (6)].d);
        if(gLevelset::find(t)){
          GModel::current()->buildCutGModel(gLevelset::find(t), true, true);
        }
        else
          yymsg(0, "Unknown levelset %d", t);
      }
      else if(!strcmp((yyvsp[(2) - (6)].c), "SplitMesh")){
        int t = (int)(yyvsp[(4) - (6)].d);
        if(gLevelset::find(t)){
          GModel::current()->buildCutGModel(gLevelset::find(t), false, true);
        }
        else
          yymsg(0, "Unknown levelset %d", t);
      }
      else
        yymsg(0, "Unknown levelset '%s'", (yyvsp[(2) - (6)].c));
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 219:
#line 2708 "Gmsh.y"
    {
      std::vector<int> tags[4]; ListOfShapes2Vectors((yyvsp[(3) - (4)].l), tags);
      for(int dim = 0; dim < 4; dim++){
        for(unsigned int i = 0; i < tags[dim].size(); i++){
          if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
            GModel::current()->getOCCInternals()->remove(dim, tags[dim][i]);
          }
          GModel::current()->getGEOInternals()->remove(dim, tags[dim][i]);
          GModel::current()->remove(dim, tags[dim][i]);
        }
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 220:
#line 2722 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      GModel::current()->getFields()->deleteField((int)(yyvsp[(4) - (6)].d));
#endif
    ;}
    break;

  case 221:
#line 2728 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (6)].c), "View")){
	int index = (int)(yyvsp[(4) - (6)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  delete PView::list[index];
	else
	  yymsg(0, "Unknown view %d", index);
      }
      else
	yymsg(0, "Unknown command 'Delete %s'", (yyvsp[(2) - (6)].c));
#endif
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 222:
#line 2743 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (3)].c), "Meshes") || !strcmp((yyvsp[(2) - (3)].c), "All")){
        ClearProject();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Model")){
	GModel::current()->destroy(true); // destroy, but keep name/filename
	GModel::current()->getGEOInternals()->destroy();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Physicals")){
	GModel::current()->getGEOInternals()->resetPhysicalGroups();
	GModel::current()->deletePhysicalGroups();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Variables")){
	gmsh_yysymbols.clear();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Options")){
        ReInitOptions(0);
        InitOptionsGUI(0);
      }
      else{
	if(gmsh_yysymbols.count((yyvsp[(2) - (3)].c)))
	  gmsh_yysymbols.erase((yyvsp[(2) - (3)].c));
	else
	  yymsg(0, "Unknown object or expression to delete '%s'", (yyvsp[(2) - (3)].c));
      }
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 223:
#line 2771 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (4)].c), "Empty") && !strcmp((yyvsp[(3) - (4)].c), "Views")){
	for(int i = PView::list.size() - 1; i >= 0; i--)
	  if(PView::list[i]->getData()->empty()) delete PView::list[i];
      }
      else
	yymsg(0, "Unknown command 'Delete %s %s'", (yyvsp[(2) - (4)].c), (yyvsp[(3) - (4)].c));
#endif
      Free((yyvsp[(2) - (4)].c)); Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 224:
#line 2788 "Gmsh.y"
    {
      std::vector<int> tags[4]; ListOfShapes2Vectors((yyvsp[(4) - (5)].l), tags);
      setColor(tags, (yyvsp[(2) - (5)].u), false);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 225:
#line 2794 "Gmsh.y"
    {
      std::vector<int> tags[4]; ListOfShapes2Vectors((yyvsp[(5) - (6)].l), tags);
      setColor(tags, (yyvsp[(3) - (6)].u), true);
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 226:
#line 2805 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (5)].l)); i++){
	Shape TheShape;
	List_Read((yyvsp[(4) - (5)].l), i, &TheShape);
	SetPartition(TheShape.Type, TheShape.Num, (yyvsp[(2) - (5)].d));
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 227:
#line 2819 "Gmsh.y"
    {
      std::string what = (yyvsp[(2) - (3)].c);
      setVisibility(-1, 1, false);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 228:
#line 2825 "Gmsh.y"
    {
      std::string what = (yyvsp[(2) - (3)].c);
      setVisibility(-1, 0, false);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 229:
#line 2831 "Gmsh.y"
    {
      std::vector<int> tags[4]; ListOfShapes2Vectors((yyvsp[(3) - (4)].l), tags);
      setVisibility(tags, 1, false);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 230:
#line 2837 "Gmsh.y"
    {
      std::vector<int> tags[4]; ListOfShapes2Vectors((yyvsp[(4) - (5)].l), tags);
      setVisibility(tags, 1, true);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 231:
#line 2843 "Gmsh.y"
    {
      std::vector<int> tags[4]; ListOfShapes2Vectors((yyvsp[(3) - (4)].l), tags);
      setVisibility(tags, 0, false);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 232:
#line 2849 "Gmsh.y"
    {
      std::vector<int> tags[4]; ListOfShapes2Vectors((yyvsp[(4) - (5)].l), tags);
      setVisibility(tags, 0, true);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 233:
#line 2860 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (3)].c), "Include")){
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	Msg::StatusBar(true, "Reading '%s'...", tmp.c_str());
	// Warning: we explicitly ask ParseFile not to fclose() the included
        // file, in order to allow user functions definitions in these files.
        // The files will be closed in the next time OpenFile terminates. If
        // you need to include many many files and don't have functions in
        // the files, use "Merge" instead of "Include", as some OSes limit
        // the number of files a process can open simultaneously. (A better
        // solution would be to modify FunctionManager to reopen the files
        // instead of using the FILE pointer...)
	ParseFile(tmp, false, true);
	SetBoundingBox();
	Msg::StatusBar(true, "Done reading '%s'", tmp.c_str());
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Print")){
	// make sure we have the latest data from CAD internals in GModel (fixes
	// bug where we would have no geometry in the picture if the print
	// command is in the same file as the geometry)
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	CreateOutputFile(tmp, CTX::instance()->print.fileFormat);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Save")){
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	CreateOutputFile(tmp, CTX::instance()->mesh.fileFormat);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Merge") || !strcmp((yyvsp[(1) - (3)].c), "MergeWithBoundingBox")){
	// sync CAD internals here, so that if we e.g. import a STEP file, we
        // have the correct entity tags and the numberings don't clash
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	MergeFile(tmp, true);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "NonBlockingSystemCall")){
	SystemCall((yyvsp[(2) - (3)].c));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "System") || !strcmp((yyvsp[(1) - (3)].c), "SystemCall")){
	SystemCall((yyvsp[(2) - (3)].c), true);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "SetName")){
	GModel::current()->setName((yyvsp[(2) - (3)].c));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "CreateDir")){
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	CreateSingleDir(tmp);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "OnelabRun")){
        Msg::RunOnelabClient((yyvsp[(2) - (3)].c));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "OptimizeMesh")){
        GModel::current()->optimizeMesh((yyvsp[(2) - (3)].c));
      }
      else{
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (3)].c));
      }
      Free((yyvsp[(1) - (3)].c)); Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 234:
#line 2933 "Gmsh.y"
    {
      int n = List_Nbr((yyvsp[(3) - (5)].l));
      if(n == 1){
        char *s; List_Read((yyvsp[(3) - (5)].l), 0, &s);
        Msg::RunOnelabClient(s);
        Free(s);
      }
      else if(n == 2){
        char *s, *t; List_Read((yyvsp[(3) - (5)].l), 0, &s); List_Read((yyvsp[(3) - (5)].l), 1, &t);
        Msg::RunOnelabClient(s, t);
        Free(s); Free(t);
      }
      else{
        yymsg(0, "OnelabRun takes one or two arguments");
      }
      List_Delete((yyvsp[(3) - (5)].l));
    ;}
    break;

  case 235:
#line 2951 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(1) - (7)].c), "Save") && !strcmp((yyvsp[(2) - (7)].c), "View")){
	int index = (int)(yyvsp[(4) - (7)].d);
	if(index >= 0 && index < (int)PView::list.size()){
          std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(6) - (7)].c));
	  PView::list[index]->write(tmp, CTX::instance()->post.fileFormat);
	}
	else
	  yymsg(0, "Unknown view %d", index);
      }
      else
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (7)].c));
#endif
      Free((yyvsp[(1) - (7)].c)); Free((yyvsp[(2) - (7)].c)); Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 236:
#line 2968 "Gmsh.y"
    {
#if defined(HAVE_POST) && defined(HAVE_MESH)
      if(!strcmp((yyvsp[(1) - (7)].c), "Background") && !strcmp((yyvsp[(2) - (7)].c), "Mesh")  && !strcmp((yyvsp[(3) - (7)].c), "View")){
	int index = (int)(yyvsp[(5) - (7)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  GModel::current()->getFields()->setBackgroundMesh(index);
	else
	  yymsg(0, "Unknown view %d", index);
      }
      else
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (7)].c));
#endif
      Free((yyvsp[(1) - (7)].c)); Free((yyvsp[(2) - (7)].c)); Free((yyvsp[(3) - (7)].c));
    ;}
    break;

  case 237:
#line 2983 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (3)].c), "Sleep")){
	SleepInSeconds((yyvsp[(2) - (3)].d));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Remesh")){
	yymsg(0, "Surface remeshing must be reinterfaced");
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Mesh")){
	int lock = CTX::instance()->lock;
	CTX::instance()->lock = 0;
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
	GModel::current()->mesh((int)(yyvsp[(2) - (3)].d));
	CTX::instance()->lock = lock;
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "SetOrder")){
#if defined(HAVE_MESH)
        SetOrderN(GModel::current(), (yyvsp[(2) - (3)].d), CTX::instance()->mesh.secondOrderLinear,
                  CTX::instance()->mesh.secondOrderIncomplete,
                  CTX::instance()->mesh.meshOnlyVisible);
#endif
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "PartitionMesh")){
        GModel::current()->partitionMesh((yyvsp[(2) - (3)].d));
      }
      else
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (3)].c));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 238:
#line 3016 "Gmsh.y"
    {
#if defined(HAVE_PLUGINS)
       try {
	 PluginManager::instance()->action((yyvsp[(3) - (7)].c), (yyvsp[(6) - (7)].c), 0);
       }
       catch(...) {
	 yymsg(0, "Unknown action '%s' or plugin '%s'", (yyvsp[(6) - (7)].c), (yyvsp[(3) - (7)].c));
       }
#endif
       Free((yyvsp[(3) - (7)].c)); Free((yyvsp[(6) - (7)].c));
     ;}
    break;

  case 239:
#line 3028 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (3)].c), "ElementsFromAllViews"))
	PView::combine(false, 1, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "ElementsFromVisibleViews"))
	PView::combine(false, 0, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "ElementsByViewName"))
	PView::combine(false, 2, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeStepsFromAllViews"))
	PView::combine(true, 1, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeStepsFromVisibleViews"))
	PView::combine(true, 0, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeStepsByViewName"))
	PView::combine(true, 2, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "Views"))
	PView::combine(false, 1, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeSteps"))
	PView::combine(true, 2, CTX::instance()->post.combineRemoveOrig);
      else
	yymsg(0, "Unknown 'Combine' command");
#endif
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 240:
#line 3052 "Gmsh.y"
    {
      Msg::Exit(0);
    ;}
    break;

  case 241:
#line 3056 "Gmsh.y"
    {
      gmsh_yyerrorstate = 999; // this will be checked when yyparse returns
      YYABORT;
    ;}
    break;

  case 242:
#line 3061 "Gmsh.y"
    {
      // force sync
      if(GModel::current()->getOCCInternals())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      GModel::current()->getGEOInternals()->synchronize(GModel::current());
    ;}
    break;

  case 243:
#line 3068 "Gmsh.y"
    {
      new GModel();
      GModel::current(GModel::list.size() - 1);
    ;}
    break;

  case 244:
#line 3073 "Gmsh.y"
    {
      CTX::instance()->forcedBBox = 0;
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      SetBoundingBox();
    ;}
    break;

  case 245:
#line 3083 "Gmsh.y"
    {
      CTX::instance()->forcedBBox = 1;
      SetBoundingBox((yyvsp[(3) - (15)].d), (yyvsp[(5) - (15)].d), (yyvsp[(7) - (15)].d), (yyvsp[(9) - (15)].d), (yyvsp[(11) - (15)].d), (yyvsp[(13) - (15)].d));
    ;}
    break;

  case 246:
#line 3088 "Gmsh.y"
    {
#if defined(HAVE_OPENGL)
      drawContext::global()->draw();
#endif
    ;}
    break;

  case 247:
#line 3094 "Gmsh.y"
    {
#if defined(HAVE_OPENGL)
     CTX::instance()->mesh.changed = ENT_ALL;
     for(unsigned int index = 0; index < PView::list.size(); index++)
       PView::list[index]->setChanged(true);
#endif
    ;}
    break;

  case 248:
#line 3102 "Gmsh.y"
    {
      GModel::current()->createTopologyFromMesh();
    ;}
    break;

  case 249:
#line 3106 "Gmsh.y"
    {
      GModel::current()->createTopologyFromMesh(1);
    ;}
    break;

  case 250:
#line 3110 "Gmsh.y"
    {
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      GModel::current()->refineMesh(CTX::instance()->mesh.secondOrderLinear);
    ;}
    break;

  case 251:
#line 3120 "Gmsh.y"
    {
      int lock = CTX::instance()->lock;
      CTX::instance()->lock = 0;
      std::vector<int> technique;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (16)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (16)].l), i, &d);
        technique.push_back((int)d);
      }
      if(technique.empty()){
        yyerror("Need at least one adaptation technique");
      }
      else{
        std::vector<simpleFunction<double>*> f;
        for(int i = 0; i < List_Nbr((yyvsp[(6) - (16)].l)); i++){
          double d;
          List_Read((yyvsp[(6) - (16)].l), i, &d);
          gLevelset *l = gLevelset::find((int)d);
          if(l) f.push_back(l);
          else yymsg(0, "Unknown Levelset %d", (int)d);
        }
        if(technique.size() != f.size()){
          yyerror("Number of techniques != number of levelsets");
        }
        else{
          if(List_Nbr((yyvsp[(9) - (16)].l)) != (int)f.size()){
            yyerror("Number of parameters != number of levelsets");
          }
          else{
            std::vector<std::vector<double> > parameters;
            parameters.resize(List_Nbr((yyvsp[(9) - (16)].l)));
            for(int i = 0; i < List_Nbr((yyvsp[(9) - (16)].l)); i++){
              List_T *l = *(List_T**)List_Pointer((yyvsp[(9) - (16)].l), i);
              for(int j = 0; j < List_Nbr(l); j++){
                double d;
                List_Read(l, j, &d);
                parameters[i].push_back(d);
              }
            }
            int niter = (int)(yyvsp[(12) - (16)].d);
            bool meshAll = ((yyvsp[(14) - (16)].d) == 0) ? false : true;
            if(GModel::current()->getOCCInternals() &&
               GModel::current()->getOCCInternals()->getChanged())
              GModel::current()->getOCCInternals()->synchronize(GModel::current());
            if(GModel::current()->getGEOInternals()->getChanged())
              GModel::current()->getGEOInternals()->synchronize(GModel::current());
            GModel::current()->adaptMesh(technique, f, parameters, niter, meshAll);
          }
        }
      }
      List_Delete((yyvsp[(3) - (16)].l));
      List_Delete((yyvsp[(6) - (16)].l));
      for(int i = 0; i < List_Nbr((yyvsp[(9) - (16)].l)); i++)
        List_Delete(*(List_T**)List_Pointer((yyvsp[(9) - (16)].l), i));
      List_Delete((yyvsp[(9) - (16)].l));
      CTX::instance()->lock = lock;
    ;}
    break;

  case 252:
#line 3183 "Gmsh.y"
    {
#if defined(HAVE_POPPLER)
       std::vector<int> is;
       for(int i = 0; i < List_Nbr((yyvsp[(4) - (11)].l)); i++){
	 double d;
	 List_Read((yyvsp[(4) - (11)].l), i, &d);
	 is.push_back ((int) d);
       }
       gmshPopplerWrapper::instance()->setMacroForPages(is, (yyvsp[(7) - (11)].c), (yyvsp[(9) - (11)].c) );
#endif
     ;}
    break;

  case 253:
#line 3199 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(3) - (6)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(5) - (6)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0;
      LoopControlVariablesNameTab[ImbricatedLoop] = "";
      gmshgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if((yyvsp[(3) - (6)].d) > (yyvsp[(5) - (6)].d))
	skip("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
    ;}
    break;

  case 254:
#line 3216 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(3) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(5) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = (yyvsp[(7) - (8)].d);
      LoopControlVariablesNameTab[ImbricatedLoop] = "";
      gmshgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if(((yyvsp[(7) - (8)].d) > 0. && (yyvsp[(3) - (8)].d) > (yyvsp[(5) - (8)].d)) || ((yyvsp[(7) - (8)].d) < 0. && (yyvsp[(3) - (8)].d) < (yyvsp[(5) - (8)].d)))
	skip("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
    ;}
    break;

  case 255:
#line 3233 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(5) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(7) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0;
      LoopControlVariablesNameTab[ImbricatedLoop] = (yyvsp[(2) - (8)].c);
      gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(2) - (8)].c)]);
      s.list = false;
      s.value.resize(1);
      s.value[0] = (yyvsp[(5) - (8)].d);
      gmshgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if((yyvsp[(5) - (8)].d) > (yyvsp[(7) - (8)].d))
	skip("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
      Free((yyvsp[(2) - (8)].c));
    ;}
    break;

  case 256:
#line 3255 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(5) - (10)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(7) - (10)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = (yyvsp[(9) - (10)].d);
      LoopControlVariablesNameTab[ImbricatedLoop] = (yyvsp[(2) - (10)].c);
      gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(2) - (10)].c)]);
      s.list = false;
      s.value.resize(1);
      s.value[0] = (yyvsp[(5) - (10)].d);
      gmshgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if(((yyvsp[(9) - (10)].d) > 0. && (yyvsp[(5) - (10)].d) > (yyvsp[(7) - (10)].d)) || ((yyvsp[(9) - (10)].d) < 0. && (yyvsp[(5) - (10)].d) < (yyvsp[(7) - (10)].d)))
	skip("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
      Free((yyvsp[(2) - (10)].c));
    ;}
    break;

  case 257:
#line 3277 "Gmsh.y"
    {
      if(ImbricatedLoop <= 0){
	yymsg(0, "Invalid For/EndFor loop");
	ImbricatedLoop = 0;
      }
      else{
	double step = LoopControlVariablesTab[ImbricatedLoop - 1][2];
        std::string name = LoopControlVariablesNameTab[ImbricatedLoop - 1];
        if(name.size()){
          if(!gmsh_yysymbols.count(name))
            yymsg(0, "Unknown loop variable '%s'", name.c_str());
          else{
            gmsh_yysymbol &s(gmsh_yysymbols[name]);
            if(!s.list && s.value.size()){
              s.value[0] += step;
              LoopControlVariablesTab[ImbricatedLoop - 1][0] = s.value[0];
            }
            else
              yymsg(0, "Bad loop variable %s", name.c_str());
          }
        }
        else{
          LoopControlVariablesTab[ImbricatedLoop - 1][0] += step;
        }
	double x0 = LoopControlVariablesTab[ImbricatedLoop - 1][0];
	double x1 = LoopControlVariablesTab[ImbricatedLoop - 1][1];
        if((step > 0. && x0 <= x1) || (step < 0. && x0 >= x1)){
	  gmshsetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop - 1]);
	  gmsh_yylineno = yylinenoImbricatedLoopsTab[ImbricatedLoop - 1];
	}
	else
	  ImbricatedLoop--;
      }
    ;}
    break;

  case 258:
#line 3312 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->createFunction
         (std::string((yyvsp[(2) - (2)].c)), gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Redefinition of function %s", (yyvsp[(2) - (2)].c));
      skip(NULL, "Return");
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 259:
#line 3320 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->createFunction
         (std::string((yyvsp[(2) - (2)].c)), gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Redefinition of function %s", (yyvsp[(2) - (2)].c));
      skip(NULL, "Return");
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 260:
#line 3328 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->leaveFunction
         (&gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Error while exiting function");
    ;}
    break;

  case 261:
#line 3334 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->enterFunction
         (std::string((yyvsp[(2) - (3)].c)), &gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Unknown function %s", (yyvsp[(2) - (3)].c));
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 262:
#line 3341 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->enterFunction
         (std::string((yyvsp[(2) - (3)].c)), &gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Unknown function %s", (yyvsp[(2) - (3)].c));
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 263:
#line 3348 "Gmsh.y"
    {
      ImbricatedTest++;
      if(ImbricatedTest > MAX_RECUR_TESTS-1){
	yymsg(0, "Reached maximum number of imbricated tests");
        ImbricatedTest = MAX_RECUR_TESTS-1;
      }

      if((yyvsp[(3) - (4)].d)){
        // Current test is true
        statusImbricatedTests[ImbricatedTest] = 1;
      }
      else{
        statusImbricatedTests[ImbricatedTest] = 0;
        // Go after the next ElseIf or Else or EndIf
        int type_until2 = 0;
        skipTest("If", "EndIf", "ElseIf", 4, &type_until2);
        if(!type_until2) ImbricatedTest--; // EndIf reached
      }
    ;}
    break;

  case 264:
#line 3368 "Gmsh.y"
    {
      if(ImbricatedTest > 0){
        if (statusImbricatedTests[ImbricatedTest]){
          // Last test (If or ElseIf) was true, thus go after EndIf (out of If EndIf)
          skip("If", "EndIf");
          ImbricatedTest--;
        }
        else{
          // Previous test(s) (If and ElseIf) not yet true
          if((yyvsp[(3) - (4)].d)){
            statusImbricatedTests[ImbricatedTest] = 1;
          }
          else{
            // Current test still not true: statusImbricatedTests[ImbricatedTest] = 0;
            // Go after the next ElseIf or Else or EndIf
            int type_until2 = 0;
            skipTest("If", "EndIf", "ElseIf", 4, &type_until2);
            if(!type_until2) ImbricatedTest--;
          }
        }
      }
      else{
	yymsg(0, "Orphan ElseIf");
      }
    ;}
    break;

  case 265:
#line 3394 "Gmsh.y"
    {
      if(ImbricatedTest > 0){
        if(statusImbricatedTests[ImbricatedTest]){
          skip("If", "EndIf");
          ImbricatedTest--;
        }
      }
      else{
	yymsg(0, "Orphan Else");
      }
    ;}
    break;

  case 266:
#line 3406 "Gmsh.y"
    {
      ImbricatedTest--;
      if(ImbricatedTest < 0)
        yymsg(1, "Orphan EndIf");
    ;}
    break;

  case 267:
#line 3418 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> in[4], out[4]; ListOfShapes2Vectors((yyvsp[(4) - (5)].l), in);
        GModel::current()->getOCCInternals()->extrude(-1, in, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], out);
        Vectors2ListOfShapes(out, (yyval.l));
      }
      else{
        // FIXME use GEOInternals + int api -- SAME FOR ALL BELOW!
        ExtrudeShapes(TRANSLATE, (yyvsp[(4) - (5)].l),
                      (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], 0., 0., 0., 0., 0., 0., 0.,
                      NULL, (yyval.l));
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 268:
#line 3434 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> in[4], out[4]; ListOfShapes2Vectors((yyvsp[(10) - (11)].l), in);
        GModel::current()->getOCCInternals()->revolve(-1, in, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2],
                                                      (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d), out);
        Vectors2ListOfShapes(out, (yyval.l));
      }
      else{
        ExtrudeShapes(ROTATE, (yyvsp[(10) - (11)].l),
                      0., 0., 0., (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(7) - (11)].d),
                      NULL, (yyval.l));
      }
      List_Delete((yyvsp[(10) - (11)].l));
    ;}
    break;

  case 269:
#line 3450 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      ExtrudeShapes(TRANSLATE_ROTATE, (yyvsp[(12) - (13)].l),
		    (yyvsp[(3) - (13)].v)[0], (yyvsp[(3) - (13)].v)[1], (yyvsp[(3) - (13)].v)[2], (yyvsp[(5) - (13)].v)[0], (yyvsp[(5) - (13)].v)[1], (yyvsp[(5) - (13)].v)[2], (yyvsp[(7) - (13)].v)[0], (yyvsp[(7) - (13)].v)[1], (yyvsp[(7) - (13)].v)[2], (yyvsp[(9) - (13)].d),
		    NULL, (yyval.l));
      List_Delete((yyvsp[(12) - (13)].l));
    ;}
    break;

  case 270:
#line 3458 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 271:
#line 3464 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      ExtrudeShapes(TRANSLATE, (yyvsp[(4) - (7)].l),
		    (yyvsp[(2) - (7)].v)[0], (yyvsp[(2) - (7)].v)[1], (yyvsp[(2) - (7)].v)[2], 0., 0., 0., 0., 0., 0., 0.,
		    &extr, (yyval.l));
      List_Delete((yyvsp[(4) - (7)].l));
    ;}
    break;

  case 272:
#line 3472 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 273:
#line 3478 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      ExtrudeShapes(ROTATE, (yyvsp[(10) - (13)].l),
		    0., 0., 0., (yyvsp[(3) - (13)].v)[0], (yyvsp[(3) - (13)].v)[1], (yyvsp[(3) - (13)].v)[2], (yyvsp[(5) - (13)].v)[0], (yyvsp[(5) - (13)].v)[1], (yyvsp[(5) - (13)].v)[2], (yyvsp[(7) - (13)].d),
		    &extr, (yyval.l));
      List_Delete((yyvsp[(10) - (13)].l));
    ;}
    break;

  case 274:
#line 3486 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 275:
#line 3492 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      ExtrudeShapes(TRANSLATE_ROTATE, (yyvsp[(12) - (15)].l),
		    (yyvsp[(3) - (15)].v)[0], (yyvsp[(3) - (15)].v)[1], (yyvsp[(3) - (15)].v)[2], (yyvsp[(5) - (15)].v)[0], (yyvsp[(5) - (15)].v)[1], (yyvsp[(5) - (15)].v)[2], (yyvsp[(7) - (15)].v)[0], (yyvsp[(7) - (15)].v)[1], (yyvsp[(7) - (15)].v)[2], (yyvsp[(9) - (15)].d),
		    &extr, (yyval.l));
      List_Delete((yyvsp[(12) - (15)].l));
    ;}
    break;

  case 276:
#line 3500 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 277:
#line 3506 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      ExtrudeShapes(BOUNDARY_LAYER, (yyvsp[(3) - (6)].l), 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.,
		    &extr, (yyval.l));
      List_Delete((yyvsp[(3) - (6)].l));
    ;}
    break;

  case 278:
#line 3513 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> in[4], out[4]; ListOfShapes2Vectors((yyvsp[(3) - (9)].l), in);
        GModel::current()->getOCCInternals()->addPipe(-1, in, (int)(yyvsp[(8) - (9)].d), out);
        Vectors2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "Pipe only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(3) - (9)].l));
    ;}
    break;

  case 279:
#line 3526 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> wires, out[4]; ListOfDouble2Vector((yyvsp[(2) - (2)].l), wires);
        GModel::current()->getOCCInternals()->addThruSections(-1, wires, out,
                                                              false, false);
        Vectors2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 280:
#line 3540 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> wires, out[4]; ListOfDouble2Vector((yyvsp[(3) - (3)].l), wires);
        GModel::current()->getOCCInternals()->addThruSections(-1, wires, out,
                                                              false, true);
        Vectors2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 281:
#line 3554 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        double radius = (yyvsp[(9) - (10)].d);
        std::vector<int> regions, edges, out[4];
        ListOfDouble2Vector((yyvsp[(3) - (10)].l), regions); ListOfDouble2Vector((yyvsp[(6) - (10)].l), edges);
        GModel::current()->getOCCInternals()->fillet(regions, edges, radius, out);
        Vectors2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "Fillet only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(3) - (10)].l));
      List_Delete((yyvsp[(6) - (10)].l));
    ;}
    break;

  case 282:
#line 3573 "Gmsh.y"
    {
    ;}
    break;

  case 283:
#line 3576 "Gmsh.y"
    {
    ;}
    break;

  case 284:
#line 3582 "Gmsh.y"
    {
      int n = (int)fabs((yyvsp[(3) - (5)].d));
      if(n){ // we accept n==0 to easily disable layers
        extr.mesh.ExtrudeMesh = true;
        extr.mesh.NbLayer = 1;
        extr.mesh.NbElmLayer.clear();
        extr.mesh.hLayer.clear();
        extr.mesh.NbElmLayer.push_back((int)fabs((yyvsp[(3) - (5)].d)));
        extr.mesh.hLayer.push_back(1.);
      }
    ;}
    break;

  case 285:
#line 3594 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = true;
      extr.mesh.NbLayer = List_Nbr((yyvsp[(3) - (7)].l));
      if(List_Nbr((yyvsp[(3) - (7)].l)) == List_Nbr((yyvsp[(5) - (7)].l))){
	extr.mesh.NbElmLayer.clear();
	extr.mesh.hLayer.clear();
	for(int i = 0; i < List_Nbr((yyvsp[(3) - (7)].l)); i++){
	  double d;
	  List_Read((yyvsp[(3) - (7)].l), i, &d);
	  extr.mesh.NbElmLayer.push_back((d > 0) ? (int)d : 1);
	  List_Read((yyvsp[(5) - (7)].l), i, &d);
	  extr.mesh.hLayer.push_back(d);
	}
      }
      else
	yymsg(0, "Wrong layer definition {%d, %d}", List_Nbr((yyvsp[(3) - (7)].l)), List_Nbr((yyvsp[(5) - (7)].l)));
      List_Delete((yyvsp[(3) - (7)].l));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 286:
#line 3614 "Gmsh.y"
    {
      extr.mesh.ScaleLast = true;
    ;}
    break;

  case 287:
#line 3618 "Gmsh.y"
    {
      extr.mesh.Recombine = true;
    ;}
    break;

  case 288:
#line 3622 "Gmsh.y"
    {
      extr.mesh.Recombine = (yyvsp[(2) - (3)].d) ? true : false;
    ;}
    break;

  case 289:
#line 3626 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_ADDVERTS_1;
    ;}
    break;

  case 290:
#line 3630 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_ADDVERTS_1_RECOMB;
    ;}
    break;

  case 291:
#line 3634 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_NOVERTS_1;
    ;}
    break;

  case 292:
#line 3638 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_NOVERTS_1_RECOMB;
    ;}
    break;

  case 293:
#line 3642 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (9)].l), tags);
      int num = (int)(yyvsp[(3) - (9)].d);
      GModel::current()->getGEOInternals()->addDiscreteSurface(num);
      extr.mesh.Holes[num].first = (yyvsp[(8) - (9)].d);
      extr.mesh.Holes[num].second = tags;
      List_Delete((yyvsp[(6) - (9)].l));
    ;}
    break;

  case 294:
#line 3651 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (6)].c), "Index"))
        extr.mesh.BoundaryLayerIndex = (yyvsp[(4) - (6)].d);
      else if(!strcmp((yyvsp[(2) - (6)].c), "View"))
        extr.mesh.ViewIndex = (yyvsp[(4) - (6)].d);
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 295:
#line 3663 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Union; ;}
    break;

  case 296:
#line 3664 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Intersection; ;}
    break;

  case 297:
#line 3665 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Difference; ;}
    break;

  case 298:
#line 3666 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Section; ;}
    break;

  case 299:
#line 3667 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Fragments; ;}
    break;

  case 300:
#line 3671 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 301:
#line 3672 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 302:
#line 3673 "Gmsh.y"
    { (yyval.i) = (yyvsp[(2) - (3)].d); ;}
    break;

  case 303:
#line 3678 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> shape[4], tool[4], out[4];
        ListOfShapes2Vectors((yyvsp[(3) - (9)].l), shape);
        ListOfShapes2Vectors((yyvsp[(7) - (9)].l), tool);
        GModel::current()->getOCCInternals()->applyBooleanOperator
          (-1, (OCC_Internals::BooleanOperator)(yyvsp[(1) - (9)].i), shape, tool, out, (yyvsp[(4) - (9)].i), (yyvsp[(8) - (9)].i));
        Vectors2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "Boolean operators only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(3) - (9)].l));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 304:
#line 3695 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> out[4];
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
        GModel::current()->getOCCInternals()->importShapes(tmp, true, out);
        Vectors2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "ShapeFromFile only available with OpenCASCADE factory");
      }
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 305:
#line 3713 "Gmsh.y"
    {
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> shape[4], tool[4], out[4];
        ListOfShapes2Vectors((yyvsp[(7) - (14)].l), shape);
        ListOfShapes2Vectors((yyvsp[(11) - (14)].l), tool);
        GModel::current()->getOCCInternals()->applyBooleanOperator
          ((int)(yyvsp[(3) - (14)].d), (OCC_Internals::BooleanOperator)(yyvsp[(1) - (14)].i), shape, tool, out, (yyvsp[(8) - (14)].i), (yyvsp[(12) - (14)].i));
      }
      List_Delete((yyvsp[(7) - (14)].l));
      List_Delete((yyvsp[(11) - (14)].l));
    ;}
    break;

  case 306:
#line 3728 "Gmsh.y"
    {
      (yyval.v)[0] = (yyval.v)[1] = 1.;
    ;}
    break;

  case 307:
#line 3732 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (3)].c), "Progression") || !strcmp((yyvsp[(2) - (3)].c), "Power"))
        (yyval.v)[0] = 1.;
      else if(!strcmp((yyvsp[(2) - (3)].c), "Bump"))
        (yyval.v)[0] = 2.;
      else{
        yymsg(0, "Unknown transfinite mesh type");
        (yyval.v)[0] = 1.;
      }
      (yyval.v)[1] = (yyvsp[(3) - (3)].d);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 308:
#line 3747 "Gmsh.y"
    {
      (yyval.i) = -1; // left
    ;}
    break;

  case 309:
#line 3751 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (1)].c), "Right"))
        (yyval.i) = 1;
      else if(!strcmp((yyvsp[(1) - (1)].c), "Left"))
	(yyval.i) = -1;
      else if(!strcmp((yyvsp[(1) - (1)].c), "AlternateRight"))
	(yyval.i) = 2;
      else if(!strcmp((yyvsp[(1) - (1)].c), "AlternateLeft"))
	(yyval.i) = -2;
      else // "Alternate" -> "Alternate Right"
	(yyval.i) = 2;
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 310:
#line 3767 "Gmsh.y"
    {
     (yyval.l) = List_Create(1, 1, sizeof(double));
   ;}
    break;

  case 311:
#line 3771 "Gmsh.y"
    {
     (yyval.l) = (yyvsp[(2) - (2)].l);
   ;}
    break;

  case 312:
#line 3776 "Gmsh.y"
    {
      (yyval.i) = 45;
    ;}
    break;

  case 313:
#line 3780 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(2) - (2)].d);
    ;}
    break;

  case 314:
#line 3786 "Gmsh.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(double));
    ;}
    break;

  case 315:
#line 3790 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (2)].l);
    ;}
    break;

  case 316:
#line 3797 "Gmsh.y"
    {
      // mesh sizes at vertices are stored in internal CAD data, as they can be
      // specified during vertex creation and copied around during CAD
      // operations
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
	double d;
	List_Read((yyvsp[(3) - (6)].l), i, &d);
        int tag = (int)d;
        if(GModel::current()->getOCCInternals())
          GModel::current()->getOCCInternals()->setMeshSize(0, tag, (yyvsp[(5) - (6)].d));
        GModel::current()->getGEOInternals()->setMeshSize(0, tag, (yyvsp[(5) - (6)].d));
        GVertex *gv = GModel::current()->getVertexByTag(tag);
        if(gv) gv->setPrescribedMeshSizeAtVertex((yyvsp[(5) - (6)].d));
      }
      List_Delete((yyvsp[(3) - (6)].l));
    ;}
    break;

  case 317:
#line 3814 "Gmsh.y"
    {
      // transfinite constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      int type = (int)(yyvsp[(6) - (7)].v)[0];
      double coef = fabs((yyvsp[(6) - (7)].v)[1]);
      int npoints = ((int)(yyvsp[(5) - (7)].d) < 2) ? 2 : (int)(yyvsp[(5) - (7)].d);
      if(!(yyvsp[(3) - (7)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteLine
          (0, npoints, type, coef);
        for(GModel::eiter it = GModel::current()->firstEdge();
            it != GModel::current()->lastEdge(); it++){
          (*it)->meshAttributes.method = MESH_TRANSFINITE;
          (*it)->meshAttributes.nbPointsTransfinite = npoints;
          (*it)->meshAttributes.typeTransfinite = type;
          (*it)->meshAttributes.coeffTransfinite = coef;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (7)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (7)].l), i, &d);
          int j = (int)fabs(d);
          for(int sig = -1; sig <= 1; sig += 2){
            GModel::current()->getGEOInternals()->setTransfiniteLine
              (sig * j, npoints, type * gmsh_sign(d), coef);
            GEdge *ge = GModel::current()->getEdgeByTag(sig * j);
            if(ge){
              ge->meshAttributes.method = MESH_TRANSFINITE;
              ge->meshAttributes.nbPointsTransfinite = npoints;
              ge->meshAttributes.typeTransfinite = type * gmsh_sign(d);
              ge->meshAttributes.coeffTransfinite = coef;
            }
          }
        }
        List_Delete((yyvsp[(3) - (7)].l));
      }
    ;}
    break;

  case 318:
#line 3855 "Gmsh.y"
    {
      // transfinite constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      std::vector<int> corners; ListOfDouble2Vector((yyvsp[(4) - (6)].l), corners);
      if(!(yyvsp[(3) - (6)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteSurface(0, (yyvsp[(5) - (6)].i), corners);
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++){
          (*it)->meshAttributes.method = MESH_TRANSFINITE;
          (*it)->meshAttributes.transfiniteArrangement = (yyvsp[(5) - (6)].i);
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (6)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setTransfiniteSurface(tag, (yyvsp[(5) - (6)].i), corners);
          GFace *gf = GModel::current()->getFaceByTag(tag);
          if(gf){
            gf->meshAttributes.method = MESH_TRANSFINITE;
            gf->meshAttributes.transfiniteArrangement = (yyvsp[(5) - (6)].i);
            if(corners.empty() || corners.size() == 3 || corners.size() == 4){
              for(unsigned int j = 0; j < corners.size(); j++){
                GVertex *gv = GModel::current()->getVertexByTag(std::abs(corners[j]));
                if(gv)
                  gf->meshAttributes.corners.push_back(gv);
                else
                  yymsg(0, "Unknown model vertex with tag %d", corners[j]);
              }
            }
            else{
              yymsg(0, "Transfinite surface requires 3 or 4 corners vertices");
            }
          }
        }
        List_Delete((yyvsp[(3) - (6)].l));
      }
      List_Delete((yyvsp[(4) - (6)].l));
    ;}
    break;

  case 319:
#line 3899 "Gmsh.y"
    {
      // transfinite constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      std::vector<int> corners; ListOfDouble2Vector((yyvsp[(4) - (5)].l), corners);
      if(!(yyvsp[(3) - (5)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteVolume(0, corners);
        for(GModel::riter it = GModel::current()->firstRegion();
            it != GModel::current()->lastRegion(); it++){
          (*it)->meshAttributes.method = MESH_TRANSFINITE;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (5)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (5)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setTransfiniteVolume(tag, corners);
          GRegion *gr = GModel::current()->getRegionByTag(tag);
          if(gr){
            gr->meshAttributes.method = MESH_TRANSFINITE;
            if(corners.empty() || corners.size() == 6 || corners.size() == 8){
              for(unsigned int i = 0; i < corners.size(); i++){
                GVertex *gv = GModel::current()->getVertexByTag(std::abs(corners[i]));
                if(gv)
                  gr->meshAttributes.corners.push_back(gv);
                else
                  yymsg(0, "Unknown model vertex with tag %d", corners[i]);
              }
            }
          }
        }
        List_Delete((yyvsp[(3) - (5)].l));
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 320:
#line 3938 "Gmsh.y"
    {
      // transfinite constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(2) - (3)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteVolumeQuadTri(0);
        for(GModel::riter it = GModel::current()->firstRegion();
            it != GModel::current()->lastRegion(); it++)
          (*it)->meshAttributes.QuadTri = TRANSFINITE_QUADTRI_1;
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(2) - (3)].l)); i++){
          double d;
          List_Read((yyvsp[(2) - (3)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setTransfiniteVolumeQuadTri(tag);
          GRegion *gr = GModel::current()->getRegionByTag(tag);
          if(gr) gr->meshAttributes.QuadTri = TRANSFINITE_QUADTRI_1;
        }
        List_Delete((yyvsp[(2) - (3)].l));
      }
    ;}
    break;

  case 321:
#line 3963 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (8)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (8)].l), i, &d);
	CTX::instance()->mesh.algo2d_per_face[(int)d] = (int)(yyvsp[(7) - (8)].d);
      }
      List_Delete((yyvsp[(4) - (8)].l));
    ;}
    break;

  case 322:
#line 3972 "Gmsh.y"
    {
      // recombine constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (5)].l)){
        GModel::current()->getGEOInternals()->setRecombine(2, 0, (yyvsp[(4) - (5)].i));
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++){
          (*it)->meshAttributes.recombine = 1;
          (*it)->meshAttributes.recombineAngle = (yyvsp[(4) - (5)].i);
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (5)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (5)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setRecombine(2, tag, (yyvsp[(4) - (5)].i));
          GFace *gf = GModel::current()->getFaceByTag(tag);
          if(gf){
            gf->meshAttributes.recombine = 1;
            gf->meshAttributes.recombineAngle = (yyvsp[(4) - (5)].i);
          }
        }
        List_Delete((yyvsp[(3) - (5)].l));
      }
    ;}
    break;

  case 323:
#line 4002 "Gmsh.y"
    {
      // recombine constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (4)].l)){
        GModel::current()->getGEOInternals()->setRecombine(3, 0, 0.);
        for(GModel::riter it = GModel::current()->firstRegion();
            it != GModel::current()->lastRegion(); it++){
          (*it)->meshAttributes.recombine3D = 1;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setRecombine(3, tag, 0.);
          GRegion *gr = GModel::current()->getRegionByTag(tag);
          if(gr) gr->meshAttributes.recombine3D = 1;
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 324:
#line 4028 "Gmsh.y"
    {
      // smoothing constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (6)].l)){
        GModel::current()->getGEOInternals()->setSmoothing(0, (int)(yyvsp[(5) - (6)].d));
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++){
          (*it)->meshAttributes.transfiniteSmoothing = (int)(yyvsp[(5) - (6)].d);
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (6)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setSmoothing(tag, (int)(yyvsp[(5) - (6)].d));
          GFace *gf = GModel::current()->getFaceByTag(tag);
          if(gf) gf->meshAttributes.transfiniteSmoothing = (int)(yyvsp[(5) - (6)].d);
        }
        List_Delete((yyvsp[(3) - (6)].l));
      }
    ;}
    break;

  case 325:
#line 4055 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (11)].l)) != List_Nbr((yyvsp[(8) - (11)].l))){
        yymsg(0, "Number of master lines (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (11)].l)), List_Nbr((yyvsp[(4) - (11)].l)));
      }
      else{
        std::vector<double> transfo;
        if(List_Nbr((yyvsp[(10) - (11)].l)) != 0) {
          if (List_Nbr((yyvsp[(10) - (11)].l)) < 12){
            yymsg(0, "Affine transformation requires at least 12 entries (we have %d)",
                  List_Nbr((yyvsp[(10) - (11)].l)));
          }
          else {
            transfo.resize(List_Nbr((yyvsp[(10) - (11)].l)));
            for(int i = 0; i < List_Nbr((yyvsp[(10) - (11)].l)); i++)
              List_Read((yyvsp[(10) - (11)].l), i, &transfo[i]);
          }
        }
        for(int i = 0; i < List_Nbr((yyvsp[(4) - (11)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (11)].l), i, &d_master);
          List_Read((yyvsp[(4) - (11)].l), i, &d_slave);
          int j_master = (int)d_master;
          int j_slave  = (int)d_slave;
          addPeriodicEdge(j_slave, j_master, transfo);
        }
      }
      List_Delete((yyvsp[(4) - (11)].l));
      List_Delete((yyvsp[(8) - (11)].l));
    ;}
    break;

  case 326:
#line 4087 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (11)].l)) != List_Nbr((yyvsp[(8) - (11)].l))){
        yymsg(0, "Number of master faces (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (11)].l)), List_Nbr((yyvsp[(4) - (11)].l)));
      }
      else{
        if (List_Nbr((yyvsp[(10) - (11)].l)) < 12){
          // FIXME full automatic case here if List_Nbr($10) == 0)
          yymsg(0, "Affine transformation requires at least 12 entries");
        }
        else {
          std::vector<double> transfo(16,0);
          for(int i = 0; i < List_Nbr((yyvsp[(10) - (11)].l)); i++)
            List_Read((yyvsp[(10) - (11)].l), i, &transfo[i]);
          for(int i = 0; i < List_Nbr((yyvsp[(4) - (11)].l)); i++){
            double d_master, d_slave;
            List_Read((yyvsp[(8) - (11)].l), i, &d_master);
            List_Read((yyvsp[(4) - (11)].l), i, &d_slave);
            addPeriodicFace(d_slave, d_master, transfo);
          }
        }
      }
      List_Delete((yyvsp[(4) - (11)].l));
      List_Delete((yyvsp[(8) - (11)].l));
    ;}
    break;

  case 327:
#line 4114 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (18)].l)) != List_Nbr((yyvsp[(8) - (18)].l))){
        yymsg(0, "Number of master edges (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (18)].l)), List_Nbr((yyvsp[(4) - (18)].l)));
      }
      else{
        SPoint3 axis((yyvsp[(12) - (18)].v)[0],(yyvsp[(12) - (18)].v)[1],(yyvsp[(12) - (18)].v)[2]);
        SPoint3 origin((yyvsp[(14) - (18)].v)[0],(yyvsp[(14) - (18)].v)[1],(yyvsp[(14) - (18)].v)[2]);
        double  angle((yyvsp[(16) - (18)].d));
        SPoint3 translation(0,0,0);

        std::vector<double> transfo;
        computeAffineTransformation(origin,axis,angle,translation,transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (18)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (18)].l), i, &d_master);
          List_Read((yyvsp[(4) - (18)].l), i, &d_slave);
          addPeriodicEdge(d_slave,d_master,transfo);
        }
      }
      List_Delete((yyvsp[(4) - (18)].l));
      List_Delete((yyvsp[(8) - (18)].l));
    ;}
    break;

  case 328:
#line 4140 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (18)].l)) != List_Nbr((yyvsp[(8) - (18)].l))){
        yymsg(0, "Number of master faces (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (18)].l)), List_Nbr((yyvsp[(4) - (18)].l)));
      }
      else{
        SPoint3 origin((yyvsp[(14) - (18)].v)[0],(yyvsp[(14) - (18)].v)[1],(yyvsp[(14) - (18)].v)[2]);
        SPoint3 axis((yyvsp[(12) - (18)].v)[0],(yyvsp[(12) - (18)].v)[1],(yyvsp[(12) - (18)].v)[2]);
        double  angle((yyvsp[(16) - (18)].d));
        SPoint3 translation(0,0,0);

        std::vector<double> transfo;
        computeAffineTransformation(origin,axis,angle,translation,transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (18)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (18)].l), i, &d_master);
          List_Read((yyvsp[(4) - (18)].l), i, &d_slave);
          addPeriodicFace(d_slave, d_master, transfo);
        }
      }
      List_Delete((yyvsp[(4) - (18)].l));
      List_Delete((yyvsp[(8) - (18)].l));
    ;}
    break;

  case 329:
#line 4166 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (12)].l)) != List_Nbr((yyvsp[(8) - (12)].l))){
        yymsg(0, "Number of master edges (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (12)].l)), List_Nbr((yyvsp[(4) - (12)].l)));
      }
      else{
        SPoint3 origin(0,0,0);
        SPoint3 axis(0,0,0);
        double  angle(0);
        SPoint3 translation((yyvsp[(11) - (12)].v)[0],(yyvsp[(11) - (12)].v)[1],(yyvsp[(11) - (12)].v)[2]);

        std::vector<double> transfo;
        computeAffineTransformation(origin,axis,angle,translation,transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (12)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (12)].l), i, &d_master);
          List_Read((yyvsp[(4) - (12)].l), i, &d_slave);
          addPeriodicEdge(d_slave,d_master,transfo);
        }
      }
      List_Delete((yyvsp[(4) - (12)].l));
      List_Delete((yyvsp[(8) - (12)].l));
    ;}
    break;

  case 330:
#line 4192 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (12)].l)) != List_Nbr((yyvsp[(8) - (12)].l))){
        yymsg(0, "Number of master faces (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (12)].l)), List_Nbr((yyvsp[(4) - (12)].l)));
      }
      else{
        SPoint3 origin(0,0,0);
        SPoint3 axis(0,0,0);
        double  angle(0);
        SPoint3 translation((yyvsp[(11) - (12)].v)[0],(yyvsp[(11) - (12)].v)[1],(yyvsp[(11) - (12)].v)[2]);

        std::vector<double> transfo;
        computeAffineTransformation(origin,axis,angle,translation,transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (12)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (12)].l), i, &d_master);
          List_Read((yyvsp[(4) - (12)].l), i, &d_slave);
          addPeriodicFace(d_slave, d_master, transfo);
        }
      }
      List_Delete((yyvsp[(4) - (12)].l));
      List_Delete((yyvsp[(8) - (12)].l));
    ;}
    break;

  case 331:
#line 4218 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(5) - (12)].l)) != List_Nbr((yyvsp[(10) - (12)].l))){
        yymsg(0, "Number of master surface edges (%d) different from number of "
              "slave (%d) edges", List_Nbr((yyvsp[(10) - (12)].l)), List_Nbr((yyvsp[(5) - (12)].l)));
      }
      else{
        int j_master = (int)(yyvsp[(8) - (12)].d);
        int j_slave = (int)(yyvsp[(3) - (12)].d);
        std::map<int,int> edgeCounterParts;
        for (int i = 0; i < List_Nbr((yyvsp[(5) - (12)].l)); i++){
          double ds,dm;
          List_Read((yyvsp[(5) - (12)].l),i,&ds);
          List_Read((yyvsp[(10) - (12)].l),i,&dm);
          edgeCounterParts[(int) ds] = (int) dm;
        }
        addPeriodicFace(j_slave, j_master, edgeCounterParts);
      }
      List_Delete((yyvsp[(5) - (12)].l));
      List_Delete((yyvsp[(10) - (12)].l));
    ;}
    break;

  case 332:
#line 4239 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(0, tags, 2, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 333:
#line 4245 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(1, tags, 2, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 334:
#line 4251 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(0, tags, 3, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 335:
#line 4257 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(1, tags, 3, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 336:
#line 4263 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(2, tags, 3, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 337:
#line 4269 "Gmsh.y"
    {
      // reverse mesh constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (4)].l)){
        GModel::current()->getGEOInternals()->setReverseMesh(2, 0);
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++){
          (*it)->meshAttributes.reverseMesh = 1;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          int num = (int)d;
          GModel::current()->getGEOInternals()->setReverseMesh(2, num);
          GFace *gf = GModel::current()->getFaceByTag(num);
          if(gf) gf->meshAttributes.reverseMesh = 1;
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 338:
#line 4295 "Gmsh.y"
    {
      // reverse mesh constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (4)].l)){
        GModel::current()->getGEOInternals()->setReverseMesh(1, 0);
        for(GModel::eiter it = GModel::current()->firstEdge();
            it != GModel::current()->lastEdge(); it++){
          (*it)->meshAttributes.reverseMesh = 1;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          int num = (int)d;
          GModel::current()->getGEOInternals()->setReverseMesh(1, num);
          GEdge *ge = GModel::current()->getEdgeByTag(num);
          if(ge) ge->meshAttributes.reverseMesh = 1;
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 339:
#line 4321 "Gmsh.y"
    {
      if(!(yyvsp[(3) - (4)].l)){
        for(GModel::viter it = GModel::current()->firstVertex();
            it != GModel::current()->lastVertex(); it++)
          (*it)->relocateMeshVertices();
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          GVertex *gv = GModel::current()->getVertexByTag((int)d);
          if(gv) gv->relocateMeshVertices();
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 340:
#line 4338 "Gmsh.y"
    {
      if(!(yyvsp[(3) - (4)].l)){
        for(GModel::eiter it = GModel::current()->firstEdge();
            it != GModel::current()->lastEdge(); it++)
          (*it)->relocateMeshVertices();
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          GEdge *ge = GModel::current()->getEdgeByTag((int)d);
          if(ge) ge->relocateMeshVertices();
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 341:
#line 4355 "Gmsh.y"
    {
      if(!(yyvsp[(3) - (4)].l)){
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++)
          (*it)->relocateMeshVertices();
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          GFace *gf = GModel::current()->getFaceByTag((int)d);
          if(gf) gf->relocateMeshVertices();
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 342:
#line 4372 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
	double dnum;
	List_Read((yyvsp[(3) - (4)].l), i, &dnum);
	int num = (int)fabs(dnum);
        GModel::current()->getGEOInternals()->setDegenerated(1, num);
        GEdge *ge = GModel::current()->getEdgeByTag(num);
        if(ge) ge->setTooSmall(true);
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 343:
#line 4384 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (4)].l), tags);
      GModel::current()->getGEOInternals()->setCompoundMesh(1, tags);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 344:
#line 4390 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (4)].l), tags);
      GModel::current()->getGEOInternals()->setCompoundMesh(2, tags);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 345:
#line 4396 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (4)].l), tags);
      GModel::current()->getGEOInternals()->setCompoundMesh(3, tags);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 346:
#line 4408 "Gmsh.y"
    {
      GModel::current()->getGEOInternals()->removeAllDuplicates();
    ;}
    break;

  case 347:
#line 4412 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (3)].c), "Geometry"))
        GModel::current()->getGEOInternals()->removeAllDuplicates();
      else if(!strcmp((yyvsp[(2) - (3)].c), "Mesh"))
        GModel::current()->removeDuplicateMeshVertices(CTX::instance()->geom.tolerance);
      else
        yymsg(0, "Unknown coherence command");
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 348:
#line 4422 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(4) - (6)].l), tags);
      GModel::current()->getGEOInternals()->mergeVertices(tags);
      List_Delete((yyvsp[(4) - (6)].l));
    ;}
    break;

  case 349:
#line 4432 "Gmsh.y"
    { (yyval.c) = (char*)"Homology"; ;}
    break;

  case 350:
#line 4433 "Gmsh.y"
    { (yyval.c) = (char*)"Cohomology"; ;}
    break;

  case 351:
#line 4434 "Gmsh.y"
    { (yyval.c) = (char*)"Betti"; ;}
    break;

  case 352:
#line 4439 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < 4; i++) dim.push_back(i);
      GModel::current()->addHomologyRequest((yyvsp[(1) - (2)].c), domain, subdomain, dim);
    ;}
    break;

  case 353:
#line 4445 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (5)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (5)].l), i, &d);
        domain.push_back((int)d);
      }
      for(int i = 0; i < 4; i++) dim.push_back(i);
      GModel::current()->addHomologyRequest((yyvsp[(1) - (5)].c), domain, subdomain, dim);
      List_Delete((yyvsp[(3) - (5)].l));
    ;}
    break;

  case 354:
#line 4457 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (7)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (7)].l), i, &d);
        domain.push_back((int)d);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(5) - (7)].l)); i++){
        double d;
        List_Read((yyvsp[(5) - (7)].l), i, &d);
        subdomain.push_back((int)d);
      }
      for(int i = 0; i < 4; i++) dim.push_back(i);
      GModel::current()->addHomologyRequest((yyvsp[(1) - (7)].c), domain, subdomain, dim);
      List_Delete((yyvsp[(3) - (7)].l));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 355:
#line 4475 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < List_Nbr((yyvsp[(6) - (10)].l)); i++){
        double d;
        List_Read((yyvsp[(6) - (10)].l), i, &d);
        domain.push_back((int)d);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(8) - (10)].l)); i++){
        double d;
        List_Read((yyvsp[(8) - (10)].l), i, &d);
        subdomain.push_back((int)d);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (10)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (10)].l), i, &d);
        dim.push_back((int)d);
      }
      GModel::current()->addHomologyRequest((yyvsp[(1) - (10)].c), domain, subdomain, dim);
      List_Delete((yyvsp[(6) - (10)].l));
      List_Delete((yyvsp[(8) - (10)].l));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 356:
#line 4502 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d);           ;}
    break;

  case 357:
#line 4503 "Gmsh.y"
    { (yyval.d) = (yyvsp[(2) - (3)].d);           ;}
    break;

  case 358:
#line 4504 "Gmsh.y"
    { (yyval.d) = -(yyvsp[(2) - (2)].d);          ;}
    break;

  case 359:
#line 4505 "Gmsh.y"
    { (yyval.d) = (yyvsp[(2) - (2)].d);           ;}
    break;

  case 360:
#line 4506 "Gmsh.y"
    { (yyval.d) = !(yyvsp[(2) - (2)].d);          ;}
    break;

  case 361:
#line 4507 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d);      ;}
    break;

  case 362:
#line 4508 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d);      ;}
    break;

  case 363:
#line 4509 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d);      ;}
    break;

  case 364:
#line 4511 "Gmsh.y"
    {
      if(!(yyvsp[(3) - (3)].d))
	yymsg(0, "Division by zero in '%g / %g'", (yyvsp[(1) - (3)].d), (yyvsp[(3) - (3)].d));
      else
	(yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d);
    ;}
    break;

  case 365:
#line 4517 "Gmsh.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d);  ;}
    break;

  case 366:
#line 4518 "Gmsh.y"
    { (yyval.d) = pow((yyvsp[(1) - (3)].d), (yyvsp[(3) - (3)].d));  ;}
    break;

  case 367:
#line 4519 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d);      ;}
    break;

  case 368:
#line 4520 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d);      ;}
    break;

  case 369:
#line 4521 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d);     ;}
    break;

  case 370:
#line 4522 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d);     ;}
    break;

  case 371:
#line 4523 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d);     ;}
    break;

  case 372:
#line 4524 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d);     ;}
    break;

  case 373:
#line 4525 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d);     ;}
    break;

  case 374:
#line 4526 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d);     ;}
    break;

  case 375:
#line 4527 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (5)].d) ? (yyvsp[(3) - (5)].d) : (yyvsp[(5) - (5)].d); ;}
    break;

  case 376:
#line 4528 "Gmsh.y"
    { (yyval.d) = exp((yyvsp[(3) - (4)].d));      ;}
    break;

  case 377:
#line 4529 "Gmsh.y"
    { (yyval.d) = log((yyvsp[(3) - (4)].d));      ;}
    break;

  case 378:
#line 4530 "Gmsh.y"
    { (yyval.d) = log10((yyvsp[(3) - (4)].d));    ;}
    break;

  case 379:
#line 4531 "Gmsh.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (4)].d));     ;}
    break;

  case 380:
#line 4532 "Gmsh.y"
    { (yyval.d) = sin((yyvsp[(3) - (4)].d));      ;}
    break;

  case 381:
#line 4533 "Gmsh.y"
    { (yyval.d) = asin((yyvsp[(3) - (4)].d));     ;}
    break;

  case 382:
#line 4534 "Gmsh.y"
    { (yyval.d) = cos((yyvsp[(3) - (4)].d));      ;}
    break;

  case 383:
#line 4535 "Gmsh.y"
    { (yyval.d) = acos((yyvsp[(3) - (4)].d));     ;}
    break;

  case 384:
#line 4536 "Gmsh.y"
    { (yyval.d) = tan((yyvsp[(3) - (4)].d));      ;}
    break;

  case 385:
#line 4537 "Gmsh.y"
    { (yyval.d) = atan((yyvsp[(3) - (4)].d));     ;}
    break;

  case 386:
#line 4538 "Gmsh.y"
    { (yyval.d) = atan2((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d));;}
    break;

  case 387:
#line 4539 "Gmsh.y"
    { (yyval.d) = sinh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 388:
#line 4540 "Gmsh.y"
    { (yyval.d) = cosh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 389:
#line 4541 "Gmsh.y"
    { (yyval.d) = tanh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 390:
#line 4542 "Gmsh.y"
    { (yyval.d) = fabs((yyvsp[(3) - (4)].d));     ;}
    break;

  case 391:
#line 4543 "Gmsh.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d));    ;}
    break;

  case 392:
#line 4544 "Gmsh.y"
    { (yyval.d) = ceil((yyvsp[(3) - (4)].d));     ;}
    break;

  case 393:
#line 4545 "Gmsh.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d) + 0.5); ;}
    break;

  case 394:
#line 4546 "Gmsh.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d)); ;}
    break;

  case 395:
#line 4547 "Gmsh.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d)); ;}
    break;

  case 396:
#line 4548 "Gmsh.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (6)].d) * (yyvsp[(3) - (6)].d) + (yyvsp[(5) - (6)].d) * (yyvsp[(5) - (6)].d)); ;}
    break;

  case 397:
#line 4549 "Gmsh.y"
    { (yyval.d) = (yyvsp[(3) - (4)].d) * (double)rand() / (double)RAND_MAX; ;}
    break;

  case 398:
#line 4558 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d); ;}
    break;

  case 399:
#line 4559 "Gmsh.y"
    { (yyval.d) = 3.141592653589793; ;}
    break;

  case 400:
#line 4560 "Gmsh.y"
    { (yyval.d) = (double)ImbricatedTest; ;}
    break;

  case 401:
#line 4561 "Gmsh.y"
    { (yyval.d) = Msg::GetCommRank(); ;}
    break;

  case 402:
#line 4562 "Gmsh.y"
    { (yyval.d) = Msg::GetCommSize(); ;}
    break;

  case 403:
#line 4563 "Gmsh.y"
    { (yyval.d) = GetGmshMajorVersion(); ;}
    break;

  case 404:
#line 4564 "Gmsh.y"
    { (yyval.d) = GetGmshMinorVersion(); ;}
    break;

  case 405:
#line 4565 "Gmsh.y"
    { (yyval.d) = GetGmshPatchVersion(); ;}
    break;

  case 406:
#line 4566 "Gmsh.y"
    { (yyval.d) = Cpu(); ;}
    break;

  case 407:
#line 4567 "Gmsh.y"
    { (yyval.d) = GetMemoryUsage()/1024./1024.; ;}
    break;

  case 408:
#line 4568 "Gmsh.y"
    { (yyval.d) = TotalRam(); ;}
    break;

  case 409:
#line 4573 "Gmsh.y"
    { floatOptions.clear(); charOptions.clear(); ;}
    break;

  case 410:
#line 4575 "Gmsh.y"
    {
      std::vector<double> val(1, (yyvsp[(3) - (6)].d));
      Msg::ExchangeOnelabParameter("", val, floatOptions, charOptions);
      (yyval.d) = val[0];
    ;}
    break;

  case 411:
#line 4581 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d); ;}
    break;

  case 412:
#line 4583 "Gmsh.y"
    {
      (yyval.d) = Msg::GetOnelabNumber((yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 413:
#line 4588 "Gmsh.y"
    {
      (yyval.d) = Msg::GetOnelabNumber((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].d));
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 414:
#line 4594 "Gmsh.y"
    {
      if(gmsh_yysymbols.count((yyvsp[(1) - (1)].c2).char2)){
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (1)].c2).char2]);
        if(s.value.empty()){
          yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (1)].c2).char2);
          (yyval.d) = 0.;
        }
        else
          (yyval.d) = s.value[0];
      }
      else{
        std::string struct_namespace((yyvsp[(1) - (1)].c2).char1? (yyvsp[(1) - (1)].c2).char1 : std::string("")),
          struct_name((yyvsp[(1) - (1)].c2).char2);
        if(nameSpaces.count(struct_namespace) &&
           nameSpaces[struct_namespace].count(struct_name)) {
          (yyval.d) = (double)nameSpaces[struct_namespace][struct_name]._index;
        }
        else {
          yymsg(0, "Unknown variable: %s", struct_name.c_str());  (yyval.d) = 0.;
        }
      }
      Free((yyvsp[(1) - (1)].c2).char1); Free((yyvsp[(1) - (1)].c2).char2);
    ;}
    break;

  case 415:
#line 4618 "Gmsh.y"
    {
      int index = (int)(yyvsp[(3) - (4)].d);
      if(!gmsh_yysymbols.count((yyvsp[(1) - (4)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (4)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (4)].c)]);
        if((int)s.value.size() < index + 1){
          yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (4)].c), index);
          (yyval.d) = 0.;
        }
        else
          (yyval.d) = s.value[index];
      }
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 416:
#line 4636 "Gmsh.y"
    {
      int index = (int)(yyvsp[(3) - (4)].d);
      if(!gmsh_yysymbols.count((yyvsp[(1) - (4)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (4)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (4)].c)]);
        if((int)s.value.size() < index + 1){
          yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (4)].c), index);
          (yyval.d) = 0.;
        }
        else
          (yyval.d) = s.value[index];
      }
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 417:
#line 4654 "Gmsh.y"
    {
      (yyval.d) = gmsh_yysymbols.count((yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 418:
#line 4659 "Gmsh.y"
    {
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
      (yyval.d) = !StatFile(tmp);
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 419:
#line 4665 "Gmsh.y"
    {
      if(gmsh_yysymbols.count((yyvsp[(2) - (4)].c))){
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(2) - (4)].c)]);
	(yyval.d) = s.value.size();
      }
      else if(gmsh_yystringsymbols.count((yyvsp[(2) - (4)].c))){
	(yyval.d) = gmsh_yystringsymbols[(yyvsp[(2) - (4)].c)].size();
      }
      else{
        yymsg(0, "Unknown variable '%s'", (yyvsp[(2) - (4)].c));
	(yyval.d) = 0.;
      }
      Free((yyvsp[(2) - (4)].c));
    ;}
    break;

  case 420:
#line 4680 "Gmsh.y"
    {
      if(!gmsh_yysymbols.count((yyvsp[(1) - (2)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (2)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (2)].c)]);
        if(s.value.empty()){
          yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (2)].c));
          (yyval.d) = 0.;
        }
        else{
          (yyval.d) = s.value[0];
          s.value[0] += (yyvsp[(2) - (2)].i);
        }
      }
      Free((yyvsp[(1) - (2)].c));
    ;}
    break;

  case 421:
#line 4699 "Gmsh.y"
    {
      int index = (int)(yyvsp[(3) - (5)].d);
      if(!gmsh_yysymbols.count((yyvsp[(1) - (5)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (5)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (5)].c)]);
        if((int)s.value.size() < index + 1){
          yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (5)].c), index);
          (yyval.d) = 0.;
        }
        else{
          (yyval.d) = s.value[index];
          s.value[index] += (yyvsp[(5) - (5)].i);
        }
      }
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 422:
#line 4720 "Gmsh.y"
    {
      int index = (int)(yyvsp[(3) - (5)].d);
      if(!gmsh_yysymbols.count((yyvsp[(1) - (5)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (5)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (5)].c)]);
        if((int)s.value.size() < index + 1){
          yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (5)].c), index);
          (yyval.d) = 0.;
        }
        else{
          (yyval.d) = s.value[index];
          s.value[index] += (yyvsp[(5) - (5)].i);
        }
      }
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 423:
#line 4753 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float(NULL, (yyvsp[(1) - (3)].c), (yyvsp[(3) - (3)].c));
      /*
      std::string struct_namespace($1.char1? $1.char1 : std::string("")),
        struct_name($1.char2);
      if (nameSpaces.count(struct_namespace) &&
          nameSpaces[struct_namespace].count(struct_name)) {
        std::string key2($3);
        if (nameSpaces[struct_namespace][struct_name]._fopt.count(key2)) {
	  $$ = nameSpaces[struct_namespace][struct_name]._fopt[key2][0];
        }
        else {
	  yymsg(0, "Unknown member '%s' of Struct %s", $3, struct_name.c_str());
          $$ = 0.;
	}
      }
      else  {
        NumberOption(GMSH_GET, $1.char2, 0, $3, $$);
      }
      Free($1.char1); Free($1.char2);
      if (flag_tSTRING_alloc) Free($3);
      */
    ;}
    break;

  case 424:
#line 4777 "Gmsh.y"
    { (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(1) - (5)].c), (yyvsp[(3) - (5)].c), (yyvsp[(5) - (5)].c)); ;}
    break;

  case 425:
#line 4780 "Gmsh.y"
    {
      NumberOption(GMSH_GET, (yyvsp[(1) - (6)].c), (int)(yyvsp[(3) - (6)].d), (yyvsp[(6) - (6)].c), (yyval.d));
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(6) - (6)].c));
    ;}
    break;

  case 426:
#line 4786 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (4)].c), 0, (yyvsp[(3) - (4)].c), d)){
	d += (yyvsp[(4) - (4)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (4)].c), 0, (yyvsp[(3) - (4)].c), d);
	(yyval.d) = d;
      }
      Free((yyvsp[(1) - (4)].c)); Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 427:
#line 4797 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c), d)){
	d += (yyvsp[(7) - (7)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c), d);
	(yyval.d) = d;
      }
      Free((yyvsp[(1) - (7)].c)); Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 428:
#line 4807 "Gmsh.y"
    {
      (yyval.d) = Msg::GetValue((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].d));
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 429:
#line 4812 "Gmsh.y"
    {
      int matches = 0;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (6)].l), i, &d);
        matches += List_Search((yyvsp[(5) - (6)].l), &d, fcmp_double);
      }
      (yyval.d) = matches;
      Free((yyvsp[(3) - (6)].l)); Free((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 430:
#line 4823 "Gmsh.y"
    {
      std::string s((yyvsp[(3) - (6)].c)), substr((yyvsp[(5) - (6)].c));
      if(s.find(substr) != std::string::npos)
        (yyval.d) = 1.;
      else
        (yyval.d) = 0.;
      Free((yyvsp[(3) - (6)].c)); Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 431:
#line 4832 "Gmsh.y"
    {
      (yyval.d) = strlen((yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 432:
#line 4837 "Gmsh.y"
    {
      (yyval.d) = strcmp((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      Free((yyvsp[(3) - (6)].c)); Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 433:
#line 4842 "Gmsh.y"
    {
      int align = 0, font = 0, fontsize = CTX::instance()->glFontSize;
      if(List_Nbr((yyvsp[(3) - (4)].l)) % 2){
        yyerror("Number of text attributes should be even");
      }
      else{
        for(int i = 0 ; i < List_Nbr((yyvsp[(3) - (4)].l)); i += 2){
          char *s1, *s2; List_Read((yyvsp[(3) - (4)].l), i, &s1); List_Read((yyvsp[(3) - (4)].l), i + 1, &s2);
          std::string key(s1), val(s2);
          Free(s1); Free(s2);
#if defined(HAVE_OPENGL)
          if(key == "Font")
            font = drawContext::global()->getFontIndex(val.c_str());
          else if(key == "FontSize")
            fontsize = atoi(val.c_str());
          else if(key == "Align")
            align = drawContext::global()->getFontAlign(val.c_str());
#endif
        }
      }
      List_Delete((yyvsp[(3) - (4)].l));
      (yyval.d) = (double)((align<<16)|(font<<8)|(fontsize));
    ;}
    break;

  case 434:
#line 4870 "Gmsh.y"
    { floatOptions.clear(); charOptions.clear(); ;}
    break;

  case 435:
#line 4872 "Gmsh.y"
    {
      std::string struct_namespace((yyvsp[(2) - (8)].c2).char1? (yyvsp[(2) - (8)].c2).char1 : std::string("")),
        struct_name((yyvsp[(2) - (8)].c2).char2);
      Free((yyvsp[(2) - (8)].c2).char1); Free((yyvsp[(2) - (8)].c2).char2);
      if (!(yyvsp[(3) - (8)].i))
        if (!nameSpaces[struct_namespace].count(struct_name)) {
          int index = (int)(yyvsp[(6) - (8)].d);
          if (index < 0)
            index = nameSpaces[struct_namespace].get().size()+1;
          nameSpaces[struct_namespace][struct_name] =
            Struct(index, floatOptions, charOptions);
          (yyval.d) = (double)index;
        }
        else {
          yymsg(0, "Redefinition of Struct '%s::%s'",
                struct_namespace.c_str(), struct_name.c_str());
          (yyval.d) = (yyvsp[(6) - (8)].d);
        }
      else {
        nameSpaces[struct_namespace][struct_name].
          append(floatOptions, charOptions);
        (yyval.d) = (double)nameSpaces[struct_namespace][struct_name]._index;
      }
    ;}
    break;

  case 436:
#line 4900 "Gmsh.y"
    { (yyval.c2).char1 = NULL; (yyval.c2).char2 = (yyvsp[(1) - (1)].c); ;}
    break;

  case 437:
#line 4902 "Gmsh.y"
    { (yyval.c2).char1 = (yyvsp[(1) - (3)].c); (yyval.c2).char2 = (yyvsp[(3) - (3)].c); ;}
    break;

  case 438:
#line 4907 "Gmsh.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c); flag_tSTRING_alloc = 1; ;}
    break;

  case 439:
#line 4916 "Gmsh.y"
    { (yyval.i) = 99; ;}
    break;

  case 440:
#line 4918 "Gmsh.y"
    { (yyval.i) = (int)(yyvsp[(2) - (2)].d); ;}
    break;

  case 441:
#line 4923 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 442:
#line 4925 "Gmsh.y"
    { (yyval.i) = (yyvsp[(2) - (3)].i); ;}
    break;

  case 443:
#line 4931 "Gmsh.y"
    {
      memcpy((yyval.v), (yyvsp[(1) - (1)].v), 5*sizeof(double));
    ;}
    break;

  case 444:
#line 4935 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = -(yyvsp[(2) - (2)].v)[i];
    ;}
    break;

  case 445:
#line 4939 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = (yyvsp[(2) - (2)].v)[i];
    ;}
    break;

  case 446:
#line 4943 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = (yyvsp[(1) - (3)].v)[i] - (yyvsp[(3) - (3)].v)[i];
    ;}
    break;

  case 447:
#line 4947 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = (yyvsp[(1) - (3)].v)[i] + (yyvsp[(3) - (3)].v)[i];
    ;}
    break;

  case 448:
#line 4954 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (11)].d);  (yyval.v)[1] = (yyvsp[(4) - (11)].d);  (yyval.v)[2] = (yyvsp[(6) - (11)].d);  (yyval.v)[3] = (yyvsp[(8) - (11)].d); (yyval.v)[4] = (yyvsp[(10) - (11)].d);
    ;}
    break;

  case 449:
#line 4958 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (9)].d);  (yyval.v)[1] = (yyvsp[(4) - (9)].d);  (yyval.v)[2] = (yyvsp[(6) - (9)].d);  (yyval.v)[3] = (yyvsp[(8) - (9)].d); (yyval.v)[4] = 1.0;
    ;}
    break;

  case 450:
#line 4962 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (7)].d);  (yyval.v)[1] = (yyvsp[(4) - (7)].d);  (yyval.v)[2] = (yyvsp[(6) - (7)].d);  (yyval.v)[3] = 0.0; (yyval.v)[4] = 1.0;
    ;}
    break;

  case 451:
#line 4966 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (7)].d);  (yyval.v)[1] = (yyvsp[(4) - (7)].d);  (yyval.v)[2] = (yyvsp[(6) - (7)].d);  (yyval.v)[3] = 0.0; (yyval.v)[4] = 1.0;
    ;}
    break;

  case 452:
#line 4973 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(List_T*));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].l)));
    ;}
    break;

  case 453:
#line 4978 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].l)));
    ;}
    break;

  case 454:
#line 4985 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d)));
    ;}
    break;

  case 455:
#line 4990 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(1) - (1)].l);
    ;}
    break;

  case 456:
#line 4994 "Gmsh.y"
    {
      // creates an empty list
      (yyval.l) = List_Create(2, 1, sizeof(double));
    ;}
    break;

  case 457:
#line 4999 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 458:
#line 5003 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (4)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) = - (*pd);
      }
    ;}
    break;

  case 459:
#line 5011 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(4) - (5)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) *= (yyvsp[(1) - (5)].d);
      }
    ;}
    break;

  case 460:
#line 5022 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(1) - (1)].l);
    ;}
    break;

  case 461:
#line 5026 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (1)].c), "*") || !strcmp((yyvsp[(1) - (1)].c), "all"))
        (yyval.l) = 0;
      else{
        yyerror("Unknown special string for list replacement");
        (yyval.l) = List_Create(2, 1, sizeof(double));
      }
    ;}
    break;

  case 462:
#line 5038 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (2)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) = - (*pd);
      }
    ;}
    break;

  case 463:
#line 5046 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (3)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) *= (yyvsp[(1) - (3)].d);
      }
    ;}
    break;

  case 464:
#line 5054 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      for(double d = (yyvsp[(1) - (3)].d); ((yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d)) ? (d <= (yyvsp[(3) - (3)].d)) : (d >= (yyvsp[(3) - (3)].d));
          ((yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d)) ? (d += 1.) : (d -= 1.))
	List_Add((yyval.l), &d);
    ;}
    break;

  case 465:
#line 5061 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!(yyvsp[(5) - (5)].d)){  //|| ($1 < $3 && $5 < 0) || ($1 > $3 && $5 > 0)
        yymsg(0, "Wrong increment in '%g:%g:%g'", (yyvsp[(1) - (5)].d), (yyvsp[(3) - (5)].d), (yyvsp[(5) - (5)].d));
      }
      else
	for(double d = (yyvsp[(1) - (5)].d); ((yyvsp[(5) - (5)].d) > 0) ? (d <= (yyvsp[(3) - (5)].d)) : (d >= (yyvsp[(3) - (5)].d)); d += (yyvsp[(5) - (5)].d))
	  List_Add((yyval.l), &d);
   ;}
    break;

  case 466:
#line 5071 "Gmsh.y"
    {
      (yyval.l) = List_Create(3, 1, sizeof(double));
      int tag = (int)(yyvsp[(3) - (4)].d);
      double x = 0., y = 0., z = 0.;
      bool found = GModel::current()->getGEOInternals()->getVertex(tag, x, y, z);
      if(!found && GModel::current()->getOCCInternals())
        found = GModel::current()->getOCCInternals()->getVertex(tag, x, y, z);
      if(!found){
        GVertex *gv = GModel::current()->getVertexByTag(tag);
        if(gv){
          x = gv->x();
          y = gv->y();
          z = gv->z();
        }
        else{
          yymsg(0, "Unknown model vertex with tag %d", tag);
        }
      }
      List_Add((yyval.l), &x);
      List_Add((yyval.l), &y);
      List_Add((yyval.l), &z);
    ;}
    break;

  case 467:
#line 5094 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getAllElementaryTags(0, (yyval.l));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 468:
#line 5100 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getAllElementaryTags(1, (yyval.l));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 469:
#line 5106 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getAllElementaryTags(2, (yyval.l));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 470:
#line 5112 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getAllElementaryTags(3, (yyval.l));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 471:
#line 5118 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      if(!(yyvsp[(3) - (3)].l)){
        getAllPhysicalTags(0, (yyval.l));
      }
      else{
        getElementaryTagsForPhysicalGroups(0, (yyvsp[(3) - (3)].l), (yyval.l));
        List_Delete((yyvsp[(3) - (3)].l));
      }
    ;}
    break;

  case 472:
#line 5129 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      if(!(yyvsp[(3) - (3)].l)){
        getAllPhysicalTags(1, (yyval.l));
      }
      else{
        getElementaryTagsForPhysicalGroups(1, (yyvsp[(3) - (3)].l), (yyval.l));
        List_Delete((yyvsp[(3) - (3)].l));
      }
    ;}
    break;

  case 473:
#line 5140 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      if(!(yyvsp[(3) - (3)].l)){
        getAllPhysicalTags(2, (yyval.l));
      }
      else{
        getElementaryTagsForPhysicalGroups(2, (yyvsp[(3) - (3)].l), (yyval.l));
        List_Delete((yyvsp[(3) - (3)].l));
      }
    ;}
    break;

  case 474:
#line 5151 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      if(!(yyvsp[(3) - (3)].l)){
        getAllPhysicalTags(3, (yyval.l));
      }
      else{
        getElementaryTagsForPhysicalGroups(3, (yyvsp[(3) - (3)].l), (yyval.l));
        List_Delete((yyvsp[(3) - (3)].l));
      }
    ;}
    break;

  case 475:
#line 5163 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getElementaryTagsInBoundingBox(0, (yyvsp[(5) - (16)].d), (yyvsp[(7) - (16)].d), (yyvsp[(9) - (16)].d), (yyvsp[(11) - (16)].d), (yyvsp[(13) - (16)].d), (yyvsp[(15) - (16)].d), (yyval.l));
    ;}
    break;

  case 476:
#line 5169 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getElementaryTagsInBoundingBox(1, (yyvsp[(5) - (16)].d), (yyvsp[(7) - (16)].d), (yyvsp[(9) - (16)].d), (yyvsp[(11) - (16)].d), (yyvsp[(13) - (16)].d), (yyvsp[(15) - (16)].d), (yyval.l));
    ;}
    break;

  case 477:
#line 5175 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getElementaryTagsInBoundingBox(2, (yyvsp[(5) - (16)].d), (yyvsp[(7) - (16)].d), (yyvsp[(9) - (16)].d), (yyvsp[(11) - (16)].d), (yyvsp[(13) - (16)].d), (yyvsp[(15) - (16)].d), (yyval.l));
    ;}
    break;

  case 478:
#line 5181 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getElementaryTagsInBoundingBox(3, (yyvsp[(5) - (16)].d), (yyvsp[(7) - (16)].d), (yyvsp[(9) - (16)].d), (yyvsp[(11) - (16)].d), (yyvsp[(13) - (16)].d), (yyvsp[(15) - (16)].d), (yyval.l));
    ;}
    break;

  case 479:
#line 5186 "Gmsh.y"
    {
      (yyval.l) = List_Create(List_Nbr((yyvsp[(1) - (1)].l)), 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(1) - (1)].l)); i++){
	Shape *s = (Shape*) List_Pointer((yyvsp[(1) - (1)].l), i);
	double d = s->Num;
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(1) - (1)].l));
    ;}
    break;

  case 480:
#line 5196 "Gmsh.y"
    {
      (yyval.l) = List_Create(List_Nbr((yyvsp[(1) - (1)].l)), 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(1) - (1)].l)); i++){
	Shape *s = (Shape*) List_Pointer((yyvsp[(1) - (1)].l), i);
	double d = s->Num;
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(1) - (1)].l));
    ;}
    break;

  case 481:
#line 5206 "Gmsh.y"
    {
      (yyval.l) = List_Create(List_Nbr((yyvsp[(1) - (1)].l)), 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(1) - (1)].l)); i++){
	Shape *s = (Shape*) List_Pointer((yyvsp[(1) - (1)].l), i);
	double d = s->Num;
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(1) - (1)].l));
    ;}
    break;

  case 482:
#line 5216 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!gmsh_yysymbols.count((yyvsp[(1) - (3)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (3)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (3)].c)]);
	for(unsigned int i = 0; i < s.value.size(); i++)
	  List_Add((yyval.l), &s.value[i]);
      }
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 483:
#line 5229 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!gmsh_yysymbols.count((yyvsp[(3) - (4)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(3) - (4)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(3) - (4)].c)]);
	for(unsigned int i = 0; i < s.value.size(); i++)
	  List_Add((yyval.l), &s.value[i]);
      }
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 484:
#line 5241 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (4)].l);
    ;}
    break;

  case 485:
#line 5245 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (4)].l);
    ;}
    break;

  case 486:
#line 5249 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(4) - (6)].l);
    ;}
    break;

  case 487:
#line 5253 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!gmsh_yysymbols.count((yyvsp[(1) - (6)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (6)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (6)].c)]);
	for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	  int index = (int)(*(double*)List_Pointer_Fast((yyvsp[(4) - (6)].l), i));
	  if((int)s.value.size() < index + 1)
	    yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (6)].c), index);
	  else
	    List_Add((yyval.l), &s.value[index]);
	}
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(4) - (6)].l));
    ;}
    break;

  case 488:
#line 5271 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(double));
      for(int i = 0; i < (int)(yyvsp[(7) - (8)].d); i++) {
	double d = (yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1);
	List_Add((yyval.l), &d);
      }
    ;}
    break;

  case 489:
#line 5279 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(double));
      for(int i = 0; i < (int)(yyvsp[(7) - (8)].d); i++) {
	double d = pow(10,(yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1));
	List_Add((yyval.l), &d);
      }
    ;}
    break;

  case 490:
#line 5287 "Gmsh.y"
    {
      Msg::Barrier();
      FILE *File;
      (yyval.l) = List_Create(100, 100, sizeof(double));
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
      if(!(File = Fopen(tmp.c_str(), "rb"))){
        yymsg(0, "Could not open file '%s'", (yyvsp[(3) - (4)].c));
      }
      else{
	double d;
	while(!feof(File)){
          int ret = fscanf(File, "%lf", &d);
	  if(ret == 1){
	    List_Add((yyval.l), &d);
          }
          else if(ret == EOF){
            break;
          }
          else{
            char dummy[1024];
            fscanf(File, "%s", dummy);
            yymsg(0, "Ignoring '%s' in file '%s'", dummy, (yyvsp[(3) - (4)].c));
          }
        }
	fclose(File);
      }
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 491:
#line 5316 "Gmsh.y"
    {
      double x0 = (yyvsp[(3) - (14)].d), x1 = (yyvsp[(5) - (14)].d), y0 = (yyvsp[(7) - (14)].d), y1 = (yyvsp[(9) - (14)].d), ys = (yyvsp[(11) - (14)].d);
      int N = (int)(yyvsp[(13) - (14)].d);
      std::vector<double> y(N);
      if(!catenary(x0, x1, y0, y1, ys, N, &y[0]))
        Msg::Warning("Catenary did not converge, using linear interpolation");
      (yyval.l) = List_Create(N,10,sizeof(double));
      for(int i = 0; i < N; i++) List_Add((yyval.l), &y[i]);
    ;}
    break;

  case 492:
#line 5326 "Gmsh.y"
    {
      std::vector<double> tmp;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        double d; List_Read((yyvsp[(3) - (4)].l), i, &d);
        tmp.push_back(d);
      }
      std::sort(tmp.begin(), tmp.end());
      std::vector<double>::iterator last = std::unique(tmp.begin(), tmp.end());
      tmp.erase(last, tmp.end());
      (yyval.l) = (yyvsp[(3) - (4)].l);
      List_Reset((yyval.l));
      for(unsigned int i = 0; i < tmp.size(); i++){
        List_Add((yyval.l), &tmp[i]);
      }
    ;}
    break;

  case 493:
#line 5345 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d)));
    ;}
    break;

  case 494:
#line 5350 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(1) - (1)].l);
    ;}
    break;

  case 495:
#line 5354 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].d)));
    ;}
    break;

  case 496:
#line 5358 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (3)].l)); i++){
	double d;
	List_Read((yyvsp[(3) - (3)].l), i, &d);
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 497:
#line 5370 "Gmsh.y"
    {
      (yyval.u) = CTX::instance()->packColor((int)(yyvsp[(2) - (9)].d), (int)(yyvsp[(4) - (9)].d), (int)(yyvsp[(6) - (9)].d), (int)(yyvsp[(8) - (9)].d));
    ;}
    break;

  case 498:
#line 5374 "Gmsh.y"
    {
      (yyval.u) = CTX::instance()->packColor((int)(yyvsp[(2) - (7)].d), (int)(yyvsp[(4) - (7)].d), (int)(yyvsp[(6) - (7)].d), 255);
    ;}
    break;

  case 499:
#line 5386 "Gmsh.y"
    {
      int flag = 0;
      if(gmsh_yystringsymbols.count((yyvsp[(1) - (1)].c))){
        if(gmsh_yystringsymbols[(yyvsp[(1) - (1)].c)].size()){
          (yyval.u) = GetColorForString(-1, gmsh_yystringsymbols[(yyvsp[(1) - (1)].c)][0].c_str(), &flag);
        }
        else{
          yymsg(0, "Unknown color '%s'", (yyvsp[(1) - (1)].c));
          (yyval.u) = 0;
        }
      }
      else
        (yyval.u) = GetColorForString(-1, (yyvsp[(1) - (1)].c), &flag);
      if(flag) yymsg(0, "Unknown color '%s'", (yyvsp[(1) - (1)].c));
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 500:
#line 5403 "Gmsh.y"
    {
      unsigned int val = 0;
      ColorOption(GMSH_GET, (yyvsp[(1) - (5)].c), 0, (yyvsp[(5) - (5)].c), val);
      (yyval.u) = val;
      Free((yyvsp[(1) - (5)].c)); Free((yyvsp[(5) - (5)].c));
    ;}
    break;

  case 501:
#line 5413 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 502:
#line 5417 "Gmsh.y"
    {
      (yyval.l) = List_Create(256, 10, sizeof(unsigned int));
      GmshColorTable *ct = GetColorTable((int)(yyvsp[(3) - (6)].d));
      if(!ct)
	yymsg(0, "View[%d] does not exist", (int)(yyvsp[(3) - (6)].d));
      else{
	for(int i = 0; i < ct->size; i++)
	  List_Add((yyval.l), &ct->table[i]);
      }
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 503:
#line 5432 "Gmsh.y"
    {
      (yyval.l) = List_Create(256, 10, sizeof(unsigned int));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].u)));
    ;}
    break;

  case 504:
#line 5437 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].u)));
    ;}
    break;

  case 505:
#line 5444 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c);
    ;}
    break;

  case 506:
#line 5448 "Gmsh.y"
    {
      std::string val;
      if(!gmsh_yystringsymbols.count((yyvsp[(1) - (1)].c)))
        yymsg(0, "Unknown string variable '%s'", (yyvsp[(1) - (1)].c));
      else if(gmsh_yystringsymbols[(yyvsp[(1) - (1)].c)].size() == 1)
        val = gmsh_yystringsymbols[(yyvsp[(1) - (1)].c)][0];
      else
        yymsg(0, "Expected single valued string variable '%s'", (yyvsp[(1) - (1)].c));
      (yyval.c) = (char *)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 507:
#line 5461 "Gmsh.y"
    {
      std::string val;
      int j = (int)(yyvsp[(3) - (4)].d);
      if(!gmsh_yystringsymbols.count((yyvsp[(1) - (4)].c)))
        yymsg(0, "Unknown string variable '%s'", (yyvsp[(1) - (4)].c));
      else if(j >= 0 && j < (int)gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)].size())
        val = gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)][j];
      else
        yymsg(0, "Index %d out of range", j);
      (yyval.c) = (char *)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 508:
#line 5475 "Gmsh.y"
    {
      std::string val;
      int j = (int)(yyvsp[(3) - (4)].d);
      if(!gmsh_yystringsymbols.count((yyvsp[(1) - (4)].c)))
        yymsg(0, "Unknown string variable '%s'", (yyvsp[(1) - (4)].c));
      else if(j >= 0 && j < (int)gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)].size())
        val = gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)][j];
      else
        yymsg(0, "Index %d out of range", j);
      (yyval.c) = (char *)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 509:
#line 5492 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String(NULL, (yyvsp[(1) - (3)].c), (yyvsp[(3) - (3)].c));
      /*
      std::string out;
      std::string struct_namespace($1.char1? $1.char1 : std::string("")),
        struct_name($1.char2);
      if(nameSpaces.count(struct_namespace) &&
         nameSpaces[struct_namespace].count(struct_name)) {
        std::string key2($3);
        if(nameSpaces[struct_namespace][struct_name]._copt.count(key2)) {
	  out = nameSpaces[struct_namespace][struct_name]._copt[key2][0];
        }
        else {
	  yymsg(0, "Unknown member '%s' of Struct %s", $3, struct_name.c_str());
	}
      }
      else  {
        StringOption(GMSH_GET, $1, 0, $3, out);
      }
      $$ = (char*)Malloc((out.size() + 1) * sizeof(char));
      strcpy($$, out.c_str());
      Free($1.char1); Free($1.char2);
      if (flag_tSTRING_alloc) Free($3);
      */
    ;}
    break;

  case 510:
#line 5518 "Gmsh.y"
    { (yyval.c) = treat_Struct_FullName_dot_tSTRING_String((yyvsp[(1) - (5)].c), (yyvsp[(3) - (5)].c), (yyvsp[(5) - (5)].c)); ;}
    break;

  case 511:
#line 5522 "Gmsh.y"
    {
      std::string out;
      StringOption(GMSH_GET, (yyvsp[(1) - (6)].c), (int)(yyvsp[(3) - (6)].d), (yyvsp[(6) - (6)].c), out);
      (yyval.c) = (char*)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(6) - (6)].c));
    ;}
    break;

  case 512:
#line 5530 "Gmsh.y"
    {
      std::string name = GModel::current()->getPhysicalName(0, (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char*)Malloc((name.size() + 1) * sizeof(char));
      strcpy((yyval.c), name.c_str());
    ;}
    break;

  case 513:
#line 5536 "Gmsh.y"
    {
      std::string name = GModel::current()->getPhysicalName(1, (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char*)Malloc((name.size() + 1) * sizeof(char));
      strcpy((yyval.c), name.c_str());
    ;}
    break;

  case 514:
#line 5542 "Gmsh.y"
    {
      std::string name = GModel::current()->getPhysicalName(2, (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char*)Malloc((name.size() + 1) * sizeof(char));
      strcpy((yyval.c), name.c_str());
    ;}
    break;

  case 515:
#line 5548 "Gmsh.y"
    {
      std::string name = GModel::current()->getPhysicalName(3, (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char*)Malloc((name.size() + 1) * sizeof(char));
      strcpy((yyval.c), name.c_str());
    ;}
    break;

  case 516:
#line 5557 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c);
    ;}
    break;

  case 517:
#line 5561 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 518:
#line 5565 "Gmsh.y"
    {
      (yyval.c) = (char *)Malloc(32 * sizeof(char));
      time_t now;
      time(&now);
      strcpy((yyval.c), ctime(&now));
      (yyval.c)[strlen((yyval.c)) - 1] = '\0';
    ;}
    break;

  case 519:
#line 5573 "Gmsh.y"
    {
      std::string exe = Msg::GetExecutableName();
      (yyval.c) = (char *)Malloc(exe.size() + 1);
      strcpy((yyval.c), exe.c_str());
    ;}
    break;

  case 520:
#line 5579 "Gmsh.y"
    {
      std::string action = Msg::GetOnelabAction();
      (yyval.c) = (char *)Malloc(action.size() + 1);
      strcpy((yyval.c), action.c_str());
    ;}
    break;

  case 521:
#line 5585 "Gmsh.y"
    {
      const char *env = GetEnvironmentVar((yyvsp[(3) - (4)].c));
      if(!env) env = "";
      (yyval.c) = (char *)Malloc((sizeof(env) + 1) * sizeof(char));
      strcpy((yyval.c), env);
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 522:
#line 5593 "Gmsh.y"
    {
      std::string s = Msg::GetString((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      (yyval.c) = (char *)Malloc((s.size() + 1) * sizeof(char));
      strcpy((yyval.c), s.c_str());
      Free((yyvsp[(3) - (6)].c));
      Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 523:
#line 5601 "Gmsh.y"
    {
      std::string s = Msg::GetOnelabString((yyvsp[(3) - (4)].c));
      (yyval.c) = (char *)Malloc((s.size() + 1) * sizeof(char));
      strcpy((yyval.c), s.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 524:
#line 5608 "Gmsh.y"
    {
      std::string s = Msg::GetOnelabString((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      (yyval.c) = (char *)Malloc((s.size() + 1) * sizeof(char));
      strcpy((yyval.c), s.c_str());
      Free((yyvsp[(3) - (6)].c));
      Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 525:
#line 5616 "Gmsh.y"
    {
      int size = 1;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++)
        size += strlen(*(char**)List_Pointer((yyvsp[(3) - (4)].l), i)) + 1;
      (yyval.c) = (char*)Malloc(size * sizeof(char));
      (yyval.c)[0] = '\0';
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        char *s;
        List_Read((yyvsp[(3) - (4)].l), i, &s);
        strcat((yyval.c), s);
        Free(s);
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 526:
#line 5631 "Gmsh.y"
    {
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(3) - (4)].c)) + 1) * sizeof(char));
      int i;
      for(i = strlen((yyvsp[(3) - (4)].c)) - 1; i >= 0; i--){
	if((yyvsp[(3) - (4)].c)[i] == '.'){
	  strncpy((yyval.c), (yyvsp[(3) - (4)].c), i);
	  (yyval.c)[i]='\0';
	  break;
	}
      }
      if(i <= 0) strcpy((yyval.c), (yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 527:
#line 5645 "Gmsh.y"
    {
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(3) - (4)].c)) + 1) * sizeof(char));
      int i;
      for(i = strlen((yyvsp[(3) - (4)].c)) - 1; i >= 0; i--){
	if((yyvsp[(3) - (4)].c)[i] == '/' || (yyvsp[(3) - (4)].c)[i] == '\\')
	  break;
      }
      if(i <= 0)
	strcpy((yyval.c), (yyvsp[(3) - (4)].c));
      else
	strcpy((yyval.c), &(yyvsp[(3) - (4)].c)[i+1]);
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 528:
#line 5659 "Gmsh.y"
    {
      std::string input = (yyvsp[(3) - (8)].c);
      std::string substr_old = (yyvsp[(5) - (8)].c);
      std::string substr_new = (yyvsp[(7) - (8)].c);
      std::string ret = ReplaceSubString(substr_old, substr_new, input);
      (yyval.c) = (char *)Malloc((ret.size() + 1) * sizeof(char));
      strcpy((yyval.c), ret.c_str());
      Free((yyvsp[(3) - (8)].c));
      Free((yyvsp[(5) - (8)].c));
      Free((yyvsp[(7) - (8)].c));
    ;}
    break;

  case 529:
#line 5671 "Gmsh.y"
    {
      int size = 1;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++)
        size += strlen(*(char**)List_Pointer((yyvsp[(3) - (4)].l), i)) + 1;
      (yyval.c) = (char*)Malloc(size * sizeof(char));
      (yyval.c)[0] = '\0';
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        char *s;
        List_Read((yyvsp[(3) - (4)].l), i, &s);
        strcat((yyval.c), s);
        Free(s);
        if(i != List_Nbr((yyvsp[(3) - (4)].l)) - 1) strcat((yyval.c), "\n");
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 530:
#line 5687 "Gmsh.y"
    {
      int i = 0;
      while ((yyvsp[(3) - (4)].c)[i]) {
        (yyvsp[(3) - (4)].c)[i] = toupper((yyvsp[(3) - (4)].c)[i]);
        i++;
      }
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 531:
#line 5696 "Gmsh.y"
    {
      int i = 0;
      while ((yyvsp[(3) - (4)].c)[i]) {
        (yyvsp[(3) - (4)].c)[i] = tolower((yyvsp[(3) - (4)].c)[i]);
        i++;
      }
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 532:
#line 5705 "Gmsh.y"
    {
      int i = 0;
      while ((yyvsp[(3) - (4)].c)[i]) {
        if (i > 0 && (yyvsp[(3) - (4)].c)[i-1] != '_')
          (yyvsp[(3) - (4)].c)[i] = tolower((yyvsp[(3) - (4)].c)[i]);
        i++;
      }
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 533:
#line 5715 "Gmsh.y"
    {
      if((yyvsp[(3) - (8)].d)){
        (yyval.c) = (yyvsp[(5) - (8)].c);
        Free((yyvsp[(7) - (8)].c));
      }
      else{
        (yyval.c) = (yyvsp[(7) - (8)].c);
        Free((yyvsp[(5) - (8)].c));
      }
    ;}
    break;

  case 534:
#line 5726 "Gmsh.y"
    {
      std::string in = (yyvsp[(3) - (8)].c);
      std::string out = in.substr((int)(yyvsp[(5) - (8)].d), (int)(yyvsp[(7) - (8)].d));
      (yyval.c) = (char *)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(3) - (8)].c));
    ;}
    break;

  case 535:
#line 5734 "Gmsh.y"
    {
      std::string in = (yyvsp[(3) - (6)].c);
      std::string out = in.substr((int)(yyvsp[(5) - (6)].d), std::string::npos);
      (yyval.c) = (char *)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 536:
#line 5742 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 537:
#line 5746 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = printListOfDouble((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].l), tmpstring);
      if(i < 0){
	yymsg(0, "Too few arguments in Sprintf");
	(yyval.c) = (yyvsp[(3) - (6)].c);
      }
      else if(i > 0){
	yymsg(0, "%d extra argument%s in Sprintf", i, (i > 1) ? "s" : "");
	(yyval.c) = (yyvsp[(3) - (6)].c);
      }
      else{
	(yyval.c) = (char*)Malloc((strlen(tmpstring) + 1) * sizeof(char));
	strcpy((yyval.c), tmpstring);
	Free((yyvsp[(3) - (6)].c));
      }
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 538:
#line 5765 "Gmsh.y"
    {
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 539:
#line 5772 "Gmsh.y"
    {
      std::string tmp = SplitFileName(GetAbsolutePath(gmsh_yyname))[0];
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
    ;}
    break;

  case 540:
#line 5778 "Gmsh.y"
    {
      std::string tmp = SplitFileName((yyvsp[(3) - (4)].c))[0];
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 541:
#line 5785 "Gmsh.y"
    {
      std::string tmp = GetAbsolutePath((yyvsp[(3) - (4)].c));
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 542:
#line 5792 "Gmsh.y"
    { floatOptions.clear(); charOptions.clear(); ;}
    break;

  case 543:
#line 5794 "Gmsh.y"
    {
      std::string val((yyvsp[(3) - (6)].c));
      Msg::ExchangeOnelabParameter("", val, floatOptions, charOptions);
      (yyval.c) = (char*)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 544:
#line 5802 "Gmsh.y"
    {
      std::string out;
      const std::string * key_struct = NULL;
      switch (nameSpaces.get_key_struct_from_index((int)(yyvsp[(3) - (4)].d), key_struct,
                                                   struct_namespace)) {
      case 0:
        out = *key_struct;
        break;
      case 1:
        yymsg(1, "Unknown NameSpace '%s' of Struct", struct_namespace.c_str());
        break;
      case 2:
        yymsg(1, "Unknown Struct of index %d", (int)(yyvsp[(3) - (4)].d));
        break;
      default:
        break;
      }
      (yyval.c) = (char*)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
    ;}
    break;

  case 545:
#line 5826 "Gmsh.y"
    { struct_namespace = std::string(""); (yyval.d) = (yyvsp[(2) - (2)].d); ;}
    break;

  case 546:
#line 5828 "Gmsh.y"
    { struct_namespace = (yyvsp[(1) - (4)].c); Free((yyvsp[(1) - (4)].c)); (yyval.d) = (yyvsp[(4) - (4)].d); ;}
    break;

  case 547:
#line 5834 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(char*));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].c)));
    ;}
    break;

  case 548:
#line 5839 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].c)));
    ;}
    break;

  case 549:
#line 5847 "Gmsh.y"
    {
      char tmpstr[256];
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char));
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)); strcat((yyval.c), tmpstr);
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 550:
#line 5856 "Gmsh.y"
    {
      char tmpstr[256];
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 551:
#line 5869 "Gmsh.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c); ;}
    break;

  case 552:
#line 5872 "Gmsh.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c); ;}
    break;

  case 553:
#line 5876 "Gmsh.y"
    { (yyval.c) = (yyvsp[(3) - (4)].c); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 12747 "Gmsh.tab.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 5879 "Gmsh.y"


void assignVariable(const std::string &name, int index, int assignType,
                    double value)
{
  if(!gmsh_yysymbols.count(name)){
    if(!assignType){
      gmsh_yysymbol &s(gmsh_yysymbols[name]);
      s.list = true;
      s.value.resize(index + 1, 0.);
      s.value[index] = value;
    }
    else
      yymsg(0, "Unknown variable '%s'", name.c_str());
  }
  else{
    gmsh_yysymbol &s(gmsh_yysymbols[name]);
    if(s.list){
      if((int)s.value.size() < index + 1) s.value.resize(index + 1, 0.);
      switch(assignType){
      case 0 : s.value[index] = value; break;
      case 1 : s.value[index] += value; break;
      case 2 : s.value[index] -= value; break;
      case 3 : s.value[index] *= value; break;
      case 4 :
        if(value) s.value[index] /= value;
        else yymsg(0, "Division by zero in '%s[%d] /= %g'",
                   name.c_str(), index, value);
        break;
      }
    }
    else
      yymsg(0, "Variable '%s' is not a list", name.c_str());
  }
}

void assignVariables(const std::string &name, List_T *indices, int assignType,
                     List_T *values)
{
  if(List_Nbr(indices) != List_Nbr(values)){
    yymsg(0, "Incompatible array dimensions in affectation");
  }
  else{
    if(!gmsh_yysymbols.count(name)){
      if(!assignType){
        gmsh_yysymbol &s(gmsh_yysymbols[name]);
        s.list = true;
        for(int i = 0; i < List_Nbr(indices); i++){
          int index = (int)(*(double*)List_Pointer(indices, i));
          s.value.resize(index + 1, 0.);
          s.value[index] = *(double*)List_Pointer(values, i);
        }
      }
      else
        yymsg(0, "Unknown variable '%s'", name.c_str());
    }
    else{
      gmsh_yysymbol &s(gmsh_yysymbols[name]);
      if(s.list){
        for(int i = 0; i < List_Nbr(indices); i++){
          int index = (int)(*(double*)List_Pointer(indices, i));
          double d = *(double*)List_Pointer(values, i);
          if((int)s.value.size() < index + 1) s.value.resize(index + 1, 0.);
          switch(assignType){
          case 0 : s.value[index] = d; break;
          case 1 : s.value[index] += d; break;
          case 2 : s.value[index] -= d; break;
          case 3 : s.value[index] *= d; break;
          case 4 :
            if(d) s.value[index] /= d;
            else yymsg(0, "Division by zero in '%s[%d] /= %g'", name.c_str(), index, d);
            break;
          }
        }
      }
      else
        yymsg(0, "Variable '%s' is not a list", name.c_str());
    }
  }
}

void incrementVariable(const std::string &name, int index, double value)
{
  if(!gmsh_yysymbols.count(name))
    yymsg(0, "Unknown variable '%s'", name.c_str());
  else{
    gmsh_yysymbol &s(gmsh_yysymbols[name]);
    if(s.list){
      if((int)s.value.size() < index + 1) s.value.resize(index + 1, 0.);
      s.value[index] += value;
    }
    else
      yymsg(0, "Variable '%s' is not a list", name.c_str());
  }
}

int printListOfDouble(char *format, List_T *list, char *buffer)
{
  // if format does not contain formatting characters, dump the list (useful for
  // quick debugging of lists)
  int numFormats = 0;
  for(unsigned int i = 0; i < strlen(format); i++)
    if(format[i] == '%') numFormats++;
  if(!numFormats){
    strcpy(buffer, format);
    for(int i = 0; i < List_Nbr(list); i++){
      double d;
      List_Read(list, i, &d);
      char tmp[256];
      sprintf(tmp, " [%d]%g", i, d);
      strcat(buffer, tmp);
    }
    return 0;
  }

  char tmp1[256], tmp2[256];
  int j = 0, k = 0;
  buffer[j] = '\0';

  while(j < (int)strlen(format) && format[j] != '%') j++;
  strncpy(buffer, format, j);
  buffer[j] = '\0';
  for(int i = 0; i < List_Nbr(list); i++){
    k = j;
    j++;
    if(j < (int)strlen(format)){
      if(format[j] == '%'){
	strcat(buffer, "%");
	j++;
      }
      while(j < (int)strlen(format) && format[j] != '%') j++;
      if(k != j){
	strncpy(tmp1, &(format[k]), j-k);
	tmp1[j-k] = '\0';
	sprintf(tmp2, tmp1, *(double*)List_Pointer(list, i));
	strcat(buffer, tmp2);
      }
    }
    else
      return List_Nbr(list) - i;
  }
  if(j != (int)strlen(format))
    return -1;
  return 0;
}

void PrintParserSymbols(bool help, std::vector<std::string> &vec)
{
  if(help){
    vec.push_back("//");
    vec.push_back("// Numbers");
    vec.push_back("//");
  }
  for(std::map<std::string, gmsh_yysymbol>::iterator it = gmsh_yysymbols.begin();
      it != gmsh_yysymbols.end(); it++){
    gmsh_yysymbol s(it->second);
    std::ostringstream sstream;
    sstream.precision(12);
    sstream << it->first;
    if(s.list){
      sstream << "[] = {";
      for(unsigned int i = 0; i < s.value.size(); i++){
        if(i) sstream << ", ";
        sstream << s.value[i];
      }
      sstream << "}";
    }
    else
      sstream << " = " << s.value[0];
    sstream << ";";
    vec.push_back(sstream.str());
  }
  if(help){
    vec.push_back("//");
    vec.push_back("// Strings");
    vec.push_back("//");
  }
  for(std::map<std::string, std::vector<std::string> >::iterator it =
        gmsh_yystringsymbols.begin(); it != gmsh_yystringsymbols.end(); it++){
    if(it->second.size() == 1)
      vec.push_back(it->first + " = \"" + it->second[0] + "\";");
    else{
      std::string s = it->first + "[] = Str(";
      for(unsigned int i = 0; i < it->second.size(); i++){
        if(i) s += ", ";
        s += std::string("\"") + it->second[i] + "\"";
      }
      s += ");";
      vec.push_back(s);
    }
  }
}

fullMatrix<double> ListOfListOfDouble2Matrix(List_T *list)
{
  // Warning: this returns a fullMatrix copy, and deletes the input list
  int M = List_Nbr(list);
  int N = 0;
  for(int i = 0; i < M; i++){
    List_T *line = *(List_T**)List_Pointer_Fast(list, i);
    N = std::max(N, List_Nbr(line));
  }
  fullMatrix<double> mat(M, N);
  for(int i = 0; i < M; i++){
    List_T *line = *(List_T**)List_Pointer_Fast(list, i);
    for(int j = 0; j < List_Nbr(line); j++){
      double val;
      List_Read(line, j, &val);
      mat(i, j) = val;
    }
  }
  for(int i = 0; i < List_Nbr(list); i++)
    List_Delete(*(List_T**)List_Pointer(list, i));
  List_Delete(list);
  return mat;
}

void ListOfDouble2Vector(List_T *list, std::vector<int> &v)
{
  v.clear();
  if(!list) return;
  v.reserve(List_Nbr(list));
  for(int i = 0; i < List_Nbr(list); i++){
    double d;
    List_Read(list, i, &d);
    v.push_back((int)d);
  }
}

void ListOfDouble2Vector(List_T *list, std::vector<double> &v)
{
  v.clear();
  if(!list) return;
  v.reserve(List_Nbr(list));
  for(int i = 0; i < List_Nbr(list); i++){
    double d;
    List_Read(list, i, &d);
    v.push_back(d);
  }
}

void ListOfShapes2Vectors(List_T *list, std::vector<int> v[4])
{
  Shape s;
  for(int i = 0; i < List_Nbr(list); i++){
    List_Read(list, i, &s);
    int dim = s.Type / 100 - 1;
    if(dim >= 0 && dim <= 3) v[dim].push_back(s.Num);
  }
}

void Vectors2ListOfShapes(std::vector<int> tags[4], List_T *list)
{
  for(int dim = 0; dim < 4; dim++){
    Shape s;
    s.Type =
      (dim == 3) ? MSH_VOLUME :
      (dim == 2) ? MSH_SURF_PLAN :
      (dim == 1) ? MSH_SEGM_LINE :
      MSH_POINT;
    for(unsigned int i = 0; i < tags[dim].size(); i++){
      s.Num = tags[dim][i];
      List_Add(list, &s);
    }
  }
}

void yyerror(const char *s)
{
  Msg::Error("'%s', line %d : %s (%s)", gmsh_yyname.c_str(), gmsh_yylineno - 1,
             s, gmsh_yytext);
  gmsh_yyerrorstate++;
}

void yymsg(int level, const char *fmt, ...)
{
  va_list args;
  char tmp[1024];

  va_start(args, fmt);
  vsprintf(tmp, fmt, args);
  va_end(args);

  if(level == 0){
    Msg::Error("'%s', line %d : %s", gmsh_yyname.c_str(), gmsh_yylineno - 1, tmp);
    gmsh_yyerrorstate++;
  }
  else if(level == 1){
    Msg::Warning("'%s', line %d : %s", gmsh_yyname.c_str(), gmsh_yylineno - 1, tmp);
  }
  else{
    Msg::Info("'%s', line %d : %s", gmsh_yyname.c_str(), gmsh_yylineno - 1, tmp);
  }
}

void addPeriodicFace(int iTarget, int iSource,
                     const std::vector<double>& affineTransform)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  GFace *target = GModel::current()->getFaceByTag(abs(iTarget));
  GFace *source = GModel::current()->getFaceByTag(abs(iSource));
  if (!target || !source) {
    Msg::Error("Could not find edge slave %d or master %d for periodic copy",
               iTarget, iSource);
  }
  else target->setMeshMaster(source, affineTransform);
}

void addPeriodicFace(int iTarget, int iSource,
                     const std::map<int,int>& edgeCounterparts)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  Msg::Info("Encoding periodic connection between %d and %d", iTarget, iSource);
  std::map<int,int>::const_iterator sIter = edgeCounterparts.begin();
  for (; sIter != edgeCounterparts.end(); ++sIter) {
    Msg::Info("%d - %d", sIter->first, sIter->second);
  }

  GFace *target = GModel::current()->getFaceByTag(abs(iTarget));
  GFace *source = GModel::current()->getFaceByTag(abs(iSource));
  if (!target || !source) {
    Msg::Error("Could not find surface slave %d or master %d for periodic copy",
               iTarget,iSource);
  }
  else target->setMeshMaster(source, edgeCounterparts);
}

void addPeriodicEdge(int iTarget,int iSource,
                     const std::vector<double>& affineTransform)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  GEdge *target = GModel::current()->getEdgeByTag(abs(iTarget));
  GEdge *source = GModel::current()->getEdgeByTag(abs(iSource));
  if (!target || !source)
    Msg::Error("Could not find surface %d or %d for periodic copy",
               iTarget,iSource);
  if (affineTransform.size() >= 12) {
    target->setMeshMaster(source, affineTransform);
  }
  else {
    target->setMeshMaster(source, iSource * iTarget < 0 ? -1 : 1);
  }
}

void computeAffineTransformation(SPoint3& origin, SPoint3& axis,
                                 double angle, SPoint3& translation,
                                 std::vector<double>& tfo)
{
  tfo.resize(16,0.0);

  double ca = cos(angle);
  double sa = sin(angle);

  double ux = axis.x();
  double uy = axis.y();
  double uz = axis.z();

  tfo.resize(16);

  tfo[0*4+0] = ca + ux*ux*(1.-ca);
  tfo[0*4+1] = ux*uy*(1.-ca) - uz * sa;
  tfo[0*4+2] = ux*uz*(1.-ca) + uy * sa;

  tfo[1*4+0] = ux*uy*(1.-ca) + uz * sa;
  tfo[1*4+1] = ca + uy*uy*(1.-ca);
  tfo[1*4+2] = uy*uz*(1.-ca) - ux * sa;

  tfo[2*4+0] = ux*uz*(1.-ca) - uy * sa;
  tfo[2*4+1] = uy*uz*(1.-ca) + ux * sa;
  tfo[2*4+2] = ca + uz*uz*(1.-ca);

  int idx = 0;
  for (size_t i = 0; i < 3; i++,idx++) {
    int tIdx = i*4+3;
    tfo[tIdx] = origin[i] + translation[i];
    for (int j = 0; j < 3; j++,idx++) tfo[tIdx] -= tfo[idx] * origin[j];
  }

  for (int i = 0; i < 4; i++) tfo[12+i] = 0;
  tfo[15] = 1;
}

void addEmbedded(int dim, std::vector<int> tags, int dim2, int tag2)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  if(dim2 == 2){
    GFace *gf = GModel::current()->getFaceByTag(tag2);
    if(!gf){
      yymsg(0, "Unknown model face with tag %d", tag2);
      return;
    }
    for(unsigned int i = 0; i < tags.size(); i++){
      if(dim == 0){
        GVertex *gv = GModel::current()->getVertexByTag(tags[i]);
        if(gv)
          gf->addEmbeddedVertex(gv);
        else
          yymsg(0, "Unknown model vertex %d", tags[i]);
      }
      else if(dim == 1){
        GEdge *ge = GModel::current()->getEdgeByTag(tags[i]);
        if(ge)
          gf->addEmbeddedEdge(ge);
        else
          yymsg(0, "Unknown model edge %d", tags[i]);
      }
    }
  }
  else if(dim2 == 3){
    GRegion *gr = GModel::current()->getRegionByTag(tag2);
    if(!gr){
      yymsg(0, "Unknown model region with tag %d", tag2);
      return;
    }
    for(unsigned int i = 0; i < tags.size(); i++){
      if(dim == 0){
        GVertex *gv = GModel::current()->getVertexByTag(tags[i]);
        if(gv)
          gr->addEmbeddedVertex(gv);
        else
          yymsg(0, "Unknown model vertex with tag %d", tags[i]);
      }
      else if(dim == 1){
        GEdge *ge = GModel::current()->getEdgeByTag(tags[i]);
        if(ge)
          gr->addEmbeddedEdge(ge);
        else
          yymsg(0, "Unknown model edge with tag %d", tags[i]);
      }
      else if(dim == 2){
        GFace *gf = GModel::current()->getFaceByTag(tags[i]);
        if(gf)
          gr->addEmbeddedFace(gf);
        else
          yymsg(0, "Unknown model face with tag %d", tags[i]);
      }
    }
  }
}

void getAllElementaryTags(int dim, List_T *out)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  std::vector<GEntity*> entities;
  GModel::current()->getEntities(entities, dim);
  for(unsigned int i = 0; i < entities.size(); i++){
    double tag = entities[i]->tag();
    List_Add(out, &tag);
  }
}

void getAllPhysicalTags(int dim, List_T *out)
{
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  std::map<int, std::vector<GEntity*> > groups;
  GModel::current()->getPhysicalGroups(dim, groups);
  for(std::map<int, std::vector<GEntity*> >::iterator it = groups.begin();
      it != groups.end(); it++){
    double d = it->first;
    List_Add(out, &d);
  }
}

void getElementaryTagsForPhysicalGroups(int dim, List_T *in, List_T *out)
{
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  std::map<int, std::vector<GEntity*> > groups;
  GModel::current()->getPhysicalGroups(dim, groups);
  for(int i = 0; i < List_Nbr(in); i++){
    double num;
    List_Read(in, i, &num);
    std::map<int, std::vector<GEntity*> >::iterator it = groups.find(num);
    if(it != groups.end()){
      for(unsigned j = 0; j < it->second.size(); j++){
        double d = it->second[j]->tag();
        List_Add(out, &d);
      }
    }
  }
}

void getElementaryTagsInBoundingBox(int dim, double x1, double y1, double z1,
                                    double x2, double y2, double z2, List_T *out)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  SBoundingBox3d box(x1, y1, z1, x2, y2, z2);
  std::vector<GEntity*> entities;
  GModel::current()->getEntitiesInBox(entities, box, dim);
  for(unsigned int i = 0; i < entities.size(); i++){
    double d = entities[i]->tag();
    List_Add(out, &d);
  }
}

void setVisibility(int dim, int visible, bool recursive)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  std::vector<GEntity*> entities;
  GModel::current()->getEntities(entities, dim);
  for(unsigned int i = 0; i < entities.size(); i++){
    entities[i]->setVisibility(visible);
  }
}

void setVisibility(std::vector<int> tags[4], int visible, bool recursive)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  for(int dim = 0; dim < 4; dim++){
    for(unsigned int i = 0; i < tags[dim].size(); i++){
      GEntity *ge = GModel::current()->getEntityByTag(dim, std::abs(tags[dim][i]));
      if(ge) ge->setVisibility(visible, recursive);
    }
  }
}

void setColor(std::vector<int> tags[4], unsigned int val, bool recursive)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  for(int dim = 0; dim < 4; dim++){
    for(unsigned int i = 0; i < tags[dim].size(); i++){
      GEntity *ge = GModel::current()->getEntityByTag(dim, std::abs(tags[dim][i]));
      if(ge) ge->setColor(val, recursive);
    }
  }
}

int NEWPOINT()
{
  int tag = GModel::current()->getGEOInternals()->getMaxTag(0) + 1;
  if(GModel::current()->getOCCInternals())
    tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(0) + 1);
  return tag;
}

int NEWLINE()
{
  int tag = 0;
  if(CTX::instance()->geom.oldNewreg)
    tag = NEWREG();
  else
    tag = GModel::current()->getGEOInternals()->getMaxTag(1) + 1;
  if(GModel::current()->getOCCInternals())
    tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(1) + 1);
  return tag;
}

int NEWLINELOOP()
{
  int tag = 0;
  if(CTX::instance()->geom.oldNewreg)
    tag = NEWREG();
  else
    tag = GModel::current()->getGEOInternals()->getMaxTag(-1) + 1;
  if(GModel::current()->getOCCInternals())
    tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(-1) + 1);
  return tag;
}

int NEWSURFACE()
{
  int tag = 0;
  if(CTX::instance()->geom.oldNewreg)
    tag = NEWREG();
  else
    tag = GModel::current()->getGEOInternals()->getMaxTag(2) + 1;
  if(GModel::current()->getOCCInternals())
    tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(2) + 1);
  return tag;
}

int NEWSURFACELOOP()
{
  int tag = 0;
  if(CTX::instance()->geom.oldNewreg)
    tag = NEWREG();
  else
    tag = GModel::current()->getGEOInternals()->getMaxTag(-2) + 1;
  if(GModel::current()->getOCCInternals())
    tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(-2) + 1);
  return tag;
}

int NEWVOLUME()
{
  int tag = 0;
  if(CTX::instance()->geom.oldNewreg)
    tag = NEWREG();
  else
    tag = GModel::current()->getGEOInternals()->getMaxTag(3) + 1;
  if(GModel::current()->getOCCInternals())
    tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(3) + 1);
  return tag;
}

int NEWREG()
{
  int tag = 0;
  for(int dim = -2; dim <= 3; dim++){
    if(dim)
      tag = std::max(tag, GModel::current()->getGEOInternals()->getMaxTag(dim) + 1);
  }
  tag = std::max(tag, GModel::current()->getGEOInternals()->getMaxPhysicalTag() + 1);
  if(GModel::current()->getOCCInternals()){
    for(int dim = -2; dim <= 3; dim++){
      if(dim)
        tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(dim) + 1);
    }
  }
  return tag;
}

int NEWFIELD()
{
#if defined(HAVE_MESH)
  return (GModel::current()->getFields()->maxId() + 1);
#else
  return 0;
#endif
}

int NEWPHYSICAL()
{
  if(CTX::instance()->geom.oldNewreg)
    return NEWREG();
  else
    return (GModel::current()->getGEOInternals()->getMaxPhysicalTag() + 1);
}


double treat_Struct_FullName_dot_tSTRING_Float(char* c1, char* c2, char* c3) {
  double out;
  std::string struct_namespace(c1? c1 : std::string("")),
    struct_name(c2);
  /*
  std::string struct_namespace($1.char1? $1.char1 : std::string("")),
    struct_name($1.char2);
  */
  if(nameSpaces.count(struct_namespace) &&
     nameSpaces[struct_namespace].count(struct_name)) {
    std::string key2(c3);
    if(nameSpaces[struct_namespace][struct_name]._fopt.count(key2)) {
      out = nameSpaces[struct_namespace][struct_name]._fopt[key2][0];
    }
    else {
      yymsg(0, "Unknown member '%s' of Struct %s", c3, struct_name.c_str());
      out = 0.;
    }
  }
  else  {
    NumberOption(GMSH_GET, c2, 0, c3, out);
  }
  Free(c1); Free(c2);
  if (flag_tSTRING_alloc) Free(c3);
  return out;
}


char* treat_Struct_FullName_dot_tSTRING_String(char* c1, char* c2, char* c3) {
  std::string out;
  std::string struct_namespace(c1? c1 : std::string("")),
    struct_name(c2);
  /*
  std::string struct_namespace($1.char1? $1.char1 : std::string("")),
    struct_name($1.char2);
  */
  if(nameSpaces.count(struct_namespace) &&
     nameSpaces[struct_namespace].count(struct_name)) {
    std::string key2(c3);
    if(nameSpaces[struct_namespace][struct_name]._copt.count(key2)) {
      out = nameSpaces[struct_namespace][struct_name]._copt[key2][0];
    }
    else {
      yymsg(0, "Unknown member '%s' of Struct %s", c3, struct_name.c_str());
    }
  }
  else  {
    StringOption(GMSH_GET, c2, 0, c3, out);
  }
  char* out_c = (char*)Malloc((out.size() + 1) * sizeof(char));
  strcpy(out_c, out.c_str());
  Free(c1); Free(c2);
  if (flag_tSTRING_alloc) Free(c3);
  return out_c;
}

