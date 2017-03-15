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
     tAbs = 287,
     tFloor = 288,
     tCeil = 289,
     tRound = 290,
     tFmod = 291,
     tModulo = 292,
     tHypot = 293,
     tList = 294,
     tLinSpace = 295,
     tLogSpace = 296,
     tListFromFile = 297,
     tCatenary = 298,
     tPrintf = 299,
     tError = 300,
     tStr = 301,
     tSprintf = 302,
     tStrCat = 303,
     tStrPrefix = 304,
     tStrRelative = 305,
     tStrReplace = 306,
     tAbsolutePath = 307,
     tDirName = 308,
     tStrSub = 309,
     tStrLen = 310,
     tFind = 311,
     tStrFind = 312,
     tStrCmp = 313,
     tStrChoice = 314,
     tUpperCase = 315,
     tLowerCase = 316,
     tLowerCaseIn = 317,
     tTextAttributes = 318,
     tBoundingBox = 319,
     tDraw = 320,
     tSetChanged = 321,
     tToday = 322,
     tFixRelativePath = 323,
     tCurrentDirectory = 324,
     tSyncModel = 325,
     tNewModel = 326,
     tOnelabAction = 327,
     tOnelabRun = 328,
     tCodeName = 329,
     tCpu = 330,
     tMemory = 331,
     tTotalMemory = 332,
     tCreateTopology = 333,
     tCreateTopologyNoHoles = 334,
     tDistanceFunction = 335,
     tDefineConstant = 336,
     tUndefineConstant = 337,
     tDefineNumber = 338,
     tDefineStruct = 339,
     tNameStruct = 340,
     tAppend = 341,
     tDefineString = 342,
     tSetNumber = 343,
     tSetString = 344,
     tPoint = 345,
     tCircle = 346,
     tEllipse = 347,
     tLine = 348,
     tSphere = 349,
     tPolarSphere = 350,
     tSurface = 351,
     tSpline = 352,
     tVolume = 353,
     tBlock = 354,
     tCylinder = 355,
     tCone = 356,
     tTorus = 357,
     tEllipsoid = 358,
     tQuadric = 359,
     tShapeFromFile = 360,
     tRectangle = 361,
     tDisk = 362,
     tWire = 363,
     tCharacteristic = 364,
     tLength = 365,
     tParametric = 366,
     tElliptic = 367,
     tRefineMesh = 368,
     tAdaptMesh = 369,
     tRelocateMesh = 370,
     tSetFactory = 371,
     tThruSections = 372,
     tWedge = 373,
     tFillet = 374,
     tChamfer = 375,
     tPlane = 376,
     tRuled = 377,
     tTransfinite = 378,
     tPhysical = 379,
     tCompound = 380,
     tPeriodic = 381,
     tUsing = 382,
     tPlugin = 383,
     tDegenerated = 384,
     tRecursive = 385,
     tRotate = 386,
     tTranslate = 387,
     tSymmetry = 388,
     tDilate = 389,
     tExtrude = 390,
     tLevelset = 391,
     tAffine = 392,
     tBooleanUnion = 393,
     tBooleanIntersection = 394,
     tBooleanDifference = 395,
     tBooleanSection = 396,
     tBooleanFragments = 397,
     tThickSolid = 398,
     tRecombine = 399,
     tSmoother = 400,
     tSplit = 401,
     tDelete = 402,
     tCoherence = 403,
     tIntersect = 404,
     tMeshAlgorithm = 405,
     tReverse = 406,
     tLayers = 407,
     tScaleLast = 408,
     tHole = 409,
     tAlias = 410,
     tAliasWithOptions = 411,
     tCopyOptions = 412,
     tQuadTriAddVerts = 413,
     tQuadTriNoNewVerts = 414,
     tRecombLaterals = 415,
     tTransfQuadTri = 416,
     tText2D = 417,
     tText3D = 418,
     tInterpolationScheme = 419,
     tTime = 420,
     tCombine = 421,
     tBSpline = 422,
     tBezier = 423,
     tNurbs = 424,
     tNurbsOrder = 425,
     tNurbsKnots = 426,
     tColor = 427,
     tColorTable = 428,
     tFor = 429,
     tIn = 430,
     tEndFor = 431,
     tIf = 432,
     tElseIf = 433,
     tElse = 434,
     tEndIf = 435,
     tExit = 436,
     tAbort = 437,
     tField = 438,
     tReturn = 439,
     tCall = 440,
     tSlide = 441,
     tMacro = 442,
     tShow = 443,
     tHide = 444,
     tGetValue = 445,
     tGetStringValue = 446,
     tGetEnv = 447,
     tGetString = 448,
     tGetNumber = 449,
     tUnique = 450,
     tHomology = 451,
     tCohomology = 452,
     tBetti = 453,
     tExists = 454,
     tFileExists = 455,
     tGetForced = 456,
     tGetForcedStr = 457,
     tGMSH_MAJOR_VERSION = 458,
     tGMSH_MINOR_VERSION = 459,
     tGMSH_PATCH_VERSION = 460,
     tGmshExecutableName = 461,
     tSetPartition = 462,
     tNameToString = 463,
     tStringToName = 464,
     tAFFECTDIVIDE = 465,
     tAFFECTTIMES = 466,
     tAFFECTMINUS = 467,
     tAFFECTPLUS = 468,
     tOR = 469,
     tAND = 470,
     tNOTEQUAL = 471,
     tEQUAL = 472,
     tGREATEROREQUAL = 473,
     tLESSOREQUAL = 474,
     UNARYPREC = 475,
     tMINUSMINUS = 476,
     tPLUSPLUS = 477
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
#define tAbs 287
#define tFloor 288
#define tCeil 289
#define tRound 290
#define tFmod 291
#define tModulo 292
#define tHypot 293
#define tList 294
#define tLinSpace 295
#define tLogSpace 296
#define tListFromFile 297
#define tCatenary 298
#define tPrintf 299
#define tError 300
#define tStr 301
#define tSprintf 302
#define tStrCat 303
#define tStrPrefix 304
#define tStrRelative 305
#define tStrReplace 306
#define tAbsolutePath 307
#define tDirName 308
#define tStrSub 309
#define tStrLen 310
#define tFind 311
#define tStrFind 312
#define tStrCmp 313
#define tStrChoice 314
#define tUpperCase 315
#define tLowerCase 316
#define tLowerCaseIn 317
#define tTextAttributes 318
#define tBoundingBox 319
#define tDraw 320
#define tSetChanged 321
#define tToday 322
#define tFixRelativePath 323
#define tCurrentDirectory 324
#define tSyncModel 325
#define tNewModel 326
#define tOnelabAction 327
#define tOnelabRun 328
#define tCodeName 329
#define tCpu 330
#define tMemory 331
#define tTotalMemory 332
#define tCreateTopology 333
#define tCreateTopologyNoHoles 334
#define tDistanceFunction 335
#define tDefineConstant 336
#define tUndefineConstant 337
#define tDefineNumber 338
#define tDefineStruct 339
#define tNameStruct 340
#define tAppend 341
#define tDefineString 342
#define tSetNumber 343
#define tSetString 344
#define tPoint 345
#define tCircle 346
#define tEllipse 347
#define tLine 348
#define tSphere 349
#define tPolarSphere 350
#define tSurface 351
#define tSpline 352
#define tVolume 353
#define tBlock 354
#define tCylinder 355
#define tCone 356
#define tTorus 357
#define tEllipsoid 358
#define tQuadric 359
#define tShapeFromFile 360
#define tRectangle 361
#define tDisk 362
#define tWire 363
#define tCharacteristic 364
#define tLength 365
#define tParametric 366
#define tElliptic 367
#define tRefineMesh 368
#define tAdaptMesh 369
#define tRelocateMesh 370
#define tSetFactory 371
#define tThruSections 372
#define tWedge 373
#define tFillet 374
#define tChamfer 375
#define tPlane 376
#define tRuled 377
#define tTransfinite 378
#define tPhysical 379
#define tCompound 380
#define tPeriodic 381
#define tUsing 382
#define tPlugin 383
#define tDegenerated 384
#define tRecursive 385
#define tRotate 386
#define tTranslate 387
#define tSymmetry 388
#define tDilate 389
#define tExtrude 390
#define tLevelset 391
#define tAffine 392
#define tBooleanUnion 393
#define tBooleanIntersection 394
#define tBooleanDifference 395
#define tBooleanSection 396
#define tBooleanFragments 397
#define tThickSolid 398
#define tRecombine 399
#define tSmoother 400
#define tSplit 401
#define tDelete 402
#define tCoherence 403
#define tIntersect 404
#define tMeshAlgorithm 405
#define tReverse 406
#define tLayers 407
#define tScaleLast 408
#define tHole 409
#define tAlias 410
#define tAliasWithOptions 411
#define tCopyOptions 412
#define tQuadTriAddVerts 413
#define tQuadTriNoNewVerts 414
#define tRecombLaterals 415
#define tTransfQuadTri 416
#define tText2D 417
#define tText3D 418
#define tInterpolationScheme 419
#define tTime 420
#define tCombine 421
#define tBSpline 422
#define tBezier 423
#define tNurbs 424
#define tNurbsOrder 425
#define tNurbsKnots 426
#define tColor 427
#define tColorTable 428
#define tFor 429
#define tIn 430
#define tEndFor 431
#define tIf 432
#define tElseIf 433
#define tElse 434
#define tEndIf 435
#define tExit 436
#define tAbort 437
#define tField 438
#define tReturn 439
#define tCall 440
#define tSlide 441
#define tMacro 442
#define tShow 443
#define tHide 444
#define tGetValue 445
#define tGetStringValue 446
#define tGetEnv 447
#define tGetString 448
#define tGetNumber 449
#define tUnique 450
#define tHomology 451
#define tCohomology 452
#define tBetti 453
#define tExists 454
#define tFileExists 455
#define tGetForced 456
#define tGetForcedStr 457
#define tGMSH_MAJOR_VERSION 458
#define tGMSH_MINOR_VERSION 459
#define tGMSH_PATCH_VERSION 460
#define tGmshExecutableName 461
#define tSetPartition 462
#define tNameToString 463
#define tStringToName 464
#define tAFFECTDIVIDE 465
#define tAFFECTTIMES 466
#define tAFFECTMINUS 467
#define tAFFECTPLUS 468
#define tOR 469
#define tAND 470
#define tNOTEQUAL 471
#define tEQUAL 472
#define tGREATEROREQUAL 473
#define tLESSOREQUAL 474
#define UNARYPREC 475
#define tMINUSMINUS 476
#define tPLUSPLUS 477




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
NameSpaces nameSpaces;

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
static std::string factory;
static std::string struct_name, struct_namespace;
static int flag_tSTRING_alloc = 0;

static std::map<std::string, std::vector<double> > floatOptions;
static std::map<std::string, std::vector<std::string> > charOptions;
static int flag_Enum, member_ValMax;

void init_options(int member_ValMax_ = 0)
{
  floatOptions.clear(); charOptions.clear();
  flag_Enum = 0; member_ValMax = member_ValMax_;
}

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
void ListOfShapes2VectorOfPairs(List_T *list, std::vector<std::pair<int, int> > &v);
void VectorOfPairs2ListOfShapes(const std::vector<std::pair<int, int> > &v, List_T *list);
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
void setVisibility(const std::vector<std::pair<int, int> > &dimTags, int visible,
                   bool recursive);
void setColor(const std::vector<std::pair<int, int> > &dimTags, unsigned int val,
              bool recursive);

double treat_Struct_FullName_Float
  (char* c1, char* c2, double val_default = 0., int type_treat = 0);
double treat_Struct_FullName_dot_tSTRING_Float
  (char* c1, char* c2, char* c3, double val_default = 0., int type_treat = 0);
char* treat_Struct_FullName_String
  (char* c1, char* c2, char* val_default = NULL, int type_treat = 0);
