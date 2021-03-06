/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * costGaussGrad2.c
 *
 * Code generation for function 'costGaussGrad2'
 *
 */

/* Include files */
#include "costGaussGrad2.h"
#include "EOE2COE.h"
#include "EOEDerivatives.h"
#include "assertCompatibleDims.h"
#include "atan2.h"
#include "colon.h"
#include "cos.h"
#include "costGaussGrad2_data.h"
#include "costGaussGrad2_emxutil.h"
#include "costGaussGrad2_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "find.h"
#include "indexShapeCheck.h"
#include "mtimes.h"
#include "mygradcalc.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "vecnorm.h"
#include "mwmathutil.h"
#include <string.h>

/* Type Definitions */
#ifndef struct_emxArray_int32_T_1x1
#define struct_emxArray_int32_T_1x1
struct emxArray_int32_T_1x1 {
  int32_T data[1];
  int32_T size[2];
};
#endif /* struct_emxArray_int32_T_1x1 */
#ifndef typedef_emxArray_int32_T_1x1
#define typedef_emxArray_int32_T_1x1
typedef struct emxArray_int32_T_1x1 emxArray_int32_T_1x1;
#endif /* typedef_emxArray_int32_T_1x1 */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI =
    {
        45,               /* lineNo */
        "costGaussGrad2", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI =
    {
        40,               /* lineNo */
        "costGaussGrad2", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI =
    {
        33,               /* lineNo */
        "costGaussGrad2", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI =
    {
        28,               /* lineNo */
        "costGaussGrad2", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI =
    {
        25,               /* lineNo */
        "costGaussGrad2", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI =
    {
        24,               /* lineNo */
        "costGaussGrad2", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI =
    {
        22,               /* lineNo */
        "costGaussGrad2", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI =
    {
        55,                   /* lineNo */
        "costGaussGrad2/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI =
    {
        56,                   /* lineNo */
        "costGaussGrad2/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI =
    {
        57,                   /* lineNo */
        "costGaussGrad2/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI =
    {
        58,                   /* lineNo */
        "costGaussGrad2/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI =
    {
        59,                   /* lineNo */
        "costGaussGrad2/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI =
    {
        61,                   /* lineNo */
        "costGaussGrad2/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI =
    {
        79,                   /* lineNo */
        "costGaussGrad2/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI =
    {
        84,                   /* lineNo */
        "costGaussGrad2/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI =
    {
        88,                   /* lineNo */
        "costGaussGrad2/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pathName */
};

static emlrtRSInfo s_emlrtRSI = {
    29,                  /* lineNo */
    "reshapeSizeChecks", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pathName */
};

static emlrtRSInfo t_emlrtRSI = {
    109,               /* lineNo */
    "computeDimsData", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pathName */
};

static emlrtRSInfo u_emlrtRSI = {
    125,                                                          /* lineNo */
    "colon",                                                      /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName */
};

static emlrtRSInfo y_emlrtRSI = {
    39,                                                            /* lineNo */
    "find",                                                        /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                    */
};

static emlrtRSInfo fb_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                       */
};

static emlrtRSInfo gb_emlrtRSI = {
    71,                                                           /* lineNo */
    "power",                                                      /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName */
};

static emlrtRSInfo hb_emlrtRSI = {
    38,        /* lineNo */
    "COE2EOE", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\COE2EOE.m" /* pathName
                                                                          */
};

static emlrtRSInfo ub_emlrtRSI =
    {
        34,               /* lineNo */
        "rdivide_helper", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
        "helper.m" /* pathName */
};

static emlrtRSInfo vb_emlrtRSI = {
    51,    /* lineNo */
    "div", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" /* pathName
                                                                       */
};

static emlrtRSInfo wb_emlrtRSI = {
    15,    /* lineNo */
    "min", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" /* pathName
                                                                     */
};

static emlrtRSInfo xb_emlrtRSI = {
    46,         /* lineNo */
    "minOrMax", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                            */
};

static emlrtRSInfo yb_emlrtRSI = {
    92,        /* lineNo */
    "minimum", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                            */
};

static emlrtRSInfo ac_emlrtRSI =
    {
        209,             /* lineNo */
        "unaryMinOrMax", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo bc_emlrtRSI =
    {
        898,                    /* lineNo */
        "minRealVectorOmitNaN", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo cc_emlrtRSI = {
    72,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo dc_emlrtRSI = {
    64,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo ec_emlrtRSI = {
    113,         /* lineNo */
    "findFirst", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo fc_emlrtRSI = {
    130,                        /* lineNo */
    "minOrMaxRealVectorKernel", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo oc_emlrtRSI = {
    28,    /* lineNo */
    "cat", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                       */
};

static emlrtRSInfo pc_emlrtRSI = {
    100,        /* lineNo */
    "cat_impl", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                       */
};

static emlrtRSInfo qc_emlrtRSI =
    {
        94,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper."
        "m" /* pathName */
};

static emlrtRSInfo rc_emlrtRSI =
    {
        69,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper."
        "m" /* pathName */
};

static emlrtECInfo emlrtECI =
    {
        1,                /* nDims */
        45,               /* lineNo */
        15,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtECInfo b_emlrtECI =
    {
        1,                /* nDims */
        40,               /* lineNo */
        15,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtECInfo c_emlrtECI =
    {
        1,                /* nDims */
        33,               /* lineNo */
        15,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtECInfo d_emlrtECI =
    {
        1,                /* nDims */
        28,               /* lineNo */
        15,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtBCInfo emlrtBCI =
    {
        -1,               /* iFirst */
        -1,               /* iLast */
        25,               /* lineNo */
        33,               /* colNo */
        "Jac",            /* aName */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        0                                                 /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = {
    275,                   /* lineNo */
    27,                    /* colNo */
    "check_non_axis_size", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pName
                                                                       */
};

static emlrtRTEInfo b_emlrtRTEI =
    {
        135,             /* lineNo */
        27,              /* colNo */
        "unaryMinOrMax", /* fName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\unaryMinOrMax.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    59,                  /* lineNo */
    23,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pName */
};

static emlrtRTEInfo e_emlrtRTEI = {
    57,                  /* lineNo */
    23,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pName */
};

static emlrtRTEInfo f_emlrtRTEI = {
    52,                  /* lineNo */
    13,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pName */
};

static emlrtBCInfo b_emlrtBCI =
    {
        -1,                   /* iFirst */
        -1,                   /* iLast */
        87,                   /* lineNo */
        31,                   /* colNo */
        "y",                  /* aName */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        0                                                 /* checkKind */
};

static emlrtECInfo e_emlrtECI =
    {
        2,                    /* nDims */
        84,                   /* lineNo */
        26,                   /* colNo */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtECInfo f_emlrtECI =
    {
        2,                    /* nDims */
        84,                   /* lineNo */
        57,                   /* colNo */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtECInfo g_emlrtECI =
    {
        2,                    /* nDims */
        84,                   /* lineNo */
        31,                   /* colNo */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtBCInfo c_emlrtBCI =
    {
        -1,                   /* iFirst */
        -1,                   /* iLast */
        79,                   /* lineNo */
        17,                   /* colNo */
        "y",                  /* aName */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        0                                                 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI =
    {
        -1,                   /* iFirst */
        -1,                   /* iLast */
        79,                   /* lineNo */
        60,                   /* colNo */
        "y",                  /* aName */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        0                                                 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI =
    {
        -1,                   /* iFirst */
        -1,                   /* iLast */
        79,                   /* lineNo */
        53,                   /* colNo */
        "t",                  /* aName */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        0                                                 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI =
    {
        -1,                   /* iFirst */
        -1,                   /* iLast */
        79,                   /* lineNo */
        28,                   /* colNo */
        "y",                  /* aName */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        0                                                 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI =
    {
        -1,                   /* iFirst */
        -1,                   /* iLast */
        78,                   /* lineNo */
        39,                   /* colNo */
        "qdir",               /* aName */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        0                                                 /* checkKind */
};

static emlrtBCInfo h_emlrtBCI =
    {
        -1,                   /* iFirst */
        -1,                   /* iLast */
        56,                   /* lineNo */
        31,                   /* colNo */
        "x",                  /* aName */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        0                                                 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI =
    {
        -1,                   /* iFirst */
        -1,                   /* iLast */
        56,                   /* lineNo */
        26,                   /* colNo */
        "x",                  /* aName */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        0                                                 /* checkKind */
};

static emlrtDCInfo emlrtDCI =
    {
        56,                   /* lineNo */
        26,                   /* colNo */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        1                                                 /* checkKind */
};

static emlrtBCInfo j_emlrtBCI =
    {
        -1,                   /* iFirst */
        -1,                   /* iLast */
        55,                   /* lineNo */
        19,                   /* colNo */
        "x",                  /* aName */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        0                                                 /* checkKind */
};

static emlrtDCInfo b_emlrtDCI =
    {
        55,                   /* lineNo */
        19,                   /* colNo */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        1                                                 /* checkKind */
};

static emlrtBCInfo k_emlrtBCI =
    {
        -1,                   /* iFirst */
        -1,                   /* iLast */
        55,                   /* lineNo */
        17,                   /* colNo */
        "x",                  /* aName */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        0                                                 /* checkKind */
};

static emlrtBCInfo l_emlrtBCI =
    {
        -1,                   /* iFirst */
        -1,                   /* iLast */
        53,                   /* lineNo */
        16,                   /* colNo */
        "x",                  /* aName */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        0                                                 /* checkKind */
};

static emlrtDCInfo c_emlrtDCI =
    {
        62,                   /* lineNo */
        21,                   /* colNo */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        1                                                 /* checkKind */
};

static emlrtDCInfo d_emlrtDCI =
    {
        62,                   /* lineNo */
        9,                    /* colNo */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        1                                                 /* checkKind */
};

static emlrtBCInfo m_emlrtBCI =
    {
        -1,                   /* iFirst */
        -1,                   /* iLast */
        78,                   /* lineNo */
        28,                   /* colNo */
        "csi",                /* aName */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        0                                                 /* checkKind */
};

static emlrtDCInfo e_emlrtDCI =
    {
        78,                   /* lineNo */
        28,                   /* colNo */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        1                                                 /* checkKind */
};

static emlrtBCInfo n_emlrtBCI =
    {
        -1,                   /* iFirst */
        -1,                   /* iLast */
        80,                   /* lineNo */
        35,                   /* colNo */
        "csi",                /* aName */
        "costGaussGrad2/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m", /* pName */
        0                                                 /* checkKind */
};

static emlrtRTEInfo h_emlrtRTEI = {
    58,                   /* lineNo */
    23,                   /* colNo */
    "assertValidSizeArg", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\assertValidSizeArg.m" /* pName */
};

static emlrtRTEInfo r_emlrtRTEI =
    {
        20,               /* lineNo */
        1,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo s_emlrtRTEI =
    {
        38,               /* lineNo */
        5,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo t_emlrtRTEI =
    {
        23,               /* lineNo */
        5,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI =
    {
        38,               /* lineNo */
        13,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI =
    {
        38,               /* lineNo */
        21,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI =
    {
        24,               /* lineNo */
        11,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI =
    {
        42,               /* lineNo */
        9,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI =
    {
        47,               /* lineNo */
        9,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo ab_emlrtRTEI =
    {
        40,               /* lineNo */
        15,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI =
    {
        40,               /* lineNo */
        9,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI =
    {
        45,               /* lineNo */
        15,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI =
    {
        45,               /* lineNo */
        9,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI =
    {
        24,               /* lineNo */
        15,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI =
    {
        24,               /* lineNo */
        5,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI =
    {
        25,               /* lineNo */
        11,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI =
    {
        25,               /* lineNo */
        15,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI =
    {
        25,               /* lineNo */
        5,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI =
    {
        30,               /* lineNo */
        9,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI =
    {
        35,               /* lineNo */
        9,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI =
    {
        28,               /* lineNo */
        15,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI =
    {
        28,               /* lineNo */
        9,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI =
    {
        33,               /* lineNo */
        15,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI =
    {
        33,               /* lineNo */
        9,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI =
    {
        22,               /* lineNo */
        5,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI =
    {
        1,                /* lineNo */
        45,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI =
    {
        56,               /* lineNo */
        9,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI =
    {
        57,               /* lineNo */
        9,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI =
    {
        58,               /* lineNo */
        22,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI =
    {
        62,               /* lineNo */
        9,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo vb_emlrtRTEI =
    {
        84,               /* lineNo */
        31,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo wb_emlrtRTEI =
    {
        56,               /* lineNo */
        24,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo xb_emlrtRTEI =
    {
        84,               /* lineNo */
        41,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo yb_emlrtRTEI =
    {
        84,               /* lineNo */
        70,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo ac_emlrtRTEI =
    {
        84,               /* lineNo */
        77,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo bc_emlrtRTEI =
    {
        84,               /* lineNo */
        26,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo cc_emlrtRTEI =
    {
        84,               /* lineNo */
        53,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo dc_emlrtRTEI =
    {
        84,               /* lineNo */
        24,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo ec_emlrtRTEI =
    {
        84,               /* lineNo */
        15,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo fc_emlrtRTEI =
    {
        84,               /* lineNo */
        9,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo gc_emlrtRTEI =
    {
        88,               /* lineNo */
        9,                /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo hc_emlrtRTEI =
    {
        51,               /* lineNo */
        24,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

static emlrtRTEInfo wc_emlrtRTEI =
    {
        84,               /* lineNo */
        57,               /* colNo */
        "costGaussGrad2", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pName */
};

/* Function Declarations */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2,
                               const emxArray_real_T *in3);

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             const emxArray_real_T *in2,
                             const emxArray_real_T *in3);

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2);

static void d_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2);

static void plus(const emlrtStack *sp, emxArray_real_T *in1,
                 const emxArray_real_T *in2);

/* Function Definitions */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2,
                               const emxArray_real_T *in3)
{
  const real_T *in2_data;
  const real_T *in3_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in3_data = in3->data;
  in2_data = in2->data;
  i = in2->size[1];
  stride_0_0 = in1->size[0];
  if (in3->size[1] == 1) {
    in1->size[0] = i;
  } else {
    in1->size[0] = in3->size[1];
  }
  emxEnsureCapacity_real_T(sp, in1, stride_0_0, &fc_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (in3->size[1] != 1);
  if (in3->size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = in3->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = in2_data[6 * (i * stride_0_0)] / in3_data[i * stride_1_0];
  }
}

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             const emxArray_real_T *in2,
                             const emxArray_real_T *in3)
{
  const real_T *in2_data;
  const real_T *in3_data;
  real_T *in1_data;
  int32_T i;
  int32_T i1;
  int32_T in2_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in3_data = in3->data;
  in2_data = in2->data;
  in2_idx_0 = in2->size[0];
  i = in1->size[0] * in1->size[1];
  if (in3->size[0] == 1) {
    in1->size[0] = in2_idx_0;
  } else {
    in1->size[0] = in3->size[0];
  }
  in1->size[1] = in3->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &nb_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in2_idx_0 != 1);
  stride_1_0 = (in3->size[0] != 1);
  loop_ub = in3->size[1];
  for (i = 0; i < loop_ub; i++) {
    int32_T b_loop_ub;
    if (in3->size[0] == 1) {
      b_loop_ub = in2_idx_0;
    } else {
      b_loop_ub = in3->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      in1_data[i1] = in2_data[i1 * stride_0_0] - in3_data[i1 * stride_1_0];
    }
  }
}

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_in1, 2, &dc_emlrtRTEI);
  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = 1;
  if (in2->size[1] == 1) {
    b_in1->size[1] = in1->size[1];
  } else {
    b_in1->size[1] = in2->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &dc_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_1 = (in1->size[1] != 1);
  stride_1_1 = (in2->size[1] != 1);
  if (in2->size[1] == 1) {
    loop_ub = in1->size[1];
  } else {
    loop_ub = in2->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1_data[i] = in1_data[i * stride_0_1] * in2_data[i * stride_1_1] + 1.0;
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = 1;
  in1->size[1] = b_in1->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &dc_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[1];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in1_data[i];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void d_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2)
{
  emxArray_real_T *b_in2;
  const real_T *in2_data;
  real_T *b_in2_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_in2, 2, &wc_emlrtRTEI);
  i = in2->size[1];
  stride_0_1 = b_in2->size[0] * b_in2->size[1];
  b_in2->size[0] = 1;
  if (in1->size[1] == 1) {
    b_in2->size[1] = i;
  } else {
    b_in2->size[1] = in1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in2, stride_0_1, &wc_emlrtRTEI);
  b_in2_data = b_in2->data;
  stride_0_1 = (i != 1);
  stride_1_1 = (in1->size[1] != 1);
  if (in1->size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = in1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2_data[i] =
        in2_data[6 * (i * stride_0_1) + 5] - in1_data[i * stride_1_1];
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = 1;
  in1->size[1] = b_in2->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &wc_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in2->size[1];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in2_data[i];
  }
  emxFree_real_T(sp, &b_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void plus(const emlrtStack *sp, emxArray_real_T *in1,
                 const emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_in1, 2, &vb_emlrtRTEI);
  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = 1;
  if (in2->size[1] == 1) {
    b_in1->size[1] = in1->size[1];
  } else {
    b_in1->size[1] = in2->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &vb_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_1 = (in1->size[1] != 1);
  stride_1_1 = (in2->size[1] != 1);
  if (in2->size[1] == 1) {
    loop_ub = in1->size[1];
  } else {
    loop_ub = in2->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1_data[i] = in1_data[i * stride_0_1] + in2_data[i * stride_1_1];
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = 1;
  in1->size[1] = b_in1->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &vb_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[1];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in1_data[i];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void costGaussGrad2(const emlrtStack *sp, const emxArray_real_T *x, real_T tmax,
                    real_T Ts, const real_T b_y0[6], const real_T ybar[6],
                    real_T m0, real_T coeffT, real_T Tmax, real_T ratio,
                    real_T alpha, boolean_T computeGrad,
                    const emxArray_real_T *A, const emxArray_real_T *b,
                    const emxArray_real_T *C, const emxArray_real_T *d,
                    emxArray_real_T *J, real_T *f, emxArray_real_T *gx,
                    emxArray_real_T *hx, emxArray_real_T *Jf,
                    emxArray_real_T *Jg, emxArray_real_T *Jh, real_T *p,
                    real_T *q)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *Jac;
  emxArray_real_T *b_Jac;
  emxArray_real_T *b_varargin_1;
  emxArray_real_T *c_Jac;
  emxArray_real_T *h;
  emxArray_real_T *r;
  emxArray_real_T *varargin_1;
  real_T c_y0[6];
  real_T g[5];
  const real_T *A_data;
  const real_T *C_data;
  const real_T *b_data;
  const real_T *d_data;
  real_T *J_data;
  real_T *Jac_data;
  real_T *b_Jac_data;
  real_T *h_data;
  real_T *varargin_1_data;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T input_sizes_idx_0;
  (void)alpha;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_data = d->data;
  C_data = C->data;
  b_data = b->data;
  A_data = A->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &h, 1, &qb_emlrtRTEI);
  for (i = 0; i < 6; i++) {
    c_y0[i] = b_y0[i];
  }
  st.site = &h_emlrtRSI;
  fun(&st, x, tmax, Ts, c_y0, ybar, m0, coeffT, Tmax, ratio, g, h);
  h_data = h->data;
  /*  lx = length(x); */
  /*  lf = 1; lg = size(A,1) + length(g); lh = size(C,1) + length(h); */
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    *p = (real_T)A->size[0] + 5.0;
  } else {
    *p = 5.0;
  }
  if ((C->size[0] != 0) && (C->size[1] != 0)) {
    *q = (uint32_T)C->size[0] + h->size[0];
  } else {
    *q = h->size[0];
  }
  i1 = J->size[0];
  J->size[0] = h->size[0] + 6;
  emxEnsureCapacity_real_T(sp, J, i1, &r_emlrtRTEI);
  J_data = J->data;
  J_data[0] = 0.0;
  for (i1 = 0; i1 < 5; i1++) {
    J_data[i1 + 1] = g[i1];
  }
  input_sizes_idx_0 = h->size[0];
  for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
    J_data[i1 + 6] = h_data[i1];
  }
  emxInit_real_T(sp, &r, 1, &qb_emlrtRTEI);
  emxInit_real_T(sp, &varargin_1, 2, &ab_emlrtRTEI);
  if (computeGrad) {
    int32_T c_varargin_1;
    int32_T input_sizes_idx_1;
    int32_T loop_ub;
    int32_T sizes_idx_1;
    boolean_T empty_non_axis_sizes;
    emxInit_real_T(sp, &Jac, 2, &pb_emlrtRTEI);
    st.site = &g_emlrtRSI;
    mygradcalc(&st, tmax, Ts, b_y0, ybar, m0, coeffT, Tmax, ratio, x, J, Jac);
    Jac_data = Jac->data;
    input_sizes_idx_0 = Jac->size[0];
    i1 = Jf->size[0];
    Jf->size[0] = Jac->size[0];
    emxEnsureCapacity_real_T(sp, Jf, i1, &t_emlrtRTEI);
    J_data = Jf->data;
    for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
      J_data[i1] = Jac_data[i1];
    }
    emxInit_real_T(sp, &b_varargin_1, 2, &w_emlrtRTEI);
    st.site = &f_emlrtRSI;
    i1 = b_varargin_1->size[0] * b_varargin_1->size[1];
    b_varargin_1->size[0] = A->size[1];
    b_varargin_1->size[1] = A->size[0];
    emxEnsureCapacity_real_T(&st, b_varargin_1, i1, &w_emlrtRTEI);
    varargin_1_data = b_varargin_1->data;
    input_sizes_idx_0 = A->size[0];
    for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
      loop_ub = A->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        varargin_1_data[i2 + b_varargin_1->size[0] * i1] =
            A_data[i1 + A->size[0] * i2];
      }
    }
    b_st.site = &oc_emlrtRSI;
    if ((b_varargin_1->size[0] != 0) && (b_varargin_1->size[1] != 0)) {
      c_varargin_1 = b_varargin_1->size[0];
    } else if (Jac->size[0] != 0) {
      c_varargin_1 = Jac->size[0];
    } else {
      c_varargin_1 = b_varargin_1->size[0];
    }
    c_st.site = &pc_emlrtRSI;
    if ((b_varargin_1->size[0] != c_varargin_1) &&
        ((b_varargin_1->size[0] != 0) && (b_varargin_1->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((Jac->size[0] != c_varargin_1) && (Jac->size[0] != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    empty_non_axis_sizes = (c_varargin_1 == 0);
    if (empty_non_axis_sizes ||
        ((b_varargin_1->size[0] != 0) && (b_varargin_1->size[1] != 0))) {
      input_sizes_idx_1 = b_varargin_1->size[1];
    } else {
      input_sizes_idx_1 = 0;
    }
    if (empty_non_axis_sizes || (Jac->size[0] != 0)) {
      sizes_idx_1 = 5;
    } else {
      sizes_idx_1 = 0;
    }
    emxInit_real_T(&b_st, &b_Jac, 2, &eb_emlrtRTEI);
    input_sizes_idx_0 = Jac->size[0];
    i1 = b_Jac->size[0] * b_Jac->size[1];
    b_Jac->size[0] = Jac->size[0];
    b_Jac->size[1] = 5;
    emxEnsureCapacity_real_T(&b_st, b_Jac, i1, &eb_emlrtRTEI);
    b_Jac_data = b_Jac->data;
    for (i1 = 0; i1 < 5; i1++) {
      for (i2 = 0; i2 < input_sizes_idx_0; i2++) {
        b_Jac_data[i2 + b_Jac->size[0] * i1] =
            Jac_data[i2 + Jac->size[0] * (i1 + 1)];
      }
    }
    i1 = Jg->size[0] * Jg->size[1];
    Jg->size[0] = c_varargin_1;
    Jg->size[1] = input_sizes_idx_1 + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, Jg, i1, &fb_emlrtRTEI);
    J_data = Jg->data;
    for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
      for (i2 = 0; i2 < c_varargin_1; i2++) {
        J_data[i2 + Jg->size[0] * i1] = varargin_1_data[i2 + c_varargin_1 * i1];
      }
    }
    for (i1 = 0; i1 < sizes_idx_1; i1++) {
      for (i2 = 0; i2 < c_varargin_1; i2++) {
        J_data[i2 + Jg->size[0] * (i1 + input_sizes_idx_1)] =
            b_Jac_data[i2 + c_varargin_1 * i1];
      }
    }
    emxFree_real_T(&b_st, &b_Jac);
    if (Jac->size[1] < 1) {
      emlrtDynamicBoundsCheckR2012b(Jac->size[1], 1, Jac->size[1], &emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &e_emlrtRSI;
    i1 = b_varargin_1->size[0] * b_varargin_1->size[1];
    b_varargin_1->size[0] = C->size[1];
    b_varargin_1->size[1] = C->size[0];
    emxEnsureCapacity_real_T(&st, b_varargin_1, i1, &gb_emlrtRTEI);
    varargin_1_data = b_varargin_1->data;
    input_sizes_idx_0 = C->size[0];
    for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
      loop_ub = C->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        varargin_1_data[i2 + b_varargin_1->size[0] * i1] =
            C_data[i1 + C->size[0] * i2];
      }
    }
    b_st.site = &oc_emlrtRSI;
    if ((b_varargin_1->size[0] != 0) && (b_varargin_1->size[1] != 0)) {
      c_varargin_1 = b_varargin_1->size[0];
    } else if ((Jac->size[0] != 0) && (Jac->size[1] - 6 != 0)) {
      c_varargin_1 = Jac->size[0];
    } else {
      c_varargin_1 = b_varargin_1->size[0];
      if (Jac->size[0] > b_varargin_1->size[0]) {
        c_varargin_1 = Jac->size[0];
      }
    }
    c_st.site = &pc_emlrtRSI;
    if ((b_varargin_1->size[0] != c_varargin_1) &&
        ((b_varargin_1->size[0] != 0) && (b_varargin_1->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((Jac->size[0] != c_varargin_1) &&
        ((Jac->size[0] != 0) && (Jac->size[1] - 6 != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    empty_non_axis_sizes = (c_varargin_1 == 0);
    if (empty_non_axis_sizes ||
        ((b_varargin_1->size[0] != 0) && (b_varargin_1->size[1] != 0))) {
      input_sizes_idx_1 = b_varargin_1->size[1];
    } else {
      input_sizes_idx_1 = 0;
    }
    if (empty_non_axis_sizes ||
        ((Jac->size[0] != 0) && (Jac->size[1] - 6 != 0))) {
      sizes_idx_1 = Jac->size[1] - 6;
    } else {
      sizes_idx_1 = 0;
    }
    emxInit_real_T(&b_st, &c_Jac, 2, &hb_emlrtRTEI);
    input_sizes_idx_0 = Jac->size[0];
    loop_ub = Jac->size[1] - 7;
    i1 = c_Jac->size[0] * c_Jac->size[1];
    c_Jac->size[0] = Jac->size[0];
    c_Jac->size[1] = Jac->size[1] - 6;
    emxEnsureCapacity_real_T(&b_st, c_Jac, i1, &hb_emlrtRTEI);
    b_Jac_data = c_Jac->data;
    for (i1 = 0; i1 <= loop_ub; i1++) {
      for (i2 = 0; i2 < input_sizes_idx_0; i2++) {
        b_Jac_data[i2 + c_Jac->size[0] * i1] =
            Jac_data[i2 + Jac->size[0] * (i1 + 6)];
      }
    }
    emxFree_real_T(&b_st, &Jac);
    i1 = Jh->size[0] * Jh->size[1];
    Jh->size[0] = c_varargin_1;
    Jh->size[1] = input_sizes_idx_1 + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, Jh, i1, &ib_emlrtRTEI);
    J_data = Jh->data;
    for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
      for (i2 = 0; i2 < c_varargin_1; i2++) {
        J_data[i2 + Jh->size[0] * i1] = varargin_1_data[i2 + c_varargin_1 * i1];
      }
    }
    emxFree_real_T(&b_st, &b_varargin_1);
    for (i1 = 0; i1 < sizes_idx_1; i1++) {
      for (i2 = 0; i2 < c_varargin_1; i2++) {
        J_data[i2 + Jh->size[0] * (i1 + input_sizes_idx_1)] =
            b_Jac_data[i2 + c_varargin_1 * i1];
      }
    }
    emxFree_real_T(&b_st, &c_Jac);
    if ((A->size[0] != 0) && (A->size[1] != 0)) {
      st.site = &d_emlrtRSI;
      b_st.site = &rc_emlrtRSI;
      dynamic_size_checks(&b_st, A, x, A->size[1], x->size[0]);
      b_st.site = &qc_emlrtRSI;
      mtimes(&b_st, A, x, r);
      J_data = r->data;
      if ((r->size[0] != b->size[0]) &&
          ((r->size[0] != 1) && (b->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(r->size[0], b->size[0], &d_emlrtECI,
                                    (emlrtCTX)sp);
      }
      st.site = &d_emlrtRSI;
      if (r->size[0] == b->size[0]) {
        i1 = varargin_1->size[0] * varargin_1->size[1];
        varargin_1->size[0] = r->size[0];
        varargin_1->size[1] = b->size[1];
        emxEnsureCapacity_real_T(&st, varargin_1, i1, &lb_emlrtRTEI);
        varargin_1_data = varargin_1->data;
        input_sizes_idx_0 = b->size[1];
        for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
          loop_ub = r->size[0];
          for (i2 = 0; i2 < loop_ub; i2++) {
            varargin_1_data[i2] = J_data[i2] - b_data[i2];
          }
        }
      } else {
        b_st.site = &d_emlrtRSI;
        binary_expand_op(&b_st, varargin_1, r, b);
        varargin_1_data = varargin_1->data;
      }
      b_st.site = &oc_emlrtRSI;
      if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
        input_sizes_idx_0 = varargin_1->size[0];
      } else {
        input_sizes_idx_0 = 0;
      }
      i1 = gx->size[0];
      gx->size[0] = input_sizes_idx_0 + 5;
      emxEnsureCapacity_real_T(&b_st, gx, i1, &mb_emlrtRTEI);
      J_data = gx->data;
      for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
        J_data[i1] = varargin_1_data[i1];
      }
      for (i1 = 0; i1 < 5; i1++) {
        J_data[i1 + input_sizes_idx_0] = g[i1];
      }
    } else {
      i1 = gx->size[0];
      gx->size[0] = 5;
      emxEnsureCapacity_real_T(sp, gx, i1, &jb_emlrtRTEI);
      J_data = gx->data;
      for (i1 = 0; i1 < 5; i1++) {
        J_data[i1] = g[i1];
      }
    }
    if ((C->size[0] != 0) && (C->size[1] != 0)) {
      st.site = &c_emlrtRSI;
      b_st.site = &rc_emlrtRSI;
      dynamic_size_checks(&b_st, C, x, C->size[1], x->size[0]);
      b_st.site = &qc_emlrtRSI;
      mtimes(&b_st, C, x, r);
      J_data = r->data;
      if ((r->size[0] != d->size[0]) &&
          ((r->size[0] != 1) && (d->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(r->size[0], d->size[0], &c_emlrtECI,
                                    (emlrtCTX)sp);
      }
      st.site = &c_emlrtRSI;
      if (r->size[0] == d->size[0]) {
        i1 = varargin_1->size[0] * varargin_1->size[1];
        varargin_1->size[0] = r->size[0];
        varargin_1->size[1] = d->size[1];
        emxEnsureCapacity_real_T(&st, varargin_1, i1, &nb_emlrtRTEI);
        varargin_1_data = varargin_1->data;
        input_sizes_idx_0 = d->size[1];
        for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
          loop_ub = r->size[0];
          for (i2 = 0; i2 < loop_ub; i2++) {
            varargin_1_data[i2] = J_data[i2] - d_data[i2];
          }
        }
      } else {
        b_st.site = &c_emlrtRSI;
        binary_expand_op(&b_st, varargin_1, r, d);
        varargin_1_data = varargin_1->data;
      }
      b_st.site = &oc_emlrtRSI;
      if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
        input_sizes_idx_0 = varargin_1->size[0];
      } else {
        input_sizes_idx_0 = 0;
      }
      loop_ub = h->size[0];
      i1 = hx->size[0] * hx->size[1];
      if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
        c_varargin_1 = varargin_1->size[0];
      } else {
        c_varargin_1 = 0;
      }
      hx->size[0] = c_varargin_1 + h->size[0];
      hx->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, hx, i1, &ob_emlrtRTEI);
      J_data = hx->data;
      for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
        J_data[i1] = varargin_1_data[i1];
      }
      for (i1 = 0; i1 < loop_ub; i1++) {
        J_data[i1 + input_sizes_idx_0] = h_data[i1];
      }
    } else {
      i1 = hx->size[0] * hx->size[1];
      hx->size[0] = h->size[0];
      hx->size[1] = 1;
      emxEnsureCapacity_real_T(sp, hx, i1, &kb_emlrtRTEI);
      J_data = hx->data;
      input_sizes_idx_0 = h->size[0];
      for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
        J_data[i1] = h_data[i1];
      }
    }
  } else {
    int32_T loop_ub;
    i1 = Jf->size[0];
    Jf->size[0] = 1;
    emxEnsureCapacity_real_T(sp, Jf, i1, &s_emlrtRTEI);
    J_data = Jf->data;
    J_data[0] = 0.0;
    i1 = Jg->size[0] * Jg->size[1];
    Jg->size[0] = 1;
    Jg->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Jg, i1, &u_emlrtRTEI);
    J_data = Jg->data;
    J_data[0] = 0.0;
    i1 = Jh->size[0] * Jh->size[1];
    Jh->size[0] = 1;
    Jh->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Jh, i1, &v_emlrtRTEI);
    J_data = Jh->data;
    J_data[0] = 0.0;
    if ((A->size[0] != 0) && (A->size[1] != 0)) {
      st.site = &b_emlrtRSI;
      b_st.site = &rc_emlrtRSI;
      dynamic_size_checks(&b_st, A, x, A->size[1], x->size[0]);
      b_st.site = &qc_emlrtRSI;
      mtimes(&b_st, A, x, r);
      J_data = r->data;
      if ((r->size[0] != b->size[0]) &&
          ((r->size[0] != 1) && (b->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(r->size[0], b->size[0], &b_emlrtECI,
                                    (emlrtCTX)sp);
      }
      st.site = &b_emlrtRSI;
      if (r->size[0] == b->size[0]) {
        i1 = varargin_1->size[0] * varargin_1->size[1];
        varargin_1->size[0] = r->size[0];
        varargin_1->size[1] = b->size[1];
        emxEnsureCapacity_real_T(&st, varargin_1, i1, &ab_emlrtRTEI);
        varargin_1_data = varargin_1->data;
        input_sizes_idx_0 = b->size[1];
        for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
          loop_ub = r->size[0];
          for (i2 = 0; i2 < loop_ub; i2++) {
            varargin_1_data[i2] = J_data[i2] - b_data[i2];
          }
        }
      } else {
        b_st.site = &b_emlrtRSI;
        binary_expand_op(&b_st, varargin_1, r, b);
        varargin_1_data = varargin_1->data;
      }
      b_st.site = &oc_emlrtRSI;
      if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
        input_sizes_idx_0 = varargin_1->size[0];
      } else {
        input_sizes_idx_0 = 0;
      }
      i1 = gx->size[0];
      gx->size[0] = input_sizes_idx_0 + 5;
      emxEnsureCapacity_real_T(&b_st, gx, i1, &bb_emlrtRTEI);
      J_data = gx->data;
      for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
        J_data[i1] = varargin_1_data[i1];
      }
      for (i1 = 0; i1 < 5; i1++) {
        J_data[i1 + input_sizes_idx_0] = g[i1];
      }
    } else {
      i1 = gx->size[0];
      gx->size[0] = 5;
      emxEnsureCapacity_real_T(sp, gx, i1, &x_emlrtRTEI);
      J_data = gx->data;
      for (i1 = 0; i1 < 5; i1++) {
        J_data[i1] = g[i1];
      }
    }
    if ((C->size[0] != 0) && (C->size[1] != 0)) {
      int32_T c_varargin_1;
      st.site = &emlrtRSI;
      b_st.site = &rc_emlrtRSI;
      dynamic_size_checks(&b_st, C, x, C->size[1], x->size[0]);
      b_st.site = &qc_emlrtRSI;
      mtimes(&b_st, C, x, r);
      J_data = r->data;
      if ((r->size[0] != d->size[0]) &&
          ((r->size[0] != 1) && (d->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(r->size[0], d->size[0], &emlrtECI,
                                    (emlrtCTX)sp);
      }
      st.site = &emlrtRSI;
      if (r->size[0] == d->size[0]) {
        i1 = varargin_1->size[0] * varargin_1->size[1];
        varargin_1->size[0] = r->size[0];
        varargin_1->size[1] = d->size[1];
        emxEnsureCapacity_real_T(&st, varargin_1, i1, &cb_emlrtRTEI);
        varargin_1_data = varargin_1->data;
        input_sizes_idx_0 = d->size[1];
        for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
          loop_ub = r->size[0];
          for (i2 = 0; i2 < loop_ub; i2++) {
            varargin_1_data[i2] = J_data[i2] - d_data[i2];
          }
        }
      } else {
        b_st.site = &emlrtRSI;
        binary_expand_op(&b_st, varargin_1, r, d);
        varargin_1_data = varargin_1->data;
      }
      b_st.site = &oc_emlrtRSI;
      if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
        input_sizes_idx_0 = varargin_1->size[0];
      } else {
        input_sizes_idx_0 = 0;
      }
      loop_ub = h->size[0];
      i1 = hx->size[0] * hx->size[1];
      if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
        c_varargin_1 = varargin_1->size[0];
      } else {
        c_varargin_1 = 0;
      }
      hx->size[0] = c_varargin_1 + h->size[0];
      hx->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, hx, i1, &db_emlrtRTEI);
      J_data = hx->data;
      for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
        J_data[i1] = varargin_1_data[i1];
      }
      for (i1 = 0; i1 < loop_ub; i1++) {
        J_data[i1 + input_sizes_idx_0] = h_data[i1];
      }
    } else {
      i1 = hx->size[0] * hx->size[1];
      hx->size[0] = h->size[0];
      hx->size[1] = 1;
      emxEnsureCapacity_real_T(sp, hx, i1, &y_emlrtRTEI);
      J_data = hx->data;
      input_sizes_idx_0 = h->size[0];
      for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
        J_data[i1] = h_data[i1];
      }
    }
  }
  emxFree_real_T(sp, &varargin_1);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &h);
  /*      function f = funf(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha) */
  /*          [f,~,~] = fun(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha); */
  /*      end */
  /*      function f = fung(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha) */
  /*          [~,g,~] = fun(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha); */
  /*      end */
  /*      function f = funh(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha) */
  /*          [f,~,~] = fun(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha); */
  /*      end */
  *f = 0.0;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void e_binary_expand_op(const emlrtStack *sp, emlrtRSInfo in1,
                        const emxArray_real_T *in2, const emxArray_real_T *in3,
                        real_T in4, real_T in5, const real_T in6[6],
                        const real_T in7[6], real_T in8, real_T in9,
                        real_T in10, real_T in11, real_T in12[5],
                        emxArray_real_T *in13)
{
  emlrtStack st;
  emxArray_real_T *b_in2;
  real_T b_in6[6];
  const real_T *in2_data;
  const real_T *in3_data;
  real_T *b_in2_data;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in3_data = in3->data;
  in2_data = in2->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_in2, 1, &pc_emlrtRTEI);
  i = b_in2->size[0];
  if (in3->size[0] == 1) {
    b_in2->size[0] = in2->size[0];
  } else {
    b_in2->size[0] = in3->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in2, i, &pc_emlrtRTEI);
  b_in2_data = b_in2->data;
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in3->size[0] != 1);
  if (in3->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2_data[i] = in2_data[i * stride_0_0] + in3_data[i * stride_1_0];
  }
  for (i1 = 0; i1 < 6; i1++) {
    b_in6[i1] = in6[i1];
  }
  st.site = &in1;
  fun(&st, b_in2, in4, in5, b_in6, in7, in8, in9, in10, in11, in12, in13);
  emxFree_real_T(sp, &b_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void fun(const emlrtStack *sp, const emxArray_real_T *x, real_T tmax, real_T Ts,
         real_T b_y0[6], const real_T ybar[6], real_T m0, real_T coeffT,
         real_T Tmax, real_T ratio, real_T g[5], emxArray_real_T *h)
{
  static const int8_T iv1[6] = {1, 1, 1, 1, 1, 0};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_boolean_T *b_t;
  emxArray_int32_T_1x1 uc_emlrtRSI;
  emxArray_real_T c_x;
  emxArray_real_T *b_r;
  emxArray_real_T *b_x;
  emxArray_real_T *b_y;
  emxArray_real_T *d_y;
  emxArray_real_T *e_y;
  emxArray_real_T *qdir;
  emxArray_real_T *r;
  emxArray_real_T *t;
  emxArray_real_T *y;
  real_T Q[36];
  real_T dyinv[6];
  real_T x0[6];
  real_T b[5];
  const real_T *x_data;
  real_T ku;
  real_T lu;
  real_T m;
  real_T y0_tmp;
  real_T *qdir_data;
  real_T *r_data;
  real_T *t_data;
  real_T *y_data;
  int32_T iv[2];
  int32_T iv2[2];
  int32_T a_tmp;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T idx;
  int32_T k;
  int32_T loop_ub;
  int32_T maxdimlen;
  boolean_T *b_t_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (x->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(x->size[0], 1, x->size[0], &l_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  lu = ((real_T)x->size[0] - 2.0) / 4.0;
  if (lu + 1.0 < 2.0) {
    i = 0;
    i1 = 0;
  } else {
    if (x->size[0] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, x->size[0], &k_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i = 1;
    if (lu + 1.0 != muDoubleScalarFloor(lu + 1.0)) {
      emlrtIntegerCheckR2012b(lu + 1.0, &b_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(lu + 1.0) < 1) || ((int32_T)(lu + 1.0) > x->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lu + 1.0), 1, x->size[0],
                                    &j_emlrtBCI, (emlrtCTX)sp);
    }
    i1 = (int32_T)(lu + 1.0);
  }
  iv[0] = 1;
  i1 -= i;
  iv[1] = i1;
  st.site = &i_emlrtRSI;
  indexShapeCheck(&st, x->size[0], iv);
  if (lu + 2.0 > (real_T)x->size[0] - 1.0) {
    i2 = 0;
    i3 = 0;
  } else {
    if (lu + 2.0 != muDoubleScalarFloor(lu + 2.0)) {
      emlrtIntegerCheckR2012b(lu + 2.0, &emlrtDCI, (emlrtCTX)sp);
    }
    if ((int32_T)(lu + 2.0) > x->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lu + 2.0), 1, x->size[0],
                                    &i_emlrtBCI, (emlrtCTX)sp);
    }
    i2 = (int32_T)(lu + 2.0) - 1;
    if ((x->size[0] - 1 < 1) || (x->size[0] - 1 > x->size[0])) {
      emlrtDynamicBoundsCheckR2012b(x->size[0] - 1, 1, x->size[0], &h_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i3 = x->size[0] - 1;
  }
  iv[0] = 1;
  loop_ub = i3 - i2;
  iv[1] = loop_ub;
  st.site = &j_emlrtRSI;
  indexShapeCheck(&st, x->size[0], iv);
  st.site = &j_emlrtRSI;
  b_st.site = &s_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  if (lu != muDoubleScalarFloor(lu)) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &h_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  maxdimlen = loop_ub;
  if (loop_ub < 1) {
    maxdimlen = 1;
  }
  maxdimlen = muIntScalarMax_sint32(loop_ub, maxdimlen);
  if (maxdimlen < 3) {
    emlrtErrorWithMessageIdR2018a(&st, &f_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)lu > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &f_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)lu < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  idx = 3 * (int32_T)lu;
  if (idx != loop_ub) {
    emlrtErrorWithMessageIdR2018a(
        &st, &d_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  emxInit_real_T(&st, &qdir, 2, &rb_emlrtRTEI);
  maxdimlen = qdir->size[0] * qdir->size[1];
  qdir->size[0] = 3;
  qdir->size[1] = (int32_T)lu;
  emxEnsureCapacity_real_T(sp, qdir, maxdimlen, &rb_emlrtRTEI);
  qdir_data = qdir->data;
  for (maxdimlen = 0; maxdimlen < idx; maxdimlen++) {
    qdir_data[maxdimlen] = x_data[i2 + maxdimlen];
  }
  st.site = &k_emlrtRSI;
  emxInit_real_T(&st, &t, 2, &sb_emlrtRTEI);
  t_data = t->data;
  if (muDoubleScalarIsNaN(Ts) || muDoubleScalarIsNaN(tmax)) {
    maxdimlen = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity_real_T(&st, t, maxdimlen, &sb_emlrtRTEI);
    t_data = t->data;
    t_data[0] = rtNaN;
  } else if ((Ts == 0.0) || ((tmax > 0.0) && (Ts < 0.0)) ||
             ((tmax < 0.0) && (Ts > 0.0))) {
    t->size[0] = 1;
    t->size[1] = 0;
  } else if (muDoubleScalarIsInf(tmax) && muDoubleScalarIsInf(Ts)) {
    maxdimlen = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity_real_T(&st, t, maxdimlen, &sb_emlrtRTEI);
    t_data = t->data;
    t_data[0] = rtNaN;
  } else if (muDoubleScalarIsInf(Ts)) {
    maxdimlen = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity_real_T(&st, t, maxdimlen, &sb_emlrtRTEI);
    t_data = t->data;
    t_data[0] = 0.0;
  } else if (muDoubleScalarFloor(Ts) == Ts) {
    maxdimlen = t->size[0] * t->size[1];
    t->size[0] = 1;
    idx = (int32_T)(tmax / Ts);
    t->size[1] = idx + 1;
    emxEnsureCapacity_real_T(&st, t, maxdimlen, &sb_emlrtRTEI);
    t_data = t->data;
    for (maxdimlen = 0; maxdimlen <= idx; maxdimlen++) {
      t_data[maxdimlen] = Ts * (real_T)maxdimlen;
    }
  } else {
    b_st.site = &u_emlrtRSI;
    eml_float_colon(&b_st, Ts, tmax, t);
    t_data = t->data;
  }
  emxInit_boolean_T(&st, &b_t, &tb_emlrtRTEI);
  /*  Time vector */
  st.site = &l_emlrtRSI;
  maxdimlen = b_t->size[0] * b_t->size[1];
  b_t->size[0] = 1;
  b_t->size[1] = t->size[1];
  emxEnsureCapacity_boolean_T(&st, b_t, maxdimlen, &tb_emlrtRTEI);
  b_t_data = b_t->data;
  idx = t->size[1];
  for (maxdimlen = 0; maxdimlen < idx; maxdimlen++) {
    b_t_data[maxdimlen] = (t_data[maxdimlen] > x_data[x->size[0] - 1]);
  }
  emxInit_real_T(&st, &y, 2, &ub_emlrtRTEI);
  b_st.site = &y_emlrtRSI;
  eml_find(&b_st, b_t, uc_emlrtRSI.data, uc_emlrtRSI.size);
  st.site = &m_emlrtRSI;
  EOE2COE(&st, b_y0, x0);
  st.site = &n_emlrtRSI;
  /* COE2EOE  Function to convert Classical Orbital Elements to Equinoctial  */
  /*    Orbital Elements. */
  /*    EOE = COE2EOE(COE) receives as input a vector of the 6 classical OE and
   */
  /*    gives as output a column vector of the 6 equinoctial OE. */
  /*    In particular, the input vector must be of the form  */
  /*    COE = [a e i om OM theta], where */
  /*        a: semimajor axis */
  /*        e: eccentricity */
  /*        i: inclination */
  /*        om: argument of periapsis */
  /*        OM: longitude of the ascending node */
  /*        theta: true anomaly */
  /*    The output vector is in the form EOE = [p f g h k L], where p is the  */
  /*    semilatus rectum and L is the true longitude */
  b_st.site = &hb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  d_st.site = &gb_emlrtRSI;
  ku = muDoubleScalarTan(x0[2] / 2.0);
  b_y0[0] = x0[0] * (1.0 - x0[1] * x0[1]);
  y0_tmp = x0[3] + x0[4];
  b_y0[1] = x0[1] * muDoubleScalarCos(y0_tmp);
  b_y0[2] = x0[1] * muDoubleScalarSin(y0_tmp);
  b_y0[3] = muDoubleScalarCos(x0[3]) * ku;
  b_y0[4] = muDoubleScalarSin(x0[3]) * ku;
  b_y0[5] = y0_tmp + x_data[0];
  maxdimlen = y->size[0] * y->size[1];
  y->size[0] = 6;
  emxEnsureCapacity_real_T(sp, y, maxdimlen, &ub_emlrtRTEI);
  emxFree_boolean_T(sp, &b_t);
  if ((real_T)t->size[1] + 1.0 != t->size[1] + 1) {
    emlrtIntegerCheckR2012b((real_T)t->size[1] + 1.0, &c_emlrtDCI,
                            (emlrtCTX)sp);
  }
  maxdimlen = y->size[0] * y->size[1];
  y->size[1] = t->size[1] + 1;
  emxEnsureCapacity_real_T(sp, y, maxdimlen, &ub_emlrtRTEI);
  y_data = y->data;
  if ((real_T)t->size[1] + 1.0 != t->size[1] + 1) {
    emlrtIntegerCheckR2012b((real_T)t->size[1] + 1.0, &d_emlrtDCI,
                            (emlrtCTX)sp);
  }
  idx = 6 * (t->size[1] + 1);
  for (maxdimlen = 0; maxdimlen < idx; maxdimlen++) {
    y_data[maxdimlen] = 0.0;
  }
  /*  Initialization of vector state */
  /*  Set initial conditions */
  m = m0;
  for (k = 0; k < 6; k++) {
    ku = b_y0[k];
    y_data[k] = ku;
    dyinv[k] = muDoubleScalarAbs(ku - ybar[k]);
  }
  for (idx = 0; idx < 6; idx++) {
    ku = dyinv[idx];
    ku = (real_T)(ku != 0.0) / (ku + (real_T)(ku == 0.0));
    dyinv[idx] = ku;
    if (ku == 0.0) {
      dyinv[idx] = 1.0 / muDoubleScalarMax(1.0, ybar[idx]);
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  for (k = 0; k < 6; k++) {
    ku = dyinv[k];
    x0[k] = (real_T)iv1[k] * (ku * ku);
  }
  memset(&Q[0], 0, 36U * sizeof(real_T));
  for (idx = 0; idx < 6; idx++) {
    Q[idx + 6 * idx] = x0[idx];
  }
  /*  R = diag([1 1 1]/umax^2)*0.1; */
  maxdimlen = t->size[1];
  if (t->size[1] - 1 >= 0) {
    i4 = i3;
    b_loop_ub = loop_ub;
  }
  emxInit_real_T(sp, &b_x, 1, &wb_emlrtRTEI);
  for (k = 0; k < maxdimlen; k++) {
    real_T a[3];
    real_T c_y;
    real_T scale;
    ku = muDoubleScalarCeil(((real_T)k + 1.0) / ratio);
    if (ku != (int32_T)ku) {
      emlrtIntegerCheckR2012b(ku, &e_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)ku < 1) || ((int32_T)ku > i1)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ku, 1, i1, &m_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    a_tmp = (i + (int32_T)ku) - 1;
    y0_tmp = Tmax / m * x_data[a_tmp];
    if (((int32_T)ku < 1) || ((int32_T)ku > (int32_T)lu)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ku, 1, (int32_T)lu, &g_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    c_y = 0.0;
    scale = 3.3121686421112381E-170;
    for (idx = 0; idx < 3; idx++) {
      real_T absxk;
      i3 = b_x->size[0];
      b_x->size[0] = i4 - i2;
      emxEnsureCapacity_real_T(sp, b_x, i3, &wb_emlrtRTEI);
      r_data = b_x->data;
      for (i3 = 0; i3 < b_loop_ub; i3++) {
        r_data[i3] = x_data[i2 + i3];
      }
      absxk = muDoubleScalarAbs(r_data[idx + 3 * ((int32_T)ku - 1)]);
      if (absxk > scale) {
        real_T c_t;
        c_t = scale / absxk;
        c_y = c_y * c_t * c_t + 1.0;
        scale = absxk;
      } else {
        real_T c_t;
        c_t = absxk / scale;
        c_y += c_t * c_t;
      }
    }
    c_y = scale * muDoubleScalarSqrt(c_y);
    if (k + 1 > t->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, t->size[1], &e_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (k + 1 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &d_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    idx = 3 * ((int32_T)ku - 1);
    a[0] = y0_tmp * qdir_data[idx] / c_y / 1000.0;
    a[1] = y0_tmp * qdir_data[idx + 1] / c_y / 1000.0;
    a[2] = y0_tmp * qdir_data[idx + 2] / c_y / 1000.0;
    st.site = &o_emlrtRSI;
    EOEDerivatives(*(real_T(*)[6]) & y_data[6 * k], a, x0);
    if (k + 1 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &f_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (((int32_T)(k + 2U) < 1) || ((int32_T)(k + 2U) > y->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 2U), 1, y->size[1],
                                    &c_emlrtBCI, (emlrtCTX)sp);
    }
    for (i3 = 0; i3 < 6; i3++) {
      x0[i3] = y_data[i3 + 6 * k] + Ts * x0[i3];
    }
    for (i3 = 0; i3 < 6; i3++) {
      y_data[i3 + 6 * (k + 1)] = x0[i3];
    }
    if (((int32_T)ku < 1) || ((int32_T)ku > i1)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ku, 1, i1, &n_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    m -= Ts * coeffT * x_data[a_tmp];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &qdir);
  emxInit_real_T(sp, &b_y, 2, &dc_emlrtRTEI);
  st.site = &p_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  idx = y->size[1];
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, b_y, i, &vb_emlrtRTEI);
  qdir_data = b_y->data;
  for (i = 0; i < idx; i++) {
    ku = y_data[6 * i + 1];
    qdir_data[i] = ku * ku;
  }
  st.site = &p_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  idx = y->size[1];
  i = t->size[0] * t->size[1];
  t->size[0] = 1;
  t->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, t, i, &xb_emlrtRTEI);
  t_data = t->data;
  for (i = 0; i < idx; i++) {
    ku = y_data[6 * i + 2];
    t_data[i] = ku * ku;
  }
  if ((b_y->size[1] != t->size[1]) &&
      ((b_y->size[1] != 1) && (t->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_y->size[1], t->size[1], &g_emlrtECI,
                                (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &d_y, 2, &yb_emlrtRTEI);
  idx = y->size[1];
  i = d_y->size[0] * d_y->size[1];
  d_y->size[0] = 1;
  d_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, d_y, i, &yb_emlrtRTEI);
  r_data = d_y->data;
  for (i = 0; i < idx; i++) {
    r_data[i] = y_data[6 * i + 2];
  }
  emxInit_real_T(sp, &e_y, 2, &ac_emlrtRTEI);
  idx = y->size[1];
  i = e_y->size[0] * e_y->size[1];
  e_y->size[0] = 1;
  e_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, e_y, i, &ac_emlrtRTEI);
  qdir_data = e_y->data;
  for (i = 0; i < idx; i++) {
    qdir_data[i] = y_data[6 * i + 1];
  }
  emxInit_real_T(sp, &r, 2, &hc_emlrtRTEI);
  st.site = &p_emlrtRSI;
  b_atan2(&st, d_y, e_y, r);
  emxFree_real_T(sp, &e_y);
  if ((y->size[1] != r->size[1]) && ((y->size[1] != 1) && (r->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(y->size[1], r->size[1], &f_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (b_y->size[1] == t->size[1]) {
    idx = b_y->size[1] - 1;
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    emxEnsureCapacity_real_T(sp, b_y, i, &bc_emlrtRTEI);
    qdir_data = b_y->data;
    for (i = 0; i <= idx; i++) {
      qdir_data[i] += t_data[i];
    }
  } else {
    plus(sp, b_y, t);
  }
  st.site = &p_emlrtRSI;
  b_sqrt(&st, b_y);
  if (y->size[1] == r->size[1]) {
    idx = y->size[1];
    i = r->size[0] * r->size[1];
    r->size[0] = 1;
    r->size[1] = y->size[1];
    emxEnsureCapacity_real_T(sp, r, i, &cc_emlrtRTEI);
    r_data = r->data;
    for (i = 0; i < idx; i++) {
      r_data[i] = y_data[6 * i + 5] - r_data[i];
    }
  } else {
    d_binary_expand_op(sp, r, y);
  }
  st.site = &p_emlrtRSI;
  b_cos(&st, r);
  r_data = r->data;
  if ((b_y->size[1] != r->size[1]) &&
      ((b_y->size[1] != 1) && (r->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_y->size[1], r->size[1], &e_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &p_emlrtRSI;
  if (b_y->size[1] == r->size[1]) {
    idx = b_y->size[1] - 1;
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    emxEnsureCapacity_real_T(&st, b_y, i, &dc_emlrtRTEI);
    qdir_data = b_y->data;
    for (i = 0; i <= idx; i++) {
      qdir_data[i] = qdir_data[i] * r_data[i] + 1.0;
    }
  } else {
    b_st.site = &p_emlrtRSI;
    c_binary_expand_op(&b_st, b_y, r);
    qdir_data = b_y->data;
  }
  emxFree_real_T(&st, &r);
  b_st.site = &ub_emlrtRSI;
  idx = y->size[1];
  i = d_y->size[0] * d_y->size[1];
  d_y->size[0] = 1;
  d_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, d_y, i, &ec_emlrtRTEI);
  r_data = d_y->data;
  for (i = 0; i < idx; i++) {
    r_data[i] = y_data[6 * i];
  }
  c_st.site = &vb_emlrtRSI;
  assertCompatibleDims(&c_st, d_y, b_y);
  emxFree_real_T(sp, &d_y);
  emxInit_real_T(sp, &b_r, 1, &fc_emlrtRTEI);
  if (y->size[1] == b_y->size[1]) {
    idx = y->size[1];
    i = b_r->size[0];
    b_r->size[0] = y->size[1];
    emxEnsureCapacity_real_T(sp, b_r, i, &fc_emlrtRTEI);
    r_data = b_r->data;
    for (i = 0; i < idx; i++) {
      r_data[i] = y_data[6 * i] / qdir_data[i];
    }
  } else {
    st.site = &p_emlrtRSI;
    b_binary_expand_op(&st, b_r, y, b_y);
    r_data = b_r->data;
  }
  emxFree_real_T(sp, &b_y);
  /*          g = [Q(1:5,1:5)*(y(1:5,indtf)-ybar(1:5)).^2; */
  if (y->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(y->size[1], 1, y->size[1], &b_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  for (k = 0; k < 5; k++) {
    ku = y_data[k + 6 * (y->size[1] - 1)] - ybar[k];
    b[k] = ku * ku;
  }
  emxFree_real_T(sp, &y);
  for (i = 0; i < 5; i++) {
    ku = 0.0;
    for (i1 = 0; i1 < 5; i1++) {
      ku += Q[i + 6 * i1] * b[i1];
    }
    g[i] = ku;
  }
  st.site = &q_emlrtRSI;
  b_st.site = &wb_emlrtRSI;
  c_st.site = &xb_emlrtRSI;
  d_st.site = &yb_emlrtRSI;
  if (b_r->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &ac_emlrtRSI;
  f_st.site = &bc_emlrtRSI;
  maxdimlen = b_r->size[0];
  if (b_r->size[0] <= 2) {
    if (b_r->size[0] == 1) {
      y0_tmp = r_data[0];
    } else if ((r_data[0] > r_data[1]) || (muDoubleScalarIsNaN(r_data[0]) &&
                                           (!muDoubleScalarIsNaN(r_data[1])))) {
      y0_tmp = r_data[1];
    } else {
      y0_tmp = r_data[0];
    }
  } else {
    g_st.site = &dc_emlrtRSI;
    if (!muDoubleScalarIsNaN(r_data[0])) {
      idx = 1;
    } else {
      boolean_T exitg1;
      idx = 0;
      h_st.site = &ec_emlrtRSI;
      if (b_r->size[0] > 2147483646) {
        i_st.site = &x_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= maxdimlen)) {
        if (!muDoubleScalarIsNaN(r_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      y0_tmp = r_data[0];
    } else {
      g_st.site = &cc_emlrtRSI;
      y0_tmp = r_data[idx - 1];
      a_tmp = idx + 1;
      h_st.site = &fc_emlrtRSI;
      if ((idx + 1 <= b_r->size[0]) && (b_r->size[0] > 2147483646)) {
        i_st.site = &x_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = a_tmp; k <= maxdimlen; k++) {
        ku = r_data[k - 1];
        if (y0_tmp > ku) {
          y0_tmp = ku;
        }
      }
    }
  }
  emxFree_real_T(&f_st, &b_r);
  i = b_x->size[0];
  b_x->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_x, i, &wb_emlrtRTEI);
  r_data = b_x->data;
  for (i = 0; i < loop_ub; i++) {
    r_data[i] = x_data[i2 + i];
  }
  c_x = *b_x;
  iv2[0] = 3;
  iv2[1] = (int32_T)lu;
  c_x.size = &iv2[0];
  c_x.numDimensions = 2;
  st.site = &q_emlrtRSI;
  vecnorm(&st, &c_x, t);
  t_data = t->data;
  i = h->size[0];
  h->size[0] = t->size[1] + 2;
  emxEnsureCapacity_real_T(sp, h, i, &gc_emlrtRTEI);
  r_data = h->data;
  r_data[0] = y0_tmp - 6380.0;
  r_data[1] = m - 1100.0;
  loop_ub = t->size[1];
  emxFree_real_T(sp, &b_x);
  for (i = 0; i < loop_ub; i++) {
    r_data[i + 2] = 1.0 - t_data[i];
  }
  emxFree_real_T(sp, &t);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (costGaussGrad2.c) */