char* treat_Struct_FullName_dot_tSTRING_String
  (char* c1, char* c2, char* c3, char* val_default = NULL, int type_treat = 0);

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
#line 153 "Gmsh.y"
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
#line 711 "Gmsh.tab.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 724 "Gmsh.tab.cpp"

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
#define YYLAST   13762

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  243
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  107
/* YYNRULES -- Number of rules.  */
#define YYNRULES  579
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2117

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   477

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   228,     2,   240,     2,   227,     2,     2,
     233,   234,   225,   223,   242,   224,   239,   226,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     219,     2,   220,   214,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   235,     2,   236,   232,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   237,     2,   238,   241,     2,     2,     2,
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
     205,   206,   207,   208,   209,   210,   211,   212,   213,   215,
     216,   217,   218,   221,   222,   229,   230,   231
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
     603,   613,   614,   618,   622,   628,   634,   635,   638,   639,
     641,   643,   647,   650,   652,   657,   660,   661,   664,   666,
     670,   673,   676,   679,   684,   686,   688,   692,   694,   696,
     700,   702,   704,   708,   710,   712,   716,   717,   723,   724,
     727,   735,   743,   751,   760,   769,   777,   785,   797,   806,
     814,   823,   832,   841,   851,   855,   860,   871,   879,   887,
     895,   903,   911,   919,   927,   935,   943,   951,   960,   973,
     982,   990,   998,  1007,  1016,  1025,  1034,  1043,  1052,  1058,
    1070,  1076,  1086,  1096,  1101,  1111,  1121,  1123,  1125,  1126,
    1129,  1136,  1143,  1150,  1157,  1166,  1177,  1192,  1209,  1222,
    1237,  1252,  1267,  1282,  1291,  1300,  1307,  1312,  1318,  1325,
    1332,  1336,  1341,  1345,  1351,  1358,  1364,  1368,  1372,  1377,
    1383,  1388,  1394,  1398,  1404,  1412,  1420,  1424,  1432,  1436,
    1439,  1442,  1445,  1448,  1451,  1467,  1470,  1473,  1476,  1479,
    1482,  1499,  1511,  1518,  1527,  1536,  1547,  1549,  1552,  1555,
    1557,  1561,  1565,  1570,  1575,  1577,  1579,  1585,  1597,  1611,
    1612,  1620,  1621,  1635,  1636,  1652,  1653,  1660,  1670,  1673,
    1677,  1688,  1690,  1693,  1699,  1707,  1710,  1713,  1717,  1720,
    1724,  1727,  1731,  1741,  1748,  1750,  1752,  1754,  1756,  1758,
    1759,  1762,  1766,  1770,  1775,  1785,  1790,  1805,  1806,  1810,
    1811,  1813,  1814,  1817,  1818,  1821,  1822,  1825,  1832,  1840,
    1847,  1853,  1857,  1866,  1872,  1877,  1884,  1896,  1908,  1927,
    1946,  1959,  1972,  1985,  1996,  2007,  2018,  2029,  2040,  2045,
    2050,  2055,  2060,  2065,  2070,  2075,  2080,  2085,  2088,  2092,
    2099,  2101,  2103,  2105,  2108,  2114,  2122,  2133,  2135,  2139,
    2142,  2145,  2148,  2152,  2156,  2160,  2164,  2168,  2172,  2176,
    2180,  2184,  2188,  2192,  2196,  2200,  2204,  2210,  2215,  2220,
    2225,  2230,  2235,  2240,  2245,  2250,  2255,  2260,  2267,  2272,
    2277,  2282,  2287,  2292,  2297,  2302,  2307,  2314,  2321,  2328,
    2333,  2335,  2337,  2339,  2341,  2343,  2345,  2347,  2349,  2351,
    2353,  2355,  2356,  2363,  2365,  2370,  2377,  2379,  2384,  2389,
    2394,  2401,  2407,  2415,  2420,  2425,  2429,  2432,  2435,  2441,
    2447,  2451,  2457,  2464,  2469,  2477,  2484,  2491,  2498,  2503,
    2510,  2515,  2516,  2519,  2520,  2523,  2524,  2532,  2534,  2538,
    2540,  2542,  2545,  2546,  2550,  2552,  2555,  2558,  2562,  2566,
    2578,  2588,  2596,  2604,  2606,  2610,  2612,  2614,  2617,  2621,
    2626,  2632,  2634,  2636,  2639,  2643,  2647,  2653,  2658,  2661,
    2664,  2667,  2670,  2674,  2678,  2682,  2686,  2703,  2720,  2737,
    2754,  2756,  2758,  2760,  2764,  2769,  2774,  2779,  2786,  2793,
    2802,  2811,  2816,  2831,  2836,  2841,  2843,  2845,  2849,  2853,
    2863,  2871,  2873,  2879,  2883,  2890,  2892,  2896,  2898,  2900,
    2905,  2910,  2914,  2920,  2927,  2933,  2939,  2945,  2951,  2953,
    2958,  2960,  2962,  2964,  2966,  2971,  2978,  2983,  2990,  2996,
    3004,  3009,  3014,  3019,  3028,  3033,  3038,  3043,  3048,  3057,
    3066,  3073,  3078,  3085,  3090,  3092,  3097,  3102,  3103,  3110,
    3115,  3118,  3123,  3125,  3129,  3135,  3141,  3150,  3152,  3154
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     244,     0,    -1,   245,    -1,     1,     6,    -1,    -1,   245,
     246,    -1,   248,    -1,   249,    -1,   269,    -1,   116,   233,
     343,   234,     6,    -1,   290,    -1,   291,    -1,   295,    -1,
     296,    -1,   297,    -1,   298,    -1,   302,    -1,   311,    -1,
     312,    -1,   318,    -1,   319,    -1,   301,    -1,   300,    -1,
     299,    -1,   294,    -1,   321,    -1,   220,    -1,   220,   220,
      -1,    44,   233,   343,   234,     6,    -1,    45,   233,   343,
     234,     6,    -1,    44,   233,   343,   234,   247,   343,     6,
      -1,    44,   233,   343,   242,   339,   234,     6,    -1,    45,
     233,   343,   242,   339,   234,     6,    -1,    44,   233,   343,
     242,   339,   234,   247,   343,     6,    -1,   349,   343,   237,
     250,   238,     6,    -1,   155,     4,   235,   322,   236,     6,
      -1,   156,     4,   235,   322,   236,     6,    -1,   157,     4,
     235,   322,   242,   322,   236,     6,    -1,    -1,   250,   253,
      -1,   250,   257,    -1,   250,   260,    -1,   250,   262,    -1,
     250,   263,    -1,   322,    -1,   251,   242,   322,    -1,   322,
      -1,   252,   242,   322,    -1,    -1,    -1,     4,   254,   233,
     251,   234,   255,   237,   252,   238,     6,    -1,   343,    -1,
     256,   242,   343,    -1,    -1,   162,   233,   322,   242,   322,
     242,   322,   234,   258,   237,   256,   238,     6,    -1,   343,
      -1,   259,   242,   343,    -1,    -1,   163,   233,   322,   242,
     322,   242,   322,   242,   322,   234,   261,   237,   259,   238,
       6,    -1,   164,   237,   335,   238,   237,   335,   238,     6,
      -1,   164,   237,   335,   238,   237,   335,   238,   237,   335,
     238,   237,   335,   238,     6,    -1,    -1,   165,   264,   237,
     252,   238,     6,    -1,     7,    -1,   213,    -1,   212,    -1,
     211,    -1,   210,    -1,   231,    -1,   230,    -1,   233,    -1,
     235,    -1,   234,    -1,   236,    -1,    81,   235,   271,   236,
       6,    -1,    82,   235,   275,   236,     6,    -1,   327,     6,
      -1,    88,   267,   344,   242,   322,   268,     6,    -1,    89,
     267,   349,   242,   344,   268,     6,    -1,   349,   265,   336,
       6,    -1,   349,   266,     6,    -1,   349,   267,   268,   265,
     336,     6,    -1,   349,   267,   237,   339,   238,   268,   265,
     336,     6,    -1,   349,   235,   322,   236,   265,   322,     6,
      -1,   349,   235,   322,   236,   266,     6,    -1,   349,   233,
     322,   234,   265,   322,     6,    -1,   349,   233,   322,   234,
     266,     6,    -1,   349,     7,   344,     6,    -1,   349,   267,
     268,     7,    46,   267,   268,     6,    -1,   349,   267,   268,
       7,    46,   267,   347,   268,     6,    -1,   349,   267,   268,
     213,    46,   267,   347,   268,     6,    -1,   349,   239,     4,
       7,   344,     6,    -1,   349,   235,   322,   236,   239,     4,
       7,   344,     6,    -1,   349,   239,     4,   265,   322,     6,
      -1,   349,   235,   322,   236,   239,     4,   265,   322,     6,
      -1,   349,   239,     4,   266,     6,    -1,   349,   235,   322,
     236,   239,     4,   266,     6,    -1,   349,   239,   172,   239,
       4,     7,   340,     6,    -1,   349,   235,   322,   236,   239,
     172,   239,     4,     7,   340,     6,    -1,   349,   239,   173,
       7,   341,     6,    -1,   349,   235,   322,   236,   239,   173,
       7,   341,     6,    -1,   349,   183,     7,   322,     6,    -1,
     183,   235,   322,   236,     7,     4,     6,    -1,   183,   235,
     322,   236,   239,     4,     7,   322,     6,    -1,   183,   235,
     322,   236,   239,     4,     7,   344,     6,    -1,   183,   235,
     322,   236,   239,     4,     7,   237,   339,   238,     6,    -1,
     183,   235,   322,   236,   239,     4,     6,    -1,   128,   233,
       4,   234,   239,     4,     7,   322,     6,    -1,   128,   233,
       4,   234,   239,     4,     7,   344,     6,    -1,    -1,   242,
      -1,    -1,   271,   270,   349,    -1,   271,   270,   349,     7,
     322,    -1,    -1,   271,   270,   349,     7,   237,   336,   272,
     277,   238,    -1,    -1,   271,   270,   349,   267,   268,     7,
     237,   336,   273,   277,   238,    -1,   271,   270,   349,     7,
     344,    -1,    -1,   271,   270,   349,     7,   237,   344,   274,
     281,   238,    -1,    -1,   275,   270,   343,    -1,   322,     7,
     344,    -1,   276,   242,   322,     7,   344,    -1,   338,     7,
     349,   233,   234,    -1,    -1,   242,   279,    -1,    -1,   279,
      -1,   280,    -1,   279,   242,   280,    -1,     4,   336,    -1,
       4,    -1,     4,   237,   276,   238,    -1,     4,   344,    -1,
      -1,   242,   282,    -1,   283,    -1,   282,   242,   283,    -1,
       4,   322,    -1,     4,   344,    -1,   187,   344,    -1,     4,
     237,   347,   238,    -1,   322,    -1,   344,    -1,   344,   242,
     322,    -1,   322,    -1,   344,    -1,   344,   242,   322,    -1,
     322,    -1,   344,    -1,   344,   242,   322,    -1,   322,    -1,
     344,    -1,   344,   242,   322,    -1,    -1,   175,    94,   237,
     322,   238,    -1,    -1,   121,   333,    -1,    90,   233,   322,
     234,     7,   333,     6,    -1,    93,   233,   322,   234,     7,
     336,     6,    -1,    97,   233,   322,   234,     7,   336,     6,
      -1,    91,   233,   322,   234,     7,   336,   289,     6,    -1,
      92,   233,   322,   234,     7,   336,   289,     6,    -1,   167,
     233,   322,   234,     7,   336,     6,    -1,   168,   233,   322,
     234,     7,   336,     6,    -1,   169,   233,   322,   234,     7,
     336,   171,   336,   170,   322,     6,    -1,   125,    93,   233,
     322,   234,     7,   336,     6,    -1,   108,   233,   322,   234,
       7,   336,     6,    -1,    93,     4,   233,   322,   234,     7,
     336,     6,    -1,   121,    96,   233,   322,   234,     7,   336,
       6,    -1,    96,   233,   322,   234,     7,   336,   288,     6,
      -1,   122,    96,   233,   322,   234,     7,   336,   288,     6,
      -1,    13,    14,     6,    -1,    14,    96,   322,     6,    -1,
     111,    96,   233,   322,   234,     7,     5,     5,     5,     6,
      -1,    94,   233,   322,   234,     7,   336,     6,    -1,    95,
     233,   322,   234,     7,   336,     6,    -1,    99,   233,   322,
     234,     7,   336,     6,    -1,   102,   233,   322,   234,     7,
     336,     6,    -1,   106,   233,   322,   234,     7,   336,     6,
      -1,   107,   233,   322,   234,     7,   336,     6,    -1,   100,
     233,   322,   234,     7,   336,     6,    -1,   101,   233,   322,
     234,     7,   336,     6,    -1,   118,   233,   322,   234,     7,
     336,     6,    -1,   143,   233,   322,   234,     7,   336,     6,
      -1,   125,    96,   233,   322,   234,     7,   336,     6,    -1,
     125,    96,   233,   322,   234,     7,   336,     4,   237,   335,
     238,     6,    -1,    96,     4,   233,   322,   234,     7,   336,
       6,    -1,    98,   233,   322,   234,     7,   336,     6,    -1,
     117,   233,   322,   234,     7,   336,     6,    -1,   122,   117,
     233,   322,   234,     7,   336,     6,    -1,   125,    98,   233,
     322,   234,     7,   336,     6,    -1,   124,    90,   233,   284,
     234,   265,   336,     6,    -1,   124,    93,   233,   285,   234,
     265,   336,     6,    -1,   124,    96,   233,   286,   234,   265,
     336,     6,    -1,   124,    98,   233,   287,   234,   265,   336,
       6,    -1,   132,   333,   237,   292,   238,    -1,   131,   237,
     333,   242,   333,   242,   322,   238,   237,   292,   238,    -1,
     133,   333,   237,   292,   238,    -1,   134,   237,   333,   242,
     322,   238,   237,   292,   238,    -1,   134,   237,   333,   242,
     333,   238,   237,   292,   238,    -1,     4,   237,   292,   238,
      -1,   149,    93,   237,   339,   238,    96,   237,   322,   238,
      -1,   146,    93,   233,   322,   234,   237,   339,   238,     6,
      -1,   293,    -1,   291,    -1,    -1,   293,   290,    -1,   293,
      90,   237,   339,   238,     6,    -1,   293,    93,   237,   339,
     238,     6,    -1,   293,    96,   237,   339,   238,     6,    -1,
     293,    98,   237,   339,   238,     6,    -1,   136,   121,   233,
     322,   234,     7,   336,     6,    -1,   136,    90,   233,   322,
     234,     7,   237,   335,   238,     6,    -1,   136,   121,   233,
     322,   234,     7,   237,   333,   242,   333,   242,   339,   238,
       6,    -1,   136,   121,   233,   322,   234,     7,   237,   333,
     242,   333,   242,   333,   242,   339,   238,     6,    -1,   136,
      94,   233,   322,   234,     7,   237,   333,   242,   339,   238,
       6,    -1,   136,   100,   233,   322,   234,     7,   237,   333,
     242,   333,   242,   339,   238,     6,    -1,   136,   101,   233,
     322,   234,     7,   237,   333,   242,   333,   242,   339,   238,
       6,    -1,   136,   103,   233,   322,   234,     7,   237,   333,
     242,   333,   242,   339,   238,     6,    -1,   136,   104,   233,
     322,   234,     7,   237,   333,   242,   333,   242,   339,   238,
       6,    -1,   136,     4,   233,   322,   234,     7,   336,     6,
      -1,   136,     4,   233,   322,   234,     7,     5,     6,    -1,
     136,     4,   237,   322,   238,     6,    -1,   147,   237,   293,
     238,    -1,   130,   147,   237,   293,   238,    -1,   147,   183,
     235,   322,   236,     6,    -1,   147,     4,   235,   322,   236,
       6,    -1,   147,   349,     6,    -1,   147,     4,     4,     6,
      -1,   147,    84,     6,    -1,   172,   340,   237,   293,   238,
      -1,   130,   172,   340,   237,   293,   238,    -1,   207,   322,
     237,   293,   238,    -1,   188,     5,     6,    -1,   189,     5,
       6,    -1,   188,   237,   293,   238,    -1,   130,   188,   237,
     293,   238,    -1,   189,   237,   293,   238,    -1,   130,   189,
     237,   293,   238,    -1,   349,   344,     6,    -1,    73,   233,
     347,   234,     6,    -1,   349,   349,   235,   322,   236,   343,
       6,    -1,   349,   349,   349,   235,   322,   236,     6,    -1,
     349,   322,     6,    -1,   128,   233,     4,   234,   239,     4,
       6,    -1,   166,     4,     6,    -1,   181,     6,    -1,   182,
       6,    -1,    70,     6,    -1,    71,     6,    -1,    64,     6,
      -1,    64,   237,   322,   242,   322,   242,   322,   242,   322,
     242,   322,   242,   322,   238,     6,    -1,    65,     6,    -1,
      66,     6,    -1,    78,     6,    -1,    79,     6,    -1,   113,
       6,    -1,   114,   237,   339,   238,   237,   339,   238,   237,
     335,   238,   237,   322,   242,   322,   238,     6,    -1,   186,
     233,   237,   339,   238,   242,   344,   242,   344,   234,     6,
      -1,   174,   233,   322,     8,   322,   234,    -1,   174,   233,
     322,     8,   322,     8,   322,   234,    -1,   174,     4,   175,
     237,   322,     8,   322,   238,    -1,   174,     4,   175,   237,
     322,     8,   322,     8,   322,   238,    -1,   176,    -1,   187,
       4,    -1,   187,   344,    -1,   184,    -1,   185,   349,     6,
      -1,   185,   344,     6,    -1,   177,   233,   322,   234,    -1,
     178,   233,   322,   234,    -1,   179,    -1,   180,    -1,   135,
     333,   237,   293,   238,    -1,   135,   237,   333,   242,   333,
     242,   322,   238,   237,   293,   238,    -1,   135,   237,   333,
     242,   333,   242,   333,   242,   322,   238,   237,   293,   238,
      -1,    -1,   135,   333,   237,   293,   303,   307,   238,    -1,
      -1,   135,   237,   333,   242,   333,   242,   322,   238,   237,
     293,   304,   307,   238,    -1,    -1,   135,   237,   333,   242,
     333,   242,   333,   242,   322,   238,   237,   293,   305,   307,
     238,    -1,    -1,   135,   237,   293,   306,   307,   238,    -1,
     135,   237,   293,   238,   127,   108,   237,   322,   238,    -1,
     117,   336,    -1,   122,   117,   336,    -1,   119,   237,   339,
     238,   237,   339,   238,   237,   322,   238,    -1,   308,    -1,
     307,   308,    -1,   152,   237,   322,   238,     6,    -1,   152,
     237,   336,   242,   336,   238,     6,    -1,   153,     6,    -1,
     144,     6,    -1,   144,   322,     6,    -1,   158,     6,    -1,
     158,   160,     6,    -1,   159,     6,    -1,   159,   160,     6,
      -1,   154,   233,   322,   234,     7,   336,   127,   322,     6,
      -1,   127,     4,   235,   322,   236,     6,    -1,   138,    -1,
     139,    -1,   140,    -1,   141,    -1,   142,    -1,    -1,   147,
       6,    -1,   130,   147,     6,    -1,   147,   322,     6,    -1,
     130,   147,   322,     6,    -1,   309,   237,   293,   310,   238,
     237,   293,   310,   238,    -1,   105,   233,   343,   234,    -1,
     309,   233,   322,   234,     7,   237,   293,   310,   238,   237,
     293,   310,   238,     6,    -1,    -1,   127,     4,   322,    -1,
      -1,     4,    -1,    -1,     7,   336,    -1,    -1,     7,   322,
      -1,    -1,   137,   336,    -1,   109,   110,   336,     7,   322,
       6,    -1,   123,    93,   337,     7,   322,   313,     6,    -1,
     123,    96,   337,   315,   314,     6,    -1,   123,    98,   337,
     315,     6,    -1,   161,   337,     6,    -1,   150,    96,   237,
     339,   238,     7,   322,     6,    -1,   144,    96,   337,   316,
       6,    -1,   144,    98,   337,     6,    -1,   145,    96,   337,
       7,   322,     6,    -1,   126,    93,   237,   339,   238,     7,
     237,   339,   238,   317,     6,    -1,   126,    96,   237,   339,
     238,     7,   237,   339,   238,   317,     6,    -1,   126,    93,
     237,   339,   238,     7,   237,   339,   238,   131,   237,   333,
     242,   333,   242,   322,   238,     6,    -1,   126,    96,   237,
     339,   238,     7,   237,   339,   238,   131,   237,   333,   242,
     333,   242,   322,   238,     6,    -1,   126,    93,   237,   339,
     238,     7,   237,   339,   238,   132,   333,     6,    -1,   126,
      96,   237,   339,   238,     7,   237,   339,   238,   132,   333,
       6,    -1,   126,    96,   322,   237,   339,   238,     7,   322,
     237,   339,   238,     6,    -1,    90,   237,   339,   238,   175,
      96,   237,   322,   238,     6,    -1,    93,   237,   339,   238,
     175,    96,   237,   322,   238,     6,    -1,    90,   237,   339,
     238,   175,    98,   237,   322,   238,     6,    -1,    93,   237,
     339,   238,   175,    98,   237,   322,   238,     6,    -1,    96,
     237,   339,   238,   175,    98,   237,   322,   238,     6,    -1,
     151,    96,   337,     6,    -1,   151,    93,   337,     6,    -1,
     115,    90,   337,     6,    -1,   115,    93,   337,     6,    -1,
     115,    96,   337,     6,    -1,   129,    93,   336,     6,    -1,
     125,    93,   336,     6,    -1,   125,    96,   336,     6,    -1,
     125,    98,   336,     6,    -1,   148,     6,    -1,   148,     4,
       6,    -1,   148,    90,   237,   339,   238,     6,    -1,   196,
      -1,   197,    -1,   198,    -1,   320,     6,    -1,   320,   237,
     336,   238,     6,    -1,   320,   237,   336,   242,   336,   238,
       6,    -1,   320,   233,   336,   234,   237,   336,   242,   336,
     238,     6,    -1,   323,    -1,   233,   322,   234,    -1,   224,
     322,    -1,   223,   322,    -1,   228,   322,    -1,   322,   224,
     322,    -1,   322,   223,   322,    -1,   322,   225,   322,    -1,
     322,   226,   322,    -1,   322,   227,   322,    -1,   322,   232,
     322,    -1,   322,   219,   322,    -1,   322,   220,   322,    -1,
     322,   222,   322,    -1,   322,   221,   322,    -1,   322,   218,
     322,    -1,   322,   217,   322,    -1,   322,   216,   322,    -1,
     322,   215,   322,    -1,   322,   214,   322,     8,   322,    -1,
      16,   267,   322,   268,    -1,    17,   267,   322,   268,    -1,
      18,   267,   322,   268,    -1,    19,   267,   322,   268,    -1,
      20,   267,   322,   268,    -1,    21,   267,   322,   268,    -1,
      22,   267,   322,   268,    -1,    23,   267,   322,   268,    -1,
      24,   267,   322,   268,    -1,    26,   267,   322,   268,    -1,
      27,   267,   322,   242,   322,   268,    -1,    28,   267,   322,
     268,    -1,    29,   267,   322,   268,    -1,    30,   267,   322,
     268,    -1,    31,   267,   322,   268,    -1,    32,   267,   322,
     268,    -1,    33,   267,   322,   268,    -1,    34,   267,   322,
     268,    -1,    35,   267,   322,   268,    -1,    36,   267,   322,
     242,   322,   268,    -1,    37,   267,   322,   242,   322,   268,
      -1,    38,   267,   322,   242,   322,   268,    -1,    25,   267,
     322,   268,    -1,     3,    -1,    10,    -1,    15,    -1,    11,
      -1,    12,    -1,   203,    -1,   204,    -1,   205,    -1,    75,
      -1,    76,    -1,    77,    -1,    -1,    83,   267,   322,   324,
     277,   268,    -1,   327,    -1,   194,   267,   343,   268,    -1,
     194,   267,   343,   242,   322,   268,    -1,   329,    -1,   349,
     235,   322,   236,    -1,   349,   233,   322,   234,    -1,   199,
     233,   329,   234,    -1,   199,   233,   329,   239,   330,   234,
      -1,   201,   233,   329,   325,   234,    -1,   201,   233,   329,
     239,   330,   325,   234,    -1,   200,   233,   344,   234,    -1,
     240,   349,   267,   268,    -1,   240,   349,     9,    -1,   240,
       9,    -1,   349,   266,    -1,   349,   235,   322,   236,   266,
      -1,   349,   233,   322,   234,   266,    -1,   349,   239,   330,
      -1,   349,     9,   349,   239,   330,    -1,   349,   235,   322,
     236,   239,     4,    -1,   349,   239,     4,   266,    -1,   349,
     235,   322,   236,   239,     4,   266,    -1,   190,   233,   343,
     242,   322,   234,    -1,    56,   233,   336,   242,   336,   234,
      -1,    57,   267,   343,   242,   343,   268,    -1,    55,   267,
     343,   268,    -1,    58,   267,   343,   242,   343,   268,    -1,
      63,   233,   347,   234,    -1,    -1,   242,   322,    -1,    -1,
     242,   343,    -1,    -1,    84,   329,   332,   328,   235,   278,
     236,    -1,   349,    -1,   349,     9,   349,    -1,     4,    -1,
      86,    -1,    86,   322,    -1,    -1,   233,   331,   234,    -1,
     334,    -1,   224,   333,    -1,   223,   333,    -1,   333,   224,
     333,    -1,   333,   223,   333,    -1,   237,   322,   242,   322,
     242,   322,   242,   322,   242,   322,   238,    -1,   237,   322,
     242,   322,   242,   322,   242,   322,   238,    -1,   237,   322,
     242,   322,   242,   322,   238,    -1,   233,   322,   242,   322,
     242,   322,   234,    -1,   336,    -1,   335,   242,   336,    -1,
     322,    -1,   338,    -1,   237,   238,    -1,   237,   339,   238,
      -1,   224,   237,   339,   238,    -1,   322,   225,   237,   339,
     238,    -1,   336,    -1,     5,    -1,   224,   338,    -1,   322,
     225,   338,    -1,   322,     8,   322,    -1,   322,     8,   322,
       8,   322,    -1,    90,   237,   322,   238,    -1,    90,     5,
      -1,    93,     5,    -1,    96,     5,    -1,    98,     5,    -1,
     124,    90,   337,    -1,   124,    93,   337,    -1,   124,    96,
     337,    -1,   124,    98,   337,    -1,    90,   175,    64,   237,
     322,   242,   322,   242,   322,   242,   322,   242,   322,   242,
     322,   238,    -1,    93,   175,    64,   237,   322,   242,   322,
     242,   322,   242,   322,   242,   322,   242,   322,   238,    -1,
      96,   175,    64,   237,   322,   242,   322,   242,   322,   242,
     322,   242,   322,   242,   322,   238,    -1,    98,   175,    64,
     237,   322,   242,   322,   242,   322,   242,   322,   242,   322,
     242,   322,   238,    -1,   291,    -1,   302,    -1,   311,    -1,
     349,   267,   268,    -1,    39,   235,   349,   236,    -1,    39,
     235,   338,   236,    -1,    39,   233,   338,   234,    -1,    39,
     267,   237,   339,   238,   268,    -1,   349,   267,   237,   339,
     238,   268,    -1,    40,   267,   322,   242,   322,   242,   322,
     268,    -1,    41,   267,   322,   242,   322,   242,   322,   268,
      -1,    42,   267,   343,   268,    -1,    43,   267,   322,   242,
     322,   242,   322,   242,   322,   242,   322,   242,   322,   268,
      -1,   195,   267,   338,   268,    -1,    32,   267,   338,   268,
      -1,   322,    -1,   338,    -1,   339,   242,   322,    -1,   339,
     242,   338,    -1,   237,   322,   242,   322,   242,   322,   242,
     322,   238,    -1,   237,   322,   242,   322,   242,   322,   238,
      -1,   349,    -1,     4,   239,   172,   239,     4,    -1,   237,
     342,   238,    -1,   349,   235,   322,   236,   239,   173,    -1,
     340,    -1,   342,   242,   340,    -1,   344,    -1,   349,    -1,
     349,   235,   322,   236,    -1,   349,   233,   322,   234,    -1,
     349,   239,   330,    -1,   349,     9,   349,   239,   330,    -1,
     349,   235,   322,   236,   239,     4,    -1,   124,    90,   237,
     322,   238,    -1,   124,    93,   237,   322,   238,    -1,   124,
      96,   237,   322,   238,    -1,   124,    98,   237,   322,   238,
      -1,     5,    -1,   208,   235,   349,   236,    -1,    67,    -1,
     206,    -1,    72,    -1,    74,    -1,   192,   233,   343,   234,
      -1,   191,   233,   343,   242,   343,   234,    -1,   193,   267,
     343,   268,    -1,   193,   267,   343,   242,   343,   268,    -1,
     202,   233,   329,   326,   234,    -1,   202,   233,   329,   239,
     330,   326,   234,    -1,    48,   267,   347,   268,    -1,    49,
     233,   343,   234,    -1,    50,   233,   343,   234,    -1,    51,
     233,   343,   242,   343,   242,   343,   234,    -1,    46,   267,
     347,   268,    -1,    60,   267,   343,   268,    -1,    61,   267,
     343,   268,    -1,    62,   267,   343,   268,    -1,    59,   267,
     322,   242,   343,   242,   343,   268,    -1,    54,   267,   343,
     242,   322,   242,   322,   268,    -1,    54,   267,   343,   242,
     322,   268,    -1,    47,   267,   343,   268,    -1,    47,   267,
     343,   242,   339,   268,    -1,    68,   267,   343,   268,    -1,
      69,    -1,    53,   267,   343,   268,    -1,    52,   267,   343,
     268,    -1,    -1,    87,   267,   344,   345,   281,   268,    -1,
      85,   267,   346,   268,    -1,   240,   322,    -1,   349,     9,
     240,   322,    -1,   343,    -1,   347,   242,   343,    -1,     4,
     241,   237,   322,   238,    -1,   348,   241,   237,   322,   238,
      -1,   209,   235,   343,   236,   241,   237,   322,   238,    -1,
       4,    -1,   348,    -1,   209,   235,   343,   236,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   252,   252,   253,   258,   260,   264,   265,   266,   267,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   305,   309,   316,   321,
     326,   340,   353,   366,   394,   408,   421,   434,   453,   458,
     459,   460,   461,   462,   466,   468,   473,   475,   481,   585,
     480,   603,   610,   621,   620,   638,   645,   656,   655,   672,
     689,   712,   711,   725,   726,   727,   728,   729,   733,   734,
     740,   740,   741,   741,   747,   748,   749,   750,   755,   761,
     823,   838,   867,   877,   882,   890,   895,   903,   912,   917,
     929,   946,   952,   961,   979,   997,  1006,  1018,  1023,  1031,
    1051,  1074,  1085,  1093,  1115,  1138,  1176,  1197,  1209,  1223,
    1223,  1225,  1227,  1236,  1246,  1245,  1266,  1265,  1283,  1293,
    1292,  1306,  1308,  1316,  1322,  1327,  1353,  1355,  1358,  1360,
    1364,  1365,  1369,  1381,  1394,  1409,  1419,  1421,  1425,  1426,
    1431,  1439,  1448,  1456,  1474,  1478,  1485,  1493,  1497,  1504,
    1512,  1516,  1523,  1531,  1535,  1542,  1551,  1554,  1561,  1564,
    1571,  1592,  1606,  1620,  1655,  1693,  1707,  1721,  1741,  1750,
    1764,  1779,  1793,  1812,  1822,  1828,  1834,  1841,  1870,  1885,
    1905,  1926,  1947,  1968,  1990,  2012,  2033,  2056,  2065,  2086,
    2101,  2115,  2131,  2147,  2156,  2166,  2176,  2186,  2201,  2213,
    2227,  2240,  2253,  2266,  2299,  2319,  2341,  2342,  2347,  2350,
    2354,  2365,  2376,  2387,  2403,  2422,  2443,  2458,  2474,  2492,
    2543,  2564,  2586,  2609,  2714,  2730,  2765,  2776,  2787,  2793,
    2808,  2836,  2848,  2857,  2864,  2876,  2895,  2901,  2907,  2914,
    2921,  2928,  2940,  3013,  3031,  3048,  3063,  3096,  3108,  3132,
    3136,  3141,  3148,  3153,  3163,  3168,  3174,  3182,  3186,  3190,
    3199,  3263,  3279,  3296,  3313,  3335,  3357,  3392,  3400,  3408,
    3414,  3421,  3428,  3448,  3474,  3486,  3498,  3514,  3530,  3547,
    3546,  3569,  3568,  3593,  3592,  3615,  3614,  3635,  3649,  3664,
    3679,  3700,  3703,  3709,  3721,  3741,  3745,  3749,  3753,  3757,
    3761,  3765,  3769,  3778,  3791,  3792,  3793,  3794,  3795,  3799,
    3800,  3801,  3802,  3803,  3806,  3827,  3844,  3864,  3867,  3883,
    3886,  3903,  3906,  3912,  3915,  3922,  3925,  3932,  3949,  3990,
    4034,  4073,  4098,  4107,  4137,  4163,  4189,  4221,  4248,  4274,
    4300,  4326,  4352,  4374,  4380,  4386,  4392,  4398,  4404,  4430,
    4456,  4473,  4490,  4507,  4519,  4525,  4531,  4543,  4547,  4557,
    4568,  4569,  4570,  4574,  4580,  4592,  4610,  4638,  4639,  4640,
    4641,  4642,  4643,  4644,  4645,  4646,  4653,  4654,  4655,  4656,
    4657,  4658,  4659,  4660,  4661,  4662,  4663,  4664,  4665,  4666,
    4667,  4668,  4669,  4670,  4671,  4672,  4673,  4674,  4675,  4676,
    4677,  4678,  4679,  4680,  4681,  4682,  4683,  4684,  4685,  4686,
    4695,  4696,  4697,  4698,  4699,  4700,  4701,  4702,  4703,  4704,
    4705,  4710,  4709,  4717,  4719,  4724,  4729,  4733,  4751,  4769,
    4773,  4777,  4781,  4785,  4791,  4807,  4813,  4819,  4838,  4859,
    4892,  4896,  4901,  4906,  4916,  4926,  4931,  4942,  4951,  4956,
    4961,  4989,  4990,  4996,  4997,  5003,  5002,  5025,  5027,  5032,
    5041,  5043,  5049,  5050,  5056,  5060,  5064,  5068,  5072,  5079,
    5083,  5087,  5091,  5098,  5103,  5110,  5115,  5119,  5124,  5128,
    5136,  5147,  5151,  5163,  5171,  5179,  5186,  5196,  5219,  5225,
    5231,  5237,  5243,  5254,  5265,  5276,  5287,  5293,  5299,  5305,
    5311,  5321,  5331,  5341,  5354,  5366,  5370,  5374,  5378,  5396,
    5404,  5412,  5441,  5451,  5467,  5478,  5483,  5487,  5491,  5503,
    5507,  5519,  5536,  5546,  5550,  5565,  5570,  5577,  5581,  5586,
    5600,  5617,  5621,  5626,  5634,  5640,  5646,  5652,  5661,  5665,
    5669,  5677,  5683,  5689,  5693,  5701,  5709,  5716,  5726,  5731,
    5736,  5751,  5765,  5779,  5791,  5807,  5816,  5825,  5835,  5846,
    5854,  5862,  5866,  5885,  5892,  5898,  5905,  5913,  5912,  5922,
    5946,  5948,  5954,  5959,  5967,  5976,  5985,  5997,  6000,  6004
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
  "tAtan2", "tSinh", "tCosh", "tTanh", "tFabs", "tAbs", "tFloor", "tCeil",
  "tRound", "tFmod", "tModulo", "tHypot", "tList", "tLinSpace",
  "tLogSpace", "tListFromFile", "tCatenary", "tPrintf", "tError", "tStr",
  "tSprintf", "tStrCat", "tStrPrefix", "tStrRelative", "tStrReplace",
  "tAbsolutePath", "tDirName", "tStrSub", "tStrLen", "tFind", "tStrFind",
  "tStrCmp", "tStrChoice", "tUpperCase", "tLowerCase", "tLowerCaseIn",
  "tTextAttributes", "tBoundingBox", "tDraw", "tSetChanged", "tToday",
  "tFixRelativePath", "tCurrentDirectory", "tSyncModel", "tNewModel",
  "tOnelabAction", "tOnelabRun", "tCodeName", "tCpu", "tMemory",
  "tTotalMemory", "tCreateTopology", "tCreateTopologyNoHoles",
  "tDistanceFunction", "tDefineConstant", "tUndefineConstant",
  "tDefineNumber", "tDefineStruct", "tNameStruct", "tAppend",
  "tDefineString", "tSetNumber", "tSetString", "tPoint", "tCircle",
  "tEllipse", "tLine", "tSphere", "tPolarSphere", "tSurface", "tSpline",
  "tVolume", "tBlock", "tCylinder", "tCone", "tTorus", "tEllipsoid",
  "tQuadric", "tShapeFromFile", "tRectangle", "tDisk", "tWire",
  "tCharacteristic", "tLength", "tParametric", "tElliptic", "tRefineMesh",
  "tAdaptMesh", "tRelocateMesh", "tSetFactory", "tThruSections", "tWedge",
  "tFillet", "tChamfer", "tPlane", "tRuled", "tTransfinite", "tPhysical",
  "tCompound", "tPeriodic", "tUsing", "tPlugin", "tDegenerated",
  "tRecursive", "tRotate", "tTranslate", "tSymmetry", "tDilate",
  "tExtrude", "tLevelset", "tAffine", "tBooleanUnion",
  "tBooleanIntersection", "tBooleanDifference", "tBooleanSection",
  "tBooleanFragments", "tThickSolid", "tRecombine", "tSmoother", "tSplit",
  "tDelete", "tCoherence", "tIntersect", "tMeshAlgorithm", "tReverse",
  "tLayers", "tScaleLast", "tHole", "tAlias", "tAliasWithOptions",
  "tCopyOptions", "tQuadTriAddVerts", "tQuadTriNoNewVerts",
  "tRecombLaterals", "tTransfQuadTri", "tText2D", "tText3D",
  "tInterpolationScheme", "tTime", "tCombine", "tBSpline", "tBezier",
  "tNurbs", "tNurbsOrder", "tNurbsKnots", "tColor", "tColorTable", "tFor",
  "tIn", "tEndFor", "tIf", "tElseIf", "tElse", "tEndIf", "tExit", "tAbort",
  "tField", "tReturn", "tCall", "tSlide", "tMacro", "tShow", "tHide",
  "tGetValue", "tGetStringValue", "tGetEnv", "tGetString", "tGetNumber",
  "tUnique", "tHomology", "tCohomology", "tBetti", "tExists",
  "tFileExists", "tGetForced", "tGetForcedStr", "tGMSH_MAJOR_VERSION",
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
  "Enumeration", "FloatParameterOptionsOrNone",
  "FloatParameterOptionsOrNone_NoComma", "FloatParameterOptions",
  "FloatParameterOption", "CharParameterOptionsOrNone",
  "CharParameterOptions", "CharParameterOption", "PhysicalId0",
  "PhysicalId1", "PhysicalId2", "PhysicalId3", "InSphereCenter",
  "CircleOptions", "Shape", "Transform", "MultipleShape", "ListOfShapes",
  "LevelSet", "Delete", "Colorify", "SetPartition", "Visibility",
  "Command", "Slide", "Loop", "Extrude", "@9", "@10", "@11", "@12",
  "ExtrudeParameters", "ExtrudeParameter", "BooleanOperator",
  "BooleanOption", "Boolean", "BooleanShape", "TransfiniteType",
  "TransfiniteArrangement", "TransfiniteCorners", "RecombineAngle",
  "PeriodicTransform", "Constraints", "Coherence", "HomologyCommand",
  "Homology", "FExpr", "FExpr_Single", "@13", "GetForced_Default",
  "GetForcedStr_Default", "DefineStruct", "@14", "Struct_FullName",
  "tSTRING_Member_Float", "Append", "AppendOrNot", "VExpr", "VExpr_Single",
  "RecursiveListOfListOfDouble", "ListOfDouble", "ListOfDoubleOrAll",
  "FExpr_Multi", "RecursiveListOfDouble", "ColorExpr", "ListOfColor",
  "RecursiveListOfColor", "StringExprVar", "StringExpr", "@15",
  "NameStruct_Arg", "RecursiveListOfStringExprVar", "StringIndex",
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
     465,   466,   467,   468,    63,   469,   470,   471,   472,    60,
      62,   473,   474,    43,    45,    42,    47,    37,    33,   475,
     476,   477,    94,    40,    41,    91,    93,   123,   125,    46,
      35,   126,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   243,   244,   244,   245,   245,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   247,   247,   248,   248,
     248,   248,   248,   248,   249,   249,   249,   249,   250,   250,
     250,   250,   250,   250,   251,   251,   252,   252,   254,   255,
     253,   256,   256,   258,   257,   259,   259,   261,   260,   262,
     262,   264,   263,   265,   265,   265,   265,   265,   266,   266,
     267,   267,   268,   268,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   270,
     270,   271,   271,   271,   272,   271,   273,   271,   271,   274,
     271,   275,   275,   276,   276,   276,   277,   277,   278,   278,
     279,   279,   280,   280,   280,   280,   281,   281,   282,   282,
     283,   283,   283,   283,   284,   284,   284,   285,   285,   285,
     286,   286,   286,   287,   287,   287,   288,   288,   289,   289,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   291,   291,
     291,   291,   291,   291,   291,   291,   292,   292,   293,   293,
     293,   293,   293,   293,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   295,   295,   295,   295,
     295,   295,   295,   296,   296,   297,   298,   298,   298,   298,
     298,   298,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   300,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   302,   302,   302,   303,
     302,   304,   302,   305,   302,   306,   302,   302,   302,   302,
     302,   307,   307,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   309,   309,   309,   309,   309,   310,
     310,   310,   310,   310,   311,   311,   312,   313,   313,   314,
     314,   315,   315,   316,   316,   317,   317,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   319,   319,   319,
     320,   320,   320,   321,   321,   321,   321,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   324,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   325,   325,   326,   326,   328,   327,   329,   329,   330,
     331,   331,   332,   332,   333,   333,   333,   333,   333,   334,
     334,   334,   334,   335,   335,   336,   336,   336,   336,   336,
     336,   337,   337,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   339,   339,   339,   339,   340,
     340,   340,   340,   341,   341,   342,   342,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   345,   344,   344,
     346,   346,   347,   347,   348,   348,   348,   349,   349,   349
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
       9,     0,     3,     3,     5,     5,     0,     2,     0,     1,
       1,     3,     2,     1,     4,     2,     0,     2,     1,     3,
       2,     2,     2,     4,     1,     1,     3,     1,     1,     3,
       1,     1,     3,     1,     1,     3,     0,     5,     0,     2,
       7,     7,     7,     8,     8,     7,     7,    11,     8,     7,
       8,     8,     8,     9,     3,     4,    10,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     8,    12,     8,
       7,     7,     8,     8,     8,     8,     8,     8,     5,    11,
       5,     9,     9,     4,     9,     9,     1,     1,     0,     2,
       6,     6,     6,     6,     8,    10,    14,    16,    12,    14,
      14,    14,    14,     8,     8,     6,     4,     5,     6,     6,
       3,     4,     3,     5,     6,     5,     3,     3,     4,     5,
       4,     5,     3,     5,     7,     7,     3,     7,     3,     2,
       2,     2,     2,     2,    15,     2,     2,     2,     2,     2,
      16,    11,     6,     8,     8,    10,     1,     2,     2,     1,
       3,     3,     4,     4,     1,     1,     5,    11,    13,     0,
       7,     0,    13,     0,    15,     0,     6,     9,     2,     3,
      10,     1,     2,     5,     7,     2,     2,     3,     2,     3,
       2,     3,     9,     6,     1,     1,     1,     1,     1,     0,
       2,     3,     3,     4,     9,     4,    14,     0,     3,     0,
       1,     0,     2,     0,     2,     0,     2,     6,     7,     6,
       5,     3,     8,     5,     4,     6,    11,    11,    18,    18,
      12,    12,    12,    10,    10,    10,    10,    10,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     2,     3,     6,
       1,     1,     1,     2,     5,     7,    10,     1,     3,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     6,     4,     4,
       4,     4,     4,     4,     4,     4,     6,     6,     6,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     6,     1,     4,     6,     1,     4,     4,     4,
       6,     5,     7,     4,     4,     3,     2,     2,     5,     5,
       3,     5,     6,     4,     7,     6,     6,     6,     4,     6,
       4,     0,     2,     0,     2,     0,     7,     1,     3,     1,
       1,     2,     0,     3,     1,     2,     2,     3,     3,    11,
       9,     7,     7,     1,     3,     1,     1,     2,     3,     4,
       5,     1,     1,     2,     3,     3,     5,     4,     2,     2,
       2,     2,     3,     3,     3,     3,    16,    16,    16,    16,
       1,     1,     1,     3,     4,     4,     4,     6,     6,     8,
       8,     4,    14,     4,     4,     1,     1,     3,     3,     9,
       7,     1,     5,     3,     6,     1,     3,     1,     1,     4,
       4,     3,     5,     6,     5,     5,     5,     5,     1,     4,
       1,     1,     1,     1,     4,     6,     4,     6,     5,     7,
       4,     4,     4,     8,     4,     4,     4,     4,     8,     8,
       6,     4,     6,     4,     1,     4,     4,     0,     6,     4,
       2,     4,     1,     3,     5,     5,     8,     1,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     2,     3,     1,   577,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   304,   305,   306,   307,   308,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   266,
       0,     0,   274,   275,     0,     0,     0,   269,     0,     0,
       0,     0,     0,   360,   361,   362,     0,     0,     5,     6,
       7,     8,    10,    11,    24,    12,    13,    14,    15,    23,
      22,    21,    16,     0,    17,    18,    19,    20,     0,    25,
       0,   578,     0,   208,     0,     0,     0,     0,     0,   253,
       0,   255,   256,   251,   252,     0,   257,   258,   111,   121,
     577,   462,   457,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,     0,     0,     0,     0,     0,   410,   411,   413,
     414,   412,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   418,   419,   420,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   415,   416,   417,     0,     0,     0,     0,     0,
       0,   500,   501,     0,   502,   475,   367,   423,   426,   288,
     476,   457,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   464,     0,     0,   208,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   577,
       0,     0,   208,     0,     0,   357,     0,     0,     0,     0,
       0,     0,     0,     0,   482,     0,   481,     0,     0,     0,
       0,     0,   577,     0,     0,   521,     0,     0,     0,     0,
     249,   250,     0,   538,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   540,     0,   564,
     542,   543,     0,     0,     0,     0,     0,     0,   541,     0,
       0,     0,     0,   267,   268,     0,   208,     0,   208,     0,
       0,     0,   457,     0,     0,   208,   363,     0,     0,    76,
       0,    63,     0,     0,    67,    66,    65,    64,    69,    68,
      70,    71,     0,     0,     0,     0,     0,     0,   527,   457,
       0,   207,     0,   206,     0,   174,     0,     0,   527,   528,
       0,     0,   572,     0,   109,   109,     0,   455,     0,     0,
       0,     0,     0,   515,   516,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   488,
       0,     0,   489,     0,   490,     0,   491,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   370,
       0,   369,   483,   371,     0,   477,     0,   436,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,    71,     0,   437,
       0,     0,     0,     0,     0,     0,   289,     0,   321,   321,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   208,     0,   208,   208,     0,
     466,   465,     0,     0,     0,     0,   208,   208,     0,     0,
       0,     0,   285,     0,   208,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   323,     0,     0,     0,     0,
       0,   232,     0,     0,   230,   358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   331,   248,     0,     0,     0,
       0,     0,   208,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   271,
     270,     0,   236,     0,   237,     0,     0,   369,     0,   208,
       0,     0,     0,     0,   309,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,    72,    73,     0,     0,   246,    38,   242,     0,     0,
       0,     0,     0,   203,     0,     0,     0,     0,     0,     0,
       0,   209,     0,   175,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,     0,     0,     0,
     460,     0,     0,   458,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   315,     0,     0,     0,
       0,     0,     0,   350,   351,   352,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   457,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   421,     0,     0,     0,     0,
       0,   492,   493,   494,   495,     0,     0,     0,     0,     0,
     451,     0,   368,   478,   435,     0,   485,     0,   385,   384,
     383,   382,   378,   379,   381,   380,   373,   372,     0,   374,
     484,   375,   376,   377,   458,     0,     0,   459,   440,     0,
     503,     0,     0,     0,     0,     0,     0,     0,   319,     0,
       0,   144,   145,     0,   147,   148,     0,   150,   151,     0,
     153,   154,     0,   354,     0,   355,     0,   356,     0,     0,
       0,     0,   353,     0,   208,     0,     0,     0,     0,     0,
     468,   467,     0,     0,     0,     0,     0,     0,     0,   279,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   334,     0,     0,   231,     0,     0,   226,     0,
       0,     0,   349,   348,     0,     0,     0,   368,     0,     0,
       0,     0,     0,     0,     0,     0,   272,   273,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   567,     0,     0,     0,
     453,     0,     0,   238,   240,     0,   374,     0,   579,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,   368,     0,    63,     0,     0,     0,     0,
      79,     0,    63,    64,     0,     0,   458,     0,     0,   440,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     574,    28,    26,     0,     0,     0,     0,     0,   459,   531,
      29,     0,     0,   243,   573,    74,   112,    75,   122,   461,
     463,   128,     0,     0,     0,     0,   517,   518,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     409,   396,     0,   398,   399,   400,   401,   402,   514,   403,
     404,   405,     0,     0,     0,   506,   505,   504,     0,     0,
       0,   511,     0,   448,     0,     0,     0,   450,   126,     0,
     487,     0,     0,     0,     0,     0,   424,   513,   429,     0,
     433,     0,     0,     0,   479,     0,   434,     0,     0,     0,
       0,   428,   427,   443,     0,     0,     0,     0,     0,   368,
     317,   322,   320,     0,   330,     0,     0,     0,     0,     0,
       0,     0,     0,   368,   368,   368,     0,     0,     0,     0,
     227,     0,   239,   241,     0,     0,     0,   198,   200,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     291,     0,   276,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   324,   333,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   233,     0,     0,     0,     0,   554,     0,   561,   550,
     551,   552,     0,   566,   565,     0,     0,   555,   556,   557,
     563,   570,   569,     0,   136,     0,   544,     0,   546,     0,
       0,     0,   539,     0,   235,     0,     0,     0,   310,     0,
       0,     0,   364,     0,   575,     0,     0,     0,     0,   101,
      63,     0,     0,     0,     0,     0,     0,     0,    95,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,    61,     0,    39,    40,    41,    42,    43,     0,   428,
     427,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,     0,   530,   529,     0,     0,     0,
       0,   133,     0,   129,   130,     0,     0,     0,     0,     0,
     158,   158,     0,     0,     0,     0,     0,     0,     0,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     327,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   451,   452,   431,     0,   486,   386,   480,
     441,   439,     0,   438,     0,     0,     0,     0,     0,     0,
       0,     0,   329,     0,   146,     0,   149,     0,   152,     0,
     155,     0,     0,     0,     0,     0,     0,     0,   234,     0,
       0,     0,     0,     0,     0,     0,   296,     0,     0,   295,
       0,   298,     0,   300,     0,   286,   292,     0,     0,     0,
     225,     0,     0,     0,     0,     0,     0,     0,     0,   335,
       0,   229,   228,   359,     0,     0,    35,    36,     0,     0,
       0,     0,   522,     0,     0,     0,   262,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   453,   454,
     548,     0,     0,   208,   311,     0,   312,   208,     0,     0,
     534,   535,   536,   537,     0,    86,     0,     0,     0,     0,
      84,    91,    93,     0,   525,     0,    99,     0,     0,     0,
       0,    81,     0,     0,     0,     0,     0,    34,   441,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,     0,   532,     0,    32,     0,     0,   113,
     118,     0,     0,   132,   135,   456,     0,    77,    78,   160,
       0,     0,     0,     0,     0,     0,   161,     0,     0,   177,
     178,     0,     0,     0,     0,   162,   190,   179,   183,   184,
     180,   181,   182,   169,     0,     0,   397,   406,   407,   408,
     507,     0,     0,     0,   446,   447,   449,   127,   422,     0,
       0,     0,     0,   445,   425,   430,     0,   191,   442,   508,
     185,     0,     0,   156,     0,     0,   328,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   247,     0,     0,
       0,     0,   208,   208,     0,     0,   297,   475,     0,     0,
     299,   301,     0,     0,   280,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   186,     0,     0,     0,     0,
     165,   166,     0,     0,     0,     0,   102,   106,     0,   562,
       0,     0,   560,     0,   571,     0,     0,   137,   138,   568,
     545,   547,     0,     0,     0,   309,   313,   309,     0,   365,
      85,    63,     0,     0,     0,     0,    83,     0,   523,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   473,
       0,   442,   244,   245,   210,   211,   212,   213,     0,     0,
       0,     0,     0,   533,     0,   114,   119,     0,     0,   515,
     516,   131,     0,     0,   159,   163,   164,   170,     0,     0,
     189,     0,   172,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   432,   444,     0,   171,     0,   192,   318,
     194,   195,   196,   197,   168,     0,   187,   193,     0,     0,
       0,     0,     0,     0,   472,   471,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,   223,     0,     0,
       0,     0,     0,     0,     0,     0,   214,     0,     0,   332,
      37,     0,   520,     0,     0,   264,   263,     0,     0,     0,
       0,     0,     0,     0,   140,   141,   142,     0,   549,     0,
     576,     0,     0,     0,     0,     0,    96,     0,     0,    97,
     526,     0,     0,    88,     0,     0,     0,    44,     0,     0,
       0,     0,     0,    46,    33,     0,   126,   136,     0,   134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   509,   510,     0,     0,     0,     0,     0,     0,   173,
       0,   325,   325,     0,   107,   108,   208,     0,   201,   202,
     287,     0,   293,     0,     0,   208,     0,     0,     0,     0,
       0,     0,     0,     0,   205,   204,     0,     0,     0,     0,
     103,   104,   553,   559,   558,     0,   139,     0,     0,   314,
       0,    92,    94,     0,   100,     0,    82,    89,    90,    49,
       0,     0,     0,     0,   474,     0,     0,     0,     0,     0,
     116,     0,   123,     0,   343,   345,   344,   346,     0,   347,
     176,     0,     0,     0,     0,     0,     0,   290,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   470,     0,
     303,     0,     0,   281,     0,   215,     0,     0,     0,     0,
       0,     0,     0,   519,   265,     0,   143,     0,   208,   366,
       0,   524,     0,    45,     0,     0,     0,    62,    47,     0,
     115,   120,   126,     0,     0,   157,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   326,   336,     0,     0,   337,
       0,   199,     0,   294,     0,   277,     0,   208,     0,     0,
       0,     0,     0,     0,   167,   105,   261,   309,    98,     0,
       0,     0,     0,     0,     0,   124,   125,     0,     0,     0,
       0,     0,     0,   188,     0,   340,     0,   341,   342,   469,
       0,     0,   283,   218,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,    59,     0,     0,   117,     0,     0,
       0,     0,     0,     0,     0,     0,   302,   282,   278,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,   220,   221,   222,     0,   216,   316,    50,     0,
      57,     0,   254,     0,   512,     0,     0,     0,     0,     0,
       0,   284,     0,     0,    51,     0,     0,   260,     0,     0,
       0,     0,     0,     0,   217,     0,     0,     0,     0,   496,
     497,   498,   499,     0,     0,    54,    52,     0,    55,     0,
     338,   339,     0,     0,    60,    58,    56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,   108,  1013,   109,   110,   995,  1796,  1802,
    1273,  1482,  1942,  2083,  1274,  2048,  2107,  1275,  2085,  1276,
    1277,  1486,   403,   549,   550,  1077,   111,   727,   424,  1806,
    1952,  1807,   425,  1688,  1345,  1302,  1303,  1304,  1445,  1637,
    1638,   860,   863,   866,   869,  1533,  1523,   711,   251,   412,
     413,   114,   115,   116,   117,   118,   119,   120,   121,   252,
    1173,  1976,  2039,   897,  1169,  1170,   253,   972,   254,   125,
    1371,  1133,   858,   911,  1912,   126,   127,   128,   129,   255,
     256,  1098,  1113,  1231,   257,   732,   258,   848,   731,   427,
     581,   291,  1668,   326,   327,   260,   526,   334,  1261,  1475,
     422,   418,  1224,   954,   423,   131,   382
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1797
static const yytype_int16 yypact[] =
{
   10110,    60,    36, 10259, -1797, -1797,  -150,    80,    42,   -81,
     -48,    14,   110,   212,   282,   292,    88,   322,   386,   137,
     166,    11,   -90,   -90,   153,   181,   247,     4,   286,   294,
      15,   315,   333,   372,   411,   417,   428,   461,   483,   494,
     505,    49,   502,   508,   449,   281,   506,  5572,   521,   468,
     695,   -84,   611,   466,   715,   341,   557,   707,   -96,   568,
     -60,   -60,   575,   233,   378, -1797, -1797, -1797, -1797, -1797,
     587,   347,   732,   756,    53,    46,   770,   768,   757,   844,
     865,   887,  4879,   888,   704,   719,   728,    19,    43, -1797,
     749,   750, -1797, -1797,   915,   922,   744, -1797,  4990,   762,
    5221,    21,    24, -1797, -1797, -1797,  9498,   769, -1797, -1797,
   -1797, -1797, -1797, -1797, -1797, -1797, -1797, -1797, -1797, -1797,
   -1797, -1797, -1797,   179, -1797, -1797, -1797, -1797,    63, -1797,
     997,   772,  4007,   463,   777,  1021,  9498, 10425, 10425, -1797,
    9498, -1797, -1797, -1797, -1797, 10425, -1797, -1797, -1797, -1797,
     801,   811,  1045, -1797, -1797,  4281,    11,  9498,  8660,  9498,
    9498,   822,  9498,  8660,  9498,  9498,   840,  9498,  8660,  9498,
    9498,  9498,  9498,  9498,  9498, 10425,  9498,  9498,  9498,  5803,
     848, -1797,  8660,  4879,  4879,  4879, 10425, -1797, -1797, -1797,
   -1797, -1797,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   254,   -90,   -90,   -90,   -90,
     -90,   850,   -90,   -90,   852, -1797, -1797, -1797,   -90,    58,
      59,    65,   119,  5803,   954,   467,   853,   -90,   -90,   854,
     855,   856, -1797, -1797, -1797,  9498,  6034,  9498,  9498,  6265,
      30, -1797, -1797,   857, -1797,  2975, -1797, -1797, -1797, -1797,
   -1797,   148,  9498,  8660,   877,   878,  6496,  4879,  4879,  4879,
     884,   885,   886,   905,  6727,  6958,  7189,   883,   741,  1086,
    5803,   903,    19,   904,   906,   -60,   -60,   -60,  9498,  9498,
     187, -1797,   199,   -60,  3918,   300,   318,   911,   912,   913,
     916,   917,   920,   921,  9498,  4879,  4879,  4879,   923,     3,
    1108,   924, -1797,  1115,  1142, -1797,   918,   926,   927,  4879,
    4879,   931,   932,   933, -1797,  9498, -1797,  1151,  1152,  9498,
    9498,  9498,   302,  9498,   934, -1797,   986,  9498,  9498,  9498,
   -1797, -1797,  9498, -1797,   -90,   -90,   -90,   937,   939,   940,
     -90,   -90,   -90,   -90,   -90,   -90,   -90, -1797,   -90, -1797,
   -1797, -1797,   -90,   -90,   941,   944,   -90,   945, -1797,   946,
    1163,  1173,   947, -1797, -1797,  1176, -1797,  1177, -1797,   -90,
    9498, 11897,   158, 10425,  9498, -1797, -1797,  5803,  5803, -1797,
     948,  4281,   621,  1180, -1797, -1797, -1797, -1797, -1797, -1797,
    9498,  9498,   223,  5803,  1182,   226,   910,   952,  1185,    50,
     955, -1797,   958, 10549,  9498, -1797,  1103,  -137, -1797,    74,
    -119,  4334, -1797,  -112,  -109,   -58,  1112, -1797,    11,   957,
     959, 12291,  8660,  2994, -1797,   365, 12312, 12333,  9498, 12354,
     366, 12375, 12396,  9498, 12417,   390, 12438, 12459, 12480, 12501,
   12522, 12543,   966, 12564, 12585, 12606,  1195,  9498,   418,  1197,
    1199,  1200,   973,  9498,  9498,  9498,  9498,  9498,  9498,  9498,
    9498,  9498,  9498,  9498,  9498,  9498,  9498,  9498,  9498,  8660,
    9498,  9498,  9498,  9498,  9498,  9498,  8660,  8660,   971,  9498,
    9498, 10425,  9498, 10425,  5803, 10425, 10425, 10425,  9498, -1797,
    1146,  9498, -1797,  1147, -1797,  1148, -1797,  1153,  5803,  4879,
    4879,  4879,  4879, 10425, 10425,  8660,    11,  4281,    11,   987,
    8660,   987, -1797,   987, 12627, -1797,   454, -1797,    79,  9498,
    9498,  9498,  9498,  9498,  9498,  9498,  9498,  9498,  9498,  9498,
    9498,  7420,  9498,  9498,  9498,    11,  9498,  9498,  1214, -1797,
     585, 12648,   455,  9498,  9498,  9498, -1797,  1213,  1216,  1216,
    8886,  8886,  8886,  8886,  9498,  1215,  9498,  1219,  9498,  1220,
    8660,  8660, 11921,   994,  1223, -1797,   993, -1797, -1797,  -168,
   -1797, -1797,  4559,  5277,   -60,   -60,   463,   463,  -146,  3918,
    3918,  9498,  2967,  -142, -1797,  9498,  9498,  9498,  9498,  9498,
    9498,  9498,  9498,  9498, 12669,  1224,  1226,  1227,  9498,  1229,
    9498, -1797,  9498,  3255, -1797, -1797,  8660,  8660,  8660,  1230,
    1231,  9498,  9498,  9498, 12690, -1797, -1797, 12711, 12732, 12753,
    1061,  5508, -1797,  1015,  3038, 12774, 12795, 11992, 10425, 10425,
   10425, 10425, 10425, 10425, 10425, 10425, 10425,  9498, 10425, 10425,
   10425, 10425,    10,  4281, 10425, 10425, 10425,    11,    11, -1797,
   -1797,  8660, -1797,  3581, -1797,  7703,  9498,   987,  9498, -1797,
    9498,  9498,  1017, 12816, 10436,  1020,   495,  9498,  1250,  1024,
    1025,  1026,  1029,  9498, 12837, 12015,   208,  1028,  1253,  1262,
   -1797, -1797, -1797,  8660,   242, -1797, -1797, -1797,    11,  9498,
    9498,  1214,  1034, -1797,   597,    37,    45,   603,  1038,   -64,
     746, -1797,  4167, -1797,    25,  8660,    11,  9498,  9498,  1268,
    1267,  8660,  9498,  1269, 10425,  1270, -1797,    11,  1272, 10425,
    9498,  1040,  1044, -1797,  9498,  4281,  1273,  8660,  1107,  8660,
    1276,  1277, 12858,  1278,  1111,  1280,  1281, 12879,  1283,  1116,
    1285,  1286,  1287,  1288,  1289,  1290, -1797,  1292,  1293,  1294,
    9498, 12900,  1066, -1797, -1797, -1797,  1298, 11969, 11969, 11969,
   11969, 11969, 11969, 11969, 11969, 11969, 11969, 11969,  5739, 11969,
   11969, 11969, 11969,   843,   593, 11969, 11969, 11969,  5970,  6201,
    6432,  2994,  1071,  1070,   131,  8660,  6663,  6894,   593,  7125,
     593,  1065,  1072,  1074,   -80, 13530,  1076,  4654,  1094,  1095,
    1100, -1797, -1797, -1797, -1797,  1098,  -194,   593,  -159,  1118,
     651,   605,  1301, -1797, -1797,   593,  3309,  3359,  1023,  1331,
     561,   561,   476,   476,   476,   476,   523,   523,  8660,   987,
   -1797,   987,   987,   987,  1114, 12921, 12038,   -56, -1797,  8660,
   -1797,  1335,  1117, 12942, 12963, 12984,  9498,  5803,  1352,  1351,
    1124, 13530,  1119,  1125, 13530,  1121,  1126, 13530,  1127,  1133,
   13530,  1129, 13005, -1797, 13026, -1797, 13047, -1797,   617,   618,
    8660,  1134, -1797,  9526, -1797,  9565,  9661,   -60,  9498,  9498,
   -1797, -1797,  1130,  1139,  3918,  2706,  1254,   714,   -60,  9699,
   13068,  7554, 13089, 13110, 13131, 13152, 13173, 13194, 13215,  1375,
    9498,  1378, -1797,  9498, 13236, -1797, 12061, 12084, -1797,   623,
     633,   636, -1797, -1797, 12107, 12130,  7356, -1797,  1379,  1381,
    1383,  1154,  9498,  9763,  9498,  9498, -1797, -1797,    28,  -174,
     171,  -174,  1157,  1158,  1143,   593,   593,  1155,  7525,   593,
     593,   593,   593,  9498,   593,  1385, -1797,  1156,  1162,   486,
     670,  1164,   643, -1797, -1797, 11969,   987,  9818,  1160,  1392,
    1255,  8971,  1165,  1170,  1402,  5803,  9730, -1797,  9498,  9498,
    9498,  9498,  1210,   290,   124,  4281,  9498,  1405,  1408,    20,
   -1797,   644,  1367,  1370,  5803,    61,  1179, 13257, 12153,  1184,
    9498,  8660,  8660,  8660,  8660,  9498,  1186,  1189,  1190,  1206,
   -1797, -1797,  1221, 10425,   -76,  1201, 13278, 12176, -1797, -1797,
   -1797,    91,  7818, -1797, -1797, -1797,    51, -1797, -1797, 13530,
   -1797,  1439, 11969,   593,   -60,   872,  2994, -1797,  5803,  5803,
    1437,  5803,   936,  5803,  5803,  1448,  5803,  1358,  5803,  5803,
    5803,  5803,  5803,  5803,  5803,  5803,  5803,  1296,  1450,  8660,
   -1797, -1797, -1797, -1797, -1797, -1797, -1797, -1797, -1797, -1797,
   -1797, -1797,  9498, -1797, -1797, -1797, -1797, -1797, -1797, -1797,
   -1797, -1797,  9498,  9498,  9498, -1797, -1797, -1797,   645,  9498,
    9498, -1797,  9498, -1797,  5803, 10425, 10425, -1797,  1233,  9498,
   -1797,  9498,  9498,  9498,  9498,  9498, -1797, -1797, -1797,  1268,
   -1797,  1268,  9498,  1232, -1797,  5803, -1797,  9498,  9498,   646,
    1268,   -56,  -111, -1797,   672,  5803,  8660,  1451,  1456,  1458,
    2679, -1797, -1797,  1465, -1797,   334,  9498,   334,  9498,   334,
    9498,   334,  9498,  1466,  1472,  1473,  1474,  1476,   673,  1480,
   -1797,  9882, -1797, -1797,  -138,  8140,  8365, -1797, -1797, 11172,
    -121,  1380,  1482,  9197,  1257,  1484,  1263,   141,   155,   288,
   -1797,  -134, -1797,   714,  1488,  1491,  1492,  1495,  1496,  1497,
    1499,  1500,  1501,  5803, 13530, -1797,  1569,  1261,  1519,  1520,
    1521,  1433,  1523,  1525,  1527,  9498,  5803,  5803,  5803,  1530,
    8596, -1797,  3537,   881,  1531,  1533, -1797,  8660, -1797, -1797,
   -1797, -1797, 10425, -1797, -1797,  9498, 10425, -1797, -1797, -1797,
   -1797, 13530, -1797,  1299,  1300, 10425, -1797, 10425, -1797,  1268,
   10425,  1304, -1797,  1317, -1797,  1303,  1324,  9272, -1797,  1632,
    1325,  5803, -1797,  1326, -1797, 11197, 11222, 11247, 11272, -1797,
   -1797,  9498,  1535,   231,  9498,  1560,  1563,  1705, -1797,  1564,
      19,  1566,  1338,   593,   -90,   -90,  1570, -1797,  1337,  1344,
    1342, -1797,  1574, -1797, -1797, -1797, -1797, -1797,  1268,   228,
    1675, 12199,   680,   682,   685,   688, 13299,  9498,  9498,  9498,
    9498, -1797,  1577,    55,  1268, -1797,  1345,  1579,  9498,  7651,
     593,  4392,  1350,  1346, -1797,  1581,  1583,   106,  1353,  1357,
    1479,  1479,  5803,  1589,  1364,  1366,  1599,  1605,  5803,  1440,
    1377,  1606,  1610,  1611,  1612,  1614,  1615,  1616,  1617,  1618,
   -1797,  1620,   691, 11969, 11969, 11969, 11969,   593,  8798,  8842,
    8913,  1394,   593,   593,  1439,   593,  9024,  9099,  9143,  9225,
   13320, 11969,  1395,  1384, 13530, -1797,  1625, 13530, 13530, -1797,
   -1797, -1797,  1628, -1797,   593,  1627,   696,  5803,  5803,  5803,
    1631,  1633, -1797,  5803, 13530,  5803, 13530,  5803, 13530,  5803,
   13530,  5803,  5803,  5803,  1403,  1404,  1635,   566, -1797,  9498,
    9498,  9498,  1406,  1407,  1416,  1419, -1797,  1978,  5803, -1797,
    9498, -1797,  1649, -1797,  1651, -1797, -1797,  3918,   472,  5110,
   -1797,  1422,  1423,  1424,  1428,  1429,  1430,  7882,  1663, -1797,
    8660, -1797, -1797, -1797,  1436,  9498, -1797, -1797, 12222,  1669,
    1676,  1510, -1797,  9498,  9498,  9498, -1797,  1677,   614,   489,
    1442,  2297,  1443,  9498,    34,   593,  1452,   593,  1445, -1797,
   -1797,  4281,  9498, -1797, -1797,  2018, -1797, -1797,  1446,  1683,
   -1797, -1797, -1797, -1797,  2037, -1797,   319,  1453,  1684,  2089,
   -1797, -1797, -1797,    19, -1797,   701, -1797,  9498,   334,  1400,
   10425, -1797,  1457,  9498,  9498,  5803,  1462, -1797,  1463,  1690,
    1695,  1697,  1699,  1700,  1701,  1702,  1301, 13341, 13362, 13383,
   13404, -1797, -1797, 10425, -1797,  1709, -1797,  9369,  4623, 13530,
   -1797,  1707,  6265, -1797, -1797, -1797,  1439, -1797, -1797, -1797,
    9498,  9498,   -60,  1703,  1710,  1711, -1797,  9498,  9498, -1797,
   -1797,  1712,  1621,  1714,  9498, -1797, -1797, -1797, -1797, -1797,
   -1797, -1797, -1797, -1797,  1725,  1494, -1797, -1797, -1797, -1797,
   -1797,  9498,  9498,  9498, -1797, -1797, -1797,  1346, -1797,  9498,
    9498,  9498,  9498, -1797, -1797, -1797,  1498, -1797,   -56, -1797,
   -1797,  1503,  1727,  1440,  1732,  9498, -1797,  1735,  1739,  1740,
    1742,  1744,  1033,  1746,  8660,  8660,  9498, -1797,  8886, 11297,
   13425,  3669,   463,   463,  9498,  9498, -1797,   453,  1512, 13446,
   -1797, -1797, 11322,  -117, -1797,  1749,  1750,  5803,   -60,   -60,
     -60,   -60,   -60,  5341,  1751, -1797,   709,  9498,  2374,  1752,
   -1797, -1797,  5803,  4034,   681, 13467, -1797, -1797,  8113, -1797,
   10425,  9498, -1797, 10425, 13530,  8198,  4281,  1517, -1797, -1797,
   -1797, -1797,  1529,  1524, 11347, 10436, -1797, 10436,  5803, -1797,
   -1797,  4281,  9498,  1755,  1761,    20, -1797,  1762, -1797,    19,
   12245,  5803,  1763,  -174,  -174,  9498,  9914,  9945,   711, -1797,
    9498,   564, -1797, -1797, -1797, -1797, -1797, -1797,  1458,  1466,
    1472,  1473,  1765, -1797,  9498, -1797, -1797,  1536,   716,  1937,
    1760, -1797, 11372, 11397,   410, -1797, -1797, -1797, 11422, 11447,
   -1797,  1537, -1797, 11472,  1767,  5803, 11969, 11969, 10370, 10461,
   10505, 10534, 10563, -1797, -1797,  9498, -1797,  1769, -1797, 13530,
   -1797, -1797, -1797, -1797, -1797,  1539, -1797, -1797,   717,   718,
   11945,  2469,  1771,  1541, -1797, -1797,  9498,  1543,  1544, 11497,
   12268,  1773,  5803,  1790,  1565,  9498, -1797, -1797,   724,  -110,
     -74,   152,   175,   185,  8429,   227, -1797,  1794, 11522, -1797,
   -1797,  1634, -1797,  9498,  9498, -1797, -1797,  8660,  2488,  1800,
    1573, 11969,   593, 10425, 13530, -1797, -1797,    34, -1797,  4281,
   -1797,  1572,  1575,  1576,  1802,  2530, -1797,  1804,  1806, -1797,
   -1797,  1578,  1809, -1797,  1810,  1812,   109, 13530,  9498,  9498,
    1582,  5803,   725, 13530, -1797, 10592,  1233,  1300,  5803, -1797,
    9498,  4281,    11,  1815,  1816,  1817,  1818,  9498,  1819,  1820,
     733, -1797, -1797,  9498,  9498,  9498,  9498,  9498, 11547, -1797,
    5803,   598,   678,  8660, -1797, -1797,   463,  4074, -1797, -1797,
   -1797,  1822, -1797,  1591,  5803, -1797, 11572,  1825,  8660,   -60,
     -60,   -60,   -60,   -60, -1797, -1797,  9498, 11597, 11622,   735,
   -1797, -1797, -1797, -1797, -1797,   738, -1797,  1598,  1596, -1797,
    1828, -1797, -1797,    19, -1797,  1662, -1797, -1797, -1797, -1797,
    9498, 10621, 10650,  5803, -1797,  1830,  9498,  9498,  1600,  1601,
   -1797,  2928, -1797,  1604, -1797, -1797, -1797, -1797, 11647, -1797,
   -1797,  1603, 10679, 10708, 10737, 10766, 10795, -1797,   747,  1607,
     -60,  5803,  1837,  1623,   -60,  1855,   752,  1624, -1797,  9498,
   -1797,  1857,  1738,  9920,  1636, -1797,   754,   262,   310,   312,
     316,   364,  2612, -1797, -1797,  1863, -1797,  1865, -1797, -1797,
    1866, -1797,  1637, 13530,  9498,  9498,   755, -1797, 13530, 10824,
   -1797, -1797,  1233,  4281,  1641, -1797,  9498,  9498,  9498,  9498,
    9498,  9498,  1870,   -60,   135, -1797, -1797,   -60,   145, -1797,
    1872, -1797, 11672, -1797,  9498, -1797,   714, -1797,  1873,  8660,
    8660,  8660,  8660,  8429, -1797, -1797, -1797, 10436, -1797,  9498,
   13488, 10853,    31,  9498,  1644, -1797, -1797, 10882, 10911, 10940,
   10969, 10998, 11027, -1797,   377, -1797,   387, -1797, -1797, -1797,
    2817,   588,  9984, -1797,   764,   767,   773,   774,   439,   781,
    1647,   783, -1797,  9498, -1797,  5803, 11697, -1797,  9498,  9498,
    9498,  9498,  9498,  9498,   -60,   -60, -1797, -1797, -1797,   714,
    1880,  1886,  1888,  1889,  8660,  1890,  1891,  1892,  1656, 13509,
     784,  1893, 11722, 11969, 11056, 11085, 11114, 11143,   442,   464,
     679, -1797, -1797, -1797, -1797,   786, -1797, -1797, -1797, 10425,
   -1797,  1666, -1797,  1894, -1797,  9498,  9498,  9498,  9498,  9498,
    9498, -1797,  1898,   791, -1797,  1670,  5803, -1797, 11747, 11772,
   11797, 11822, 11847, 11872, -1797,  1903, 10425, 10425,   836, -1797,
   -1797, -1797, -1797,  1904,  1905, -1797, -1797,   838, -1797,  1907,
   -1797, -1797,  1909, 10425, -1797, -1797, -1797
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1797, -1797, -1797, -1797,   625, -1797, -1797, -1797, -1797,   -73,
   -1797, -1797, -1797, -1797, -1797, -1797, -1797, -1797, -1797, -1797,
   -1797, -1797,  -664,  -104,    -6,  2840, -1797,  1508, -1797, -1797,
   -1797, -1797, -1797, -1797, -1796, -1797,   590,   419,   129, -1797,
     161, -1797, -1797, -1797, -1797,   367,   628,  1938,     6,  -585,
    -267, -1797, -1797, -1797, -1797, -1797, -1797, -1797, -1797,  1939,
   -1797, -1797, -1797, -1797, -1169, -1166,  1943, -1634,  1944, -1797,
   -1797, -1797,  1390, -1797,   118, -1797, -1797, -1797, -1797,  1887,
   -1797, -1797,   600,   503,  1951, -1797,     0,  -676, -1797, -1797,
      38, -1797, -1561,   295,   -14,  2393,   694,  -276,   303, -1797,
     -65,   984, -1797, -1797,  -492, -1797,    -3
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -534
static const yytype_int16 yytable[] =
{
     132,   892,   893,  1406,  1408,   804,   576,   609,   161,   113,
    1888,  1781,   265,  1782,   150,   150,   155,   156,   152,   166,
     139,   151,   986,   332,   150,   999,   375,   592,   404,   377,
     994,  1011,   265,   266,   150,  1204,     5,  2024,  1635,   527,
     691,   161,   692,  1019,   261,   613,  1748,   336,  1105,   166,
     314,   281,   315,  1006,   150,   584,   585,   309,  1299,   698,
     691,  1502,   692,   499,   502,  1267,     4,   407,   724,   386,
     504,   313,   417,   420,   887,  1108,   282,   584,   585,   261,
    1109,   584,   585,   716,   335,   584,   585,   133,   824,   584,
     585,   134,   283,   284,   135,   371,   894,   714,   290,   292,
     898,   295,   584,   585,  1389,   715,   584,   585,  1407,   663,
     452,   665,  1519,   584,   585,   720,   141,  1393,   674,   398,
     399,   462,   723,   721,   506,  1745,   405,   725,  1362,   409,
     724,  1250,  1848,   726,   419,   419,   316,   310,   136,   411,
     545,  2005,   419,   153,  1820,   154,   939,  1401,   941,   584,
     585,  2007,   137,   430,  1097,   261,  1994,   545,  1293,   179,
     261,  1403,   724,   286,   287,   261,   739,   545,  1849,   459,
     460,   461,   419,   288,   398,   399,   261,   289,   728,   261,
     261,   261,   261,   419,   726,   138,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   488,
     489,   490,   491,   492,   493,   985,   495,   496,   142,   107,
     107,  1636,   498,  1268,  1269,  1270,  1271,   686,   107,   107,
     261,   514,   515,   500,   503,  1466,   311,   162,   610,   107,
     505,   163,  1406,   261,   134,  1012,   261,   528,   167,   992,
     953,   140,   168,   557,   558,   559,   333,  1260,   376,   107,
     261,   378,   107,   261,   261,   261,   261,  1205,  2025,  1908,
     162,   261,   261,   261,  1002,  1012,   337,   261,   167,   335,
     398,   399,  1003,   699,   153,   700,   154,  -528,   143,   701,
     312,   605,   606,   607,   507,   501,   387,  1250,   144,  1272,
     388,  1402,   261,   261,   261,   619,   620,   717,   883,   718,
     885,   886,   153,   719,   154,  1404,   261,   261,   672,  1251,
    1254,   145,  1946,   579,   580,  1297,  1651,   899,   146,   584,
     585,   588,   593,   739,   394,   395,   396,   397,   638,   639,
     640,  1250,   259,  1879,   644,   645,   646,   647,   648,   649,
     650,  1880,   651,  2020,   398,   399,   652,   653,   584,   585,
     656,   398,   399,  1253,   546,   933,   547,  1087,   584,   585,
     548,   183,   148,   666,   184,   584,   585,   185,   398,   399,
     419,   546,   296,   547,   261,   261,   157,   548,   398,   399,
     158,   670,   147,   671,  1850,   687,   688,   548,   584,   585,
     261,   149,   967,  1467,  1468,   691,   702,   692,   584,   585,
     584,   585,   384,  1207,   159,  1162,   385,  1851,   394,   395,
     396,   397,   584,   585,   586,   733,   798,  1852,   800,   261,
     802,   803,  1163,  1352,   277,  1353,   587,   278,   398,   399,
    1164,  1165,  1166,   305,  1360,   306,  1167,  1168,   815,   816,
     584,   585,   394,   395,   396,   993,   286,   287,   398,   399,
     691,   529,   692,   693,  2050,  -530,   288,   410,   297,  1853,
     294,  1373,   298,  1375,   456,  1377,   261,  1379,   299,   300,
     160,   301,   302,   261,   794,   584,   585,   486,   419,   487,
     419,   261,   419,   419,   419,   811,   812,   813,   814,   303,
     394,   395,   396,   397,  1979,   261,   261,   261,   261,   261,
     419,   419,   261,   152,   181,   152,   818,   261,   820,   164,
     398,   399,   825,   584,   585,  2098,  1405,   165,   259,   394,
     395,   396,   397,   584,   585,   584,   585,   594,   261,   584,
     585,   630,   844,   134,   394,   395,   396,   397,   169,   398,
     399,   595,  1980,  1448,  1981,   596,   270,   509,  1982,   271,
     510,   556,   272,   511,   273,   512,   170,   261,   261,   565,
     567,   569,  1587,  1588,   940,   574,   942,   943,   944,   945,
     946,   947,   987,   949,   950,   951,   952,   584,   585,   957,
     958,   959,   411,   411,    59,    60,    61,    62,   180,  1162,
     584,   585,  1488,   738,   744,   171,  1983,   739,   739,    73,
     584,   585,    76,   261,   261,   261,  1163,  1151,  1504,  2034,
    1627,  1628,   890,   891,  1164,  1165,  1166,   580,   749,  2035,
    1167,  1168,   739,   584,   585,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   172,   419,   419,   419,   419,   955,
     173,   419,   419,   419,   152,   961,   762,   960,   261,  1024,
     739,   174,   584,   585,  1028,   584,   585,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,  2044,   675,   676,  2079,   544,   182,   584,   585,  1764,
     261,  1741,   823,   852,   175,   996,   739,   739,   689,   539,
     540,   668,   542,   543,   267,   263,  2080,   268,   544,   269,
    1604,   679,   261,  1015,   680,  1162,   176,   681,   261,   682,
     691,   419,   692,   691,  1026,   692,   419,   177,  1227,  1909,
    1910,   739,  1163,   974,   261,  1911,   261,   975,   178,   186,
    1164,  1165,  1166,  1123,   187,   150,  1167,  1168,   668,   542,
     543,   188,   189,   190,   262,   544,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   379,   209,   210,   211,   212,   213,   214,
     535,   536,   537,   538,   539,   540,   668,   542,   543,   801,
     279,   264,   261,   544,   398,   399,   220,   221,   222,   223,
     280,  -533,  1652,   556,   224,   285,  1162,  2011,   274,  1913,
    1914,   275,   293,   276,  1661,  1911,   225,   226,   227,   691,
     304,   692,   849,  1163,   228,    21,  2037,   691,   307,   692,
     157,  1164,  1165,  1166,  1001,   261,   170,  1167,  1168,  1007,
    1004,  1162,  1008,  1114,  1009,  1406,   261,   739,   321,   308,
     319,   529,   435,   320,   261,  1146,  1147,   440,  1163,   739,
     739,  1190,   445,   317,   318,   739,  1164,  1165,  1166,   322,
    2060,  1191,  1167,  1168,  1192,   739,   458,   261,   739,  1252,
    1255,  1233,  1263,  1337,  1359,   739,   739,   739,   739,  1435,
    1111,   323,   328,  1112,  1406,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   668,   542,   543,  1229,
    1364,  1386,  1230,   544,   739,   739,   695,  2081,  1492,  1765,
    1493,   340,   739,  1494,   739,  1154,  1495,   739,   341,  1545,
     739,   236,  1160,   739,  1571,   237,  1171,   329,   739,  1658,
     239,   240,   241,  1659,   242,   243,   244,  1757,  1292,  1800,
     107,   739,   330,  1801,  1809,  1831,  1832,   552,  1810,   739,
     739,   331,  1847,  1885,   245,   380,  1801,  1886,  1308,   247,
    1309,  1901,   261,  1935,   325,  1801,  1936,   739,   571,   342,
     724,   250,   338,   339,  1474,  1962,  1262,  1663,  1664,  1801,
    1970,   261,  1978,  1992,   739,   372,   739,  1801,   261,   261,
     261,   261,  2040,   389,   383,  2041,   739,  1737,  1738,   739,
     419,  2042,  2043,   390,   414,   739,   739,  1361,  1363,  2045,
    1300,  2047,  2071,   739,  2082,  1886,  1801,   415,   739,  2095,
    1342,  1343,  1314,  2096,  1315,   261,   261,  1725,   261,  1726,
     261,   261,   134,   261,   426,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   428,   438,   261,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   737,   542,
     543,   508,  1307,   443,  2109,   544,  2112,   691,  1801,   692,
    2113,   457,   370,   494,   374,   497,   513,   516,   517,   518,
     573,   261,   419,   419,   385,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   668,   542,   543,   713,
     553,   554,   261,   544,   611,  1436,   408,   560,   561,   562,
     570,   614,   261,   261,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   668,   542,   543,   563,   429,
     575,   577,   544,   578,   597,   598,   599,  1440,   615,   600,
     601,  1442,  1131,   602,   603,   616,   608,   625,   626,   612,
    1446,   633,  1447,   617,   618,  1449,   621,   622,   623,   659,
     641,   632,   642,   643,   654,  1361,  1363,   655,   657,   660,
     261,   658,   662,   664,   661,   677,  1645,   683,   690,   696,
    1647,   697,   133,   261,   261,   261,   703,  1657,   730,   734,
     756,   735,   760,   763,   261,   764,   765,   766,   795,   419,
     806,   808,   809,   419,   821,  1490,  1249,   810,   847,   544,
     856,   873,   419,   857,   419,   875,   877,   419,   881,   882,
     884,   910,   912,   931,   913,   915,   922,   923,   261,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   668,   542,
     543,  1917,   934,   968,   973,   544,   977,   335,  1479,  1480,
     989,   978,   979,   980,   878,   879,   981,   988,   990,  1000,
    1243,  1005,  1018,  1020,  1030,  1023,  1025,   419,  1027,  1031,
    1034,  1865,  1035,  1038,  1039,  1041,  1042,  1043,  1044,  1266,
    1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,   261,  1054,
    1055,  1056,  1330,  1059,  1060,  1085,  1086,  1094,  1115,   261,
     919,   920,   921,  1099,  1095,   261,  1096,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   668,   542,
     543,  1101,  1102,  1310,  1311,   544,  1313,  1103,  1316,  1317,
    1104,  1319,  1125,  1321,  1322,  1323,  1324,  1325,  1326,  1327,
    1328,  1329,  1110,  1120,  1126,   962,  1132,  1134,  1135,  1137,
    1139,  1136,  1653,  1138,   261,   261,   261,  1141,  1157,  1140,
     261,  1142,   261,  1149,   261,   678,   261,  1158,   261,   261,
     261,  1161,  1183,  1790,  1185,  1212,  1196,   991,  1197,  1341,
    1198,  1210,  1211,  1199,  1223,   261,  1226,  1215,  1225,  1236,
    1232,  1235,  1237,  1240,   150,   343,   261,  1241,  1242,  1014,
    1356,  1258,  1259,  1264,   261,  1021,  1265,   261,  1278,  1287,
    1365,  -531,  1288,  1289,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   668,   542,   543,  1682,  1290,
    1294,  1291,   544,  1301,  1312,  1603,   344,   345,   346,   347,
     348,   349,   350,   351,   352,  1318,  1320,  1331,  1367,   353,
     354,   355,   356,  1368,  1714,  1369,  1355,   357,   358,   359,
     335,  1372,   360,  1381,   361,  1344,   419,   419,  1418,  1382,
    1383,  1384,   261,  1385,  1387,   362,  1395,   363,  1394,  1088,
    1399,  1429,  1430,  1431,  1398,  1409,  1400,  1410,  1420,  1411,
     419,   819,  1412,  1413,  1414,   261,  1415,  1416,  1417,   261,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   668,   542,   543,   392,  1421,  1422,  1423,   544,  1424,
    1425,  1426,  1119,  1427,  1432,  1437,  1458,  1438,  1450,  1443,
    1452,  1465,  1444,  1124,   862,   865,   868,   871,   533,   534,
     535,   536,   537,   538,   539,   540,   668,   542,   543,  1451,
    1694,  1453,  1457,   544,  1459,  1770,  1470,  1714,  1772,  1471,
    1483,  1473,  1476,  1477,  1148,  1419,  1481,  1484,  1923,  1485,
    1487,   261,   261,  1501,  1505,  1506,  1515,  1517,  1516,  1518,
    1520,   364,   365,   366,  1521,  1526,  1513,  1940,   411,   411,
    1522,  1527,   367,  1528,   261,  1529,   368,  1525,   369,   107,
     261,  1530,  1535,  1531,  1534,  1532,  1536,  1537,  1538,   261,
    1539,  1540,  1541,  1542,  1543,  1544,  1112,   419,  1554,  1565,
     419,  1567,  1568,  1570,   691,  1575,   692,   956,  1456,  1576,
    1584,  1585,  1586,  1592,  1593,   261,  1749,  1750,  1751,  1752,
    1753,  1755,  1262,  1594,  1595,  1600,   335,  1601,   261,  1607,
    1608,  1609,  1572,  1573,  1574,  1610,  1611,  1612,  1577,  1615,
    1578,  1987,  1579,  1617,  1580,  1620,  1581,  1582,  1583,   150,
     343,  1622,  1621,  1626,  1630,  1633,  1640,  1230,  1648,  1649,
    1665,  1655,  1654,  1598,  1671,  1282,  1283,  1284,  1285,  1670,
    -532,  1672,   261,  1673,  1606,  1674,  1675,  1676,  1677,  1695,
    2012,  1472,  1614,  1683,  1687,  1701,  1696,  1697,  1700,  1033,
    1702,   344,   345,   346,   347,   348,   349,   350,   351,   352,
    1704,  1705,  1713,  1716,   353,   354,   355,   356,  1718,   261,
    1715,  1720,   357,   358,   359,  1721,  1722,   360,  1723,   361,
    1724,   261,  1727,  1332,  1742,  1746,  1747,  1756,  1760,  1777,
     362,  1786,   363,  1778,   261,  1787,  1779,  1812,  1789,  1793,
     419,  1804,  1819,  1808,  1817,  1829,  1830,  1835,  1836,  1842,
    1669,  1838,  1839,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,  1844,   261,   392,
    1854,   544,  1845,  1685,  1856,   261,  1861,  1862,  1871,  1893,
    1868,  1873,  1874,  1869,  1870,  1876,  1877,  1875,  1878,  1883,
    1366,  1894,  1895,  1896,  1897,  1899,  1900,   261,  1920,  1921,
     261,  1925,  1937,  1938,  1939,  1941,  1947,  1954,  1950,  1951,
    1956,   261,   411,  1966,  1963,   261,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
    1967,  1969,  1971,  1973,   544,  1974,   364,   365,   366,  1985,
     335,  1986,  1988,  1977,  1989,  1996,  2003,   367,  2008,  2013,
     261,   368,  2027,   369,   107,  2046,  2061,  1927,  1928,  1929,
    1930,  1931,  2062,  2069,  2063,  2064,  2066,  2067,  2068,  2072,
    2087,  1439,  1669,  2086,  2094,   398,   399,  2097,   261,  2105,
    2110,  2111,  -529,  2114,  1489,  2115,  2021,  1761,  1503,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     668,   542,   543,   729,  1557,  1691,  1889,   544,  1866,  1524,
    1717,   112,   122,  1783,  1811,   529,   123,   124,  1964,   859,
    1915,  1642,  1968,  1566,   130,     0,  1792,     0,  1788,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1256,
       0,     0,     0,     0,     0,     0,   261,   261,   261,   261,
     261,     0,     0,     0,  1596,     0,     0,     0,     0,     0,
       0,     0,     0,   381,     0,     0,     0,     0,     0,     0,
    1669,  2004,     0,     0,  2084,  2006,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   406,
       0,  2018,   261,   416,  1646,     0,     0,   421,     0,     0,
       0,  2106,  2108,     0,     0,     0,     0,  1843,     0,     0,
       0,   261,     0,  1650,   431,   433,   436,   437,  2116,   439,
     433,   441,   442,     0,   444,   433,   446,   447,   448,   449,
     450,   451,     0,   453,   454,   455,   419,     0,     0,   433,
       0,     0,  2058,  2059,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   261,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   419,   419,  1656,  1884,     0,     0,     0,
       0,     0,     0,  1890,     0,     0,     0,     0,     0,     0,
     419,     0,     0,     0,  1616,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1669,     0,     0,     0,     0,
       0,     0,   519,   521,   523,   524,   433,     0,     0,  1922,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   551,
     433,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   737,   542,   543,   572,     0,     0,     0,   544,
       0,     0,     0,     0,     0,   582,   583,     0,  1669,     0,
       0,   583,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   604,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   668,   542,   543,  1965,     0,     0,     0,
     544,     0,   624,     0,     0,     0,   627,   628,   629,     0,
     631,     0,     0,     0,   634,   635,   636,     0,     0,   637,
       0,     0,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   668,   542,   543,     0,     0,     0,     0,
     544,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,   667,     0,   544,
       0,   673,     0,     0,     0,     0,     0,     0,  1728,  1729,
       0,     0,     0,  1510,     0,  1514,     0,   684,   685,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   712,     0,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,     0,   521,
    1669,   544,     0,     0,     0,   742,     0,     0,     0,     0,
     747,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   761,     0,     0,     0,     0,     0,
     767,   768,   769,   770,   771,   772,   773,   774,   775,   776,
     777,   778,   779,   780,   781,   782,   783,   785,   786,   787,
     788,   789,   790,   791,   791,     0,   796,   797,     0,   799,
    1759,  1669,     0,     0,     0,   805,     0,     0,   807,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   791,     0,     0,     0,     0,   433,     0,     0,
       0,     0,     0,     0,     0,     0,   826,   827,   828,   829,
     830,   831,   832,   833,   834,   835,   836,   837,   839,   841,
     842,   843,     0,   845,   846,  1643,     0,     0,     0,     0,
     853,   854,   855,     0,     0,     0,     0,   861,   864,   867,
     870,   872,     0,   874,     0,   876,     0,   433,   433,     0,
       0,  1859,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1834,   519,   667,   895,     0,
       0,     0,   900,   901,   902,   903,   904,   905,   906,   907,
     908,     0,  1686,     0,  1860,   914,     0,   916,     0,   917,
       0,     0,     0,   433,   433,   433,     0,     0,   924,   925,
     926,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,  1916,     0,   544,
       0,   691,     0,   692,   948,     0,  1872,     0,     0,  1631,
       0,     0,  1926,     0,     0,     0,     0,     0,   433,     0,
       0,   434,     0,   965,     0,   966,   434,   845,   846,     0,
       0,   434,     0,     0,   976,     0,     0,     0,     0,     0,
     982,     0,  1732,     0,     0,   434,     0,     0,     0,     0,
     433,     0,     0,     0,     0,     0,   997,   998,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,   433,     0,  1016,  1017,   544,     0,   433,  1022,
       0,     0,  1769,     0,     0,     0,     0,  1029,  1984,  1775,
    1776,  1032,     0,     0,   839,     0,  1036,     0,     0,     0,
       0,     0,     0,     0,     0,  1784,     0,     0,     0,   522,
       0,     0,   434,     0,     0,     0,     0,  1057,     0,     0,
       0,     0,     0,     0,     0,     0,   434,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2014,  2015,  2016,  2017,  2019,     0,     0,
       0,     0,   433,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,     0,     0,
       0,   544,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   668,   542,   543,     0,     0,     0,     0,
     544,     0,     0,     0,     0,   433,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   433,     0,  2065,     0,
       0,     0,     0,  1130,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   668,   542,   543,     0,     0,
       0,     0,   544,  1867,     0,     0,     0,   433,     0,     0,
       0,     0,     0,     0,     0,  1155,  1156,     0,     0,     0,
       0,  1159,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1892,     0,  1184,     0,     0,
    1186,     0,     0,     0,     0,     0,  1370,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1200,
       0,  1202,  1203,  2036,     0,   522,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
    1221,     0,     0,     0,   544,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1239,     0,
       0,     0,     0,     0,     0,  1245,  1246,  1247,  1248,     0,
       0,     0,   784,  1257,     0,     0,     0,     0,     0,   792,
     793,     0,     0,     0,     0,     0,     0,  1281,   433,   433,
     433,   433,  1286,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,   817,     0,
       0,   544,     0,   434,     0,     0,     0,     0,     0,     0,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   668,   542,   543,   840,  1953,     0,  1995,   544,     0,
     927,     0,     0,     0,     0,     0,   433,     0,   888,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1333,
       0,     0,     0,   434,   434,     0,     0,     0,     0,  1334,
    1335,  1336,     0,     0,     0,     0,  1338,  1339,     0,  1340,
       7,     8,     0,   529,     0,     0,  1346,     0,  1347,  1348,
    1349,  1350,  1351,     0,     0,     0,     0,     0,     0,  1354,
       0,     0,   529,     0,  1357,  1358,     0,     0,     0,   434,
     434,   434,     0,   433,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1374,     0,  1376,     0,  1378,     0,  1380,
       0,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,   935,     0,     0,   544,
    1397,     0,     0,     0,   434,     0,     0,   704,    25,    26,
     705,    28,    29,   706,    31,   707,    33,    34,    35,    36,
       0,     0,     0,    38,    39,    40,     0,     0,    42,     0,
       0,     0,  1428,     0,   708,    48,   434,     0,    50,   709,
       0,    53,   710,     0,   433,     0,     0,     0,     0,     0,
       0,     0,  1441,     0,     0,     0,     0,     0,   434,     0,
      70,     0,     0,     0,   434,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1455,     0,     0,     0,     0,     0,
     840,     0,  1037,     0,    84,    85,    86,     0,  1464,     0,
       0,  1469,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   668,   542,   543,     0,     0,     0,     0,
     544,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1497,  1498,  1499,  1500,     0,     0,
       0,     0,     0,     0,     0,  1507,  1509,     0,   434,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,     0,     0,   896,     0,   544,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   737,
     542,   543,     0,     0,     0,     0,   544,     0,     0,     0,
       0,   434,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   434,     0,     0,   694,     0,     0,     0,     0,
       0,     0,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   668,   542,   543,     0,     0,     7,     8,
     544,     0,     0,   434,     0,     0,  1589,  1590,  1591,     0,
       0,     0,     0,     0,     0,  1597,     0,  1599,     0,     0,
       0,     0,     0,     0,  1602,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   433,     0,     0,
       0,     0,  1618,     0,     0,     0,     0,  1117,     0,     0,
    1623,  1624,  1625,     0,     0,     0,     0,     0,     0,     0,
    1634,     0,     0,     0,     0,     0,     0,     0,     0,  1644,
       0,     0,     0,     0,     0,   704,    25,    26,   705,    28,
      29,   706,    31,   707,    33,    34,    35,    36,     0,     0,
       0,    38,    39,    40,  1660,     0,    42,  1118,     0,     0,
    1666,  1667,   708,    48,     0,     0,    50,   709,     0,    53,
     710,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     850,     0,     0,     0,   434,   434,   434,   434,    70,  1689,
       0,     0,     0,     0,     0,     0,     0,  1692,  1693,     0,
       0,     0,     0,     0,  1698,  1699,     0,     0,     0,     0,
       0,  1703,    84,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1706,  1707,
    1708,     0,     0,     0,     0,     0,  1709,  1710,  1711,  1712,
       0,     0,   434,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1719,     0,     0,     0,     0,     0,     0,     0,
       0,   433,   433,  1730,     0,  1731,     0,     0,     0,     0,
       0,  1739,  1740,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   918,     0,     0,     0,     0,     0,     0,
     433,     0,     0,     0,  1758,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1768,     0,     0,  1771,   434,
       0,     0,  1774,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,     0,  1785,
       0,   544,     0,     0,     0,  1434,     0,     0,     0,     0,
       0,     0,  1797,     0,     0,     0,     0,  1803,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1805,     0,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,     0,     0,
       0,   544,     0,     0,     7,     8,     0,     0,     0,     0,
     434,     0,  1828,     0,     0,     0,     0,  1061,  1062,  1063,
    1064,  1065,  1066,  1067,  1068,  1069,  1070,  1071,     0,  1073,
    1074,  1075,  1076,  1837,  1078,  1079,  1080,  1081,     0,     0,
       0,     0,  1846,     0,     0,     0,     0,     0,  1091,     0,
    1093,   521,     0,     0,     0,     0,     0,     0,     0,     0,
    1857,  1858,     0,     0,   433,     0,  1106,  1107,     0,     0,
       0,     0,     0,     0,     0,  1116,     0,     0,     0,     0,
       0,   704,    25,    26,   705,    28,    29,   706,    31,   707,
      33,    34,    35,    36,     0,  1881,  1882,    38,    39,    40,
       0,     0,    42,     0,     0,     0,     0,  1891,   708,    48,
       0,     0,    50,   709,  1898,    53,   710,     0,     0,     0,
    1902,  1903,  1904,  1905,  1906,     0,     0,     0,     0,     0,
     433,     0,     0,     0,    70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   433,     0,     0,     0,     0,
       0,     0,     0,  1932,     0,     0,     0,     0,    84,    85,
      86,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,  1943,     0,   544,
       0,     0,     0,  1948,  1949,     0,     0,     0,     0,  1206,
    1208,  1209,     0,     0,     0,  1213,  1214,     0,     0,  1217,
    1218,  1219,  1220,     0,  1222,     0,     0,     0,     0,  1228,
       0,     0,     0,     0,     0,     0,  1972,     0,     0,     0,
       0,     0,     0,   434,     0,     0,     0,     0,     0,   963,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1990,  1991,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1997,  1998,  1999,  2000,  2001,  2002,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2010,     0,     0,     0,     0,   433,   433,   433,   433,
     433,     0,  1305,  1306,     0,     0,  1803,     0,     0,     0,
    2026,     0,     0,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,     0,     0,
       0,   544,     0,     0,     0,  1690,     0,  1735,     0,     0,
    2049,  1736,     0,     0,     0,  2052,  2053,  2054,  2055,  2056,
    2057,   187,   150,     0,     0,     0,     0,     0,   188,   189,
     190,   433,     0,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     379,   209,   210,   211,   212,   213,   214,     0,     0,     0,
       0,     0,  2088,  2089,  2090,  2091,  2092,  2093,     0,     0,
       0,     0,     0,   220,   221,   222,   223,   434,   434,     0,
       0,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,   226,   227,     0,     0,     0,     0,
       0,   228,    21,     0,     0,     0,   434,     0,     0,     0,
     187,   150,   343,     0,   391,     0,     0,   188,   189,   190,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   379,
     209,   210,   211,   212,   213,   214,     0,     0,     0,     0,
       0,     0,     0,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   220,   221,   222,   223,   353,   354,   355,   356,
     224,     0,     0,     0,   357,   358,   359,     0,     0,   360,
       0,   361,   225,   226,   227,     0,     0,     0,     0,     0,
     228,    21,   362,     0,   363,     0,     0,     0,     0,     0,
       0,     0,     0,  1478,     0,     0,     0,     0,   236,     0,
       0,     0,   237,     0,     0,     0,     0,   239,   240,   241,
       0,   242,   243,   244,     0,     0,     0,   107,     0,     0,
       0,   392,     0,     0,     0,     0,     0,     0,     0,     0,
    1511,   589,   590,     0,     0,     0,   247,   522,     0,     0,
       0,   591,     0,     0,     0,   289,     0,     0,   250,     0,
     434,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1546,  1547,  1548,  1549,  1550,     0,     0,
       0,     0,  1555,  1556,     0,  1558,     0,     0,     0,     0,
     393,  1564,     0,     0,     0,     0,     0,   236,   364,   365,
     366,   237,     0,     0,  1569,     0,   239,   240,   241,   367,
     242,   243,   244,   368,     0,   369,   107,   394,   395,   396,
     397,     0,     0,     0,     0,     0,   434,     0,     0,     0,
     245,   380,     0,     0,     0,   247,     0,   398,   399,     0,
     400,   434,   401,     0,     0,     0,   402,   250,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,     0,     0,     0,     0,   544,     0,     0,     0,
       0,     0,  1762,     0,     0,     0,  1763,     0,     0,  1629,
       0,  1632,     0,     0,     0,  1639,   343,  1641,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,     0,     0,     0,     0,   544,     0,     0,     0,
       0,     0,  1918,     0,     0,     0,  1919,     0,     0,  1662,
       0,     0,     0,     0,     0,     0,     0,   344,   345,   346,
     347,   348,   349,   350,   351,   352,     0,     0,     0,     0,
     353,   354,   355,   356,     0,     0,     0,     0,   357,   358,
     359,     0,     0,   360,     0,   361,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   362,     0,   363,     0,
       0,     0,   434,   434,   434,   434,   434,     0,     0,     0,
       0,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,   187,     6,   343,     0,   544,
       0,     0,   188,   189,   190,  1010,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,     0,   434,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   220,   221,   222,
     223,   353,   354,   355,   356,   224,     0,     0,     0,   357,
     358,   359,     0,     0,   360,     0,   361,   225,   226,   227,
       0,     0,   364,   365,   366,   228,    21,   362,     0,   363,
       0,     0,   229,   367,     0,   230,     0,   368,   231,   369,
     232,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,  1794,  1795,     0,     0,     0,     0,   233,
       0,    49,     0,     0,   234,     0,   235,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
      65,    66,    67,    68,    69,     0,     0,     0,    73,     0,
       0,    76,     0,     0,     0,     0,  1821,  1822,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,     0,     0,     0,     0,   544,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   722,     0,     0,     0,
       0,     0,   236,   364,   365,   366,   237,   238,     0,     0,
       0,   239,   240,   241,   367,   242,   243,   244,   368,     0,
     369,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1863,  1864,     0,     0,   245,   246,     0,     0,     0,
     247,     0,     0,     0,     0,   325,   187,     6,   343,  1512,
       0,     0,   250,   188,   189,   190,     0,     0,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,     0,     0,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   220,   221,
     222,   223,   353,   354,   355,   356,   224,     0,     0,     0,
     357,   358,   359,     0,     0,   360,     0,   361,   225,   226,
     227,     0,     0,     0,     0,     0,   228,    21,   362,     0,
     363,     0,     0,   229,     0,     0,   230,     0,     0,   231,
       0,   232,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     233,     0,    49,     0,     0,   234,     0,   235,     0,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    65,    66,    67,    68,    69,     0,     0,     0,    73,
       0,     0,    76,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,     0,     0,
       0,   544,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   888,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   236,   364,   365,   366,   237,   238,     0,
       0,     0,   239,   240,   241,   367,   242,   243,   244,   368,
       0,   369,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   245,   246,     0,     0,
       0,   247,     0,     0,     0,     0,   325,     0,     0,     0,
     249,     0,     0,   250,     0,     0,     0,     0,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,   187,     6,   324,     0,   544,     0,     0,   188,
     189,   190,  1100,  2074,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   220,   221,   222,   223,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,   226,   227,     0,     0,     0,
       0,     0,   228,    21,     0,     0,     0,     0,     0,   229,
       0,     0,   230,     0,     0,   231,     0,   232,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   150,   343,   233,     0,    49,     0,
       0,   234,     0,   235,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,    65,    66,    67,
      68,    69,     0,     0,     0,    73,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,   344,   345,   346,   347,
     348,   349,   350,   351,   352,     0,     0,     0,     0,   353,
     354,   355,   356,     0,     0,     0,     0,   357,   358,   359,
       0,     0,   360,     0,   361,     0,     0,     0,     0,   236,
       0,     0,     0,   237,   238,   362,     0,   363,   239,   240,
     241,     0,   242,   243,   244,     0,     0,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   245,   246,     0,     0,     0,   247,     0,     0,
       0,     0,   325,   187,     6,  1605,   249,     0,     0,   250,
     188,   189,   190,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   220,   221,   222,   223,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,     0,
       0,   364,   365,   366,     0,   225,   226,   227,     0,     0,
       0,     0,   367,   228,    21,     0,   368,     0,   369,   107,
     229,     0,     0,   230,     0,     0,   231,     0,   232,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   373,   343,   233,     0,    49,
       0,     0,   234,     0,   235,     0,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,     0,     0,    65,    66,
      67,    68,    69,     0,     0,     0,    73,     0,     0,    76,
       0,     0,     0,     0,     0,     0,     0,   344,   345,   346,
     347,   348,   349,   350,   351,   352,     0,     0,     0,     0,
     353,   354,   355,   356,     0,     0,     0,     0,   357,   358,
     359,     0,     0,   360,     0,   361,     0,     0,     0,     0,
     236,     0,     0,     0,   237,   238,   362,     0,   363,   239,
     240,   241,     0,   242,   243,   244,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   245,   246,     0,     0,     0,   247,     0,
       0,     0,     0,   325,   187,     6,     0,   249,     0,     0,
     250,   188,   189,   190,     0,     0,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   220,   221,   222,   223,
       0,     0,     0,     0,   224,     0,     0,     0,     0,     0,
       0,     0,   364,   365,   366,     0,   225,   226,   227,     0,
       0,     0,     0,   367,   228,    21,     0,   368,     0,   369,
       0,   229,     0,     0,   230,     0,     0,   231,     0,   232,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   233,     0,
      49,     0,     0,   234,     0,   235,     0,     0,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,     0,    65,
      66,    67,    68,    69,     0,     0,     0,    73,     0,     0,
      76,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   889,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   236,     0,     0,     0,   237,   238,     0,     0,     0,
     239,   240,   241,     0,   242,   243,   244,     0,     0,     0,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   589,  1754,     0,     0,     0,   247,
       0,     0,     0,     0,   591,   187,     6,     0,   289,   525,
       0,   250,   188,   189,   190,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   220,   221,   222,
     223,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   225,   226,   227,
       0,     0,     0,     0,     0,   228,    21,     0,     0,     0,
       0,     0,   229,     0,     0,   230,     0,     0,   231,     0,
     232,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   233,
       0,    49,     0,     0,   234,     0,   235,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
      65,    66,    67,    68,    69,     0,     0,     0,    73,     0,
       0,    76,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   668,   542,   543,     0,     0,     0,     0,
     544,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     932,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   236,     0,     0,     0,   237,   238,     0,     0,
       0,   239,   240,   241,     0,   242,   243,   244,     0,     0,
       0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   245,   246,     0,     0,     0,
     247,     0,     0,     0,     0,   248,   187,     6,     0,   249,
       0,     0,   250,   188,   189,   190,     0,     0,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   220,   221,
     222,   223,     0,     0,     0,     0,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,   226,
     227,     0,     0,     0,     0,     0,   228,    21,     0,     0,
       0,     0,     0,   229,     0,     0,   230,     0,     0,   231,
       0,   232,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     233,     0,    49,     0,     0,   234,     0,   235,     0,     0,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,    65,    66,    67,    68,    69,     0,     0,     0,    73,
       0,     0,    76,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,     0,     0,
       0,   544,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1072,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   236,     0,     0,     0,   237,   238,     0,
       0,     0,   239,   240,   241,     0,   242,   243,   244,     0,
       0,     0,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   245,   246,     0,     0,
       0,   247,     0,     0,     0,     0,   325,   187,     6,     0,
     249,     0,     0,   250,   188,   189,   190,     0,     0,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   220,
     221,   222,   223,     0,     0,     0,     0,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   225,
     226,   227,     0,     0,     0,     0,     0,   228,    21,     0,
       0,     0,     0,     0,   229,     0,     0,   230,     0,     0,
     231,     0,   232,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   233,     0,    49,     0,     0,   234,     0,   235,     0,
       0,     0,     0,     0,     0,    59,    60,    61,    62,    63,
       0,     0,    65,    66,    67,    68,    69,     0,     0,     0,
      73,     0,     0,    76,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   668,   542,   543,     0,     0,
       0,     0,   544,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1082,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   236,     0,     0,     0,   237,   238,
       0,     0,     0,   239,   240,   241,     0,   242,   243,   244,
       0,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   245,   432,     0,
       0,     0,   247,     0,     0,     0,     0,   325,   187,     6,
       0,   520,     0,     0,   250,   188,   189,   190,     0,     0,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     220,   221,   222,   223,     0,     0,     0,     0,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,   226,   227,     0,     0,     0,     0,     0,   228,    21,
       0,     0,     0,     0,     0,   229,     0,     0,   230,     0,
       0,   231,     0,   232,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   233,     0,    49,     0,     0,   234,     0,   235,
       0,     0,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,    65,    66,    67,    68,    69,     0,     0,
       0,    73,     0,     0,    76,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   668,   542,   543,     0,
       0,     0,     0,   544,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1083,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   236,     0,     0,     0,   237,
     238,     0,     0,     0,   239,   240,   241,     0,   242,   243,
     244,     0,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   245,   432,
       0,     0,     0,   247,     0,     0,     0,     0,   325,   187,
       6,     0,     0,   525,     0,   250,   188,   189,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   220,   221,   222,   223,     0,     0,     0,     0,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,   226,   227,     0,     0,     0,     0,     0,   228,
      21,     0,     0,     0,     0,     0,   229,     0,     0,   230,
       0,     0,   231,     0,   232,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   233,     0,    49,     0,     0,   234,     0,
     235,     0,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    63,     0,     0,    65,    66,    67,    68,    69,     0,
       0,     0,    73,     0,     0,    76,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1084,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   236,     0,     0,     0,
     237,   238,     0,     0,     0,   239,   240,   241,     0,   242,
     243,   244,     0,     0,     0,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   245,
     246,     0,     0,     0,   247,     0,     0,     0,     0,   555,
     187,     6,     0,   249,     0,     0,   250,   188,   189,   190,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   220,   221,   222,   223,     0,     0,     0,     0,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   225,   226,   227,     0,     0,     0,     0,     0,
     228,    21,     0,     0,     0,     0,     0,   229,     0,     0,
     230,     0,     0,   231,     0,   232,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   233,     0,    49,     0,     0,   234,
       0,   235,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,    65,    66,    67,    68,    69,
       0,     0,     0,    73,     0,     0,    76,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   668,   542,
     543,     0,     0,     0,     0,   544,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1089,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   236,     0,     0,
       0,   237,   238,     0,     0,     0,   239,   240,   241,     0,
     242,   243,   244,     0,     0,     0,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     245,   246,     0,     0,     0,   247,     0,     0,     0,     0,
     564,   187,     6,     0,   249,     0,     0,   250,   188,   189,
     190,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   220,   221,   222,   223,     0,     0,     0,
       0,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,   226,   227,     0,     0,     0,     0,
       0,   228,    21,     0,     0,     0,     0,     0,   229,     0,
       0,   230,     0,     0,   231,     0,   232,     0,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   233,     0,    49,     0,     0,
     234,     0,   235,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,     0,     0,    65,    66,    67,    68,
      69,     0,     0,     0,    73,     0,     0,    76,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,     0,     0,     0,     0,   544,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1090,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   236,     0,
       0,     0,   237,   238,     0,     0,     0,   239,   240,   241,
       0,   242,   243,   244,     0,     0,     0,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   245,   246,     0,     0,     0,   247,     0,     0,     0,
       0,   566,   187,     6,     0,   249,     0,     0,   250,   188,
     189,   190,     0,     0,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   220,   221,   222,   223,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,   226,   227,     0,     0,     0,
       0,     0,   228,    21,     0,     0,     0,     0,     0,   229,
       0,     0,   230,     0,     0,   231,     0,   232,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   233,     0,    49,     0,
       0,   234,     0,   235,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,    65,    66,    67,
      68,    69,     0,     0,     0,    73,     0,     0,    76,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     668,   542,   543,     0,     0,     0,     0,   544,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1092,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   236,
       0,     0,     0,   237,   238,     0,     0,     0,   239,   240,
     241,     0,   242,   243,   244,     0,     0,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   245,   246,     0,     0,     0,   247,     0,     0,
       0,     0,   568,   187,     6,     0,   249,     0,     0,   250,
     188,   189,   190,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   220,   221,   222,   223,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,   226,   227,     0,     0,
       0,     0,     0,   228,    21,     0,     0,     0,     0,     0,
     229,     0,     0,   230,     0,     0,   231,     0,   232,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   233,     0,    49,
       0,     0,   234,     0,   235,     0,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,     0,     0,    65,    66,
      67,    68,    69,     0,     0,     0,    73,     0,     0,    76,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   668,   542,   543,     0,     0,     0,     0,   544,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1195,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     236,     0,     0,     0,   237,   238,     0,     0,     0,   239,
     240,   241,     0,   242,   243,   244,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   245,   432,     0,     0,     0,   247,     0,
       0,     0,     0,   325,   187,   150,   343,   838,     0,     0,
     250,   188,   189,   190,     0,     0,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   379,   209,   210,   211,   212,   213,   214,
       0,     0,     0,     0,     0,     0,     0,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   220,   221,   222,   223,
     353,   354,   355,   356,   224,     0,     7,     8,   357,   358,
     359,     0,     0,   360,     0,   361,   225,   226,   227,     0,
       0,     0,     0,     0,   228,    21,   362,     0,   363,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     668,   542,   543,     0,     0,     0,     0,   544,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1216,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,     0,     0,     0,     0,   544,     0,     0,     0,
       0,     0,  1175,   704,    25,    26,   705,    28,    29,   706,
      31,   707,    33,    34,    35,    36,     0,     0,     0,    38,
      39,    40,     0,     0,    42,     0,     0,     0,     0,     0,
     708,    48,     0,     0,    50,   709,     0,    53,   710,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   236,   364,   365,   366,   237,    70,     0,     0,     0,
     239,   240,   241,   367,   242,   243,   244,   368,     0,   369,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,    85,    86,     0,   245,   380,     0,     0,     0,   247,
       0,     0,     0,     0,   325,   187,     6,     0,  1508,     0,
       0,   250,   188,   189,   190,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   220,   221,   222,
     223,   964,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   225,   226,   227,
       0,     0,     0,     0,     0,   228,    21,     0,     0,     0,
       0,     0,   229,     0,     0,   230,     0,     0,   231,     0,
     232,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   233,
       0,    49,     0,     0,   234,     0,   235,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
      65,    66,    67,    68,    69,     0,     0,     0,    73,     0,
       0,    76,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   668,   542,   543,     0,     0,     0,     0,
     544,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1298,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   236,     0,     0,     0,   237,   238,     0,     0,
       0,   239,   240,   241,     0,   242,   243,   244,     0,     0,
       0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   245,   246,     0,     0,     0,
     247,     0,     0,     0,     0,   325,   187,   150,   343,  1613,
       0,     0,   250,   188,   189,   190,     0,     0,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   379,   209,   210,   211,   212,
     213,   214,     0,     0,     0,     0,     0,     0,     0,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   220,   221,
     222,   223,   353,   354,   355,   356,   224,     0,     0,     0,
     357,   358,   359,     0,     0,   360,     0,   361,   225,   226,
     227,     0,     0,     0,     0,     0,   228,    21,   362,     0,
     363,   187,   150,   343,     0,     0,     0,     0,   188,   189,
     190,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     379,   209,   210,   211,   212,   213,   214,     0,     0,     0,
       0,     0,     0,     0,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   220,   221,   222,   223,   353,   354,   355,
     356,   224,     0,     0,     0,   357,   358,   359,     0,     0,
     360,     0,   361,   225,   226,   227,     0,     0,     0,     0,
       0,   228,    21,   362,     0,   363,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   236,   364,   365,   366,   237,     0,     0,
       0,     0,   239,   240,   241,   367,   242,   243,   244,   368,
       0,   369,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   245,   380,     0,     0,
       0,   247,     0,     0,     0,     0,   325,     0,     0,     0,
    1767,     0,     0,   250,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   668,   542,   543,     0,     0,
       0,     0,   544,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1390,     0,     0,     0,     0,     0,   236,   364,
     365,   366,   237,     0,     0,     0,     0,   239,   240,   241,
     367,   242,   243,   244,   368,     0,   369,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   245,   380,     0,     0,     0,   247,     0,     0,     0,
       0,   325,   187,     6,     0,  1773,     0,     0,   250,   188,
     189,   190,     0,     0,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   220,   221,   222,   223,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,   226,   227,     0,     0,     0,
       0,     0,   228,    21,     0,     0,     0,     0,     0,   229,
       0,     0,   230,     0,     0,   231,     0,   232,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   233,     0,    49,     0,
       0,   234,     0,   235,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,    65,    66,    67,
      68,    69,     0,     0,     0,    73,     0,     0,    76,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     668,   542,   543,     0,     0,     0,     0,   544,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1391,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   236,
       0,     0,     0,   237,   238,     0,     0,     0,   239,   240,
     241,     0,   242,   243,   244,     0,     0,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   589,  1754,     0,     0,     0,   247,     0,     0,
       0,     0,   591,   187,     6,     0,   289,     0,     0,   250,
     188,   189,   190,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   220,   221,   222,   223,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,   226,   227,     0,     0,
       0,     0,     0,   228,    21,     0,     0,     0,     0,     0,
     229,     0,     0,   230,     0,     0,   231,     0,   232,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   233,     0,    49,
       0,     0,   234,     0,   235,     0,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,     0,     0,    65,    66,
      67,    68,    69,     0,     0,     0,    73,     0,     0,    76,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   668,   542,   543,     0,     0,     0,     0,   544,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1433,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     236,     0,     0,     0,   237,   238,     0,     0,     0,   239,
     240,   241,     0,   242,   243,   244,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   245,   432,     0,     0,     0,   247,   187,
     150,   343,     0,   325,     0,     0,   188,   189,   190,     0,
     250,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   379,   209,
     210,   211,   212,   213,   214,     0,     0,     0,     0,     0,
       0,     0,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   220,   221,   222,   223,   353,   354,   355,   356,   224,
       0,     0,     0,   357,   358,   359,     0,     0,   360,     0,
     361,   225,   226,   227,     0,     0,     0,     0,     0,   228,
      21,   362,     0,   363,   187,   150,     0,  1238,     0,     0,
       0,   188,   189,   190,     0,     0,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   379,   209,   210,   211,   212,   213,   214,
       0,     0,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   668,   542,   543,   220,   221,   222,   223,
     544,     0,     0,     0,   224,     0,     0,     0,     0,     0,
    1551,     0,     0,     0,     0,     0,   225,   226,   227,     0,
       0,     0,     0,     0,   228,    21,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,   236,   364,   365,   366,
     237,     0,     0,     0,  1552,   239,   240,   241,   367,   242,
     243,   244,   368,     0,   369,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   245,
     380,     0,     0,     0,   247,     0,     0,     0,     0,   325,
       0,     0,     0,     0,     0,     0,   250,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   668,   542,
     543,     0,     0,     0,     0,   544,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1553,     0,     0,     0,     0,
       0,   236,     0,     0,     0,   237,     0,     0,     0,     0,
     239,   240,   241,     0,   242,   243,   244,     0,     0,     0,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   245,   380,     0,     0,     0,   247,
     187,   150,     0,  1396,   325,     0,     0,   188,   189,   190,
       0,   250,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   379,
     209,   210,   211,   212,   213,   214,     0,     0,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,   220,   221,   222,   223,   544,     0,     0,     0,
     224,     0,     0,     0,     0,     0,  1559,     0,     0,     0,
       0,     0,   225,   226,   227,   187,   150,     0,  1454,     0,
     228,    21,   188,   189,   190,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   379,   209,   210,   211,   212,   213,
     214,     0,     0,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,   220,   221,   222,
     223,   544,     0,     0,     0,   224,     0,     0,     0,     0,
       0,  1560,     0,     0,     0,     0,     0,   225,   226,   227,
       0,     0,     0,     0,     0,   228,    21,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   668,   542,
     543,     0,     0,     0,     0,   544,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1561,     0,   236,     0,     0,
       0,   237,     0,     0,     0,     0,   239,   240,   241,     0,
     242,   243,   244,     0,     0,     0,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     245,   380,     0,     0,     0,   247,     0,     0,     0,     0,
     325,     0,     0,     0,     0,     0,     0,   250,     0,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     668,   542,   543,     0,     0,     0,     0,   544,     0,     0,
       0,     0,   236,     0,     0,     0,   237,  1562,     0,     0,
       0,   239,   240,   241,     0,   242,   243,   244,     0,     0,
       0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   245,   380,     0,     0,     0,
     247,   187,   150,     0,     0,   325,     0,     0,   188,   189,
     190,     0,   250,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     379,   209,   210,   211,   212,   213,   214,     0,     0,     7,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   220,   221,   222,   223,     0,     0,     0,
       0,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,   226,   227,     0,     0,     7,     8,
       0,   228,    21,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,     0,     0,
       0,   544,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1684,     0,     0,     0,     0,   704,    25,    26,   705,
      28,    29,   706,    31,   707,    33,    34,    35,    36,     0,
       0,     0,    38,    39,    40,     0,     0,    42,     0,     0,
       0,     0,     0,   708,    48,     0,     0,    50,   709,     0,
      53,   710,     0,     0,     0,   704,    25,    26,   705,    28,
      29,   706,    31,   707,    33,    34,    35,    36,     0,    70,
       0,    38,    39,    40,     7,     8,    42,     0,     0,     0,
       0,     0,   708,    48,     0,     0,    50,   709,   236,    53,
     710,     0,   237,    84,    85,    86,     0,   239,   240,   241,
       0,   242,   243,   244,     0,     0,     0,   107,    70,     0,
       0,     0,     7,     8,     0,     0,     0,     0,     0,     0,
       0,   245,   380,     0,     0,     0,   247,     0,     0,     0,
       0,   325,    84,    85,    86,     0,     0,     0,   250,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   704,    25,    26,   705,    28,    29,   706,    31,   707,
      33,    34,    35,    36,  1150,     0,     0,    38,    39,    40,
       0,     0,    42,     0,     0,     0,     7,     8,   708,    48,
       0,     0,    50,   709,     0,    53,   710,     0,     0,   704,
      25,    26,   705,    28,    29,   706,    31,   707,    33,    34,
      35,    36,     0,  1152,    70,    38,    39,    40,     0,     0,
      42,     0,     0,     0,     0,     0,   708,    48,     0,     0,
      50,   709,     0,    53,   710,     0,     0,     0,    84,    85,
      86,     7,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   704,    25,    26,   705,    28,    29,   706,
      31,   707,    33,    34,    35,    36,    84,    85,    86,    38,
      39,    40,     0,     0,    42,     0,     0,     0,     0,     0,
     708,    48,     0,     0,    50,   709,     0,    53,   710,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     0,  1153,
       0,     0,     0,     0,     0,     0,    70,     0,   704,    25,
      26,   705,    28,    29,   706,    31,   707,    33,    34,    35,
      36,     0,     0,     0,    38,    39,    40,     0,     0,    42,
      84,    85,    86,     7,     8,   708,    48,  1172,     0,    50,
     709,     0,    53,   710,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   668,   542,   543,     0,     0,
       0,    70,   544,     0,     0,     0,     0,     0,  1244,     0,
       0,     0,   704,    25,    26,   705,    28,    29,   706,    31,
     707,    33,    34,    35,    36,    84,    85,    86,    38,    39,
      40,     0,     0,    42,     0,     0,     0,     7,     8,   708,
      48,  1201,     0,    50,   709,     0,    53,   710,     0,     0,
     704,    25,    26,   705,    28,    29,   706,    31,   707,    33,
      34,    35,    36,     0,     0,    70,    38,    39,    40,     0,
       0,    42,     0,     0,     0,     0,     0,   708,    48,     0,
       0,    50,   709,     0,    53,   710,     0,     0,     0,    84,
      85,    86,     0,     0,     0,     0,  1234,     0,     0,     0,
       0,     0,     0,    70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   704,    25,    26,   705,    28,    29,
     706,    31,   707,    33,    34,    35,    36,    84,    85,    86,
      38,    39,    40,     0,     0,    42,     0,     0,     0,     0,
       0,   708,    48,     0,     0,    50,   709,     0,    53,   710,
      -4,     1,     0,     0,    -4,     0,     0,     0,     0,     0,
    1388,     0,     0,    -4,    -4,     0,     0,    70,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,     0,     0,     0,     0,   544,     0,     0,     0,
       0,    84,    85,    86,    -4,    -4,  1798,     0,  1975,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     668,   542,   543,     0,    -4,    -4,    -4,   544,     0,     0,
      -4,    -4,     0,    -4,     0,     0,     0,  1799,    -4,    -4,
       0,    -4,    -4,     0,    -4,     0,     0,     0,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,     0,     0,    -4,    -4,    -4,    -4,    -4,
       0,    -4,  2038,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
       0,    -4,    -4,    -4,    -4,    -4,    -4,     0,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,     0,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,     0,     6,     0,    -4,    -4,    -4,     0,     0,
       0,    -4,     7,     8,     0,     0,    -4,    -4,    -4,    -4,
       0,     0,    -4,     0,    -4,     0,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
       0,     0,     0,     9,    10,     0,    -4,    -4,    -4,     0,
       0,     0,     0,     0,     0,     0,     0,    -4,     0,    -4,
       0,     0,     0,    11,    12,    13,     0,     0,     0,    14,
      15,     0,    16,     0,     0,     0,     0,    17,    18,     0,
      19,    20,     0,    21,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,     0,     0,    37,    38,    39,    40,    41,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,     0,
      50,    51,    52,    53,    54,    55,     0,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,     0,     0,     0,    79,    80,    81,     0,     0,     0,
      82,     0,     0,     0,     0,    83,    84,    85,    86,   150,
     343,    87,     0,    88,     0,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,     7,
       8,     0,     0,     0,     0,   103,   104,   105,     0,     0,
       0,     0,     0,     0,     0,     0,   106,     0,   107,     0,
       0,   344,   345,   346,   347,   348,   349,   350,   351,   352,
       0,     0,     0,     0,   353,   354,   355,   356,     0,     0,
       0,     0,   357,   358,   359,     0,     0,   360,     0,   361,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     362,     0,   363,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   704,    25,    26,   705,
      28,    29,   706,    31,   707,    33,    34,    35,    36,     0,
       0,     0,    38,    39,    40,     0,     0,    42,     0,   392,
       0,     0,     0,   708,    48,     0,     0,    50,   709,     0,
      53,   710,     7,     8,     0,     0,   970,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
       0,     0,     0,   971,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   668,   542,   543,     0,     0,
       0,     0,   544,    84,    85,    86,     0,     0,     0,     0,
       0,     0,  1823,     0,     0,     0,   364,   365,   366,     0,
       0,     0,     0,     0,     0,     0,     0,   367,     0,     0,
       0,   368,     0,   369,   107,     0,     0,     0,     0,   704,
      25,    26,   705,    28,    29,   706,    31,   707,    33,    34,
      35,    36,     0,     0,     0,    38,    39,    40,     0,     0,
      42,     0,     0,     0,     0,     0,   708,    48,     0,     0,
      50,   709,     0,    53,   710,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   668,   542,   543,     0,
       0,     0,    70,   544,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1824,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,    85,    86,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     668,   542,   543,     0,     0,     0,     0,   544,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1825,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,     0,     0,     0,     0,   544,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1826,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   668,   542,
     543,     0,     0,     0,     0,   544,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1827,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1887,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   668,   542,   543,     0,
       0,     0,     0,   544,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1944,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   668,   542,   543,     0,     0,
       0,     0,   544,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1945,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,     0,     0,
       0,   544,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1957,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   668,   542,   543,     0,     0,     0,     0,
     544,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1958,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1959,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   668,   542,   543,     0,     0,     0,     0,   544,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1960,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     668,   542,   543,     0,     0,     0,     0,   544,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1961,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,     0,     0,     0,     0,   544,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1993,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   668,   542,
     543,     0,     0,     0,     0,   544,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2023,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2028,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   668,   542,   543,     0,
       0,     0,     0,   544,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2029,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   668,   542,   543,     0,     0,
       0,     0,   544,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2030,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,     0,     0,
       0,   544,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2031,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   668,   542,   543,     0,     0,     0,     0,
     544,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2032,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2033,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   668,   542,   543,     0,     0,     0,     0,   544,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2075,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     668,   542,   543,     0,     0,     0,     0,   544,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2076,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,     0,     0,     0,     0,   544,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2077,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   668,   542,
     543,     0,     0,     0,     0,   544,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2078,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
    1392,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,  1460,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
    1461,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,  1462,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
    1463,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,  1733,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
    1744,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,  1780,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
    1813,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,  1814,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
    1815,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,  1816,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
    1818,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,  1840,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
    1855,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,  1907,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
    1924,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,  1933,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
    1934,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,  1955,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
    2009,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,  2051,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
    2073,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,  2099,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
    2100,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,  2101,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
    2102,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,  2103,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
    2104,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,     0,   669,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   668,   542,   543,     0,
       0,     0,     0,   544,     0,     0,     0,     0,   880,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     668,   542,   543,     0,     0,     0,     0,   544,     0,     0,
       0,     0,  1833,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,     0,     0,
       0,   544,     0,   691,     0,   692,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,   938,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     668,   542,   543,     0,     0,     0,     0,   544,     0,     0,
       0,   984,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   668,   542,   543,     0,     0,     0,     0,
     544,     0,     0,     0,  1122,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   668,   542,   543,     0,
       0,     0,     0,   544,     0,     0,     0,  1188,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,     0,     0,     0,     0,   544,     0,     0,     0,
    1189,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,     0,     0,  1193,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   668,   542,   543,     0,     0,
       0,     0,   544,     0,     0,     0,  1194,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   668,   542,
     543,     0,     0,     0,     0,   544,     0,     0,     0,  1280,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   668,   542,   543,     0,     0,     0,     0,   544,     0,
       0,     0,  1296,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,     0,     0,
       0,   544,     0,     0,     0,  1491,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,     0,     0,  1619,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     668,   542,   543,     0,     0,     0,     0,   544,     0,     0,
       0,  1791,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   668,   542,   543,     0,     0,     0,     0,
     544,     0,     0,     0,  1841,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   668,   542,   543,     0,
       0,     0,     0,   544,     0,   736,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,   740,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   668,   542,
     543,     0,     0,     0,     0,   544,     0,   741,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,     0,     0,     0,     0,   544,     0,   743,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     668,   542,   543,     0,     0,     0,     0,   544,     0,   745,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   668,   542,   543,     0,     0,     0,     0,   544,     0,
     746,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,   748,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   668,   542,   543,     0,     0,     0,     0,
     544,     0,   750,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,     0,     0,
       0,   544,     0,   751,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   668,   542,   543,     0,     0,
       0,     0,   544,     0,   752,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   668,   542,   543,     0,
       0,     0,     0,   544,     0,   753,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,   754,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   668,   542,
     543,     0,     0,     0,     0,   544,     0,   755,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,     0,     0,     0,     0,   544,     0,   757,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     668,   542,   543,     0,     0,     0,     0,   544,     0,   758,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   668,   542,   543,     0,     0,     0,     0,   544,     0,
     759,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,   822,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   668,   542,   543,     0,     0,     0,     0,
     544,     0,   851,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,     0,     0,
       0,   544,     0,   909,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   668,   542,   543,     0,     0,
       0,     0,   544,     0,   927,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   668,   542,   543,     0,
       0,     0,     0,   544,     0,   928,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,   929,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   668,   542,
     543,     0,     0,     0,     0,   544,     0,   930,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,     0,     0,     0,     0,   544,     0,   936,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     668,   542,   543,     0,     0,     0,     0,   544,     0,   937,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   668,   542,   543,     0,     0,     0,     0,   544,     0,
     969,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,   983,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   668,   542,   543,     0,     0,     0,     0,
     544,     0,  1040,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,     0,     0,
       0,   544,     0,  1045,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   668,   542,   543,     0,     0,
       0,     0,   544,     0,  1058,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   668,   542,   543,     0,
       0,     0,     0,   544,     0,  1121,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,  1127,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   668,   542,
     543,     0,     0,     0,     0,   544,     0,  1128,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,     0,     0,     0,     0,   544,     0,  1129,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     668,   542,   543,     0,     0,     0,     0,   544,     0,  1143,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   668,   542,   543,     0,     0,     0,     0,   544,     0,
    1144,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,  1145,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   668,   542,   543,     0,     0,     0,     0,
     544,     0,  1174,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,     0,     0,
       0,   544,     0,  1176,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   668,   542,   543,     0,     0,
       0,     0,   544,     0,  1177,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   668,   542,   543,     0,
       0,     0,     0,   544,     0,  1178,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,  1179,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   668,   542,
     543,     0,     0,     0,     0,   544,     0,  1180,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,     0,     0,     0,     0,   544,     0,  1181,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     668,   542,   543,     0,     0,     0,     0,   544,     0,  1182,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   668,   542,   543,     0,     0,     0,     0,   544,     0,
    1187,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,  1279,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   668,   542,   543,     0,     0,     0,     0,
     544,     0,  1295,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,     0,     0,
       0,   544,     0,  1496,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   668,   542,   543,     0,     0,
       0,     0,   544,     0,  1563,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   668,   542,   543,     0,
       0,     0,     0,   544,     0,  1678,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   668,   542,   543,
       0,     0,     0,     0,   544,     0,  1679,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   668,   542,
     543,     0,     0,     0,     0,   544,     0,  1680,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   668,
     542,   543,     0,     0,     0,     0,   544,     0,  1681,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     668,   542,   543,     0,     0,     0,     0,   544,     0,  1734,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   668,   542,   543,     0,     0,     0,     0,   544,     0,
    1743,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   668,   542,   543,     0,     0,     0,     0,   544,
       0,  1766,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   668,   542,   543,     0,     0,     0,     0,
     544,     0,  2022,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   668,   542,   543,     0,     0,     0,
       0,   544,     0,  2070,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   668,   542,   543,     0,     0,
       0,     0,   544
};

static const yytype_int16 yycheck[] =
{
       3,   586,   587,  1169,  1173,   497,   282,     4,     4,     3,
    1806,  1645,    96,  1647,     4,     4,    22,    23,    21,     4,
       6,    21,   686,     4,     4,   701,     5,   294,   132,     5,
     694,     6,    96,   117,     4,     7,     0,     6,     4,     9,
     234,     4,   236,   719,    47,   312,  1607,     4,   242,     4,
       4,   147,     6,   117,     4,   223,   224,     4,     7,     9,
     234,     6,   236,     5,     5,     4,     6,   132,   242,     6,
       5,    74,   137,   138,   242,   234,   172,   223,   224,    82,
     239,   223,   224,     9,    87,   223,   224,   237,     9,   223,
     224,   241,   188,   189,    14,    98,   242,   234,    60,    61,
     242,    63,   223,   224,   242,   242,   223,   224,   242,   376,
     175,   378,     6,   223,   224,   234,     6,   238,   385,   230,
     231,   186,   234,   242,     5,   242,   132,   236,   239,   132,
     242,     7,   242,   242,   137,   138,    90,    84,    96,   133,
       9,     6,   145,   233,  1705,   235,   638,     6,   640,   223,
     224,     6,   233,   156,   234,   158,  1952,     9,   234,   110,
     163,     6,   242,   223,   224,   168,   242,     9,   242,   183,
     184,   185,   175,   233,   230,   231,   179,   237,   236,   182,
     183,   184,   185,   186,   242,   233,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,     7,   222,   223,     6,   209,
     209,   187,   228,   162,   163,   164,   165,     4,   209,   209,
     233,   237,   238,   175,   175,     4,   183,   233,   235,   209,
     175,   237,  1408,   246,   241,   220,   249,   250,   233,     7,
     240,   237,   237,   267,   268,   269,   237,   237,   237,   209,
     263,   237,   209,   266,   267,   268,   269,   239,   237,  1830,
     233,   274,   275,   276,   237,   220,   233,   280,   233,   282,
     230,   231,   237,   233,   233,   235,   235,   237,     6,   239,
     237,   305,   306,   307,   175,   237,   233,     7,     6,   238,
     237,   160,   305,   306,   307,   319,   320,   233,   575,   235,
     577,   578,   233,   239,   235,   160,   319,   320,   383,   983,
     984,   233,  1883,   285,   286,   234,     7,   594,     6,   223,
     224,   293,   294,   242,   210,   211,   212,   213,   344,   345,
     346,     7,    47,   234,   350,   351,   352,   353,   354,   355,
     356,   242,   358,  1987,   230,   231,   362,   363,   223,   224,
     366,   230,   231,   239,   233,   632,   235,   236,   223,   224,
     239,    90,   235,   379,    93,   223,   224,    96,   230,   231,
     383,   233,     4,   235,   387,   388,   233,   239,   230,   231,
     237,   233,     6,   235,   242,   172,   173,   239,   223,   224,
     403,   235,   669,   172,   173,   234,   409,   236,   223,   224,
     223,   224,   233,   242,   233,   127,   237,   242,   210,   211,
     212,   213,   223,   224,   237,   428,   491,   242,   493,   432,
     495,   496,   144,  1109,    93,  1111,   237,    96,   230,   231,
     152,   153,   154,    96,  1120,    98,   158,   159,   513,   514,
     223,   224,   210,   211,   212,   213,   223,   224,   230,   231,
     234,     8,   236,   237,  2025,   237,   233,     4,    90,   242,
     237,  1135,    94,  1137,   179,  1139,   479,  1141,   100,   101,
     233,   103,   104,   486,   487,   223,   224,   233,   491,   235,
     493,   494,   495,   496,   497,   509,   510,   511,   512,   121,
     210,   211,   212,   213,   242,   508,   509,   510,   511,   512,
     513,   514,   515,   516,     6,   518,   516,   520,   518,   233,
     230,   231,   528,   223,   224,  2086,   238,   233,   233,   210,
     211,   212,   213,   223,   224,   223,   224,   237,   541,   223,
     224,   239,   545,   241,   210,   211,   212,   213,   233,   230,
     231,   233,   242,  1229,   242,   237,    90,    90,   242,    93,
      93,   266,    96,    96,    98,    98,   233,   570,   571,   274,
     275,   276,     6,     7,   639,   280,   641,   642,   643,   644,
     645,   646,   686,   648,   649,   650,   651,   223,   224,   654,
     655,   656,   586,   587,   131,   132,   133,   134,    96,   127,
     223,   224,  1278,   238,   238,   233,   242,   242,   242,   146,
     223,   224,   149,   616,   617,   618,   144,   884,  1294,   242,
       6,     7,   584,   585,   152,   153,   154,   589,   238,   242,
     158,   159,   242,   223,   224,   638,   639,   640,   641,   642,
     643,   644,   645,   646,   233,   648,   649,   650,   651,   652,
     233,   654,   655,   656,   657,   658,   238,   657,   661,   724,
     242,   233,   223,   224,   729,   223,   224,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   242,   387,   388,   242,   232,   237,   223,   224,     8,
     693,   238,   238,   238,   233,   698,   242,   242,   403,   223,
     224,   225,   226,   227,    93,   237,   242,    96,   232,    98,
     238,    90,   715,   716,    93,   127,   233,    96,   721,    98,
     234,   724,   236,   234,   727,   236,   729,   233,   242,   131,
     132,   242,   144,   238,   737,   137,   739,   242,   233,   233,
     152,   153,   154,   847,     3,     4,   158,   159,   225,   226,
     227,    10,    11,    12,   233,   232,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   494,
     233,    96,   795,   232,   230,   231,    55,    56,    57,    58,
      93,   237,  1466,   508,    63,   237,   127,  1976,    93,   131,
     132,    96,   237,    98,  1478,   137,    75,    76,    77,   234,
     233,   236,   237,   144,    83,    84,   238,   234,    96,   236,
     233,   152,   153,   154,   237,   838,   233,   158,   159,    93,
     237,   127,    96,   238,    98,  2011,   849,   242,     4,    93,
      93,     8,   158,    96,   857,   238,   238,   163,   144,   242,
     242,   238,   168,    93,    96,   242,   152,   153,   154,     4,
    2039,   238,   158,   159,   238,   242,   182,   880,   242,   983,
     984,   238,   238,   238,   238,   242,   242,   242,   242,     8,
     239,     4,     4,   242,  2060,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   239,
     238,   238,   242,   232,   242,   242,     6,   238,   238,   238,
     238,     6,   242,   238,   242,   887,   238,   242,     6,   238,
     242,   190,   894,   242,   238,   194,   898,   233,   242,   238,
     199,   200,   201,   242,   203,   204,   205,   238,  1013,   238,
     209,   242,   233,   242,   238,   238,   238,   263,   242,   242,
     242,   233,   238,   238,   223,   224,   242,   242,    96,   228,
      98,   238,   975,   238,   233,   242,   238,   242,   237,   235,
     242,   240,   233,   233,  1260,   238,   989,  1479,  1480,   242,
     238,   994,   238,   238,   242,   233,   242,   242,  1001,  1002,
    1003,  1004,   238,     6,   235,   238,   242,  1592,  1593,   242,
    1013,   238,   238,   241,   237,   242,   242,  1121,  1122,   238,
    1026,   238,   238,   242,   238,   242,   242,     6,   242,   238,
    1095,  1096,    96,   242,    98,  1038,  1039,     4,  1041,     6,
    1043,  1044,   241,  1046,   233,  1048,  1049,  1050,  1051,  1052,
    1053,  1054,  1055,  1056,     9,   233,  1059,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   117,  1034,   233,   238,   232,   238,   234,   242,   236,
     242,   233,    98,   233,   100,   233,   233,   233,   233,   233,
       4,  1094,  1095,  1096,   237,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,     6,
     233,   233,  1115,   232,     6,   234,   132,   233,   233,   233,
     237,     6,  1125,  1126,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   233,   155,
     237,   237,   232,   237,   233,   233,   233,  1212,     6,   233,
     233,  1216,   857,   233,   233,   237,   233,     6,     6,   235,
    1225,   175,  1227,   237,   237,  1230,   235,   235,   235,     6,
     233,   237,   233,   233,   233,  1279,  1280,   233,   233,     6,
    1183,   235,     6,     6,   237,   237,  1453,     7,     6,   237,
    1457,     6,   237,  1196,  1197,  1198,   238,  1473,    86,   242,
     234,   242,     7,     6,  1207,     6,     6,   234,   237,  1212,
      64,    64,    64,  1216,   520,  1280,     6,    64,     4,   232,
       7,     6,  1225,     7,  1227,     6,     6,  1230,   234,     6,
     237,     7,     6,   172,     7,     6,     6,     6,  1241,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,  1836,   237,   236,   234,   232,     6,  1260,  1264,  1265,
       7,   237,   237,   237,   570,   571,   237,   239,     6,   235,
     975,   233,     4,     6,   234,     6,     6,  1280,     6,   235,
       7,  1773,   175,     7,     7,     7,   175,     7,     7,   994,
       7,   175,     7,     7,     7,     7,     7,     7,  1301,     7,
       7,     7,     6,   237,     6,   234,   236,   242,     7,  1312,
     616,   617,   618,   237,   242,  1318,   242,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   237,   237,  1038,  1039,   232,  1041,   237,  1043,  1044,
     242,  1046,     7,  1048,  1049,  1050,  1051,  1052,  1053,  1054,
    1055,  1056,   234,   239,   237,   661,     4,     6,   234,   234,
     234,   242,  1466,   242,  1367,  1368,  1369,   234,   238,   242,
    1373,   242,  1375,   239,  1377,   391,  1379,   238,  1381,  1382,
    1383,   127,     7,  1659,     6,   242,     7,   693,     7,  1094,
       7,   234,   234,   239,     9,  1398,   234,   242,   242,     7,
     236,   241,   147,   238,     4,     5,  1409,   237,     6,   715,
    1115,     6,     4,    46,  1417,   721,    46,  1420,   239,   233,
    1125,   237,   233,   233,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,  1503,   233,
     239,   220,   232,     4,     7,  1407,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     7,    98,     7,     7,    59,
      60,    61,    62,     7,  1568,     7,   234,    67,    68,    69,
    1473,     6,    72,     7,    74,   242,  1479,  1480,  1183,     7,
       7,     7,  1485,     7,     4,    85,     4,    87,   108,   795,
       6,  1196,  1197,  1198,   237,     7,   233,     6,   237,     7,
    1503,   517,     7,     7,     7,  1508,     7,     7,     7,  1512,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   124,     6,     6,     6,   232,    96,
       7,     6,   838,     6,     4,     4,  1241,     4,   234,   240,
     237,     6,   242,   849,   560,   561,   562,   563,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   242,
    1522,   237,   237,   232,   238,  1630,     6,  1671,  1633,     6,
     233,     7,     6,   235,   880,     6,     6,   233,  1845,   237,
       6,  1584,  1585,     6,   239,     6,   236,     6,   242,     6,
     237,   191,   192,   193,   237,     6,  1301,  1873,  1592,  1593,
     121,   237,   202,   237,  1607,     6,   206,  1312,   208,   209,
    1613,     6,     6,  1318,   237,   175,     6,     6,     6,  1622,
       6,     6,     6,     6,     6,     5,   242,  1630,   234,   234,
    1633,     6,     4,     6,   234,     4,   236,   653,     6,     6,
     237,   237,     7,   237,   237,  1648,  1608,  1609,  1610,  1611,
    1612,  1613,  1655,   237,   235,     6,  1659,     6,  1661,   237,
     237,   237,  1367,  1368,  1369,   237,   237,   237,  1373,     6,
    1375,  1938,  1377,   237,  1379,     6,  1381,  1382,  1383,     4,
       5,   171,     6,     6,   242,   242,   234,   242,   242,     6,
     233,     7,   239,  1398,     4,  1001,  1002,  1003,  1004,   237,
     237,     6,  1705,     6,  1409,     6,     6,     6,     6,     6,
    1977,     6,  1417,     4,     7,    94,     6,     6,     6,   735,
       6,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       5,   237,   234,     6,    59,    60,    61,    62,     6,  1742,
     237,     6,    67,    68,    69,     6,     6,    72,     6,    74,
       6,  1754,     6,  1059,   242,     6,     6,     6,     6,   242,
      85,     6,    87,   234,  1767,     4,   242,     7,     6,     6,
    1773,     6,     5,   237,   237,     6,   237,     6,   237,     6,
    1485,   238,   238,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,     7,  1801,   124,
       6,   232,   237,  1508,   170,  1808,     6,   234,     6,  1812,
     238,     7,     6,   238,   238,     6,     6,   239,     6,   237,
    1126,     6,     6,     6,     6,     6,     6,  1830,     6,   238,
    1833,     6,   234,   237,     6,   173,     6,   233,   238,   238,
     237,  1844,  1836,     6,   237,  1848,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     237,     6,   238,     6,   232,   127,   191,   192,   193,     6,
    1873,     6,     6,   237,   237,   234,     6,   202,     6,     6,
    1883,   206,   238,   208,   209,   238,     6,  1849,  1850,  1851,
    1852,  1853,     6,   237,     6,     6,     6,     6,     6,     6,
       6,  1207,  1607,   237,     6,   230,   231,   237,  1911,     6,
       6,     6,   237,     6,   239,     6,  1989,  1622,  1293,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   425,  1344,  1516,  1807,   232,  1777,  1311,
    1573,     3,     3,  1648,     7,     8,     3,     3,  1910,   559,
    1832,  1448,  1914,  1353,     3,    -1,  1661,    -1,  1655,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   985,
      -1,    -1,    -1,    -1,    -1,    -1,  1979,  1980,  1981,  1982,
    1983,    -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,
    1705,  1963,    -1,    -1,  2069,  1967,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
      -1,  1983,  2025,   136,     6,    -1,    -1,   140,    -1,    -1,
      -1,  2096,  2097,    -1,    -1,    -1,    -1,  1742,    -1,    -1,
      -1,  2044,    -1,     6,   157,   158,   159,   160,  2113,   162,
     163,   164,   165,    -1,   167,   168,   169,   170,   171,   172,
     173,   174,    -1,   176,   177,   178,  2069,    -1,    -1,   182,
      -1,    -1,  2034,  2035,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2086,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2096,  2097,     6,  1801,    -1,    -1,    -1,
      -1,    -1,    -1,  1808,    -1,    -1,    -1,    -1,    -1,    -1,
    2113,    -1,    -1,    -1,  1420,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1830,    -1,    -1,    -1,    -1,
      -1,    -1,   245,   246,   247,   248,   249,    -1,    -1,  1844,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   262,
     263,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   278,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,   288,   289,    -1,  1883,    -1,
      -1,   294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,  1911,    -1,    -1,    -1,
     232,    -1,   325,    -1,    -1,    -1,   329,   330,   331,    -1,
     333,    -1,    -1,    -1,   337,   338,   339,    -1,    -1,   342,
      -1,    -1,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,
     232,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,   380,    -1,   232,
      -1,   384,    -1,    -1,    -1,    -1,    -1,    -1,  1584,  1585,
      -1,    -1,    -1,  1299,    -1,  1301,    -1,   400,   401,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   414,    -1,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,    -1,   432,
    2025,   232,    -1,    -1,    -1,   438,    -1,    -1,    -1,    -1,
     443,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   457,    -1,    -1,    -1,    -1,    -1,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,    -1,   489,   490,    -1,   492,
       6,  2086,    -1,    -1,    -1,   498,    -1,    -1,   501,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   515,    -1,    -1,    -1,    -1,   520,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,    -1,   546,   547,  1451,    -1,    -1,    -1,    -1,
     553,   554,   555,    -1,    -1,    -1,    -1,   560,   561,   562,
     563,   564,    -1,   566,    -1,   568,    -1,   570,   571,    -1,
      -1,  1767,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     6,   589,   590,   591,    -1,
      -1,    -1,   595,   596,   597,   598,   599,   600,   601,   602,
     603,    -1,  1508,    -1,     6,   608,    -1,   610,    -1,   612,
      -1,    -1,    -1,   616,   617,   618,    -1,    -1,   621,   622,
     623,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,  1833,    -1,   232,
      -1,   234,    -1,   236,   647,    -1,     6,    -1,    -1,   242,
      -1,    -1,  1848,    -1,    -1,    -1,    -1,    -1,   661,    -1,
      -1,   158,    -1,   666,    -1,   668,   163,   670,   671,    -1,
      -1,   168,    -1,    -1,   677,    -1,    -1,    -1,    -1,    -1,
     683,    -1,  1588,    -1,    -1,   182,    -1,    -1,    -1,    -1,
     693,    -1,    -1,    -1,    -1,    -1,   699,   700,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   715,    -1,   717,   718,   232,    -1,   721,   722,
      -1,    -1,  1628,    -1,    -1,    -1,    -1,   730,     6,  1635,
    1636,   734,    -1,    -1,   737,    -1,   739,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1651,    -1,    -1,    -1,   246,
      -1,    -1,   249,    -1,    -1,    -1,    -1,   760,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1979,  1980,  1981,  1982,  1983,    -1,    -1,
      -1,    -1,   795,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,    -1,    -1,
      -1,   232,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,
     232,    -1,    -1,    -1,    -1,   838,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   849,    -1,  2044,    -1,
      -1,    -1,    -1,   856,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,    -1,    -1,
      -1,    -1,   232,  1779,    -1,    -1,    -1,   880,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   888,   889,    -1,    -1,    -1,
      -1,   894,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1811,    -1,   910,    -1,    -1,
     913,    -1,    -1,    -1,    -1,    -1,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   932,
      -1,   934,   935,     6,    -1,   432,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     953,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   971,    -1,
      -1,    -1,    -1,    -1,    -1,   978,   979,   980,   981,    -1,
      -1,    -1,   479,   986,    -1,    -1,    -1,    -1,    -1,   486,
     487,    -1,    -1,    -1,    -1,    -1,    -1,  1000,  1001,  1002,
    1003,  1004,  1005,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,   515,    -1,
      -1,   232,    -1,   520,    -1,    -1,    -1,    -1,    -1,    -1,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   541,     7,    -1,  1953,   232,    -1,
     234,    -1,    -1,    -1,    -1,    -1,  1059,    -1,   242,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1072,
      -1,    -1,    -1,   570,   571,    -1,    -1,    -1,    -1,  1082,
    1083,  1084,    -1,    -1,    -1,    -1,  1089,  1090,    -1,  1092,
      13,    14,    -1,     8,    -1,    -1,  1099,    -1,  1101,  1102,
    1103,  1104,  1105,    -1,    -1,    -1,    -1,    -1,    -1,  1112,
      -1,    -1,     8,    -1,  1117,  1118,    -1,    -1,    -1,   616,
     617,   618,    -1,  1126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1136,    -1,  1138,    -1,  1140,    -1,  1142,
      -1,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,     8,    -1,    -1,   232,
    1163,    -1,    -1,    -1,   661,    -1,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
      -1,    -1,    -1,   106,   107,   108,    -1,    -1,   111,    -1,
      -1,    -1,  1195,    -1,   117,   118,   693,    -1,   121,   122,
      -1,   124,   125,    -1,  1207,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1215,    -1,    -1,    -1,    -1,    -1,   715,    -1,
     143,    -1,    -1,    -1,   721,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1237,    -1,    -1,    -1,    -1,    -1,
     737,    -1,   739,    -1,   167,   168,   169,    -1,  1251,    -1,
      -1,  1254,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,
     232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1287,  1288,  1289,  1290,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1298,  1299,    -1,   795,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,    -1,    -1,   238,    -1,   232,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,
      -1,   838,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   849,    -1,    -1,   405,    -1,    -1,    -1,    -1,
      -1,    -1,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,    -1,    -1,    13,    14,
     232,    -1,    -1,   880,    -1,    -1,  1389,  1390,  1391,    -1,
      -1,    -1,    -1,    -1,    -1,  1398,    -1,  1400,    -1,    -1,
      -1,    -1,    -1,    -1,  1407,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1420,    -1,    -1,
      -1,    -1,  1425,    -1,    -1,    -1,    -1,     8,    -1,    -1,
    1433,  1434,  1435,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1443,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1452,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,    -1,    -1,
      -1,   106,   107,   108,  1477,    -1,   111,     8,    -1,    -1,
    1483,  1484,   117,   118,    -1,    -1,   121,   122,    -1,   124,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     550,    -1,    -1,    -1,  1001,  1002,  1003,  1004,   143,  1512,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1520,  1521,    -1,
      -1,    -1,    -1,    -1,  1527,  1528,    -1,    -1,    -1,    -1,
      -1,  1534,   167,   168,   169,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1551,  1552,
    1553,    -1,    -1,    -1,    -1,    -1,  1559,  1560,  1561,  1562,
      -1,    -1,  1059,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1575,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1584,  1585,  1586,    -1,  1588,    -1,    -1,    -1,    -1,
      -1,  1594,  1595,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,
    1613,    -1,    -1,    -1,  1617,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1628,    -1,    -1,  1631,  1126,
      -1,    -1,  1635,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,    -1,  1652,
      -1,   232,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    -1,  1665,    -1,    -1,    -1,    -1,  1670,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1684,    -1,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,    -1,    -1,
      -1,   232,    -1,    -1,    13,    14,    -1,    -1,    -1,    -1,
    1207,    -1,  1715,    -1,    -1,    -1,    -1,   767,   768,   769,
     770,   771,   772,   773,   774,   775,   776,   777,    -1,   779,
     780,   781,   782,  1736,   784,   785,   786,   787,    -1,    -1,
      -1,    -1,  1745,    -1,    -1,    -1,    -1,    -1,   798,    -1,
     800,  1754,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1763,  1764,    -1,    -1,  1767,    -1,   816,   817,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   825,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    -1,  1798,  1799,   106,   107,   108,
      -1,    -1,   111,    -1,    -1,    -1,    -1,  1810,   117,   118,
      -1,    -1,   121,   122,  1817,   124,   125,    -1,    -1,    -1,
    1823,  1824,  1825,  1826,  1827,    -1,    -1,    -1,    -1,    -1,
    1833,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1848,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1856,    -1,    -1,    -1,    -1,   167,   168,
     169,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,  1880,    -1,   232,
      -1,    -1,    -1,  1886,  1887,    -1,    -1,    -1,    -1,   939,
     940,   941,    -1,    -1,    -1,   945,   946,    -1,    -1,   949,
     950,   951,   952,    -1,   954,    -1,    -1,    -1,    -1,   959,
      -1,    -1,    -1,    -1,    -1,    -1,  1919,    -1,    -1,    -1,
      -1,    -1,    -1,  1420,    -1,    -1,    -1,    -1,    -1,   238,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1944,  1945,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1956,  1957,  1958,  1959,  1960,  1961,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1974,    -1,    -1,    -1,    -1,  1979,  1980,  1981,  1982,
    1983,    -1,  1032,  1033,    -1,    -1,  1989,    -1,    -1,    -1,
    1993,    -1,    -1,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,    -1,    -1,
      -1,   232,    -1,    -1,    -1,  1512,    -1,   238,    -1,    -1,
    2023,   242,    -1,    -1,    -1,  2028,  2029,  2030,  2031,  2032,
    2033,     3,     4,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,  2044,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,  2075,  2076,  2077,  2078,  2079,  2080,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,  1584,  1585,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    83,    84,    -1,    -1,    -1,  1613,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    10,    11,    12,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1263,    -1,    -1,    -1,    -1,   190,    -1,
      -1,    -1,   194,    -1,    -1,    -1,    -1,   199,   200,   201,
      -1,   203,   204,   205,    -1,    -1,    -1,   209,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1300,   223,   224,    -1,    -1,    -1,   228,  1754,    -1,    -1,
      -1,   233,    -1,    -1,    -1,   237,    -1,    -1,   240,    -1,
    1767,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1333,  1334,  1335,  1336,  1337,    -1,    -1,
      -1,    -1,  1342,  1343,    -1,  1345,    -1,    -1,    -1,    -1,
     183,  1351,    -1,    -1,    -1,    -1,    -1,   190,   191,   192,
     193,   194,    -1,    -1,  1364,    -1,   199,   200,   201,   202,
     203,   204,   205,   206,    -1,   208,   209,   210,   211,   212,
     213,    -1,    -1,    -1,    -1,    -1,  1833,    -1,    -1,    -1,
     223,   224,    -1,    -1,    -1,   228,    -1,   230,   231,    -1,
     233,  1848,   235,    -1,    -1,    -1,   239,   240,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,   242,    -1,    -1,  1439,
      -1,  1441,    -1,    -1,    -1,  1445,     5,  1447,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,   242,    -1,    -1,  1479,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    67,    68,
      69,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    -1,
      -1,    -1,  1979,  1980,  1981,  1982,  1983,    -1,    -1,    -1,
      -1,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,     3,     4,     5,    -1,   232,
      -1,    -1,    10,    11,    12,   238,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,  2044,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    67,
      68,    69,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      -1,    -1,   191,   192,   193,    83,    84,    85,    -1,    87,
      -1,    -1,    90,   202,    -1,    93,    -1,   206,    96,   208,
      98,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,  1663,  1664,    -1,    -1,    -1,    -1,   117,
      -1,   119,    -1,    -1,   122,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,   133,   134,   135,    -1,    -1,
     138,   139,   140,   141,   142,    -1,    -1,    -1,   146,    -1,
      -1,   149,    -1,    -1,    -1,    -1,  1706,  1707,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,
      -1,    -1,   190,   191,   192,   193,   194,   195,    -1,    -1,
      -1,   199,   200,   201,   202,   203,   204,   205,   206,    -1,
     208,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1771,  1772,    -1,    -1,   223,   224,    -1,    -1,    -1,
     228,    -1,    -1,    -1,    -1,   233,     3,     4,     5,   237,
      -1,    -1,   240,    10,    11,    12,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      67,    68,    69,    -1,    -1,    72,    -1,    74,    75,    76,
      77,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    -1,
      87,    -1,    -1,    90,    -1,    -1,    93,    -1,    -1,    96,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     117,    -1,   119,    -1,    -1,   122,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   132,   133,   134,   135,    -1,
      -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,   146,
      -1,    -1,   149,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,    -1,    -1,
      -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   190,   191,   192,   193,   194,   195,    -1,
      -1,    -1,   199,   200,   201,   202,   203,   204,   205,   206,
      -1,   208,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   223,   224,    -1,    -1,
      -1,   228,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,
     237,    -1,    -1,   240,    -1,    -1,    -1,    -1,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,     3,     4,     5,    -1,   232,    -1,    -1,    10,
      11,    12,   238,  2053,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,
      -1,    -1,    83,    84,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    93,    -1,    -1,    96,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,   117,    -1,   119,    -1,
      -1,   122,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,   133,   134,   135,    -1,    -1,   138,   139,   140,
     141,   142,    -1,    -1,    -1,   146,    -1,    -1,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    -1,    -1,    -1,    -1,    67,    68,    69,
      -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,   190,
      -1,    -1,    -1,   194,   195,    85,    -1,    87,   199,   200,
     201,    -1,   203,   204,   205,    -1,    -1,    -1,   209,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   223,   224,    -1,    -1,    -1,   228,    -1,    -1,
      -1,    -1,   233,     3,     4,     5,   237,    -1,    -1,   240,
      10,    11,    12,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   191,   192,   193,    -1,    75,    76,    77,    -1,    -1,
      -1,    -1,   202,    83,    84,    -1,   206,    -1,   208,   209,
      90,    -1,    -1,    93,    -1,    -1,    96,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,   117,    -1,   119,
      -1,    -1,   122,    -1,   124,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,   133,   134,   135,    -1,    -1,   138,   139,
     140,   141,   142,    -1,    -1,    -1,   146,    -1,    -1,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    67,    68,
      69,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
     190,    -1,    -1,    -1,   194,   195,    85,    -1,    87,   199,
     200,   201,    -1,   203,   204,   205,    -1,    -1,    -1,   209,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   223,   224,    -1,    -1,    -1,   228,    -1,
      -1,    -1,    -1,   233,     3,     4,    -1,   237,    -1,    -1,
     240,    10,    11,    12,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   191,   192,   193,    -1,    75,    76,    77,    -1,
      -1,    -1,    -1,   202,    83,    84,    -1,   206,    -1,   208,
      -1,    90,    -1,    -1,    93,    -1,    -1,    96,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
     119,    -1,    -1,   122,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,   131,   132,   133,   134,   135,    -1,    -1,   138,
     139,   140,   141,   142,    -1,    -1,    -1,   146,    -1,    -1,
     149,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   190,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,
     199,   200,   201,    -1,   203,   204,   205,    -1,    -1,    -1,
     209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   223,   224,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,   233,     3,     4,    -1,   237,   238,
      -1,   240,    10,    11,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    93,    -1,    -1,    96,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
      -1,   119,    -1,    -1,   122,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,   133,   134,   135,    -1,    -1,
     138,   139,   140,   141,   142,    -1,    -1,    -1,   146,    -1,
      -1,   149,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,
     232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,    -1,    -1,    -1,   194,   195,    -1,    -1,
      -1,   199,   200,   201,    -1,   203,   204,   205,    -1,    -1,
      -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   223,   224,    -1,    -1,    -1,
     228,    -1,    -1,    -1,    -1,   233,     3,     4,    -1,   237,
      -1,    -1,   240,    10,    11,    12,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    93,    -1,    -1,    96,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     117,    -1,   119,    -1,    -1,   122,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   132,   133,   134,   135,    -1,
      -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,   146,
      -1,    -1,   149,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,    -1,    -1,
      -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   190,    -1,    -1,    -1,   194,   195,    -1,
      -1,    -1,   199,   200,   201,    -1,   203,   204,   205,    -1,
      -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   223,   224,    -1,    -1,
      -1,   228,    -1,    -1,    -1,    -1,   233,     3,     4,    -1,
     237,    -1,    -1,   240,    10,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    93,    -1,    -1,
      96,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   117,    -1,   119,    -1,    -1,   122,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,   131,   132,   133,   134,   135,
      -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,
     146,    -1,    -1,   149,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,    -1,    -1,
      -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,   194,   195,
      -1,    -1,    -1,   199,   200,   201,    -1,   203,   204,   205,
      -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,   224,    -1,
      -1,    -1,   228,    -1,    -1,    -1,    -1,   233,     3,     4,
      -1,   237,    -1,    -1,   240,    10,    11,    12,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    93,    -1,
      -1,    96,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   117,    -1,   119,    -1,    -1,   122,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,   131,   132,   133,   134,
     135,    -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,
      -1,   146,    -1,    -1,   149,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,    -1,
      -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,   199,   200,   201,    -1,   203,   204,
     205,    -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,   224,
      -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,   233,     3,
       4,    -1,    -1,   238,    -1,   240,    10,    11,    12,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    83,
      84,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    93,
      -1,    -1,    96,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,    -1,   119,    -1,    -1,   122,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,   133,
     134,   135,    -1,    -1,   138,   139,   140,   141,   142,    -1,
      -1,    -1,   146,    -1,    -1,   149,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,
     194,   195,    -1,    -1,    -1,   199,   200,   201,    -1,   203,
     204,   205,    -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,
     224,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,   233,
       3,     4,    -1,   237,    -1,    -1,   240,    10,    11,    12,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,
      83,    84,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      93,    -1,    -1,    96,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   117,    -1,   119,    -1,    -1,   122,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
     133,   134,   135,    -1,    -1,   138,   139,   140,   141,   142,
      -1,    -1,    -1,   146,    -1,    -1,   149,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,
      -1,   194,   195,    -1,    -1,    -1,   199,   200,   201,    -1,
     203,   204,   205,    -1,    -1,    -1,   209,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     223,   224,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,
     233,     3,     4,    -1,   237,    -1,    -1,   240,    10,    11,
      12,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    83,    84,    -1,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    93,    -1,    -1,    96,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   117,    -1,   119,    -1,    -1,
     122,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,   131,
     132,   133,   134,   135,    -1,    -1,   138,   139,   140,   141,
     142,    -1,    -1,    -1,   146,    -1,    -1,   149,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,
      -1,    -1,   194,   195,    -1,    -1,    -1,   199,   200,   201,
      -1,   203,   204,   205,    -1,    -1,    -1,   209,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   223,   224,    -1,    -1,    -1,   228,    -1,    -1,    -1,
      -1,   233,     3,     4,    -1,   237,    -1,    -1,   240,    10,
      11,    12,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,
      -1,    -1,    83,    84,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    93,    -1,    -1,    96,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,    -1,
      -1,   122,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,   133,   134,   135,    -1,    -1,   138,   139,   140,
     141,   142,    -1,    -1,    -1,   146,    -1,    -1,   149,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,
      -1,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,   200,
     201,    -1,   203,   204,   205,    -1,    -1,    -1,   209,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   223,   224,    -1,    -1,    -1,   228,    -1,    -1,
      -1,    -1,   233,     3,     4,    -1,   237,    -1,    -1,   240,
      10,    11,    12,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,
      -1,    -1,    -1,    83,    84,    -1,    -1,    -1,    -1,    -1,
      90,    -1,    -1,    93,    -1,    -1,    96,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,
      -1,    -1,   122,    -1,   124,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,   133,   134,   135,    -1,    -1,   138,   139,
     140,   141,   142,    -1,    -1,    -1,   146,    -1,    -1,   149,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     190,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,
     200,   201,    -1,   203,   204,   205,    -1,    -1,    -1,   209,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   223,   224,    -1,    -1,    -1,   228,    -1,
      -1,    -1,    -1,   233,     3,     4,     5,   237,    -1,    -1,
     240,    10,    11,    12,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    13,    14,    67,    68,
      69,    -1,    -1,    72,    -1,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    -1,    87,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,
      -1,    -1,   238,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    -1,    -1,    -1,   106,
     107,   108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
     117,   118,    -1,    -1,   121,   122,    -1,   124,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   190,   191,   192,   193,   194,   143,    -1,    -1,    -1,
     199,   200,   201,   202,   203,   204,   205,   206,    -1,   208,
     209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     167,   168,   169,    -1,   223,   224,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,   233,     3,     4,    -1,   237,    -1,
      -1,   240,    10,    11,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,   238,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    93,    -1,    -1,    96,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
      -1,   119,    -1,    -1,   122,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,   133,   134,   135,    -1,    -1,
     138,   139,   140,   141,   142,    -1,    -1,    -1,   146,    -1,
      -1,   149,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,
     232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,    -1,    -1,    -1,   194,   195,    -1,    -1,
      -1,   199,   200,   201,    -1,   203,   204,   205,    -1,    -1,
      -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   223,   224,    -1,    -1,    -1,
     228,    -1,    -1,    -1,    -1,   233,     3,     4,     5,   237,
      -1,    -1,   240,    10,    11,    12,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      67,    68,    69,    -1,    -1,    72,    -1,    74,    75,    76,
      77,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    -1,
      87,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,
      -1,    -1,   199,   200,   201,   202,   203,   204,   205,   206,
      -1,   208,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   223,   224,    -1,    -1,
      -1,   228,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,
     237,    -1,    -1,   240,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,    -1,    -1,
      -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,   190,   191,
     192,   193,   194,    -1,    -1,    -1,    -1,   199,   200,   201,
     202,   203,   204,   205,   206,    -1,   208,   209,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   223,   224,    -1,    -1,    -1,   228,    -1,    -1,    -1,
      -1,   233,     3,     4,    -1,   237,    -1,    -1,   240,    10,
      11,    12,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,
      -1,    -1,    83,    84,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    93,    -1,    -1,    96,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,    -1,
      -1,   122,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,   133,   134,   135,    -1,    -1,   138,   139,   140,
     141,   142,    -1,    -1,    -1,   146,    -1,    -1,   149,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,
      -1,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,   200,
     201,    -1,   203,   204,   205,    -1,    -1,    -1,   209,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   223,   224,    -1,    -1,    -1,   228,    -1,    -1,
      -1,    -1,   233,     3,     4,    -1,   237,    -1,    -1,   240,
      10,    11,    12,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,
      -1,    -1,    -1,    83,    84,    -1,    -1,    -1,    -1,    -1,
      90,    -1,    -1,    93,    -1,    -1,    96,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,
      -1,    -1,   122,    -1,   124,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,   133,   134,   135,    -1,    -1,   138,   139,
     140,   141,   142,    -1,    -1,    -1,   146,    -1,    -1,   149,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     190,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,   199,
     200,   201,    -1,   203,   204,   205,    -1,    -1,    -1,   209,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   223,   224,    -1,    -1,    -1,   228,     3,
       4,     5,    -1,   233,    -1,    -1,    10,    11,    12,    -1,
     240,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    67,    68,    69,    -1,    -1,    72,    -1,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    -1,    87,     3,     4,    -1,     6,    -1,    -1,
      -1,    10,    11,    12,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,    55,    56,    57,    58,
     232,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
     242,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    83,    84,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,   190,   191,   192,   193,
     194,    -1,    -1,    -1,   242,   199,   200,   201,   202,   203,
     204,   205,   206,    -1,   208,   209,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,
     224,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,   233,
      -1,    -1,    -1,    -1,    -1,    -1,   240,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,
      -1,   190,    -1,    -1,    -1,   194,    -1,    -1,    -1,    -1,
     199,   200,   201,    -1,   203,   204,   205,    -1,    -1,    -1,
     209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   223,   224,    -1,    -1,    -1,   228,
       3,     4,    -1,     6,   233,    -1,    -1,    10,    11,    12,
      -1,   240,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    55,    56,    57,    58,   232,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,     3,     4,    -1,     6,    -1,
      83,    84,    10,    11,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    55,    56,    57,
      58,   232,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,   242,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      -1,    -1,    -1,    -1,    -1,    83,    84,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,   190,    -1,    -1,
      -1,   194,    -1,    -1,    -1,    -1,   199,   200,   201,    -1,
     203,   204,   205,    -1,    -1,    -1,   209,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     223,   224,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,
     233,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,
      -1,    -1,   190,    -1,    -1,    -1,   194,   242,    -1,    -1,
      -1,   199,   200,   201,    -1,   203,   204,   205,    -1,    -1,
      -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   223,   224,    -1,    -1,    -1,
     228,     3,     4,    -1,    -1,   233,    -1,    -1,    10,    11,
      12,    -1,   240,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    -1,    -1,    13,    14,
      -1,    83,    84,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,    -1,    -1,
      -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   242,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    -1,
      -1,    -1,   106,   107,   108,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,   117,   118,    -1,    -1,   121,   122,    -1,
     124,   125,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,    -1,   143,
      -1,   106,   107,   108,    13,    14,   111,    -1,    -1,    -1,
      -1,    -1,   117,   118,    -1,    -1,   121,   122,   190,   124,
     125,    -1,   194,   167,   168,   169,    -1,   199,   200,   201,
      -1,   203,   204,   205,    -1,    -1,    -1,   209,   143,    -1,
      -1,    -1,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   223,   224,    -1,    -1,    -1,   228,    -1,    -1,    -1,
      -1,   233,   167,   168,   169,    -1,    -1,    -1,   240,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   238,    -1,    -1,   106,   107,   108,
      -1,    -1,   111,    -1,    -1,    -1,    13,    14,   117,   118,
      -1,    -1,   121,   122,    -1,   124,   125,    -1,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,    -1,   238,   143,   106,   107,   108,    -1,    -1,
     111,    -1,    -1,    -1,    -1,    -1,   117,   118,    -1,    -1,
     121,   122,    -1,   124,   125,    -1,    -1,    -1,   167,   168,
     169,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   167,   168,   169,   106,
     107,   108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
     117,   118,    -1,    -1,   121,   122,    -1,   124,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    14,    -1,    -1,   238,
      -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,    -1,    -1,    -1,   106,   107,   108,    -1,    -1,   111,
     167,   168,   169,    13,    14,   117,   118,   238,    -1,   121,
     122,    -1,   124,   125,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,    -1,    -1,
      -1,   143,   232,    -1,    -1,    -1,    -1,    -1,   238,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   167,   168,   169,   106,   107,
     108,    -1,    -1,   111,    -1,    -1,    -1,    13,    14,   117,
     118,   238,    -1,   121,   122,    -1,   124,   125,    -1,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,    -1,    -1,   143,   106,   107,   108,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,   117,   118,    -1,
      -1,   121,   122,    -1,   124,   125,    -1,    -1,    -1,   167,
     168,   169,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   167,   168,   169,
     106,   107,   108,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,   117,   118,    -1,    -1,   121,   122,    -1,   124,   125,
       0,     1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,
     238,    -1,    -1,    13,    14,    -1,    -1,   143,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,
      -1,   167,   168,   169,    44,    45,   242,    -1,   238,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,    -1,    64,    65,    66,   232,    -1,    -1,
      70,    71,    -1,    73,    -1,    -1,    -1,   242,    78,    79,
      -1,    81,    82,    -1,    84,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,    -1,    -1,   105,   106,   107,   108,   109,
      -1,   111,   238,   113,   114,   115,   116,   117,   118,   119,
      -1,   121,   122,   123,   124,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    -1,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,     4,    -1,   155,   156,   157,    -1,    -1,
      -1,   161,    13,    14,    -1,    -1,   166,   167,   168,   169,
      -1,    -1,   172,    -1,   174,    -1,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
      -1,    -1,    -1,    44,    45,    -1,   196,   197,   198,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,   209,
      -1,    -1,    -1,    64,    65,    66,    -1,    -1,    -1,    70,
      71,    -1,    73,    -1,    -1,    -1,    -1,    78,    79,    -1,
      81,    82,    -1,    84,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,    -1,    -1,   105,   106,   107,   108,   109,    -1,
     111,    -1,   113,   114,   115,   116,   117,   118,   119,    -1,
     121,   122,   123,   124,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,   134,   135,   136,    -1,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,    -1,    -1,   155,   156,   157,    -1,    -1,    -1,
     161,    -1,    -1,    -1,    -1,   166,   167,   168,   169,     4,
       5,   172,    -1,   174,    -1,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    13,
      14,    -1,    -1,    -1,    -1,   196,   197,   198,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,   209,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    67,    68,    69,    -1,    -1,    72,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    -1,
      -1,    -1,   106,   107,   108,    -1,    -1,   111,    -1,   124,
      -1,    -1,    -1,   117,   118,    -1,    -1,   121,   122,    -1,
     124,   125,    13,    14,    -1,    -1,   130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
      -1,    -1,    -1,   147,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,    -1,    -1,
      -1,    -1,   232,   167,   168,   169,    -1,    -1,    -1,    -1,
      -1,    -1,   242,    -1,    -1,    -1,   191,   192,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,
      -1,   206,    -1,   208,   209,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,    -1,    -1,    -1,   106,   107,   108,    -1,    -1,
     111,    -1,    -1,    -1,    -1,    -1,   117,   118,    -1,    -1,
     121,   122,    -1,   124,   125,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,    -1,
      -1,    -1,   143,   232,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   167,   168,   169,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   242,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,    -1,
      -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,    -1,    -1,
      -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,    -1,    -1,
      -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   242,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,
     232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   242,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,    -1,
      -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,    -1,    -1,
      -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,    -1,    -1,
      -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   242,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,
     232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
     238,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,   238,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
     238,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,   238,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
     238,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,   238,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
     238,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,   238,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
     238,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,   238,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
     238,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,   238,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
     238,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,   238,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
     238,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,   238,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
     238,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,   238,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
     238,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,   238,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
     238,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,   238,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
     238,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,   238,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
     238,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,   238,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
     238,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,   238,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
     238,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,   237,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,    -1,
      -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,   237,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,
      -1,    -1,   237,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,    -1,    -1,
      -1,   232,    -1,   234,    -1,   236,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,   236,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,
      -1,   236,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,
     232,    -1,    -1,    -1,   236,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,    -1,
      -1,    -1,    -1,   232,    -1,    -1,    -1,   236,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,
     236,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,   236,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,    -1,    -1,
      -1,    -1,   232,    -1,    -1,    -1,   236,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,   236,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,
      -1,    -1,   236,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,    -1,    -1,
      -1,   232,    -1,    -1,    -1,   236,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,   236,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,    -1,
      -1,   236,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,
     232,    -1,    -1,    -1,   236,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,    -1,
      -1,    -1,    -1,   232,    -1,   234,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,   234,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,    -1,    -1,    -1,    -1,   232,    -1,   234,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    -1,   232,    -1,   234,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,   234,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,
     234,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,   234,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,
     232,    -1,   234,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,    -1,    -1,
      -1,   232,    -1,   234,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,    -1,    -1,
      -1,    -1,   232,    -1,   234,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,    -1,
      -1,    -1,    -1,   232,    -1,   234,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,   234,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,    -1,    -1,    -1,    -1,   232,    -1,   234,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    -1,   232,    -1,   234,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,   234,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,
     234,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,   234,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,
     232,    -1,   234,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,    -1,    -1,
      -1,   232,    -1,   234,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,    -1,    -1,
      -1,    -1,   232,    -1,   234,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,    -1,
      -1,    -1,    -1,   232,    -1,   234,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,   234,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,    -1,    -1,    -1,    -1,   232,    -1,   234,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    -1,   232,    -1,   234,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,   234,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,
     234,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,   234,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,
     232,    -1,   234,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,    -1,    -1,
      -1,   232,    -1,   234,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,    -1,    -1,
      -1,    -1,   232,    -1,   234,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,    -1,
      -1,    -1,    -1,   232,    -1,   234,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,   234,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,    -1,    -1,    -1,    -1,   232,    -1,   234,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    -1,   232,    -1,   234,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,   234,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,
     234,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,   234,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,
     232,    -1,   234,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,    -1,    -1,
      -1,   232,    -1,   234,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,    -1,    -1,
      -1,    -1,   232,    -1,   234,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,    -1,
      -1,    -1,    -1,   232,    -1,   234,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,   234,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,    -1,    -1,    -1,    -1,   232,    -1,   234,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    -1,   232,    -1,   234,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,   234,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,
     234,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,   234,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,
     232,    -1,   234,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,    -1,    -1,
      -1,   232,    -1,   234,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,    -1,    -1,
      -1,    -1,   232,    -1,   234,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,    -1,
      -1,    -1,    -1,   232,    -1,   234,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      -1,    -1,    -1,    -1,   232,    -1,   234,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,    -1,    -1,    -1,    -1,   232,    -1,   234,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    -1,    -1,    -1,    -1,   232,    -1,   234,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,   234,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,    -1,
     234,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   232,
      -1,   234,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,
     232,    -1,   234,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,    -1,    -1,    -1,
      -1,   232,    -1,   234,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,    -1,    -1,
      -1,    -1,   232
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,   244,   245,     6,     0,     4,    13,    14,    44,
      45,    64,    65,    66,    70,    71,    73,    78,    79,    81,
      82,    84,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   105,   106,   107,
     108,   109,   111,   113,   114,   115,   116,   117,   118,   119,
     121,   122,   123,   124,   125,   126,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   155,
     156,   157,   161,   166,   167,   168,   169,   172,   174,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   196,   197,   198,   207,   209,   246,   248,
     249,   269,   290,   291,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   309,   311,   312,   318,   319,   320,   321,
     327,   348,   349,   237,   241,    14,    96,   233,   233,     6,
     237,     6,     6,     6,     6,   233,     6,     6,   235,   235,
       4,   329,   349,   233,   235,   267,   267,   233,   237,   233,
     233,     4,   233,   237,   233,   233,     4,   233,   237,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   110,
      96,     6,   237,    90,    93,    96,   233,     3,    10,    11,
      12,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      55,    56,    57,    58,    63,    75,    76,    77,    83,    90,
      93,    96,    98,   117,   122,   124,   190,   194,   195,   199,
     200,   201,   203,   204,   205,   223,   224,   228,   233,   237,
     240,   291,   302,   309,   311,   322,   323,   327,   329,   336,
     338,   349,   233,   237,    96,    96,   117,    93,    96,    98,
      90,    93,    96,    98,    93,    96,    98,    93,    96,   233,
      93,   147,   172,   188,   189,   237,   223,   224,   233,   237,
     333,   334,   333,   237,   237,   333,     4,    90,    94,   100,
     101,   103,   104,   121,   233,    96,    98,    96,    93,     4,
      84,   183,   237,   349,     4,     6,    90,    93,    96,    93,
      96,     4,     4,     4,     5,   233,   336,   337,     4,   233,
     233,   233,     4,   237,   340,   349,     4,   233,   233,   233,
       6,     6,   235,     5,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    59,    60,    61,    62,    67,    68,    69,
      72,    74,    85,    87,   191,   192,   193,   202,   206,   208,
     344,   349,   233,     4,   344,     5,   237,     5,   237,    32,
     224,   322,   349,   235,   233,   237,     6,   233,   237,     6,
     241,     7,   124,   183,   210,   211,   212,   213,   230,   231,
     233,   235,   239,   265,   266,   267,   322,   343,   344,   349,
       4,   291,   292,   293,   237,     6,   322,   343,   344,   349,
     343,   322,   343,   347,   271,   275,   233,   332,     9,   344,
     349,   322,   224,   322,   338,   339,   322,   322,   233,   322,
     339,   322,   322,   233,   322,   339,   322,   322,   322,   322,
     322,   322,   343,   322,   322,   322,   336,   233,   339,   337,
     337,   337,   343,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   233,   235,   267,   267,
     267,   267,   267,   267,   233,   267,   267,   233,   267,     5,
     175,   237,     5,   175,     5,   175,     5,   175,   117,    90,
      93,    96,    98,   233,   267,   267,   233,   233,   233,   322,
     237,   322,   338,   322,   322,   238,   339,     9,   349,     8,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   232,     9,   233,   235,   239,   266,
     267,   322,   339,   233,   233,   233,   336,   337,   337,   337,
     233,   233,   233,   233,   233,   336,   233,   336,   233,   336,
     237,   237,   322,     4,   336,   237,   340,   237,   237,   333,
     333,   333,   322,   322,   223,   224,   237,   237,   333,   223,
     224,   233,   293,   333,   237,   233,   237,   233,   233,   233,
     233,   233,   233,   233,   322,   337,   337,   337,   233,     4,
     235,     6,   235,   293,     6,     6,   237,   237,   237,   337,
     337,   235,   235,   235,   322,     6,     6,   322,   322,   322,
     239,   322,   237,   175,   322,   322,   322,   322,   267,   267,
     267,   233,   233,   233,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   233,   233,   267,   233,   235,     6,
       6,   237,     6,   293,     6,   293,   267,   322,   225,   237,
     233,   235,   343,   322,   293,   336,   336,   237,   344,    90,
      93,    96,    98,     7,   322,   322,     4,   172,   173,   336,
       6,   234,   236,   237,   268,     6,   237,     6,     9,   233,
     235,   239,   349,   238,    90,    93,    96,    98,   117,   122,
     125,   290,   322,     6,   234,   242,     9,   233,   235,   239,
     234,   242,   242,   234,   242,   236,   242,   270,   236,   270,
      86,   331,   328,   349,   242,   242,   234,   225,   238,   242,
     234,   234,   322,   234,   238,   234,   234,   322,   234,   238,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
       7,   322,   238,     6,     6,     6,   234,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   338,   322,   322,   322,   322,   322,
     322,   322,   338,   338,   349,   237,   322,   322,   343,   322,
     343,   336,   343,   343,   347,   322,    64,   322,    64,    64,
      64,   337,   337,   337,   337,   343,   343,   338,   329,   344,
     329,   339,   234,   238,     9,   267,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   237,   322,
     338,   322,   322,   322,   349,   322,   322,     4,   330,   237,
     268,   234,   238,   322,   322,   322,     7,     7,   315,   315,
     284,   322,   344,   285,   322,   344,   286,   322,   344,   287,
     322,   344,   322,     6,   322,     6,   322,     6,   339,   339,
     237,   234,     6,   293,   237,   293,   293,   242,   242,   242,
     333,   333,   292,   292,   242,   322,   238,   306,   242,   293,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   234,
       7,   316,     6,     7,   322,     6,   322,   322,   238,   339,
     339,   339,     6,     6,   322,   322,   322,   234,   234,   234,
     234,   172,   242,   293,   237,     8,   234,   234,   236,   347,
     343,   347,   343,   343,   343,   343,   343,   343,   322,   343,
     343,   343,   343,   240,   346,   349,   344,   343,   343,   343,
     329,   349,   339,   238,   238,   322,   322,   293,   236,   234,
     130,   147,   310,   234,   238,   242,   322,     6,   237,   237,
     237,   237,   322,   234,   236,     7,   265,   266,   239,     7,
       6,   339,     7,   213,   265,   250,   349,   322,   322,   330,
     235,   237,   237,   237,   237,   233,   117,    93,    96,    98,
     238,     6,   220,   247,   339,   349,   322,   322,     4,   330,
       6,   339,   322,     6,   343,     6,   349,     6,   343,   322,
     234,   235,   322,   344,     7,   175,   322,   338,     7,     7,
     234,     7,   175,     7,     7,   234,     7,   175,     7,     7,
       7,     7,     7,     7,     7,     7,     7,   322,   234,   237,
       6,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   242,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   242,   242,   242,   234,   236,   236,   339,   242,
     242,   268,   242,   268,   242,   242,   242,   234,   324,   237,
     238,   237,   237,   237,   242,   242,   268,   268,   234,   239,
     234,   239,   242,   325,   238,     7,   268,     8,     8,   339,
     239,   234,   236,   266,   339,     7,   237,   234,   234,   234,
     322,   336,     4,   314,     6,   234,   242,   234,   242,   234,
     242,   234,   242,   234,   234,   234,   238,   238,   339,   239,
     238,   293,   238,   238,   333,   322,   322,   238,   238,   322,
     333,   127,   127,   144,   152,   153,   154,   158,   159,   307,
     308,   333,   238,   303,   234,   238,   234,   234,   234,   234,
     234,   234,   234,     7,   322,     6,   322,   234,   236,   236,
     238,   238,   238,   236,   236,   242,     7,     7,     7,   239,
     322,   238,   322,   322,     7,   239,   268,   242,   268,   268,
     234,   234,   242,   268,   268,   242,   242,   268,   268,   268,
     268,   322,   268,     9,   345,   242,   234,   242,   268,   239,
     242,   326,   236,   238,   238,   241,     7,   147,     6,   322,
     238,   237,     6,   336,   238,   322,   322,   322,   322,     6,
       7,   265,   266,   239,   265,   266,   344,   322,     6,     4,
     237,   341,   349,   238,    46,    46,   336,     4,   162,   163,
     164,   165,   238,   253,   257,   260,   262,   263,   239,   234,
     236,   322,   339,   339,   339,   339,   322,   233,   233,   233,
     233,   220,   343,   234,   239,   234,   236,   234,   242,     7,
     267,     4,   278,   279,   280,   268,   268,   333,    96,    98,
     336,   336,     7,   336,    96,    98,   336,   336,     7,   336,
      98,   336,   336,   336,   336,   336,   336,   336,   336,   336,
       6,     7,   339,   322,   322,   322,   322,   238,   322,   322,
     322,   336,   343,   343,   242,   277,   322,   322,   322,   322,
     322,   322,   330,   330,   322,   234,   336,   322,   322,   238,
     330,   266,   239,   266,   238,   336,   339,     7,     7,     7,
     127,   313,     6,   265,   322,   265,   322,   265,   322,   265,
     322,     7,     7,     7,     7,     7,   238,     4,   238,   242,
     242,   242,   238,   238,   108,     4,     6,   322,   237,     6,
     233,     6,   160,     6,   160,   238,   308,   242,   307,     7,
       6,     7,     7,     7,     7,     7,     7,     7,   336,     6,
     237,     6,     6,     6,    96,     7,     6,     6,   322,   336,
     336,   336,     4,   242,     8,     8,   234,     4,     4,   339,
     343,   322,   343,   240,   242,   281,   343,   343,   330,   343,
     234,   242,   237,   237,     6,   322,     6,   237,   336,   238,
     238,   238,   238,   238,   322,     6,     4,   172,   173,   322,
       6,     6,     6,     7,   340,   342,     6,   235,   268,   267,
     267,     6,   254,   233,   233,   237,   264,     6,   330,   239,
     343,   236,   238,   238,   238,   238,   234,   322,   322,   322,
     322,     6,     6,   247,   330,   239,     6,   322,   237,   322,
     344,   268,   237,   336,   344,   236,   242,     6,     6,     6,
     237,   237,   121,   289,   289,   336,     6,   237,   237,     6,
       6,   336,   175,   288,   237,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     5,   238,   268,   268,   268,   268,
     268,   242,   242,   242,   234,   268,   268,   279,   268,   242,
     242,   242,   242,   234,   268,   234,   325,     6,     4,   268,
       6,   238,   336,   336,   336,     4,     6,   336,   336,   336,
     336,   336,   336,   336,   237,   237,     7,     6,     7,   322,
     322,   322,   237,   237,   237,   235,     6,   322,   336,   322,
       6,     6,   322,   333,   238,     5,   336,   237,   237,   237,
     237,   237,   237,   237,   336,     6,   339,   237,   322,   236,
       6,     6,   171,   322,   322,   322,     6,     6,     7,   268,
     242,   242,   268,   242,   322,     4,   187,   282,   283,   268,
     234,   268,   326,   344,   322,   293,     6,   293,   242,     6,
       6,     7,   265,   266,   239,     7,     6,   340,   238,   242,
     322,   265,   268,   347,   347,   233,   322,   322,   335,   336,
     237,     4,     6,     6,     6,     6,     6,     6,   234,   234,
     234,   234,   343,     4,   242,   336,   344,     7,   276,   322,
     338,   280,   322,   322,   333,     6,     6,     6,   322,   322,
       6,    94,     6,   322,     5,   237,   322,   322,   322,   322,
     322,   322,   322,   234,   266,   237,     6,   288,     6,   322,
       6,     6,     6,     6,     6,     4,     6,     6,   339,   339,
     322,   322,   344,   238,   234,   238,   242,   292,   292,   322,
     322,   238,   242,   234,   238,   242,     6,     6,   335,   333,
     333,   333,   333,   333,   224,   333,     6,   238,   322,     6,
       6,   336,   238,   242,     8,   238,   234,   237,   322,   344,
     343,   322,   343,   237,   322,   344,   344,   242,   234,   242,
     238,   310,   310,   336,   344,   322,     6,     4,   341,     6,
     340,   236,   336,     6,   268,   268,   251,   322,   242,   242,
     238,   242,   252,   322,     6,   322,   272,   274,   237,   238,
     242,     7,     7,   238,   238,   238,   238,   237,   238,     5,
     335,   268,   268,   242,   242,   242,   242,   242,   322,     6,
     237,   238,   238,   237,     6,     6,   237,   322,   238,   238,
     238,   236,     6,   336,     7,   237,   322,   238,   242,   242,
     242,   242,   242,   242,     6,   238,   170,   322,   322,   339,
       6,     6,   234,   268,   268,   347,   283,   344,   238,   238,
     238,     6,     6,     7,     6,   239,     6,     6,     6,   234,
     242,   322,   322,   237,   336,   238,   242,   242,   277,   281,
     336,   322,   344,   349,     6,     6,     6,     6,   322,     6,
       6,   238,   322,   322,   322,   322,   322,   238,   335,   131,
     132,   137,   317,   131,   132,   317,   339,   292,   238,   242,
       6,   238,   336,   293,   238,     6,   339,   333,   333,   333,
     333,   333,   322,   238,   238,   238,   238,   234,   237,     6,
     340,   173,   255,   322,   242,   242,   335,     6,   322,   322,
     238,   238,   273,     7,   233,   238,   237,   242,   242,   242,
     242,   242,   238,   237,   333,   336,     6,   237,   333,     6,
     238,   238,   322,     6,   127,   238,   304,   237,   238,   242,
     242,   242,   242,   242,     6,     6,     6,   293,     6,   237,
     322,   322,   238,   242,   277,   344,   234,   322,   322,   322,
     322,   322,   322,     6,   333,     6,   333,     6,     6,   238,
     322,   307,   293,     6,   339,   339,   339,   339,   333,   339,
     310,   252,   234,   242,     6,   237,   322,   238,   242,   242,
     242,   242,   242,   242,   242,   242,     6,   238,   238,   305,
     238,   238,   238,   238,   242,   238,   238,   238,   258,   322,
     335,   238,   322,   322,   322,   322,   322,   322,   333,   333,
     307,     6,     6,     6,     6,   339,     6,     6,     6,   237,
     234,   238,     6,   238,   268,   242,   242,   242,   242,   242,
     242,   238,   238,   256,   343,   261,   237,     6,   322,   322,
     322,   322,   322,   322,     6,   238,   242,   237,   335,   238,
     238,   238,   238,   238,   238,     6,   343,   259,   343,   238,
       6,     6,   238,   242,     6,     6,   343
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
#line 253 "Gmsh.y"
    { yyerrok; return 1; ;}
    break;

  case 6:
#line 264 "Gmsh.y"
    { return 1; ;}
    break;

  case 7:
#line 265 "Gmsh.y"
    { return 1; ;}
    break;

  case 8:
#line 266 "Gmsh.y"
    { return 1; ;}
    break;

  case 9:
#line 268 "Gmsh.y"
    {
      factory = (yyvsp[(3) - (5)].c);
      if(factory == "OpenCASCADE"){
        if(!GModel::current()->getOCCInternals())
          GModel::current()->createOCCInternals();
        for(int dim = -2; dim <= 3; dim++)
          GModel::current()->getOCCInternals()->setMaxTag
            (dim, std::max(GModel::current()->getOCCInternals()->getMaxTag(dim),
                           GModel::current()->getGEOInternals()->getMaxTag(dim)));
      }
      else if(GModel::current()->getOCCInternals()){
        for(int dim = -2; dim <= 3; dim++)
          GModel::current()->getGEOInternals()->setMaxTag
            (dim, std::max(GModel::current()->getGEOInternals()->getMaxTag(dim),
                           GModel::current()->getOCCInternals()->getMaxTag(dim)));
      }
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 10:
#line 286 "Gmsh.y"
    { return 1; ;}
    break;

  case 11:
#line 287 "Gmsh.y"
    { List_Delete((yyvsp[(1) - (1)].l)); return 1; ;}
    break;

  case 12:
#line 288 "Gmsh.y"
    { return 1; ;}
    break;

  case 13:
#line 289 "Gmsh.y"
    { return 1; ;}
    break;

  case 14:
#line 290 "Gmsh.y"
    { return 1; ;}
    break;

  case 15:
#line 291 "Gmsh.y"
    { return 1; ;}
    break;

  case 16:
#line 292 "Gmsh.y"
    { List_Delete((yyvsp[(1) - (1)].l)); return 1; ;}
    break;

  case 17:
#line 293 "Gmsh.y"
    { List_Delete((yyvsp[(1) - (1)].l)); return 1; ;}
    break;

  case 18:
#line 294 "Gmsh.y"
    { return 1; ;}
    break;

  case 19:
#line 295 "Gmsh.y"
    { return 1; ;}
    break;

  case 20:
#line 296 "Gmsh.y"
    { return 1; ;}
    break;

  case 21:
#line 297 "Gmsh.y"
    { return 1; ;}
    break;

  case 22:
#line 298 "Gmsh.y"
    { return 1; ;}
    break;

  case 23:
#line 299 "Gmsh.y"
    { return 1; ;}
    break;

  case 24:
#line 300 "Gmsh.y"
    { return 1; ;}
    break;

  case 25:
#line 301 "Gmsh.y"
    { return 1; ;}
    break;

  case 26:
#line 306 "Gmsh.y"
    {
      (yyval.c) = (char*)"w";
    ;}
    break;

  case 27:
#line 310 "Gmsh.y"
    {
      (yyval.c) = (char*)"a";
    ;}
    break;

  case 28:
#line 317 "Gmsh.y"
    {
      Msg::Direct((yyvsp[(3) - (5)].c));
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 29:
#line 322 "Gmsh.y"
    {
      Msg::Error((yyvsp[(3) - (5)].c));
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 30:
#line 327 "Gmsh.y"
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
#line 341 "Gmsh.y"
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
#line 354 "Gmsh.y"
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
#line 367 "Gmsh.y"
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
#line 395 "Gmsh.y"
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
#line 409 "Gmsh.y"
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
#line 422 "Gmsh.y"
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
#line 435 "Gmsh.y"
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
#line 453 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData = new PViewDataList();
#endif
    ;}
    break;

  case 44:
#line 467 "Gmsh.y"
    { ViewCoord.push_back((yyvsp[(1) - (1)].d)); ;}
    break;

  case 45:
#line 469 "Gmsh.y"
    { ViewCoord.push_back((yyvsp[(3) - (3)].d)); ;}
    break;

  case 46:
#line 474 "Gmsh.y"
    { if(ViewValueList) ViewValueList->push_back((yyvsp[(1) - (1)].d)); ;}
    break;

  case 47:
#line 476 "Gmsh.y"
    { if(ViewValueList) ViewValueList->push_back((yyvsp[(3) - (3)].d)); ;}
    break;

  case 48:
#line 481 "Gmsh.y"
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
#line 585 "Gmsh.y"
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
#line 595 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(ViewValueList) (*ViewNumList)++;
#endif
    ;}
    break;

  case 51:
#line 604 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(1) - (1)].c)) + 1; i++) ViewData->T2C.push_back((yyvsp[(1) - (1)].c)[i]);
#endif
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 52:
#line 611 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(3) - (3)].c)) + 1; i++) ViewData->T2C.push_back((yyvsp[(3) - (3)].c)[i]);
#endif
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 53:
#line 621 "Gmsh.y"
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
#line 630 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->NbT2++;
#endif
    ;}
    break;

  case 55:
#line 639 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(1) - (1)].c)) + 1; i++) ViewData->T3C.push_back((yyvsp[(1) - (1)].c)[i]);
#endif
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 56:
#line 646 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(3) - (3)].c)) + 1; i++) ViewData->T3C.push_back((yyvsp[(3) - (3)].c)[i]);
#endif
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 57:
#line 656 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->T3D.push_back((yyvsp[(3) - (10)].d)); ViewData->T3D.push_back((yyvsp[(5) - (10)].d));
      ViewData->T3D.push_back((yyvsp[(7) - (10)].d)); ViewData->T3D.push_back((yyvsp[(9) - (10)].d));
      ViewData->T3D.push_back(ViewData->T3C.size());
#endif
    ;}
    break;

  case 58:
#line 664 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->NbT3++;
#endif
    ;}
    break;

  case 59:
#line 674 "Gmsh.y"
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
#line 693 "Gmsh.y"
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
#line 712 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewValueList = &ViewData->Time;
#endif
    ;}
    break;

  case 62:
#line 718 "Gmsh.y"
    {
    ;}
    break;

  case 63:
#line 725 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 64:
#line 726 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 65:
#line 727 "Gmsh.y"
    { (yyval.i) = 2; ;}
    break;

  case 66:
#line 728 "Gmsh.y"
    { (yyval.i) = 3; ;}
    break;

  case 67:
#line 729 "Gmsh.y"
    { (yyval.i) = 4; ;}
    break;

  case 68:
#line 733 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 69:
#line 734 "Gmsh.y"
    { (yyval.i) = -1; ;}
    break;

  case 70:
#line 740 "Gmsh.y"
    { (yyval.c) = (char*)"("; ;}
    break;

  case 71:
#line 740 "Gmsh.y"
    { (yyval.c) = (char*)"["; ;}
    break;

  case 72:
#line 741 "Gmsh.y"
    { (yyval.c) = (char*)")"; ;}
    break;

  case 73:
#line 741 "Gmsh.y"
    { (yyval.c) = (char*)"]"; ;}
    break;

  case 77:
#line 751 "Gmsh.y"
    {
      Msg::SetOnelabNumber((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].d));
      Free((yyvsp[(3) - (7)].c));
    ;}
    break;

  case 78:
#line 756 "Gmsh.y"
    {
      Msg::SetOnelabString((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].c));
      Free((yyvsp[(3) - (7)].c));
      Free((yyvsp[(5) - (7)].c));
    ;}
    break;

  case 79:
#line 762 "Gmsh.y"
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
#line 824 "Gmsh.y"
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
#line 839 "Gmsh.y"
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
#line 868 "Gmsh.y"
    {
      assignVariables((yyvsp[(1) - (9)].c), (yyvsp[(4) - (9)].l), (yyvsp[(7) - (9)].i), (yyvsp[(8) - (9)].l));
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(4) - (9)].l));
      List_Delete((yyvsp[(8) - (9)].l));
    ;}
    break;

  case 83:
#line 878 "Gmsh.y"
    {
      assignVariable((yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(5) - (7)].i), (yyvsp[(6) - (7)].d));
      Free((yyvsp[(1) - (7)].c));
    ;}
    break;

  case 84:
#line 883 "Gmsh.y"
    {
      incrementVariable((yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].i));
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 85:
#line 891 "Gmsh.y"
    {
      assignVariable((yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(5) - (7)].i), (yyvsp[(6) - (7)].d));
      Free((yyvsp[(1) - (7)].c));
    ;}
    break;

  case 86:
#line 896 "Gmsh.y"
    {
      incrementVariable((yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].i));
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 87:
#line 904 "Gmsh.y"
    {
      gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)] = std::vector<std::string>(1, (yyvsp[(3) - (4)].c));
      Free((yyvsp[(1) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 88:
#line 913 "Gmsh.y"
    {
      gmsh_yystringsymbols[(yyvsp[(1) - (8)].c)] = std::vector<std::string>();
      Free((yyvsp[(1) - (8)].c));
    ;}
    break;

  case 89:
#line 918 "Gmsh.y"
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
#line 930 "Gmsh.y"
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
#line 947 "Gmsh.y"
    {
      std::string tmp((yyvsp[(5) - (6)].c));
      StringOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (6)].c), 0, (yyvsp[(3) - (6)].c), tmp);
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(3) - (6)].c)); Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 92:
#line 953 "Gmsh.y"
    {
      std::string tmp((yyvsp[(8) - (9)].c));
      StringOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), tmp);
      Free((yyvsp[(1) - (9)].c)); Free((yyvsp[(6) - (9)].c)); Free((yyvsp[(8) - (9)].c));
    ;}
    break;

  case 93:
#line 962 "Gmsh.y"
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
#line 980 "Gmsh.y"
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
#line 998 "Gmsh.y"
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
#line 1007 "Gmsh.y"
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
#line 1019 "Gmsh.y"
    {
      ColorOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (8)].c), 0, (yyvsp[(5) - (8)].c), (yyvsp[(7) - (8)].u));
      Free((yyvsp[(1) - (8)].c)); Free((yyvsp[(5) - (8)].c));
    ;}
    break;

  case 98:
#line 1024 "Gmsh.y"
    {
      ColorOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (11)].c), (int)(yyvsp[(3) - (11)].d), (yyvsp[(8) - (11)].c), (yyvsp[(10) - (11)].u));
      Free((yyvsp[(1) - (11)].c)); Free((yyvsp[(8) - (11)].c));
    ;}
    break;

  case 99:
#line 1032 "Gmsh.y"
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
#line 1052 "Gmsh.y"
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
#line 1075 "Gmsh.y"
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
#line 1086 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      if(!GModel::current()->getFields()->newField((int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c)))
	yymsg(0, "Cannot create field %i of type '%s'", (int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c));
#endif
      Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 103:
#line 1094 "Gmsh.y"
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
#line 1116 "Gmsh.y"
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
#line 1139 "Gmsh.y"
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
#line 1177 "Gmsh.y"
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
#line 1198 "Gmsh.y"
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
#line 1210 "Gmsh.y"
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
#line 1228 "Gmsh.y"
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
#line 1237 "Gmsh.y"
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
#line 1246 "Gmsh.y"
    { init_options(); ;}
    break;

  case 115:
#line 1248 "Gmsh.y"
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
#line 1266 "Gmsh.y"
    { init_options(); ;}
    break;

  case 117:
#line 1268 "Gmsh.y"
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
#line 1284 "Gmsh.y"
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
#line 1293 "Gmsh.y"
    { init_options(); ;}
    break;

  case 120:
#line 1295 "Gmsh.y"
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
#line 1309 "Gmsh.y"
    {
      std::string name((yyvsp[(3) - (3)].c));
      Msg::UndefineOnelabParameter(name);
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 123:
#line 1317 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(doubleXstring));
      doubleXstring v = {(yyvsp[(1) - (3)].d), (yyvsp[(3) - (3)].c)};
      List_Add((yyval.l), &v);
    ;}
    break;

  case 124:
#line 1323 "Gmsh.y"
    {
      doubleXstring v = {(yyvsp[(3) - (5)].d), (yyvsp[(5) - (5)].c)};
      List_Add((yyval.l), &v);
    ;}
    break;

  case 125:
#line 1328 "Gmsh.y"
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

  case 132:
#line 1370 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(2) - (2)].l)); i++){
        double v;
        List_Read((yyvsp[(2) - (2)].l), i, &v);
        floatOptions[key].push_back(v);
        if (flag_Enum && !i) { member_ValMax = (int)v; }
      }
      Free((yyvsp[(1) - (2)].c));
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 133:
#line 1382 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (1)].c));
      double v;
      if (!flag_Enum) {
        v = 1.;
        if (key == "Enum") flag_Enum = 1;
      }
      else
        v = (double)++member_ValMax;
      floatOptions[key].push_back(v);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 134:
#line 1395 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (4)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        doubleXstring v;
        List_Read((yyvsp[(3) - (4)].l), i, &v);
        floatOptions[key].push_back(v.d);
        charOptions[key].push_back(v.s);
      }
      Free((yyvsp[(1) - (4)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++)
        Free(((doubleXstring*)List_Pointer((yyvsp[(3) - (4)].l), i))->s);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 135:
#line 1410 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      std::string val((yyvsp[(2) - (2)].c));
      charOptions[key].push_back(val);
      Free((yyvsp[(1) - (2)].c));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 140:
#line 1432 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      double val = (yyvsp[(2) - (2)].d);
      floatOptions[key].push_back(val);
      Free((yyvsp[(1) - (2)].c));
    ;}
    break;

  case 141:
#line 1440 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      std::string val((yyvsp[(2) - (2)].c));
      charOptions[key].push_back(val);
      Free((yyvsp[(1) - (2)].c));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 142:
#line 1449 "Gmsh.y"
    {
      std::string key("Macro");
      std::string val((yyvsp[(2) - (2)].c));
      charOptions[key].push_back(val);
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 143:
#line 1457 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (4)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        char *s;
        List_Read((yyvsp[(3) - (4)].l), i, &s);
        std::string val(s);
        Free(s);
        charOptions[key].push_back(val);
      }
      Free((yyvsp[(1) - (4)].c));
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 144:
#line 1475 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(1) - (1)].d);
    ;}
    break;

  case 145:
#line 1479 "Gmsh.y"
    {
      int t = GModel::current()->getGEOInternals()->getMaxPhysicalTag();
      GModel::current()->getGEOInternals()->setMaxPhysicalTag(t + 1);
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (1)].c)), 0, t + 1);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 146:
#line 1486 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (3)].c)), 0, (yyvsp[(3) - (3)].d));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 147:
#line 1494 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(1) - (1)].d);
    ;}
    break;

  case 148:
#line 1498 "Gmsh.y"
    {
      int t = GModel::current()->getGEOInternals()->getMaxPhysicalTag();
      GModel::current()->getGEOInternals()->setMaxPhysicalTag(t + 1);
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (1)].c)), 1, t + 1);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 149:
#line 1505 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (3)].c)), 1, (yyvsp[(3) - (3)].d));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 150:
#line 1513 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(1) - (1)].d);
    ;}
    break;

  case 151:
#line 1517 "Gmsh.y"
    {
      int t = GModel::current()->getGEOInternals()->getMaxPhysicalTag();
      GModel::current()->getGEOInternals()->setMaxPhysicalTag(t + 1);
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (1)].c)), 2, t + 1);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 152:
#line 1524 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (3)].c)), 2, (yyvsp[(3) - (3)].d));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 153:
#line 1532 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(1) - (1)].d);
    ;}
    break;

  case 154:
#line 1536 "Gmsh.y"
    {
      int t = GModel::current()->getGEOInternals()->getMaxPhysicalTag();
      GModel::current()->getGEOInternals()->setMaxPhysicalTag(t + 1);
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (1)].c)), 3, t + 1);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 155:
#line 1543 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (3)].c)), 3, (yyvsp[(3) - (3)].d));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 156:
#line 1551 "Gmsh.y"
    {
      (yyval.i) = -1;
    ;}
    break;

  case 157:
#line 1555 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(4) - (5)].d);
    ;}
    break;

  case 158:
#line 1561 "Gmsh.y"
    {
      for(int i = 0; i < 4; i++) (yyval.v)[i] = 0.;
    ;}
    break;

  case 159:
#line 1565 "Gmsh.y"
    {
      for(int i = 0; i < 4; i++) (yyval.v)[i] = (yyvsp[(2) - (2)].v)[i];
    ;}
    break;

  case 160:
#line 1572 "Gmsh.y"
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

  case 161:
#line 1593 "Gmsh.y"
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

  case 162:
#line 1607 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
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

  case 163:
#line 1621 "Gmsh.y"
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

  case 164:
#line 1656 "Gmsh.y"
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

  case 165:
#line 1694 "Gmsh.y"
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

  case 166:
#line 1708 "Gmsh.y"
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

  case 167:
#line 1723 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (11)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (11)].l), tags);
      std::vector<double> knots; ListOfDouble2Vector((yyvsp[(8) - (11)].l), knots);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
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

  case 168:
#line 1742 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      GModel::current()->getGEOInternals()->addCompoundLine(num, tags);
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_SEGM_COMPOUND;
      (yyval.s).Num = num;
    ;}
    break;

  case 169:
#line 1751 "Gmsh.y"
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

  case 170:
#line 1765 "Gmsh.y"
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

  case 171:
#line 1780 "Gmsh.y"
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

  case 172:
#line 1794 "Gmsh.y"
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

  case 173:
#line 1813 "Gmsh.y"
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

  case 174:
#line 1823 "Gmsh.y"
    {
      myGmshSurface = 0;
      (yyval.s).Type = 0;
      (yyval.s).Num = 0;
    ;}
    break;

  case 175:
#line 1829 "Gmsh.y"
    {
      myGmshSurface = gmshSurface::getSurface((int)(yyvsp[(3) - (4)].d));
      (yyval.s).Type = 0;
      (yyval.s).Num = 0;
    ;}
    break;

  case 176:
#line 1835 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (10)].d);
      myGmshSurface = gmshParametricSurface::NewParametricSurface(num, (yyvsp[(7) - (10)].c), (yyvsp[(8) - (10)].c), (yyvsp[(9) - (10)].c));
      (yyval.s).Type = 0;
      (yyval.s).Num = num;
    ;}
    break;

  case 177:
#line 1842 "Gmsh.y"
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

  case 178:
#line 1871 "Gmsh.y"
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

  case 179:
#line 1886 "Gmsh.y"
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

  case 180:
#line 1906 "Gmsh.y"
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

  case 181:
#line 1927 "Gmsh.y"
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

  case 182:
#line 1948 "Gmsh.y"
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

  case 183:
#line 1969 "Gmsh.y"
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

  case 184:
#line 1991 "Gmsh.y"
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

  case 185:
#line 2013 "Gmsh.y"
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

  case 186:
#line 2034 "Gmsh.y"
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

  case 187:
#line 2057 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      GModel::current()->getGEOInternals()->addCompoundSurface(num, tags);
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_SURF_COMPOUND;
      (yyval.s).Num = num;
    ;}
    break;

  case 188:
#line 2067 "Gmsh.y"
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

  case 189:
#line 2087 "Gmsh.y"
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

  case 190:
#line 2102 "Gmsh.y"
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

  case 191:
#line 2116 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(6) - (7)].l), wires);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int> > outDimTags;
        GModel::current()->getOCCInternals()->addThruSections
          (num, wires, outDimTags, true, false);
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 192:
#line 2132 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(7) - (8)].l), wires);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int> > outDimTags;
        GModel::current()->getOCCInternals()->addThruSections
          (num, wires, outDimTags, true, true);
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 193:
#line 2148 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      GModel::current()->getGEOInternals()->addCompoundVolume(num, tags);
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_VOLUME_COMPOUND;
      (yyval.s).Num = num;
    ;}
    break;

  case 194:
#line 2157 "Gmsh.y"
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

  case 195:
#line 2167 "Gmsh.y"
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

  case 196:
#line 2177 "Gmsh.y"
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

  case 197:
#line 2187 "Gmsh.y"
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

  case 198:
#line 2202 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->translate(dimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2]);
      }
      else{
        GModel::current()->getGEOInternals()->translate(dimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2]);
      }
      (yyval.l) = (yyvsp[(4) - (5)].l);
    ;}
    break;

  case 199:
#line 2214 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(10) - (11)].l), dimTags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->rotate
          (dimTags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d));
      }
      else{
        GModel::current()->getGEOInternals()->rotate
          (dimTags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d));
      }
      (yyval.l) = (yyvsp[(10) - (11)].l);
    ;}
    break;

  case 200:
#line 2228 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        Msg::Error("Symmetry not implemented yet with OpenCASCADE factory");
      }
      else{
        GModel::current()->getGEOInternals()->symmetry
          (dimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], (yyvsp[(2) - (5)].v)[3]);
      }
      (yyval.l) = (yyvsp[(4) - (5)].l);
    ;}
    break;

  case 201:
#line 2241 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(8) - (9)].l), dimTags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Dilate not implemented yet with OpenCASCADE factory");
      }
      else{
        GModel::current()->getGEOInternals()->dilate
          (dimTags, (yyvsp[(3) - (9)].v)[0], (yyvsp[(3) - (9)].v)[1], (yyvsp[(3) - (9)].v)[2], (yyvsp[(5) - (9)].d), (yyvsp[(5) - (9)].d), (yyvsp[(5) - (9)].d));
      }
      (yyval.l) = (yyvsp[(8) - (9)].l);
    ;}
    break;

  case 202:
#line 2254 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(8) - (9)].l), dimTags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Dilate not implemented yet with OpenCASCADE factory");
      }
      else{
        GModel::current()->getGEOInternals()->dilate
          (dimTags, (yyvsp[(3) - (9)].v)[0], (yyvsp[(3) - (9)].v)[1], (yyvsp[(3) - (9)].v)[2], (yyvsp[(5) - (9)].v)[0], (yyvsp[(5) - (9)].v)[1], (yyvsp[(5) - (9)].v)[2]);
      }
      (yyval.l) = (yyvsp[(8) - (9)].l);
    ;}
    break;

  case 203:
#line 2267 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (4)].l), inDimTags);
      (yyval.l) = (yyvsp[(3) - (4)].l);
      List_Reset((yyval.l));
      std::string action((yyvsp[(1) - (4)].c));
      if(action == "Duplicata"){
        if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
          GModel::current()->getOCCInternals()->copy(inDimTags, outDimTags);
        }
        else{
          GModel::current()->getGEOInternals()->copy(inDimTags, outDimTags);
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
        GModel::current()->getBoundaryTags
          (inDimTags, outDimTags, action == "CombinedBoundary");
      }
      else{
        yymsg(0, "Unknown action on multiple shapes: %s", (yyvsp[(1) - (4)].c));
      }
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 204:
#line 2300 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Intersect line not available with OpenCASCADE");
      }
      else{
        std::vector<int> in, out; ListOfDouble2Vector((yyvsp[(4) - (9)].l), in);
        GModel::current()->getGEOInternals()->intersectCurvesWithSurface
          (in, (int)(yyvsp[(8) - (9)].d), out);
        for(unsigned int i = 0; i < out.size(); i++){
          Shape s;
          s.Type = MSH_POINT;
          s.Num = out[i];
          List_Add((yyval.l), &s);
        }
      }
      List_Delete((yyvsp[(4) - (9)].l));
    ;}
    break;

  case 205:
#line 2320 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Split Line not available with OpenCASCADE");
      }
      else{
        std::vector<int> vertices, curves; ListOfDouble2Vector((yyvsp[(7) - (9)].l), vertices);
        GModel::current()->getGEOInternals()->splitCurve
          ((int)(yyvsp[(4) - (9)].d), vertices, curves);
        for(unsigned int i = 0; i < curves.size(); i++){
          Shape s;
          s.Type = MSH_SEGM_LINE;
          s.Num = curves[i];
          List_Add((yyval.l), &s);
        }
      }
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 206:
#line 2341 "Gmsh.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 207:
#line 2342 "Gmsh.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 208:
#line 2347 "Gmsh.y"
    {
      (yyval.l) = List_Create(3, 3, sizeof(Shape));
    ;}
    break;

  case 209:
#line 2351 "Gmsh.y"
    {
      List_Add((yyval.l), &(yyvsp[(2) - (2)].s));
    ;}
    break;

  case 210:
#line 2355 "Gmsh.y"
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

  case 211:
#line 2366 "Gmsh.y"
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

  case 212:
#line 2377 "Gmsh.y"
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

  case 213:
#line 2388 "Gmsh.y"
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

  case 214:
#line 2404 "Gmsh.y"
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

  case 215:
#line 2423 "Gmsh.y"
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

  case 216:
#line 2445 "Gmsh.y"
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

  case 217:
#line 2460 "Gmsh.y"
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

  case 218:
#line 2475 "Gmsh.y"
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

  case 219:
#line 2494 "Gmsh.y"
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

  case 220:
#line 2545 "Gmsh.y"
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

  case 221:
#line 2566 "Gmsh.y"
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

  case 222:
#line 2588 "Gmsh.y"
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

  case 223:
#line 2610 "Gmsh.y"
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

  case 224:
#line 2715 "Gmsh.y"
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

  case 225:
#line 2731 "Gmsh.y"
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

  case 226:
#line 2766 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (4)].l), dimTags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->remove(dimTags);
      }
      GModel::current()->getGEOInternals()->remove(dimTags);
      GModel::current()->remove(dimTags);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 227:
#line 2777 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->remove(dimTags, true);
      }
      GModel::current()->getGEOInternals()->remove(dimTags, true);
      GModel::current()->remove(dimTags, true);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 228:
#line 2788 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      GModel::current()->getFields()->deleteField((int)(yyvsp[(4) - (6)].d));
#endif
    ;}
    break;

  case 229:
#line 2794 "Gmsh.y"
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

  case 230:
#line 2809 "Gmsh.y"
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

  case 231:
#line 2837 "Gmsh.y"
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

  case 232:
#line 2849 "Gmsh.y"
    {
      nameSpaces.clear();
    ;}
    break;

  case 233:
#line 2858 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      setColor(dimTags, (yyvsp[(2) - (5)].u), false);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 234:
#line 2865 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(5) - (6)].l), dimTags);
      setColor(dimTags, (yyvsp[(3) - (6)].u), true);
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 235:
#line 2877 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      for(unsigned int i = 0; i < dimTags.size(); i++){
        GEntity *ge = GModel::current()->getEntityByTag
          (dimTags[i].first, dimTags[i].second);
        if(ge){
          for(unsigned int j = 0; j < ge->getNumMeshElements(); j++)
            ge->getMeshElement(j)->setPartition((int)(yyvsp[(2) - (5)].d));
        }
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 236:
#line 2896 "Gmsh.y"
    {
      std::string what = (yyvsp[(2) - (3)].c);
      setVisibility(-1, 1, false);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 237:
#line 2902 "Gmsh.y"
    {
      std::string what = (yyvsp[(2) - (3)].c);
      setVisibility(-1, 0, false);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 238:
#line 2908 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (4)].l), dimTags);
      setVisibility(dimTags, 1, false);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 239:
#line 2915 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      setVisibility(dimTags, 1, true);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 240:
#line 2922 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (4)].l), dimTags);
      setVisibility(dimTags, 0, false);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 241:
#line 2929 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      setVisibility(dimTags, 0, true);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 242:
#line 2941 "Gmsh.y"
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

  case 243:
#line 3014 "Gmsh.y"
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

  case 244:
#line 3032 "Gmsh.y"
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

  case 245:
#line 3049 "Gmsh.y"
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

  case 246:
#line 3064 "Gmsh.y"
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

  case 247:
#line 3097 "Gmsh.y"
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

  case 248:
#line 3109 "Gmsh.y"
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

  case 249:
#line 3133 "Gmsh.y"
    {
      Msg::Exit(0);
    ;}
    break;

  case 250:
#line 3137 "Gmsh.y"
    {
      gmsh_yyerrorstate = 999; // this will be checked when yyparse returns
      YYABORT;
    ;}
    break;

  case 251:
#line 3142 "Gmsh.y"
    {
      // force sync
      if(GModel::current()->getOCCInternals())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      GModel::current()->getGEOInternals()->synchronize(GModel::current());
    ;}
    break;

  case 252:
#line 3149 "Gmsh.y"
    {
      new GModel();
      GModel::current(GModel::list.size() - 1);
    ;}
    break;

  case 253:
#line 3154 "Gmsh.y"
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

  case 254:
#line 3164 "Gmsh.y"
    {
      CTX::instance()->forcedBBox = 1;
      SetBoundingBox((yyvsp[(3) - (15)].d), (yyvsp[(5) - (15)].d), (yyvsp[(7) - (15)].d), (yyvsp[(9) - (15)].d), (yyvsp[(11) - (15)].d), (yyvsp[(13) - (15)].d));
    ;}
    break;

  case 255:
#line 3169 "Gmsh.y"
    {
#if defined(HAVE_OPENGL)
      drawContext::global()->draw();
#endif
    ;}
    break;

  case 256:
#line 3175 "Gmsh.y"
    {
#if defined(HAVE_OPENGL)
     CTX::instance()->mesh.changed = ENT_ALL;
     for(unsigned int index = 0; index < PView::list.size(); index++)
       PView::list[index]->setChanged(true);
#endif
    ;}
    break;

  case 257:
#line 3183 "Gmsh.y"
    {
      GModel::current()->createTopologyFromMesh();
    ;}
    break;

  case 258:
#line 3187 "Gmsh.y"
    {
      GModel::current()->createTopologyFromMesh(1);
    ;}
    break;

  case 259:
#line 3191 "Gmsh.y"
    {
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      GModel::current()->refineMesh(CTX::instance()->mesh.secondOrderLinear);
    ;}
    break;

  case 260:
#line 3201 "Gmsh.y"
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

  case 261:
#line 3264 "Gmsh.y"
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

  case 262:
#line 3280 "Gmsh.y"
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

  case 263:
#line 3297 "Gmsh.y"
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

  case 264:
#line 3314 "Gmsh.y"
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

  case 265:
#line 3336 "Gmsh.y"
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

  case 266:
#line 3358 "Gmsh.y"
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

  case 267:
#line 3393 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->createFunction
         (std::string((yyvsp[(2) - (2)].c)), gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Redefinition of function %s", (yyvsp[(2) - (2)].c));
      skip(NULL, "Return");
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 268:
#line 3401 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->createFunction
         (std::string((yyvsp[(2) - (2)].c)), gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Redefinition of function %s", (yyvsp[(2) - (2)].c));
      skip(NULL, "Return");
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 269:
#line 3409 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->leaveFunction
         (&gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Error while exiting function");
    ;}
    break;

  case 270:
#line 3415 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->enterFunction
         (std::string((yyvsp[(2) - (3)].c)), &gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Unknown function %s", (yyvsp[(2) - (3)].c));
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 271:
#line 3422 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->enterFunction
         (std::string((yyvsp[(2) - (3)].c)), &gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Unknown function %s", (yyvsp[(2) - (3)].c));
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 272:
#line 3429 "Gmsh.y"
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

  case 273:
#line 3449 "Gmsh.y"
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

  case 274:
#line 3475 "Gmsh.y"
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

  case 275:
#line 3487 "Gmsh.y"
    {
      ImbricatedTest--;
      if(ImbricatedTest < 0)
        yymsg(1, "Orphan EndIf");
    ;}
    break;

  case 276:
#line 3499 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), inDimTags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->extrude
          (inDimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], outDimTags);
      }
      else{
        GModel::current()->getGEOInternals()->extrude
          (inDimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], outDimTags);
      }
      (yyval.l) = (yyvsp[(4) - (5)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 277:
#line 3515 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(10) - (11)].l), inDimTags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->revolve
          (inDimTags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d), outDimTags);
      }
      else{
        GModel::current()->getGEOInternals()->revolve
          (inDimTags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d), outDimTags);
      }
      (yyval.l) = (yyvsp[(10) - (11)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 278:
#line 3531 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(12) - (13)].l), inDimTags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Twisting extrude not available with OpenCASCADE factory");
      }
      else{
        GModel::current()->getGEOInternals()->twist
          (inDimTags, (yyvsp[(7) - (13)].v)[0], (yyvsp[(7) - (13)].v)[1], (yyvsp[(7) - (13)].v)[2], (yyvsp[(3) - (13)].v)[0], (yyvsp[(3) - (13)].v)[1], (yyvsp[(3) - (13)].v)[2], (yyvsp[(5) - (13)].v)[0], (yyvsp[(5) - (13)].v)[1], (yyvsp[(5) - (13)].v)[2],
           (yyvsp[(9) - (13)].d), outDimTags);
      }
      (yyval.l) = (yyvsp[(12) - (13)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 279:
#line 3547 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 280:
#line 3553 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (7)].l), inDimTags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->extrude
          (inDimTags, (yyvsp[(2) - (7)].v)[0], (yyvsp[(2) - (7)].v)[1], (yyvsp[(2) - (7)].v)[2], outDimTags, &extr);
      }
      else{
        GModel::current()->getGEOInternals()->extrude
          (inDimTags, (yyvsp[(2) - (7)].v)[0], (yyvsp[(2) - (7)].v)[1], (yyvsp[(2) - (7)].v)[2], outDimTags, &extr);
      }
      (yyval.l) = (yyvsp[(4) - (7)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 281:
#line 3569 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 282:
#line 3575 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(10) - (13)].l), inDimTags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->revolve
          (inDimTags, (yyvsp[(5) - (13)].v)[0], (yyvsp[(5) - (13)].v)[1], (yyvsp[(5) - (13)].v)[2], (yyvsp[(3) - (13)].v)[0], (yyvsp[(3) - (13)].v)[1], (yyvsp[(3) - (13)].v)[2], (yyvsp[(7) - (13)].d), outDimTags,
           &extr);
      }
      else{
        GModel::current()->getGEOInternals()->revolve
          (inDimTags, (yyvsp[(5) - (13)].v)[0], (yyvsp[(5) - (13)].v)[1], (yyvsp[(5) - (13)].v)[2], (yyvsp[(3) - (13)].v)[0], (yyvsp[(3) - (13)].v)[1], (yyvsp[(3) - (13)].v)[2], (yyvsp[(7) - (13)].d), outDimTags,
           &extr);
      }
      (yyval.l) = (yyvsp[(10) - (13)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 283:
#line 3593 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 284:
#line 3599 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(12) - (15)].l), inDimTags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Twisting extrude not available with OpenCASCADE factory");
      }
      else{
        GModel::current()->getGEOInternals()->twist
          (inDimTags, (yyvsp[(7) - (15)].v)[0], (yyvsp[(7) - (15)].v)[1], (yyvsp[(7) - (15)].v)[2], (yyvsp[(3) - (15)].v)[0], (yyvsp[(3) - (15)].v)[1], (yyvsp[(3) - (15)].v)[2], (yyvsp[(5) - (15)].v)[0], (yyvsp[(5) - (15)].v)[1], (yyvsp[(5) - (15)].v)[2],
           (yyvsp[(9) - (15)].d),  outDimTags, &extr);
      }
      (yyval.l) = (yyvsp[(12) - (15)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 285:
#line 3615 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 286:
#line 3621 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (6)].l), inDimTags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Boundary layer extrusion not available with OpenCASCADE factory");
      }
      else{
        GModel::current()->getGEOInternals()->boundaryLayer
          (inDimTags, outDimTags, &extr);
      }
      (yyval.l) = (yyvsp[(3) - (6)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 287:
#line 3636 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (9)].l), inDimTags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addPipe(inDimTags, (int)(yyvsp[(8) - (9)].d), outDimTags);
      }
      else{
        yymsg(0, "Pipe only available with OpenCASCADE factory");
      }
      (yyval.l) = (yyvsp[(3) - (9)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 288:
#line 3650 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> wires; ListOfDouble2Vector((yyvsp[(2) - (2)].l), wires);
        std::vector<std::pair<int, int> > outDimTags;
        GModel::current()->getOCCInternals()->addThruSections
          (-1, wires, outDimTags, false, false);
        VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 289:
#line 3665 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> wires; ListOfDouble2Vector((yyvsp[(3) - (3)].l), wires);
        std::vector<std::pair<int, int> > outDimTags;
        GModel::current()->getOCCInternals()->addThruSections
          (-1, wires, outDimTags, false, true);
        VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 290:
#line 3680 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        double radius = (yyvsp[(9) - (10)].d);
        std::vector<int> regions, edges;
        ListOfDouble2Vector((yyvsp[(3) - (10)].l), regions); ListOfDouble2Vector((yyvsp[(6) - (10)].l), edges);
        std::vector<std::pair<int, int> > outDimTags;
        GModel::current()->getOCCInternals()->fillet
          (regions, edges, radius, outDimTags);
        VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
      }
      else{
        yymsg(0, "Fillet only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(3) - (10)].l));
      List_Delete((yyvsp[(6) - (10)].l));
    ;}
    break;

  case 291:
#line 3701 "Gmsh.y"
    {
    ;}
    break;

  case 292:
#line 3704 "Gmsh.y"
    {
    ;}
    break;

  case 293:
#line 3710 "Gmsh.y"
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

  case 294:
#line 3722 "Gmsh.y"
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

  case 295:
#line 3742 "Gmsh.y"
    {
      extr.mesh.ScaleLast = true;
    ;}
    break;

  case 296:
#line 3746 "Gmsh.y"
    {
      extr.mesh.Recombine = true;
    ;}
    break;

  case 297:
#line 3750 "Gmsh.y"
    {
      extr.mesh.Recombine = (yyvsp[(2) - (3)].d) ? true : false;
    ;}
    break;

  case 298:
#line 3754 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_ADDVERTS_1;
    ;}
    break;

  case 299:
#line 3758 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_ADDVERTS_1_RECOMB;
    ;}
    break;

  case 300:
#line 3762 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_NOVERTS_1;
    ;}
    break;

  case 301:
#line 3766 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_NOVERTS_1_RECOMB;
    ;}
    break;

  case 302:
#line 3770 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (9)].l), tags);
      int num = (int)(yyvsp[(3) - (9)].d);
      GModel::current()->getGEOInternals()->addDiscreteSurface(num);
      extr.mesh.Holes[num].first = (yyvsp[(8) - (9)].d);
      extr.mesh.Holes[num].second = tags;
      List_Delete((yyvsp[(6) - (9)].l));
    ;}
    break;

  case 303:
#line 3779 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (6)].c), "Index"))
        extr.mesh.BoundaryLayerIndex = (yyvsp[(4) - (6)].d);
      else if(!strcmp((yyvsp[(2) - (6)].c), "View"))
        extr.mesh.ViewIndex = (yyvsp[(4) - (6)].d);
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 304:
#line 3791 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Union; ;}
    break;

  case 305:
#line 3792 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Intersection; ;}
    break;

  case 306:
#line 3793 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Difference; ;}
    break;

  case 307:
#line 3794 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Section; ;}
    break;

  case 308:
#line 3795 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Fragments; ;}
    break;

  case 309:
#line 3799 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 310:
#line 3800 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 311:
#line 3801 "Gmsh.y"
    { (yyval.i) = 2; ;}
    break;

  case 312:
#line 3802 "Gmsh.y"
    { (yyval.i) = (yyvsp[(2) - (3)].d) ? 1 : 0; ;}
    break;

  case 313:
#line 3803 "Gmsh.y"
    { (yyval.i) = (yyvsp[(3) - (4)].d) ? 2 : 0; ;}
    break;

  case 314:
#line 3808 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int > > object, tool, out;
        ListOfShapes2VectorOfPairs((yyvsp[(3) - (9)].l), object);
        ListOfShapes2VectorOfPairs((yyvsp[(7) - (9)].l), tool);
        // currently we don't distinguish between Delete and Recursive Delete:
        // we always delete recursively. Let us know if you have examples where
        // having the choice would be interesting
        GModel::current()->getOCCInternals()->applyBooleanOperator
          (-1, (OCC_Internals::BooleanOperator)(yyvsp[(1) - (9)].i), object, tool, out, (yyvsp[(4) - (9)].i), (yyvsp[(8) - (9)].i));
        VectorOfPairs2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "Boolean operators only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(3) - (9)].l));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 315:
#line 3828 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int> > out;
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
        GModel::current()->getOCCInternals()->importShapes(tmp, true, out);
        VectorOfPairs2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "ShapeFromFile only available with OpenCASCADE factory");
      }
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 316:
#line 3846 "Gmsh.y"
    {
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int> > object, tool, out;
        ListOfShapes2VectorOfPairs((yyvsp[(7) - (14)].l), object);
        ListOfShapes2VectorOfPairs((yyvsp[(11) - (14)].l), tool);
        // currently we don't distinguish between Delete and Recursive Delete:
        // we always delete recursively. Let us know if you have examples where
        // having the choice would be interesting
        GModel::current()->getOCCInternals()->applyBooleanOperator
          ((int)(yyvsp[(3) - (14)].d), (OCC_Internals::BooleanOperator)(yyvsp[(1) - (14)].i), object, tool, out, (yyvsp[(8) - (14)].i), (yyvsp[(12) - (14)].i));
      }
      List_Delete((yyvsp[(7) - (14)].l));
      List_Delete((yyvsp[(11) - (14)].l));
    ;}
    break;

  case 317:
#line 3864 "Gmsh.y"
    {
      (yyval.v)[0] = (yyval.v)[1] = 1.;
    ;}
    break;

  case 318:
#line 3868 "Gmsh.y"
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

  case 319:
#line 3883 "Gmsh.y"
    {
      (yyval.i) = -1; // left
    ;}
    break;

  case 320:
#line 3887 "Gmsh.y"
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

  case 321:
#line 3903 "Gmsh.y"
    {
     (yyval.l) = List_Create(1, 1, sizeof(double));
   ;}
    break;

  case 322:
#line 3907 "Gmsh.y"
    {
     (yyval.l) = (yyvsp[(2) - (2)].l);
   ;}
    break;

  case 323:
#line 3912 "Gmsh.y"
    {
      (yyval.i) = 45;
    ;}
    break;

  case 324:
#line 3916 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(2) - (2)].d);
    ;}
    break;

  case 325:
#line 3922 "Gmsh.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(double));
    ;}
    break;

  case 326:
#line 3926 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (2)].l);
    ;}
    break;

  case 327:
#line 3933 "Gmsh.y"
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

  case 328:
#line 3950 "Gmsh.y"
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

  case 329:
#line 3991 "Gmsh.y"
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
                GVertex *gv = GModel::current()->getVertexByTag(corners[j]);
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

  case 330:
#line 4035 "Gmsh.y"
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
                GVertex *gv = GModel::current()->getVertexByTag(corners[i]);
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

  case 331:
#line 4074 "Gmsh.y"
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

  case 332:
#line 4099 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (8)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (8)].l), i, &d);
	CTX::instance()->mesh.algo2d_per_face[(int)d] = (int)(yyvsp[(7) - (8)].d);
      }
      List_Delete((yyvsp[(4) - (8)].l));
    ;}
    break;

  case 333:
#line 4108 "Gmsh.y"
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

  case 334:
#line 4138 "Gmsh.y"
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

  case 335:
#line 4164 "Gmsh.y"
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

  case 336:
#line 4191 "Gmsh.y"
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

  case 337:
#line 4223 "Gmsh.y"
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

  case 338:
#line 4250 "Gmsh.y"
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

  case 339:
#line 4276 "Gmsh.y"
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

  case 340:
#line 4302 "Gmsh.y"
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

  case 341:
#line 4328 "Gmsh.y"
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

  case 342:
#line 4354 "Gmsh.y"
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

  case 343:
#line 4375 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(0, tags, 2, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 344:
#line 4381 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(1, tags, 2, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 345:
#line 4387 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(0, tags, 3, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 346:
#line 4393 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(1, tags, 3, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 347:
#line 4399 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(2, tags, 3, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 348:
#line 4405 "Gmsh.y"
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

  case 349:
#line 4431 "Gmsh.y"
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

  case 350:
#line 4457 "Gmsh.y"
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

  case 351:
#line 4474 "Gmsh.y"
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

  case 352:
#line 4491 "Gmsh.y"
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

  case 353:
#line 4508 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
	double dnum;
	List_Read((yyvsp[(3) - (4)].l), i, &dnum);
	int num = (int)dnum;
        GModel::current()->getGEOInternals()->setDegenerated(1, num);
        GEdge *ge = GModel::current()->getEdgeByTag(num);
        if(ge) ge->setTooSmall(true);
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 354:
#line 4520 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (4)].l), tags);
      GModel::current()->getGEOInternals()->setCompoundMesh(1, tags);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 355:
#line 4526 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (4)].l), tags);
      GModel::current()->getGEOInternals()->setCompoundMesh(2, tags);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 356:
#line 4532 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (4)].l), tags);
      GModel::current()->getGEOInternals()->setCompoundMesh(3, tags);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 357:
#line 4544 "Gmsh.y"
    {
      GModel::current()->getGEOInternals()->removeAllDuplicates();
    ;}
    break;

  case 358:
#line 4548 "Gmsh.y"
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

  case 359:
#line 4558 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(4) - (6)].l), tags);
      GModel::current()->getGEOInternals()->mergeVertices(tags);
      List_Delete((yyvsp[(4) - (6)].l));
    ;}
    break;

  case 360:
#line 4568 "Gmsh.y"
    { (yyval.c) = (char*)"Homology"; ;}
    break;

  case 361:
#line 4569 "Gmsh.y"
    { (yyval.c) = (char*)"Cohomology"; ;}
    break;

  case 362:
#line 4570 "Gmsh.y"
    { (yyval.c) = (char*)"Betti"; ;}
    break;

  case 363:
#line 4575 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < 4; i++) dim.push_back(i);
      GModel::current()->addHomologyRequest((yyvsp[(1) - (2)].c), domain, subdomain, dim);
    ;}
    break;

  case 364:
#line 4581 "Gmsh.y"
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

  case 365:
#line 4593 "Gmsh.y"
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

  case 366:
#line 4611 "Gmsh.y"
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

  case 367:
#line 4638 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d);           ;}
    break;

  case 368:
#line 4639 "Gmsh.y"
    { (yyval.d) = (yyvsp[(2) - (3)].d);           ;}
    break;

  case 369:
#line 4640 "Gmsh.y"
    { (yyval.d) = -(yyvsp[(2) - (2)].d);          ;}
    break;

  case 370:
#line 4641 "Gmsh.y"
    { (yyval.d) = (yyvsp[(2) - (2)].d);           ;}
    break;

  case 371:
#line 4642 "Gmsh.y"
    { (yyval.d) = !(yyvsp[(2) - (2)].d);          ;}
    break;

  case 372:
#line 4643 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d);      ;}
    break;

  case 373:
#line 4644 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d);      ;}
    break;

  case 374:
#line 4645 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d);      ;}
    break;

  case 375:
#line 4647 "Gmsh.y"
    {
      if(!(yyvsp[(3) - (3)].d))
	yymsg(0, "Division by zero in '%g / %g'", (yyvsp[(1) - (3)].d), (yyvsp[(3) - (3)].d));
      else
	(yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d);
    ;}
    break;

  case 376:
#line 4653 "Gmsh.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d);  ;}
    break;

  case 377:
#line 4654 "Gmsh.y"
    { (yyval.d) = pow((yyvsp[(1) - (3)].d), (yyvsp[(3) - (3)].d));  ;}
    break;

  case 378:
#line 4655 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d);      ;}
    break;

  case 379:
#line 4656 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d);      ;}
    break;

  case 380:
#line 4657 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d);     ;}
    break;

  case 381:
#line 4658 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d);     ;}
    break;

  case 382:
#line 4659 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d);     ;}
    break;

  case 383:
#line 4660 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d);     ;}
    break;

  case 384:
#line 4661 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d);     ;}
    break;

  case 385:
#line 4662 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d);     ;}
    break;

  case 386:
#line 4663 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (5)].d) ? (yyvsp[(3) - (5)].d) : (yyvsp[(5) - (5)].d); ;}
    break;

  case 387:
#line 4664 "Gmsh.y"
    { (yyval.d) = exp((yyvsp[(3) - (4)].d));      ;}
    break;

  case 388:
#line 4665 "Gmsh.y"
    { (yyval.d) = log((yyvsp[(3) - (4)].d));      ;}
    break;

  case 389:
#line 4666 "Gmsh.y"
    { (yyval.d) = log10((yyvsp[(3) - (4)].d));    ;}
    break;

  case 390:
#line 4667 "Gmsh.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (4)].d));     ;}
    break;

  case 391:
#line 4668 "Gmsh.y"
    { (yyval.d) = sin((yyvsp[(3) - (4)].d));      ;}
    break;

  case 392:
#line 4669 "Gmsh.y"
    { (yyval.d) = asin((yyvsp[(3) - (4)].d));     ;}
    break;

  case 393:
#line 4670 "Gmsh.y"
    { (yyval.d) = cos((yyvsp[(3) - (4)].d));      ;}
    break;

  case 394:
#line 4671 "Gmsh.y"
    { (yyval.d) = acos((yyvsp[(3) - (4)].d));     ;}
    break;

  case 395:
#line 4672 "Gmsh.y"
    { (yyval.d) = tan((yyvsp[(3) - (4)].d));      ;}
    break;

  case 396:
#line 4673 "Gmsh.y"
    { (yyval.d) = atan((yyvsp[(3) - (4)].d));     ;}
    break;

  case 397:
#line 4674 "Gmsh.y"
    { (yyval.d) = atan2((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d));;}
    break;

  case 398:
#line 4675 "Gmsh.y"
    { (yyval.d) = sinh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 399:
#line 4676 "Gmsh.y"
    { (yyval.d) = cosh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 400:
#line 4677 "Gmsh.y"
    { (yyval.d) = tanh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 401:
#line 4678 "Gmsh.y"
    { (yyval.d) = fabs((yyvsp[(3) - (4)].d));     ;}
    break;

  case 402:
#line 4679 "Gmsh.y"
    { (yyval.d) = std::abs((yyvsp[(3) - (4)].d)); ;}
    break;

  case 403:
#line 4680 "Gmsh.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d));    ;}
    break;

  case 404:
#line 4681 "Gmsh.y"
    { (yyval.d) = ceil((yyvsp[(3) - (4)].d));     ;}
    break;

  case 405:
#line 4682 "Gmsh.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d) + 0.5); ;}
    break;

  case 406:
#line 4683 "Gmsh.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d)); ;}
    break;

  case 407:
#line 4684 "Gmsh.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d)); ;}
    break;

  case 408:
#line 4685 "Gmsh.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (6)].d) * (yyvsp[(3) - (6)].d) + (yyvsp[(5) - (6)].d) * (yyvsp[(5) - (6)].d)); ;}
    break;

  case 409:
#line 4686 "Gmsh.y"
    { (yyval.d) = (yyvsp[(3) - (4)].d) * (double)rand() / (double)RAND_MAX; ;}
    break;

  case 410:
#line 4695 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d); ;}
    break;

  case 411:
#line 4696 "Gmsh.y"
    { (yyval.d) = 3.141592653589793; ;}
    break;

  case 412:
#line 4697 "Gmsh.y"
    { (yyval.d) = (double)ImbricatedTest; ;}
    break;

  case 413:
#line 4698 "Gmsh.y"
    { (yyval.d) = Msg::GetCommRank(); ;}
    break;

  case 414:
#line 4699 "Gmsh.y"
    { (yyval.d) = Msg::GetCommSize(); ;}
    break;

  case 415:
#line 4700 "Gmsh.y"
    { (yyval.d) = GetGmshMajorVersion(); ;}
    break;

  case 416:
#line 4701 "Gmsh.y"
    { (yyval.d) = GetGmshMinorVersion(); ;}
    break;

  case 417:
#line 4702 "Gmsh.y"
    { (yyval.d) = GetGmshPatchVersion(); ;}
    break;

  case 418:
#line 4703 "Gmsh.y"
    { (yyval.d) = Cpu(); ;}
    break;

  case 419:
#line 4704 "Gmsh.y"
    { (yyval.d) = GetMemoryUsage()/1024./1024.; ;}
    break;

  case 420:
#line 4705 "Gmsh.y"
    { (yyval.d) = TotalRam(); ;}
    break;

  case 421:
#line 4710 "Gmsh.y"
    { init_options(); ;}
    break;

  case 422:
#line 4712 "Gmsh.y"
    {
      std::vector<double> val(1, (yyvsp[(3) - (6)].d));
      Msg::ExchangeOnelabParameter("", val, floatOptions, charOptions);
      (yyval.d) = val[0];
    ;}
    break;

  case 423:
#line 4718 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d); ;}
    break;

  case 424:
#line 4720 "Gmsh.y"
    {
      (yyval.d) = Msg::GetOnelabNumber((yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 425:
#line 4725 "Gmsh.y"
    {
      (yyval.d) = Msg::GetOnelabNumber((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].d));
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 426:
#line 4730 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float((yyvsp[(1) - (1)].c2).char1, (yyvsp[(1) - (1)].c2).char2);
    ;}
    break;

  case 427:
#line 4734 "Gmsh.y"
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

  case 428:
#line 4752 "Gmsh.y"
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

  case 429:
#line 4770 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float((yyvsp[(3) - (4)].c2).char1, (yyvsp[(3) - (4)].c2).char2, 0., 1);
    ;}
    break;

  case 430:
#line 4774 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(3) - (6)].c2).char1, (yyvsp[(3) - (6)].c2).char2, (yyvsp[(5) - (6)].c), 0., 1);
    ;}
    break;

  case 431:
#line 4778 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float((yyvsp[(3) - (5)].c2).char1, (yyvsp[(3) - (5)].c2).char2, (yyvsp[(4) - (5)].d), 2);
    ;}
    break;

  case 432:
#line 4782 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(3) - (7)].c2).char1, (yyvsp[(3) - (7)].c2).char2, (yyvsp[(5) - (7)].c), (yyvsp[(6) - (7)].d), 2);
    ;}
    break;

  case 433:
#line 4786 "Gmsh.y"
    {
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
      (yyval.d) = !StatFile(tmp);
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 434:
#line 4792 "Gmsh.y"
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

  case 435:
#line 4808 "Gmsh.y"
    {
      std::string struct_namespace((yyvsp[(2) - (3)].c));
      (yyval.d) = (double)nameSpaces[struct_namespace].size();
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 436:
#line 4814 "Gmsh.y"
    {
      std::string struct_namespace(std::string(""));
      (yyval.d) = (double)nameSpaces[struct_namespace].size();
    ;}
    break;

  case 437:
#line 4820 "Gmsh.y"
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

  case 438:
#line 4839 "Gmsh.y"
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

  case 439:
#line 4860 "Gmsh.y"
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

  case 440:
#line 4893 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float(NULL, (yyvsp[(1) - (3)].c), (yyvsp[(3) - (3)].c));
    ;}
    break;

  case 441:
#line 4897 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(1) - (5)].c), (yyvsp[(3) - (5)].c), (yyvsp[(5) - (5)].c));
    ;}
    break;

  case 442:
#line 4902 "Gmsh.y"
    {
      NumberOption(GMSH_GET, (yyvsp[(1) - (6)].c), (int)(yyvsp[(3) - (6)].d), (yyvsp[(6) - (6)].c), (yyval.d));
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(6) - (6)].c));
    ;}
    break;

  case 443:
#line 4907 "Gmsh.y"
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

  case 444:
#line 4917 "Gmsh.y"
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

  case 445:
#line 4927 "Gmsh.y"
    {
      (yyval.d) = Msg::GetValue((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].d));
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 446:
#line 4932 "Gmsh.y"
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

  case 447:
#line 4943 "Gmsh.y"
    {
      std::string s((yyvsp[(3) - (6)].c)), substr((yyvsp[(5) - (6)].c));
      if(s.find(substr) != std::string::npos)
        (yyval.d) = 1.;
      else
        (yyval.d) = 0.;
      Free((yyvsp[(3) - (6)].c)); Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 448:
#line 4952 "Gmsh.y"
    {
      (yyval.d) = strlen((yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 449:
#line 4957 "Gmsh.y"
    {
      (yyval.d) = strcmp((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      Free((yyvsp[(3) - (6)].c)); Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 450:
#line 4962 "Gmsh.y"
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

  case 451:
#line 4989 "Gmsh.y"
    { (yyval.d) = 0.; ;}
    break;

  case 452:
#line 4991 "Gmsh.y"
    { (yyval.d) = (yyvsp[(2) - (2)].d);;}
    break;

  case 453:
#line 4996 "Gmsh.y"
    { (yyval.c) = NULL; ;}
    break;

  case 454:
#line 4998 "Gmsh.y"
    { (yyval.c) = (yyvsp[(2) - (2)].c);;}
    break;

  case 455:
#line 5003 "Gmsh.y"
    {
      std::string struct_namespace((yyvsp[(2) - (3)].c2).char1? (yyvsp[(2) - (3)].c2).char1 : std::string("")),
        struct_name((yyvsp[(2) - (3)].c2).char2);
      init_options
        (nameSpaces.getMember_ValMax(struct_namespace, struct_name));
    ;}
    break;

  case 456:
#line 5010 "Gmsh.y"
    {
      std::string struct_namespace((yyvsp[(2) - (7)].c2).char1? (yyvsp[(2) - (7)].c2).char1 : std::string("")),
        struct_name((yyvsp[(2) - (7)].c2).char2);
      Free((yyvsp[(2) - (7)].c2).char1); Free((yyvsp[(2) - (7)].c2).char2);
      int tag_out;
      if (nameSpaces.defStruct(struct_namespace, struct_name,
                               floatOptions, charOptions,
                               tag_out, member_ValMax, (yyvsp[(3) - (7)].i)))
        yymsg(0, "Redefinition of Struct '%s::%s'",
              struct_namespace.c_str(), struct_name.c_str());
      (yyval.d) = (double)tag_out;
    ;}
    break;

  case 457:
#line 5026 "Gmsh.y"
    { (yyval.c2).char1 = NULL; (yyval.c2).char2 = (yyvsp[(1) - (1)].c); ;}
    break;

  case 458:
#line 5028 "Gmsh.y"
    { (yyval.c2).char1 = (yyvsp[(1) - (3)].c); (yyval.c2).char2 = (yyvsp[(3) - (3)].c); ;}
    break;

  case 459:
#line 5033 "Gmsh.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c); flag_tSTRING_alloc = 1; ;}
    break;

  case 460:
#line 5042 "Gmsh.y"
    { (yyval.i) = 99; ;}
    break;

  case 461:
#line 5044 "Gmsh.y"
    { (yyval.i) = (int)(yyvsp[(2) - (2)].d); ;}
    break;

  case 462:
#line 5049 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 463:
#line 5051 "Gmsh.y"
    { (yyval.i) = (yyvsp[(2) - (3)].i); ;}
    break;

  case 464:
#line 5057 "Gmsh.y"
    {
      memcpy((yyval.v), (yyvsp[(1) - (1)].v), 5*sizeof(double));
    ;}
    break;

  case 465:
#line 5061 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = -(yyvsp[(2) - (2)].v)[i];
    ;}
    break;

  case 466:
#line 5065 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = (yyvsp[(2) - (2)].v)[i];
    ;}
    break;

  case 467:
#line 5069 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = (yyvsp[(1) - (3)].v)[i] - (yyvsp[(3) - (3)].v)[i];
    ;}
    break;

  case 468:
#line 5073 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = (yyvsp[(1) - (3)].v)[i] + (yyvsp[(3) - (3)].v)[i];
    ;}
    break;

  case 469:
#line 5080 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (11)].d);  (yyval.v)[1] = (yyvsp[(4) - (11)].d);  (yyval.v)[2] = (yyvsp[(6) - (11)].d);  (yyval.v)[3] = (yyvsp[(8) - (11)].d); (yyval.v)[4] = (yyvsp[(10) - (11)].d);
    ;}
    break;

  case 470:
#line 5084 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (9)].d);  (yyval.v)[1] = (yyvsp[(4) - (9)].d);  (yyval.v)[2] = (yyvsp[(6) - (9)].d);  (yyval.v)[3] = (yyvsp[(8) - (9)].d); (yyval.v)[4] = 1.0;
    ;}
    break;

  case 471:
#line 5088 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (7)].d);  (yyval.v)[1] = (yyvsp[(4) - (7)].d);  (yyval.v)[2] = (yyvsp[(6) - (7)].d);  (yyval.v)[3] = 0.0; (yyval.v)[4] = 1.0;
    ;}
    break;

  case 472:
#line 5092 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (7)].d);  (yyval.v)[1] = (yyvsp[(4) - (7)].d);  (yyval.v)[2] = (yyvsp[(6) - (7)].d);  (yyval.v)[3] = 0.0; (yyval.v)[4] = 1.0;
    ;}
    break;

  case 473:
#line 5099 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(List_T*));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].l)));
    ;}
    break;

  case 474:
#line 5104 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].l)));
    ;}
    break;

  case 475:
#line 5111 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d)));
    ;}
    break;

  case 476:
#line 5116 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(1) - (1)].l);
    ;}
    break;

  case 477:
#line 5120 "Gmsh.y"
    {
      // creates an empty list
      (yyval.l) = List_Create(2, 1, sizeof(double));
    ;}
    break;

  case 478:
#line 5125 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 479:
#line 5129 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (4)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) = - (*pd);
      }
    ;}
    break;

  case 480:
#line 5137 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(4) - (5)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) *= (yyvsp[(1) - (5)].d);
      }
    ;}
    break;

  case 481:
#line 5148 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(1) - (1)].l);
    ;}
    break;

  case 482:
#line 5152 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (1)].c), "*") || !strcmp((yyvsp[(1) - (1)].c), "all"))
        (yyval.l) = 0;
      else{
        yyerror("Unknown special string for list replacement");
        (yyval.l) = List_Create(2, 1, sizeof(double));
      }
    ;}
    break;

  case 483:
#line 5164 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (2)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) = - (*pd);
      }
    ;}
    break;

  case 484:
#line 5172 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (3)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) *= (yyvsp[(1) - (3)].d);
      }
    ;}
    break;

  case 485:
#line 5180 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      for(double d = (yyvsp[(1) - (3)].d); ((yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d)) ? (d <= (yyvsp[(3) - (3)].d)) : (d >= (yyvsp[(3) - (3)].d));
          ((yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d)) ? (d += 1.) : (d -= 1.))
	List_Add((yyval.l), &d);
    ;}
    break;

  case 486:
#line 5187 "Gmsh.y"
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

  case 487:
#line 5197 "Gmsh.y"
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

  case 488:
#line 5220 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getAllElementaryTags(0, (yyval.l));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 489:
#line 5226 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getAllElementaryTags(1, (yyval.l));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 490:
#line 5232 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getAllElementaryTags(2, (yyval.l));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 491:
#line 5238 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getAllElementaryTags(3, (yyval.l));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 492:
#line 5244 "Gmsh.y"
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

  case 493:
#line 5255 "Gmsh.y"
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

  case 494:
#line 5266 "Gmsh.y"
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

  case 495:
#line 5277 "Gmsh.y"
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

  case 496:
#line 5289 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getElementaryTagsInBoundingBox(0, (yyvsp[(5) - (16)].d), (yyvsp[(7) - (16)].d), (yyvsp[(9) - (16)].d), (yyvsp[(11) - (16)].d), (yyvsp[(13) - (16)].d), (yyvsp[(15) - (16)].d), (yyval.l));
    ;}
    break;

  case 497:
#line 5295 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getElementaryTagsInBoundingBox(1, (yyvsp[(5) - (16)].d), (yyvsp[(7) - (16)].d), (yyvsp[(9) - (16)].d), (yyvsp[(11) - (16)].d), (yyvsp[(13) - (16)].d), (yyvsp[(15) - (16)].d), (yyval.l));
    ;}
    break;

  case 498:
#line 5301 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getElementaryTagsInBoundingBox(2, (yyvsp[(5) - (16)].d), (yyvsp[(7) - (16)].d), (yyvsp[(9) - (16)].d), (yyvsp[(11) - (16)].d), (yyvsp[(13) - (16)].d), (yyvsp[(15) - (16)].d), (yyval.l));
    ;}
    break;

  case 499:
#line 5307 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getElementaryTagsInBoundingBox(3, (yyvsp[(5) - (16)].d), (yyvsp[(7) - (16)].d), (yyvsp[(9) - (16)].d), (yyvsp[(11) - (16)].d), (yyvsp[(13) - (16)].d), (yyvsp[(15) - (16)].d), (yyval.l));
    ;}
    break;

  case 500:
#line 5312 "Gmsh.y"
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

  case 501:
#line 5322 "Gmsh.y"
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

  case 502:
#line 5332 "Gmsh.y"
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

  case 503:
#line 5342 "Gmsh.y"
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

  case 504:
#line 5355 "Gmsh.y"
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

  case 505:
#line 5367 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (4)].l);
    ;}
    break;

  case 506:
#line 5371 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (4)].l);
    ;}
    break;

  case 507:
#line 5375 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(4) - (6)].l);
    ;}
    break;

  case 508:
#line 5379 "Gmsh.y"
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

  case 509:
#line 5397 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(double));
      for(int i = 0; i < (int)(yyvsp[(7) - (8)].d); i++) {
	double d = (yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1);
	List_Add((yyval.l), &d);
      }
    ;}
    break;

  case 510:
#line 5405 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(double));
      for(int i = 0; i < (int)(yyvsp[(7) - (8)].d); i++) {
	double d = pow(10,(yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1));
	List_Add((yyval.l), &d);
      }
    ;}
    break;

  case 511:
#line 5413 "Gmsh.y"
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

  case 512:
#line 5442 "Gmsh.y"
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

  case 513:
#line 5452 "Gmsh.y"
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

  case 514:
#line 5468 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        double *d = (double*)List_Pointer((yyvsp[(3) - (4)].l), i);
        *d = std::abs(*d);
      }
      (yyval.l) = (yyvsp[(3) - (4)].l);
    ;}
    break;

  case 515:
#line 5479 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d)));
    ;}
    break;

  case 516:
#line 5484 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(1) - (1)].l);
    ;}
    break;

  case 517:
#line 5488 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].d)));
    ;}
    break;

  case 518:
#line 5492 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (3)].l)); i++){
	double d;
	List_Read((yyvsp[(3) - (3)].l), i, &d);
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 519:
#line 5504 "Gmsh.y"
    {
      (yyval.u) = CTX::instance()->packColor((int)(yyvsp[(2) - (9)].d), (int)(yyvsp[(4) - (9)].d), (int)(yyvsp[(6) - (9)].d), (int)(yyvsp[(8) - (9)].d));
    ;}
    break;

  case 520:
#line 5508 "Gmsh.y"
    {
      (yyval.u) = CTX::instance()->packColor((int)(yyvsp[(2) - (7)].d), (int)(yyvsp[(4) - (7)].d), (int)(yyvsp[(6) - (7)].d), 255);
    ;}
    break;

  case 521:
#line 5520 "Gmsh.y"
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

  case 522:
#line 5537 "Gmsh.y"
    {
      unsigned int val = 0;
      ColorOption(GMSH_GET, (yyvsp[(1) - (5)].c), 0, (yyvsp[(5) - (5)].c), val);
      (yyval.u) = val;
      Free((yyvsp[(1) - (5)].c)); Free((yyvsp[(5) - (5)].c));
    ;}
    break;

  case 523:
#line 5547 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 524:
#line 5551 "Gmsh.y"
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

  case 525:
#line 5566 "Gmsh.y"
    {
      (yyval.l) = List_Create(256, 10, sizeof(unsigned int));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].u)));
    ;}
    break;

  case 526:
#line 5571 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].u)));
    ;}
    break;

  case 527:
#line 5578 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c);
    ;}
    break;

  case 528:
#line 5582 "Gmsh.y"
    {
      // No need to extend to Struct_FullName (a Tag is not a String)
      (yyval.c) = treat_Struct_FullName_String(NULL, (yyvsp[(1) - (1)].c));
    ;}
    break;

  case 529:
#line 5587 "Gmsh.y"
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

  case 530:
#line 5601 "Gmsh.y"
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

  case 531:
#line 5618 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String(NULL, (yyvsp[(1) - (3)].c), (yyvsp[(3) - (3)].c));
    ;}
    break;

  case 532:
#line 5622 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String((yyvsp[(1) - (5)].c), (yyvsp[(3) - (5)].c), (yyvsp[(5) - (5)].c));
    ;}
    break;

  case 533:
#line 5627 "Gmsh.y"
    {
      std::string out;
      StringOption(GMSH_GET, (yyvsp[(1) - (6)].c), (int)(yyvsp[(3) - (6)].d), (yyvsp[(6) - (6)].c), out);
      (yyval.c) = (char*)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(6) - (6)].c));
    ;}
    break;

  case 534:
#line 5635 "Gmsh.y"
    {
      std::string name = GModel::current()->getPhysicalName(0, (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char*)Malloc((name.size() + 1) * sizeof(char));
      strcpy((yyval.c), name.c_str());
    ;}
    break;

  case 535:
#line 5641 "Gmsh.y"
    {
      std::string name = GModel::current()->getPhysicalName(1, (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char*)Malloc((name.size() + 1) * sizeof(char));
      strcpy((yyval.c), name.c_str());
    ;}
    break;

  case 536:
#line 5647 "Gmsh.y"
    {
      std::string name = GModel::current()->getPhysicalName(2, (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char*)Malloc((name.size() + 1) * sizeof(char));
      strcpy((yyval.c), name.c_str());
    ;}
    break;

  case 537:
#line 5653 "Gmsh.y"
    {
      std::string name = GModel::current()->getPhysicalName(3, (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char*)Malloc((name.size() + 1) * sizeof(char));
      strcpy((yyval.c), name.c_str());
    ;}
    break;

  case 538:
#line 5662 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c);
    ;}
    break;

  case 539:
#line 5666 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 540:
#line 5670 "Gmsh.y"
    {
      (yyval.c) = (char *)Malloc(32 * sizeof(char));
      time_t now;
      time(&now);
      strcpy((yyval.c), ctime(&now));
      (yyval.c)[strlen((yyval.c)) - 1] = '\0';
    ;}
    break;

  case 541:
#line 5678 "Gmsh.y"
    {
      std::string exe = Msg::GetExecutableName();
      (yyval.c) = (char *)Malloc(exe.size() + 1);
      strcpy((yyval.c), exe.c_str());
    ;}
    break;

  case 542:
#line 5684 "Gmsh.y"
    {
      std::string action = Msg::GetOnelabAction();
      (yyval.c) = (char *)Malloc(action.size() + 1);
      strcpy((yyval.c), action.c_str());
    ;}
    break;

  case 543:
#line 5690 "Gmsh.y"
    {
      (yyval.c) = strsave((char*)"Gmsh");
    ;}
    break;

  case 544:
#line 5694 "Gmsh.y"
    {
      const char *env = GetEnvironmentVar((yyvsp[(3) - (4)].c));
      if(!env) env = "";
      (yyval.c) = (char *)Malloc((sizeof(env) + 1) * sizeof(char));
      strcpy((yyval.c), env);
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 545:
#line 5702 "Gmsh.y"
    {
      std::string s = Msg::GetString((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      (yyval.c) = (char *)Malloc((s.size() + 1) * sizeof(char));
      strcpy((yyval.c), s.c_str());
      Free((yyvsp[(3) - (6)].c));
      Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 546:
#line 5710 "Gmsh.y"
    {
      std::string s = Msg::GetOnelabString((yyvsp[(3) - (4)].c));
      (yyval.c) = (char *)Malloc((s.size() + 1) * sizeof(char));
      strcpy((yyval.c), s.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 547:
#line 5717 "Gmsh.y"
    {
      std::string s = Msg::GetOnelabString((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      (yyval.c) = (char *)Malloc((s.size() + 1) * sizeof(char));
      strcpy((yyval.c), s.c_str());
      Free((yyvsp[(3) - (6)].c));
      Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 548:
#line 5727 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_String(NULL, (yyvsp[(3) - (5)].c2).char2, (yyvsp[(4) - (5)].c), 2);
    ;}
    break;

  case 549:
#line 5732 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String((yyvsp[(3) - (7)].c2).char1, (yyvsp[(3) - (7)].c2).char2, (yyvsp[(5) - (7)].c), (yyvsp[(6) - (7)].c), 2);
    ;}
    break;

  case 550:
#line 5737 "Gmsh.y"
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

  case 551:
#line 5752 "Gmsh.y"
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

  case 552:
#line 5766 "Gmsh.y"
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

  case 553:
#line 5780 "Gmsh.y"
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

  case 554:
#line 5792 "Gmsh.y"
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

  case 555:
#line 5808 "Gmsh.y"
    {
      int i = 0;
      while ((yyvsp[(3) - (4)].c)[i]) {
        (yyvsp[(3) - (4)].c)[i] = toupper((yyvsp[(3) - (4)].c)[i]);
        i++;
      }
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 556:
#line 5817 "Gmsh.y"
    {
      int i = 0;
      while ((yyvsp[(3) - (4)].c)[i]) {
        (yyvsp[(3) - (4)].c)[i] = tolower((yyvsp[(3) - (4)].c)[i]);
        i++;
      }
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 557:
#line 5826 "Gmsh.y"
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

  case 558:
#line 5836 "Gmsh.y"
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

  case 559:
#line 5847 "Gmsh.y"
    {
      std::string in = (yyvsp[(3) - (8)].c);
      std::string out = in.substr((int)(yyvsp[(5) - (8)].d), (int)(yyvsp[(7) - (8)].d));
      (yyval.c) = (char *)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(3) - (8)].c));
    ;}
    break;

  case 560:
#line 5855 "Gmsh.y"
    {
      std::string in = (yyvsp[(3) - (6)].c);
      std::string out = in.substr((int)(yyvsp[(5) - (6)].d), std::string::npos);
      (yyval.c) = (char *)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 561:
#line 5863 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 562:
#line 5867 "Gmsh.y"
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

  case 563:
#line 5886 "Gmsh.y"
    {
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 564:
#line 5893 "Gmsh.y"
    {
      std::string tmp = SplitFileName(GetAbsolutePath(gmsh_yyname))[0];
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
    ;}
    break;

  case 565:
#line 5899 "Gmsh.y"
    {
      std::string tmp = SplitFileName((yyvsp[(3) - (4)].c))[0];
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 566:
#line 5906 "Gmsh.y"
    {
      std::string tmp = GetAbsolutePath((yyvsp[(3) - (4)].c));
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 567:
#line 5913 "Gmsh.y"
    { init_options(); ;}
    break;

  case 568:
#line 5915 "Gmsh.y"
    {
      std::string val((yyvsp[(3) - (6)].c));
      Msg::ExchangeOnelabParameter("", val, floatOptions, charOptions);
      (yyval.c) = (char*)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 569:
#line 5923 "Gmsh.y"
    {
      std::string out;
      const std::string * key_struct = NULL;
      switch (nameSpaces.get_key_struct_from_tag(struct_namespace,
                                                 (int)(yyvsp[(3) - (4)].d), key_struct)) {
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

  case 570:
#line 5947 "Gmsh.y"
    { struct_namespace = std::string(""); (yyval.d) = (yyvsp[(2) - (2)].d); ;}
    break;

  case 571:
#line 5949 "Gmsh.y"
    { struct_namespace = (yyvsp[(1) - (4)].c); Free((yyvsp[(1) - (4)].c)); (yyval.d) = (yyvsp[(4) - (4)].d); ;}
    break;

  case 572:
#line 5955 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(char*));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].c)));
    ;}
    break;

  case 573:
#line 5960 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].c)));
    ;}
    break;

  case 574:
#line 5968 "Gmsh.y"
    {
      char tmpstr[256];
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char));
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)); strcat((yyval.c), tmpstr);
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 575:
#line 5977 "Gmsh.y"
    {
      char tmpstr[256];
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 576:
#line 5986 "Gmsh.y"
    {
      char tmpstr[256];
      sprintf(tmpstr, "_%d", (int)(yyvsp[(7) - (8)].d));
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(3) - (8)].c))+strlen(tmpstr)+1)*sizeof(char));
      strcpy((yyval.c), (yyvsp[(3) - (8)].c)); strcat((yyval.c), tmpstr);
      Free((yyvsp[(3) - (8)].c));
    ;}
    break;

  case 577:
#line 5998 "Gmsh.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c); ;}
    break;

  case 578:
#line 6001 "Gmsh.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c); ;}
    break;

  case 579:
#line 6005 "Gmsh.y"
    { (yyval.c) = (yyvsp[(3) - (4)].c); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 13041 "Gmsh.tab.cpp"
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


#line 6008 "Gmsh.y"


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
  if (nameSpaces.size()){
    if(help){
      vec.push_back("//");
      vec.push_back("// Structures");
      vec.push_back("//");
    }
    std::vector<std::string> strs;
    nameSpaces.sprint(strs);
    vec.insert(vec.end(), strs.begin(), strs.end());
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

void ListOfShapes2VectorOfPairs(List_T *list, std::vector<std::pair<int, int> > &v)
{
  for(int i = 0; i < List_Nbr(list); i++){
    Shape s;
    List_Read(list, i, &s);
    int dim = s.Type / 100 - 1;
    if(dim >= 0 && dim <= 3) v.push_back(std::pair<int, int>(dim, s.Num));
  }
}

void VectorOfPairs2ListOfShapes(const std::vector<std::pair<int, int> > &v, List_T *list)
{
  for(unsigned int i = 0; i < v.size(); i++){
    int dim = v[i].first;
    int tag = v[i].second;
    Shape s;
    s.Type = (dim == 3) ? MSH_VOLUME : (dim == 2) ? MSH_SURF_PLAN :
      (dim == 1) ? MSH_SEGM_LINE : MSH_POINT;
    s.Num = tag;
    List_Add(list, &s);
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

  GFace *target = GModel::current()->getFaceByTag(std::abs(iTarget));
  GFace *source = GModel::current()->getFaceByTag(std::abs(iSource));
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

  GFace *target = GModel::current()->getFaceByTag(std::abs(iTarget));
  GFace *source = GModel::current()->getFaceByTag(std::abs(iSource));
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

  GEdge *target = GModel::current()->getEdgeByTag(std::abs(iTarget));
  GEdge *source = GModel::current()->getEdgeByTag(std::abs(iSource));
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

void setVisibility(const std::vector<std::pair<int, int> > &dimTags,
                   int visible, bool recursive)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  for(unsigned int i = 0; i < dimTags.size(); i++){
    GEntity *ge = GModel::current()->getEntityByTag
      (dimTags[i].first, std::abs(dimTags[i].second));
    if(ge) ge->setVisibility(visible, recursive);
  }
}

void setColor(const std::vector<std::pair<int, int> > &dimTags,
              unsigned int val, bool recursive)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  for(unsigned int i = 0; i < dimTags.size(); i++){
    GEntity *ge = GModel::current()->getEntityByTag
      (dimTags[i].first, std::abs(dimTags[i].second));
    if(ge) ge->setColor(val, recursive);
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


double treat_Struct_FullName_Float
(char* c1, char* c2, double val_default, int type_treat)
{
  double out;
  if(!c1 && gmsh_yysymbols.count(c2)){
    if (type_treat == 1) out = 1.; // Exists (type_treat == 1)
    else { // Get (0) or GetForced (2)
      gmsh_yysymbol &s(gmsh_yysymbols[c2]);
      if(s.value.empty()){
        out = val_default;
        if (type_treat == 0) yymsg(0, "Uninitialized variable '%s'", c2);
      }
      else
        out = s.value[0];
    }
  }
  else if(!c1 && type_treat == 1 && gmsh_yystringsymbols.count(c2)) {
    out = 1.;
  }
  else{
    std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
    if(nameSpaces.getTag(struct_namespace, struct_name, out)) {
      out = val_default;
      if (type_treat == 0) yymsg(0, "Unknown Constant: %s", struct_name.c_str());
    }
  }
  Free(c1); Free(c2);
  return out;
}

double treat_Struct_FullName_dot_tSTRING_Float
(char* c1, char* c2, char* c3, double val_default, int type_treat)
{
  double out;
  std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
  std::string key_member(c3);
  switch (nameSpaces.getMember
          (struct_namespace, struct_name, key_member, out)) {
  case 0:
    if (type_treat == 1) out = 1.; // Exists (type_treat == 1)
    break;
  case 1:
    if (!NumberOption(GMSH_GET, c2, 0, c3, out, type_treat==0))
      out = val_default;
    break;
  case 2:
    if (type_treat != 0) {
      const std::string * out_dummy = NULL;
      out = (nameSpaces.getMember
             (struct_namespace, struct_name, key_member, out_dummy))?
        val_default : 1.;
    }
    else {
      out = val_default;
      if (type_treat == 0)
        yymsg(0, "Unknown member '%s' of Struct %s", c3, struct_name.c_str());
    }
    break;
  }
  Free(c1); Free(c2);
  if (flag_tSTRING_alloc) Free(c3);
  return out;
}

char * treat_Struct_FullName_String
(char* c1, char* c2, char * val_default, int type_treat)
{
  std::string string_default(val_default? val_default : std::string(""));
  const std::string * out = NULL;
  std::string out_tmp;
  if(!c1 && gmsh_yystringsymbols.count(c2)){
    // Get (0) or GetForced (2)
    if(gmsh_yystringsymbols[c2].size() != 1){
      out = &string_default;
      if (type_treat == 0)
        yymsg(0, "Expected single valued string variable '%s'", c2);
    }
    else {
      out_tmp = gmsh_yystringsymbols[c2][0];
      out = &out_tmp;
    }
  }
  else{
    out = &string_default;
    if (type_treat == 0) yymsg(0, "Unknown string variable '%s'", c2);
  }
  char* out_c = (char*)Malloc((out->size() + 1) * sizeof(char));
  strcpy(out_c, out->c_str());
  Free(c1); Free(c2);
  return out_c;
}

char* treat_Struct_FullName_dot_tSTRING_String
(char* c1, char* c2, char* c3, char * val_default, int type_treat)
{
  std::string string_default(val_default? val_default : std::string(""));
  const std::string * out = NULL;
  std::string out_tmp; // PD: we should avoid that -> StringOption() to be changed
  std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
  std::string key_member(c3);
  switch (nameSpaces.getMember
          (struct_namespace, struct_name, key_member, out)) {
  case 0:
    break;
  case 1:
    if (StringOption(GMSH_GET, c2, 0, c3, out_tmp, type_treat==0))
      out = &out_tmp;
    else
      out = &string_default;
    break;
  case 2:
    out = &string_default;
    if (type_treat == 0)
      yymsg(0, "Unknown member '%s' of Struct %s", c3, struct_name.c_str());
    break;
  }
  char* out_c = (char*)Malloc((out->size() + 1) * sizeof(char));
  strcpy(out_c, out->c_str());
  Free(c1); Free(c2);
  if (flag_tSTRING_alloc) Free(c3);
  return out_c;
}

