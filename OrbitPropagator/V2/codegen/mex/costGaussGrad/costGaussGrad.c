/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * costGaussGrad.c
 *
 * Code generation for function 'costGaussGrad'
 *
 */

/* Include files */
#include "costGaussGrad.h"
#include "EOE2COE.h"
#include "atan2.h"
#include "colon.h"
#include "cos.h"
#include "costGaussGrad_data.h"
#include "costGaussGrad_emxutil.h"
#include "costGaussGrad_types.h"
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
        46,              /* lineNo */
        "costGaussGrad", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI =
    {
        41,              /* lineNo */
        "costGaussGrad", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI =
    {
        34,              /* lineNo */
        "costGaussGrad", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI =
    {
        29,              /* lineNo */
        "costGaussGrad", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI =
    {
        25,              /* lineNo */
        "costGaussGrad", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI =
    {
        24,              /* lineNo */
        "costGaussGrad", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI =
    {
        22,              /* lineNo */
        "costGaussGrad", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI =
    {
        56,                  /* lineNo */
        "costGaussGrad/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI =
    {
        57,                  /* lineNo */
        "costGaussGrad/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI =
    {
        58,                  /* lineNo */
        "costGaussGrad/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI =
    {
        59,                  /* lineNo */
        "costGaussGrad/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI =
    {
        60,                  /* lineNo */
        "costGaussGrad/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI =
    {
        62,                  /* lineNo */
        "costGaussGrad/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI =
    {
        86,                  /* lineNo */
        "costGaussGrad/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI =
    {
        102,                 /* lineNo */
        "costGaussGrad/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI =
    {
        108,                 /* lineNo */
        "costGaussGrad/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI =
    {
        109,                 /* lineNo */
        "costGaussGrad/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pathName */
};

static emlrtRSInfo t_emlrtRSI = {
    29,                  /* lineNo */
    "reshapeSizeChecks", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pathName */
};

static emlrtRSInfo u_emlrtRSI = {
    109,               /* lineNo */
    "computeDimsData", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pathName */
};

static emlrtRSInfo v_emlrtRSI = {
    125,                                                          /* lineNo */
    "colon",                                                      /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName */
};

static emlrtRSInfo ab_emlrtRSI = {
    39,                                                            /* lineNo */
    "find",                                                        /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                    */
};

static emlrtRSInfo hb_emlrtRSI = {
    71,                                                           /* lineNo */
    "power",                                                      /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = {
    38,        /* lineNo */
    "COE2EOE", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\COE2EOE.m" /* pathName
                                                                          */
};

static emlrtRSInfo jb_emlrtRSI =
    {
        23,               /* lineNo */
        "EOEDerivatives", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI =
    {
        25,               /* lineNo */
        "EOEDerivatives", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo lb_emlrtRSI =
    {
        33,               /* lineNo */
        "EOEDerivatives", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo vb_emlrtRSI =
    {
        34,               /* lineNo */
        "rdivide_helper", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
        "helper.m" /* pathName */
};

static emlrtRSInfo wb_emlrtRSI = {
    51,    /* lineNo */
    "div", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" /* pathName
                                                                       */
};

static emlrtRSInfo gc_emlrtRSI = {
    28,    /* lineNo */
    "cat", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                       */
};

static emlrtRSInfo hc_emlrtRSI = {
    100,        /* lineNo */
    "cat_impl", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                       */
};

static emlrtRSInfo ic_emlrtRSI =
    {
        94,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper."
        "m" /* pathName */
};

static emlrtRSInfo jc_emlrtRSI =
    {
        69,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper."
        "m" /* pathName */
};

static emlrtECInfo emlrtECI =
    {
        1,               /* nDims */
        46,              /* lineNo */
        15,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtECInfo b_emlrtECI =
    {
        1,               /* nDims */
        41,              /* lineNo */
        15,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtECInfo c_emlrtECI =
    {
        1,               /* nDims */
        34,              /* lineNo */
        15,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtECInfo d_emlrtECI =
    {
        1,               /* nDims */
        29,              /* lineNo */
        15,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtBCInfo emlrtBCI =
    {
        -1,              /* iFirst */
        -1,              /* iLast */
        26,              /* lineNo */
        38,              /* colNo */
        "Jac",           /* aName */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtBCInfo b_emlrtBCI =
    {
        -1,              /* iFirst */
        -1,              /* iLast */
        26,              /* lineNo */
        16,              /* colNo */
        "Jac",           /* aName */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtBCInfo c_emlrtBCI =
    {
        -1,              /* iFirst */
        -1,              /* iLast */
        25,              /* lineNo */
        33,              /* colNo */
        "Jac",           /* aName */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = {
    275,                   /* lineNo */
    27,                    /* colNo */
    "check_non_axis_size", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pName
                                                                       */
};

static emlrtBCInfo d_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        53,                  /* lineNo */
        16,                  /* colNo */
        "x",                 /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtBCInfo e_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        56,                  /* lineNo */
        17,                  /* colNo */
        "x",                 /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtDCInfo emlrtDCI =
    {
        56,                  /* lineNo */
        19,                  /* colNo */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        1                                                /* checkKind */
};

static emlrtBCInfo f_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        56,                  /* lineNo */
        19,                  /* colNo */
        "x",                 /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtDCInfo b_emlrtDCI =
    {
        57,                  /* lineNo */
        26,                  /* colNo */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        1                                                /* checkKind */
};

static emlrtBCInfo g_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        57,                  /* lineNo */
        26,                  /* colNo */
        "x",                 /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtBCInfo h_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        57,                  /* lineNo */
        31,                  /* colNo */
        "x",                 /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtBCInfo i_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        85,                  /* lineNo */
        39,                  /* colNo */
        "qdir",              /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtBCInfo j_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        85,                  /* lineNo */
        55,                  /* colNo */
        "qdir",              /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtBCInfo k_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        64,                  /* lineNo */
        13,                  /* colNo */
        "y",                 /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtBCInfo l_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        86,                  /* lineNo */
        28,                  /* colNo */
        "y",                 /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtBCInfo m_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        86,                  /* lineNo */
        53,                  /* colNo */
        "t",                 /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtBCInfo n_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        86,                  /* lineNo */
        60,                  /* colNo */
        "y",                 /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtBCInfo o_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        86,                  /* lineNo */
        17,                  /* colNo */
        "y",                 /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtBCInfo p_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        88,                  /* lineNo */
        34,                  /* colNo */
        "y",                 /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtECInfo e_emlrtECI =
    {
        2,                   /* nDims */
        102,                 /* lineNo */
        31,                  /* colNo */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtECInfo f_emlrtECI =
    {
        2,                   /* nDims */
        102,                 /* lineNo */
        57,                  /* colNo */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtECInfo g_emlrtECI =
    {
        2,                   /* nDims */
        102,                 /* lineNo */
        26,                  /* colNo */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtBCInfo q_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        106,                 /* lineNo */
        23,                  /* colNo */
        "y",                 /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = {
    52,                  /* lineNo */
    13,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pName */
};

static emlrtRTEInfo c_emlrtRTEI = {
    57,                  /* lineNo */
    23,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    59,                  /* lineNo */
    23,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pName */
};

static emlrtRTEInfo e_emlrtRTEI = {
    13,                     /* lineNo */
    27,                     /* colNo */
    "assertCompatibleDims", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\assertCompatibleDims.m" /* pName */
};

static emlrtBCInfo r_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        78,                  /* lineNo */
        20,                  /* colNo */
        "csi",               /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtBCInfo s_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        79,                  /* lineNo */
        21,                  /* colNo */
        "csi",               /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtBCInfo t_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        85,                  /* lineNo */
        28,                  /* colNo */
        "csi",               /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtDCInfo c_emlrtDCI =
    {
        85,                  /* lineNo */
        28,                  /* colNo */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        1                                                /* checkKind */
};

static emlrtBCInfo u_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        87,                  /* lineNo */
        35,                  /* colNo */
        "csi",               /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtBCInfo v_emlrtBCI =
    {
        -1,                  /* iFirst */
        -1,                  /* iLast */
        88,                  /* lineNo */
        67,                  /* colNo */
        "t",                 /* aName */
        "costGaussGrad/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m", /* pName */
        0                                                /* checkKind */
};

static emlrtRTEInfo g_emlrtRTEI = {
    58,                   /* lineNo */
    23,                   /* colNo */
    "assertValidSizeArg", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\assertValidSizeArg.m" /* pName */
};

static emlrtRTEInfo p_emlrtRTEI =
    {
        20,              /* lineNo */
        1,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI =
    {
        39,              /* lineNo */
        5,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo r_emlrtRTEI =
    {
        23,              /* lineNo */
        5,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo s_emlrtRTEI =
    {
        39,              /* lineNo */
        13,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo t_emlrtRTEI =
    {
        39,              /* lineNo */
        21,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI =
    {
        24,              /* lineNo */
        11,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI =
    {
        39,              /* lineNo */
        29,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI =
    {
        43,              /* lineNo */
        9,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI =
    {
        48,              /* lineNo */
        9,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI =
    {
        41,              /* lineNo */
        15,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo ab_emlrtRTEI =
    {
        41,              /* lineNo */
        9,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI =
    {
        46,              /* lineNo */
        15,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI =
    {
        24,              /* lineNo */
        15,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI =
    {
        46,              /* lineNo */
        9,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI =
    {
        24,              /* lineNo */
        5,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI =
    {
        25,              /* lineNo */
        11,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI =
    {
        25,              /* lineNo */
        15,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI =
    {
        25,              /* lineNo */
        5,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI =
    {
        26,              /* lineNo */
        5,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI =
    {
        31,              /* lineNo */
        9,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI =
    {
        36,              /* lineNo */
        9,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI =
    {
        29,              /* lineNo */
        15,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI =
    {
        29,              /* lineNo */
        9,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI =
    {
        34,              /* lineNo */
        15,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI =
    {
        34,              /* lineNo */
        9,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI =
    {
        22,              /* lineNo */
        5,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI =
    {
        1,               /* lineNo */
        52,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI =
    {
        56,              /* lineNo */
        9,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI =
    {
        58,              /* lineNo */
        9,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI =
    {
        59,              /* lineNo */
        22,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI =
    {
        63,              /* lineNo */
        9,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo vb_emlrtRTEI =
    {
        57,              /* lineNo */
        24,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo wb_emlrtRTEI =
    {
        102,             /* lineNo */
        31,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo xb_emlrtRTEI =
    {
        102,             /* lineNo */
        41,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo yb_emlrtRTEI =
    {
        102,             /* lineNo */
        70,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo ac_emlrtRTEI =
    {
        102,             /* lineNo */
        77,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo bc_emlrtRTEI =
    {
        102,             /* lineNo */
        26,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo cc_emlrtRTEI =
    {
        102,             /* lineNo */
        53,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo dc_emlrtRTEI =
    {
        102,             /* lineNo */
        24,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo ec_emlrtRTEI =
    {
        108,             /* lineNo */
        9,               /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo fc_emlrtRTEI =
    {
        52,              /* lineNo */
        26,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo uc_emlrtRTEI =
    {
        108,             /* lineNo */
        14,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

static emlrtRTEInfo vc_emlrtRTEI =
    {
        102,             /* lineNo */
        57,              /* colNo */
        "costGaussGrad", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pName */
};

/* Function Declarations */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2,
                               const emxArray_real_T *in3, real_T in4,
                               const emxArray_real_T *in5);

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
                               const emxArray_real_T *in3, real_T in4,
                               const emxArray_real_T *in5)
{
  emxArray_real_T *b_in2;
  const real_T *in2_data;
  const real_T *in3_data;
  const real_T *in5_data;
  real_T *b_in2_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in5_data = in5->data;
  in3_data = in3->data;
  in2_data = in2->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_in2, 1, &uc_emlrtRTEI);
  i = in2->size[1];
  stride_0_0 = b_in2->size[0];
  if (in3->size[1] == 1) {
    b_in2->size[0] = i;
  } else {
    b_in2->size[0] = in3->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in2, stride_0_0, &uc_emlrtRTEI);
  b_in2_data = b_in2->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (in3->size[1] != 1);
  if (in3->size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = in3->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2_data[i] =
        in2_data[6 * (i * stride_0_0)] / in3_data[i * stride_1_0] - 6380.0;
  }
  i = in1->size[0];
  in1->size[0] = (b_in2->size[0] + in5->size[1]) + 1;
  emxEnsureCapacity_real_T(sp, in1, i, &ec_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in2->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in2_data[i];
  }
  in1_data[b_in2->size[0]] = in4 - 1100.0;
  loop_ub = in5->size[1];
  for (i = 0; i < loop_ub; i++) {
    in1_data[(i + b_in2->size[0]) + 1] = 1.0 - in5_data[i];
  }
  emxFree_real_T(sp, &b_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
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
  emxInit_real_T(sp, &b_in2, 2, &vc_emlrtRTEI);
  i = in2->size[1];
  stride_0_1 = b_in2->size[0] * b_in2->size[1];
  b_in2->size[0] = 1;
  if (in1->size[1] == 1) {
    b_in2->size[1] = i;
  } else {
    b_in2->size[1] = in1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in2, stride_0_1, &vc_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, in1, i, &vc_emlrtRTEI);
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
  emxInit_real_T(sp, &b_in1, 2, &wb_emlrtRTEI);
  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = 1;
  if (in2->size[1] == 1) {
    b_in1->size[1] = in1->size[1];
  } else {
    b_in1->size[1] = in2->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &wb_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, in1, i, &wb_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[1];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in1_data[i];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void costGaussGrad(const emlrtStack *sp, const emxArray_real_T *x, real_T tmax,
                   real_T Ts, const real_T b_y0[6], const real_T ybar[6],
                   real_T m0, real_T coeffT, real_T Tmax, real_T ratio,
                   real_T alpha, boolean_T computeGrad,
                   const emxArray_real_T *A, const emxArray_real_T *b,
                   const emxArray_real_T *C, const emxArray_real_T *d,
                   emxArray_real_T *J, real_T *f, emxArray_real_T *gx,
                   emxArray_real_T *hx, emxArray_real_T *Jf,
                   emxArray_real_T *Jg, emxArray_real_T *Jh, real_T *p,
                   real_T *q, real_T F[2], emxArray_real_T *JF)
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
  int32_T loop_ub;
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
  fun(&st, x, tmax, Ts, c_y0, ybar, m0, coeffT, Tmax, ratio, alpha, f, g, h, F);
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
  J->size[0] = h->size[0] + 8;
  emxEnsureCapacity_real_T(sp, J, i1, &p_emlrtRTEI);
  J_data = J->data;
  J_data[0] = *f;
  for (i1 = 0; i1 < 5; i1++) {
    J_data[i1 + 1] = g[i1];
  }
  loop_ub = h->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    J_data[i1 + 6] = h_data[i1];
  }
  J_data[h->size[0] + 6] = F[0];
  J_data[h->size[0] + 7] = F[1];
  emxInit_real_T(sp, &r, 1, &qb_emlrtRTEI);
  emxInit_real_T(sp, &varargin_1, 2, &y_emlrtRTEI);
  if (computeGrad) {
    int32_T b_loop_ub;
    int32_T input_sizes_idx_1;
    int32_T sizes_idx_1;
    boolean_T empty_non_axis_sizes;
    emxInit_real_T(sp, &Jac, 2, &pb_emlrtRTEI);
    st.site = &g_emlrtRSI;
    mygradcalc(&st, tmax, Ts, b_y0, ybar, m0, coeffT, Tmax, ratio, alpha, x, J,
               Jac);
    Jac_data = Jac->data;
    loop_ub = Jac->size[0];
    i1 = Jf->size[0];
    Jf->size[0] = Jac->size[0];
    emxEnsureCapacity_real_T(sp, Jf, i1, &r_emlrtRTEI);
    J_data = Jf->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      J_data[i1] = Jac_data[i1];
    }
    emxInit_real_T(sp, &b_varargin_1, 2, &u_emlrtRTEI);
    st.site = &f_emlrtRSI;
    i1 = b_varargin_1->size[0] * b_varargin_1->size[1];
    b_varargin_1->size[0] = A->size[1];
    b_varargin_1->size[1] = A->size[0];
    emxEnsureCapacity_real_T(&st, b_varargin_1, i1, &u_emlrtRTEI);
    varargin_1_data = b_varargin_1->data;
    loop_ub = A->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = A->size[1];
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        varargin_1_data[i2 + b_varargin_1->size[0] * i1] =
            A_data[i1 + A->size[0] * i2];
      }
    }
    b_st.site = &gc_emlrtRSI;
    if ((b_varargin_1->size[0] != 0) && (b_varargin_1->size[1] != 0)) {
      input_sizes_idx_0 = b_varargin_1->size[0];
    } else if (Jac->size[0] != 0) {
      input_sizes_idx_0 = Jac->size[0];
    } else {
      input_sizes_idx_0 = b_varargin_1->size[0];
    }
    c_st.site = &hc_emlrtRSI;
    if ((b_varargin_1->size[0] != input_sizes_idx_0) &&
        ((b_varargin_1->size[0] != 0) && (b_varargin_1->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((Jac->size[0] != input_sizes_idx_0) && (Jac->size[0] != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    empty_non_axis_sizes = (input_sizes_idx_0 == 0);
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
    emxInit_real_T(&b_st, &b_Jac, 2, &cb_emlrtRTEI);
    loop_ub = Jac->size[0];
    i1 = b_Jac->size[0] * b_Jac->size[1];
    b_Jac->size[0] = Jac->size[0];
    b_Jac->size[1] = 5;
    emxEnsureCapacity_real_T(&b_st, b_Jac, i1, &cb_emlrtRTEI);
    b_Jac_data = b_Jac->data;
    for (i1 = 0; i1 < 5; i1++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_Jac_data[i2 + b_Jac->size[0] * i1] =
            Jac_data[i2 + Jac->size[0] * (i1 + 1)];
      }
    }
    i1 = Jg->size[0] * Jg->size[1];
    Jg->size[0] = input_sizes_idx_0;
    Jg->size[1] = input_sizes_idx_1 + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, Jg, i1, &eb_emlrtRTEI);
    J_data = Jg->data;
    for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
      for (i2 = 0; i2 < input_sizes_idx_0; i2++) {
        J_data[i2 + Jg->size[0] * i1] =
            varargin_1_data[i2 + input_sizes_idx_0 * i1];
      }
    }
    for (i1 = 0; i1 < sizes_idx_1; i1++) {
      for (i2 = 0; i2 < input_sizes_idx_0; i2++) {
        J_data[i2 + Jg->size[0] * (i1 + input_sizes_idx_1)] =
            b_Jac_data[i2 + input_sizes_idx_0 * i1];
      }
    }
    emxFree_real_T(&b_st, &b_Jac);
    if (((int32_T)(((real_T)h->size[0] + 5.0) + 1.0) < 1) ||
        ((int32_T)(((real_T)h->size[0] + 5.0) + 1.0) > Jac->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(((real_T)h->size[0] + 5.0) + 1.0),
                                    1, Jac->size[1], &c_emlrtBCI, (emlrtCTX)sp);
    }
    st.site = &e_emlrtRSI;
    i1 = b_varargin_1->size[0] * b_varargin_1->size[1];
    b_varargin_1->size[0] = C->size[1];
    b_varargin_1->size[1] = C->size[0];
    emxEnsureCapacity_real_T(&st, b_varargin_1, i1, &fb_emlrtRTEI);
    varargin_1_data = b_varargin_1->data;
    loop_ub = C->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = C->size[1];
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        varargin_1_data[i2 + b_varargin_1->size[0] * i1] =
            C_data[i1 + C->size[0] * i2];
      }
    }
    b_st.site = &gc_emlrtRSI;
    if ((b_varargin_1->size[0] != 0) && (b_varargin_1->size[1] != 0)) {
      input_sizes_idx_0 = b_varargin_1->size[0];
    } else if ((Jac->size[0] != 0) && (h->size[0] != 0)) {
      input_sizes_idx_0 = Jac->size[0];
    } else {
      input_sizes_idx_0 = b_varargin_1->size[0];
      if (Jac->size[0] > b_varargin_1->size[0]) {
        input_sizes_idx_0 = Jac->size[0];
      }
    }
    c_st.site = &hc_emlrtRSI;
    if ((b_varargin_1->size[0] != input_sizes_idx_0) &&
        ((b_varargin_1->size[0] != 0) && (b_varargin_1->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((Jac->size[0] != input_sizes_idx_0) &&
        ((Jac->size[0] != 0) && (h->size[0] != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    empty_non_axis_sizes = (input_sizes_idx_0 == 0);
    if (empty_non_axis_sizes ||
        ((b_varargin_1->size[0] != 0) && (b_varargin_1->size[1] != 0))) {
      input_sizes_idx_1 = b_varargin_1->size[1];
    } else {
      input_sizes_idx_1 = 0;
    }
    if (empty_non_axis_sizes || ((Jac->size[0] != 0) && (h->size[0] != 0))) {
      sizes_idx_1 = h->size[0];
    } else {
      sizes_idx_1 = 0;
    }
    emxInit_real_T(&b_st, &c_Jac, 2, &gb_emlrtRTEI);
    loop_ub = Jac->size[0];
    b_loop_ub = h->size[0];
    i1 = c_Jac->size[0] * c_Jac->size[1];
    c_Jac->size[0] = Jac->size[0];
    c_Jac->size[1] = h->size[0];
    emxEnsureCapacity_real_T(&b_st, c_Jac, i1, &gb_emlrtRTEI);
    b_Jac_data = c_Jac->data;
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_Jac_data[i2 + c_Jac->size[0] * i1] =
            Jac_data[i2 + Jac->size[0] * (i1 + 6)];
      }
    }
    i1 = Jh->size[0] * Jh->size[1];
    Jh->size[0] = input_sizes_idx_0;
    Jh->size[1] = input_sizes_idx_1 + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, Jh, i1, &hb_emlrtRTEI);
    J_data = Jh->data;
    for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
      for (i2 = 0; i2 < input_sizes_idx_0; i2++) {
        J_data[i2 + Jh->size[0] * i1] =
            varargin_1_data[i2 + input_sizes_idx_0 * i1];
      }
    }
    emxFree_real_T(&b_st, &b_varargin_1);
    for (i1 = 0; i1 < sizes_idx_1; i1++) {
      for (i2 = 0; i2 < input_sizes_idx_0; i2++) {
        J_data[i2 + Jh->size[0] * (i1 + input_sizes_idx_1)] =
            b_Jac_data[i2 + input_sizes_idx_0 * i1];
      }
    }
    emxFree_real_T(&b_st, &c_Jac);
    if (h->size[0] + 7U > (uint32_T)Jac->size[1]) {
      i1 = 0;
      i2 = 0;
    } else {
      if (((int32_T)(h->size[0] + 7U) < 1) ||
          ((int32_T)(h->size[0] + 7U) > Jac->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(h->size[0] + 7U), 1,
                                      Jac->size[1], &b_emlrtBCI, (emlrtCTX)sp);
      }
      i1 = h->size[0] + 6;
      if (Jac->size[1] < 1) {
        emlrtDynamicBoundsCheckR2012b(Jac->size[1], 1, Jac->size[1], &emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = Jac->size[1];
    }
    loop_ub = Jac->size[0];
    input_sizes_idx_0 = JF->size[0] * JF->size[1];
    JF->size[0] = Jac->size[0];
    b_loop_ub = i2 - i1;
    JF->size[1] = b_loop_ub;
    emxEnsureCapacity_real_T(sp, JF, input_sizes_idx_0, &ib_emlrtRTEI);
    J_data = JF->data;
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      for (input_sizes_idx_0 = 0; input_sizes_idx_0 < loop_ub;
           input_sizes_idx_0++) {
        J_data[input_sizes_idx_0 + JF->size[0] * i2] =
            Jac_data[input_sizes_idx_0 + Jac->size[0] * (i1 + i2)];
      }
    }
    emxFree_real_T(sp, &Jac);
    if ((A->size[0] != 0) && (A->size[1] != 0)) {
      st.site = &d_emlrtRSI;
      b_st.site = &jc_emlrtRSI;
      dynamic_size_checks(&b_st, A, x, A->size[1], x->size[0]);
      b_st.site = &ic_emlrtRSI;
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
        loop_ub = b->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_loop_ub = r->size[0];
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            varargin_1_data[i2] = J_data[i2] - b_data[i2];
          }
        }
      } else {
        b_st.site = &d_emlrtRSI;
        binary_expand_op(&b_st, varargin_1, r, b);
        varargin_1_data = varargin_1->data;
      }
      b_st.site = &gc_emlrtRSI;
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
      b_st.site = &jc_emlrtRSI;
      dynamic_size_checks(&b_st, C, x, C->size[1], x->size[0]);
      b_st.site = &ic_emlrtRSI;
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
        loop_ub = d->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_loop_ub = r->size[0];
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            varargin_1_data[i2] = J_data[i2] - d_data[i2];
          }
        }
      } else {
        b_st.site = &c_emlrtRSI;
        binary_expand_op(&b_st, varargin_1, r, d);
        varargin_1_data = varargin_1->data;
      }
      b_st.site = &gc_emlrtRSI;
      if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
        input_sizes_idx_0 = varargin_1->size[0];
      } else {
        input_sizes_idx_0 = 0;
      }
      input_sizes_idx_1 = h->size[0];
      i1 = hx->size[0] * hx->size[1];
      if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
        loop_ub = varargin_1->size[0];
      } else {
        loop_ub = 0;
      }
      hx->size[0] = loop_ub + h->size[0];
      hx->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, hx, i1, &ob_emlrtRTEI);
      J_data = hx->data;
      for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
        J_data[i1] = varargin_1_data[i1];
      }
      for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
        J_data[i1 + input_sizes_idx_0] = h_data[i1];
      }
    } else {
      i1 = hx->size[0] * hx->size[1];
      hx->size[0] = h->size[0];
      hx->size[1] = 1;
      emxEnsureCapacity_real_T(sp, hx, i1, &kb_emlrtRTEI);
      J_data = hx->data;
      loop_ub = h->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        J_data[i1] = h_data[i1];
      }
    }
  } else {
    int32_T b_loop_ub;
    i1 = Jf->size[0];
    Jf->size[0] = 1;
    emxEnsureCapacity_real_T(sp, Jf, i1, &q_emlrtRTEI);
    J_data = Jf->data;
    J_data[0] = 0.0;
    i1 = Jg->size[0] * Jg->size[1];
    Jg->size[0] = 1;
    Jg->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Jg, i1, &s_emlrtRTEI);
    J_data = Jg->data;
    J_data[0] = 0.0;
    i1 = Jh->size[0] * Jh->size[1];
    Jh->size[0] = 1;
    Jh->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Jh, i1, &t_emlrtRTEI);
    J_data = Jh->data;
    J_data[0] = 0.0;
    i1 = JF->size[0] * JF->size[1];
    JF->size[0] = 1;
    JF->size[1] = 1;
    emxEnsureCapacity_real_T(sp, JF, i1, &v_emlrtRTEI);
    J_data = JF->data;
    J_data[0] = 0.0;
    if ((A->size[0] != 0) && (A->size[1] != 0)) {
      st.site = &b_emlrtRSI;
      b_st.site = &jc_emlrtRSI;
      dynamic_size_checks(&b_st, A, x, A->size[1], x->size[0]);
      b_st.site = &ic_emlrtRSI;
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
        emxEnsureCapacity_real_T(&st, varargin_1, i1, &y_emlrtRTEI);
        varargin_1_data = varargin_1->data;
        loop_ub = b->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_loop_ub = r->size[0];
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            varargin_1_data[i2] = J_data[i2] - b_data[i2];
          }
        }
      } else {
        b_st.site = &b_emlrtRSI;
        binary_expand_op(&b_st, varargin_1, r, b);
        varargin_1_data = varargin_1->data;
      }
      b_st.site = &gc_emlrtRSI;
      if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
        input_sizes_idx_0 = varargin_1->size[0];
      } else {
        input_sizes_idx_0 = 0;
      }
      i1 = gx->size[0];
      gx->size[0] = input_sizes_idx_0 + 5;
      emxEnsureCapacity_real_T(&b_st, gx, i1, &ab_emlrtRTEI);
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
      emxEnsureCapacity_real_T(sp, gx, i1, &w_emlrtRTEI);
      J_data = gx->data;
      for (i1 = 0; i1 < 5; i1++) {
        J_data[i1] = g[i1];
      }
    }
    if ((C->size[0] != 0) && (C->size[1] != 0)) {
      int32_T input_sizes_idx_1;
      st.site = &emlrtRSI;
      b_st.site = &jc_emlrtRSI;
      dynamic_size_checks(&b_st, C, x, C->size[1], x->size[0]);
      b_st.site = &ic_emlrtRSI;
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
        emxEnsureCapacity_real_T(&st, varargin_1, i1, &bb_emlrtRTEI);
        varargin_1_data = varargin_1->data;
        loop_ub = d->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_loop_ub = r->size[0];
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            varargin_1_data[i2] = J_data[i2] - d_data[i2];
          }
        }
      } else {
        b_st.site = &emlrtRSI;
        binary_expand_op(&b_st, varargin_1, r, d);
        varargin_1_data = varargin_1->data;
      }
      b_st.site = &gc_emlrtRSI;
      if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
        input_sizes_idx_0 = varargin_1->size[0];
      } else {
        input_sizes_idx_0 = 0;
      }
      input_sizes_idx_1 = h->size[0];
      i1 = hx->size[0] * hx->size[1];
      if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
        loop_ub = varargin_1->size[0];
      } else {
        loop_ub = 0;
      }
      hx->size[0] = loop_ub + h->size[0];
      hx->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, hx, i1, &db_emlrtRTEI);
      J_data = hx->data;
      for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
        J_data[i1] = varargin_1_data[i1];
      }
      for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
        J_data[i1 + input_sizes_idx_0] = h_data[i1];
      }
    } else {
      i1 = hx->size[0] * hx->size[1];
      hx->size[0] = h->size[0];
      hx->size[1] = 1;
      emxEnsureCapacity_real_T(sp, hx, i1, &x_emlrtRTEI);
      J_data = hx->data;
      loop_ub = h->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
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
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

real_T e_binary_expand_op(const emlrtStack *sp, emlrtRSInfo in1,
                          const emxArray_real_T *in2,
                          const emxArray_real_T *in3, real_T in4, real_T in5,
                          const real_T in6[6], const real_T in7[6], real_T in8,
                          real_T in9, real_T in10, real_T in11, real_T in12,
                          real_T in13[5], emxArray_real_T *in14, real_T in15[2])
{
  emlrtStack st;
  emxArray_real_T *b_in2;
  real_T b_in6[6];
  const real_T *in2_data;
  const real_T *in3_data;
  real_T out1;
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
  emxInit_real_T(sp, &b_in2, 1, &nc_emlrtRTEI);
  i = b_in2->size[0];
  if (in3->size[0] == 1) {
    b_in2->size[0] = in2->size[0];
  } else {
    b_in2->size[0] = in3->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in2, i, &nc_emlrtRTEI);
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
  fun(&st, b_in2, in4, in5, b_in6, in7, in8, in9, in10, in11, in12, &out1, in13,
      in14, in15);
  emxFree_real_T(sp, &b_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return out1;
}

void fun(const emlrtStack *sp, const emxArray_real_T *x, real_T tmax, real_T Ts,
         real_T b_y0[6], const real_T ybar[6], real_T m0, real_T coeffT,
         real_T Tmax, real_T ratio, real_T alpha, real_T *f, real_T g[5],
         emxArray_real_T *h, real_T F[2])
{
  static const int8_T iv1[6] = {1, 1, 1, 1, 1, 0};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_boolean_T *b_t;
  emxArray_int32_T_1x1 mc_emlrtRSI;
  emxArray_real_T c_x;
  emxArray_real_T *b_x;
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  emxArray_real_T *csi;
  emxArray_real_T *d_y;
  emxArray_real_T *r;
  emxArray_real_T *t;
  emxArray_real_T *y;
  real_T Q[36];
  real_T dyinv[6];
  real_T x0[6];
  const real_T *x_data;
  real_T absxk;
  real_T d;
  real_T lu;
  real_T m;
  real_T scale;
  real_T tCost;
  real_T *b_x_data;
  real_T *b_y_data;
  real_T *csi_data;
  real_T *t_data;
  real_T *y_data;
  int32_T iv[2];
  int32_T iv2[2];
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T loop_ub;
  int32_T maxdimlen;
  int32_T w_tmp;
  boolean_T *b_t_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (x->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(x->size[0], 1, x->size[0], &d_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  /*          tmax = min(tf*1.1,tmax); */
  lu = ((real_T)x->size[0] - 2.0) / 4.0;
  if (lu + 1.0 < 2.0) {
    i = 0;
    i1 = -1;
  } else {
    if (x->size[0] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, x->size[0], &e_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i = 1;
    if (lu + 1.0 != muDoubleScalarFloor(lu + 1.0)) {
      emlrtIntegerCheckR2012b(lu + 1.0, &emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(lu + 1.0) < 1) || ((int32_T)(lu + 1.0) > x->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lu + 1.0), 1, x->size[0],
                                    &f_emlrtBCI, (emlrtCTX)sp);
    }
    i1 = (int32_T)(lu + 1.0) - 1;
  }
  emxInit_real_T(sp, &csi, 1, &rb_emlrtRTEI);
  iv[0] = 1;
  loop_ub = i1 - i;
  iv[1] = loop_ub + 1;
  st.site = &i_emlrtRSI;
  indexShapeCheck(&st, x->size[0], iv);
  i1 = csi->size[0];
  csi->size[0] = loop_ub + 1;
  emxEnsureCapacity_real_T(sp, csi, i1, &rb_emlrtRTEI);
  csi_data = csi->data;
  for (i1 = 0; i1 <= loop_ub; i1++) {
    csi_data[i1] = x_data[i + i1];
  }
  if (lu + 2.0 > (real_T)x->size[0] - 1.0) {
    i = 0;
    i1 = 0;
  } else {
    if (lu + 2.0 != muDoubleScalarFloor(lu + 2.0)) {
      emlrtIntegerCheckR2012b(lu + 2.0, &b_emlrtDCI, (emlrtCTX)sp);
    }
    if ((int32_T)(lu + 2.0) > x->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lu + 2.0), 1, x->size[0],
                                    &g_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(lu + 2.0) - 1;
    if ((x->size[0] - 1 < 1) || (x->size[0] - 1 > x->size[0])) {
      emlrtDynamicBoundsCheckR2012b(x->size[0] - 1, 1, x->size[0], &h_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = x->size[0] - 1;
  }
  iv[0] = 1;
  b_loop_ub = i1 - i;
  iv[1] = b_loop_ub;
  st.site = &j_emlrtRSI;
  indexShapeCheck(&st, x->size[0], iv);
  st.site = &j_emlrtRSI;
  b_st.site = &t_emlrtRSI;
  c_st.site = &u_emlrtRSI;
  if (lu != muDoubleScalarFloor(lu)) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &g_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  maxdimlen = b_loop_ub;
  if (b_loop_ub < 1) {
    maxdimlen = 1;
  }
  maxdimlen = muIntScalarMax_sint32(b_loop_ub, maxdimlen);
  if (maxdimlen < 3) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)lu > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)lu < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  if (3 * (int32_T)lu != b_loop_ub) {
    emlrtErrorWithMessageIdR2018a(
        &st, &d_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  st.site = &k_emlrtRSI;
  emxInit_real_T(&st, &t, 2, &sb_emlrtRTEI);
  t_data = t->data;
  if (muDoubleScalarIsNaN(Ts) || muDoubleScalarIsNaN(tmax)) {
    i1 = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity_real_T(&st, t, i1, &sb_emlrtRTEI);
    t_data = t->data;
    t_data[0] = rtNaN;
  } else if ((Ts == 0.0) || ((tmax > 0.0) && (Ts < 0.0)) ||
             ((tmax < 0.0) && (Ts > 0.0))) {
    t->size[0] = 1;
    t->size[1] = 0;
  } else if (muDoubleScalarIsInf(tmax) && muDoubleScalarIsInf(Ts)) {
    i1 = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity_real_T(&st, t, i1, &sb_emlrtRTEI);
    t_data = t->data;
    t_data[0] = rtNaN;
  } else if (muDoubleScalarIsInf(Ts)) {
    i1 = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity_real_T(&st, t, i1, &sb_emlrtRTEI);
    t_data = t->data;
    t_data[0] = 0.0;
  } else if (muDoubleScalarFloor(Ts) == Ts) {
    i1 = t->size[0] * t->size[1];
    t->size[0] = 1;
    maxdimlen = (int32_T)(tmax / Ts);
    t->size[1] = maxdimlen + 1;
    emxEnsureCapacity_real_T(&st, t, i1, &sb_emlrtRTEI);
    t_data = t->data;
    for (i1 = 0; i1 <= maxdimlen; i1++) {
      t_data[i1] = Ts * (real_T)i1;
    }
  } else {
    b_st.site = &v_emlrtRSI;
    eml_float_colon(&b_st, Ts, tmax, t);
    t_data = t->data;
  }
  emxInit_boolean_T(&st, &b_t, &tb_emlrtRTEI);
  /*  Time vector */
  st.site = &l_emlrtRSI;
  i1 = b_t->size[0] * b_t->size[1];
  b_t->size[0] = 1;
  b_t->size[1] = t->size[1];
  emxEnsureCapacity_boolean_T(&st, b_t, i1, &tb_emlrtRTEI);
  b_t_data = b_t->data;
  maxdimlen = t->size[1];
  for (i1 = 0; i1 < maxdimlen; i1++) {
    b_t_data[i1] = (t_data[i1] > x_data[x->size[0] - 1]);
  }
  emxInit_real_T(&st, &y, 2, &ub_emlrtRTEI);
  b_st.site = &ab_emlrtRSI;
  eml_find(&b_st, b_t, mc_emlrtRSI.data, mc_emlrtRSI.size);
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
  b_st.site = &ib_emlrtRSI;
  scale = muDoubleScalarTan(x0[2] / 2.0);
  b_y0[0] = x0[0] * (1.0 - x0[1] * x0[1]);
  absxk = x0[3] + x0[4];
  b_y0[1] = x0[1] * muDoubleScalarCos(absxk);
  b_y0[2] = x0[1] * muDoubleScalarSin(absxk);
  b_y0[3] = muDoubleScalarCos(x0[3]) * scale;
  b_y0[4] = muDoubleScalarSin(x0[3]) * scale;
  b_y0[5] = absxk + x_data[0];
  i1 = y->size[0] * y->size[1];
  y->size[0] = 6;
  y->size[1] = t->size[1];
  emxEnsureCapacity_real_T(sp, y, i1, &ub_emlrtRTEI);
  y_data = y->data;
  maxdimlen = 6 * t->size[1];
  emxFree_boolean_T(sp, &b_t);
  for (i1 = 0; i1 < maxdimlen; i1++) {
    y_data[i1] = 0.0;
  }
  /*  Initialization of vector state */
  if (t->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, t->size[1], &k_emlrtBCI, (emlrtCTX)sp);
  }
  /*  Set initial conditions */
  m = m0;
  for (k = 0; k < 6; k++) {
    d = b_y0[k];
    y_data[k] = d;
    dyinv[k] = muDoubleScalarAbs(d - ybar[k]);
  }
  for (maxdimlen = 0; maxdimlen < 6; maxdimlen++) {
    d = dyinv[maxdimlen];
    d = (real_T)(d != 0.0) / (d + (real_T)(d == 0.0));
    dyinv[maxdimlen] = d;
    if (d == 0.0) {
      dyinv[maxdimlen] = 1.0 / muDoubleScalarMax(1.0, ybar[maxdimlen]);
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  /*          Q = diag([1 1 1 1 1 0]'./ybar.^2); */
  for (k = 0; k < 6; k++) {
    d = dyinv[k];
    x0[k] = (real_T)iv1[k] * (d * d);
  }
  memset(&Q[0], 0, 36U * sizeof(real_T));
  for (maxdimlen = 0; maxdimlen < 6; maxdimlen++) {
    Q[maxdimlen + 6 * maxdimlen] = x0[maxdimlen];
  }
  /*  R = diag([1 1 1]/umax^2)*0.1; */
  for (k = 0; k <= loop_ub; k++) {
    if (k + 1 > csi->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, csi->size[0], &r_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (csi_data[k] < 0.0) {
      if (k + 1 > csi->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, csi->size[0], &s_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      csi_data[k] = 0.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  tCost = 0.0;
  i1 = t->size[1];
  emxInit_real_T(sp, &b_x, 1, &vb_emlrtRTEI);
  for (k = 0; k <= i1 - 2; k++) {
    real_T a;
    real_T b_w_tmp;
    real_T c_t;
    real_T c_w_tmp;
    real_T ku;
    real_T p_mu05;
    real_T u_idx_2;
    real_T w;
    int32_T b_x0_tmp;
    int32_T x0_tmp;
    ku = muDoubleScalarCeil(((real_T)k + 1.0) / ratio);
    if (ku != (int32_T)ku) {
      emlrtIntegerCheckR2012b(ku, &c_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)ku < 1) || ((int32_T)ku > csi->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ku, 1, csi->size[0], &t_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    a = Tmax / m * csi_data[(int32_T)ku - 1];
    if (((int32_T)ku < 1) || ((int32_T)ku > (int32_T)lu)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ku, 1, (int32_T)lu, &i_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    w_tmp = b_x->size[0];
    b_x->size[0] = b_loop_ub;
    emxEnsureCapacity_real_T(sp, b_x, w_tmp, &vb_emlrtRTEI);
    b_x_data = b_x->data;
    for (w_tmp = 0; w_tmp < b_loop_ub; w_tmp++) {
      b_x_data[w_tmp] = x_data[i + w_tmp];
    }
    if (((int32_T)ku < 1) || ((int32_T)ku > (int32_T)lu)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ku, 1, (int32_T)lu, &j_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    scale = 3.3121686421112381E-170;
    maxdimlen = 3 * ((int32_T)ku - 1);
    absxk = muDoubleScalarAbs(b_x_data[maxdimlen]);
    if (absxk > 3.3121686421112381E-170) {
      u_idx_2 = 1.0;
      scale = absxk;
    } else {
      c_t = absxk / 3.3121686421112381E-170;
      u_idx_2 = c_t * c_t;
    }
    absxk = muDoubleScalarAbs(b_x_data[maxdimlen + 1]);
    if (absxk > scale) {
      c_t = scale / absxk;
      u_idx_2 = u_idx_2 * c_t * c_t + 1.0;
      scale = absxk;
    } else {
      c_t = absxk / scale;
      u_idx_2 += c_t * c_t;
    }
    absxk = muDoubleScalarAbs(b_x_data[maxdimlen + 2]);
    if (absxk > scale) {
      c_t = scale / absxk;
      u_idx_2 = u_idx_2 * c_t * c_t + 1.0;
      scale = absxk;
    } else {
      c_t = absxk / scale;
      u_idx_2 += c_t * c_t;
    }
    u_idx_2 = scale * muDoubleScalarSqrt(u_idx_2);
    w_tmp = b_x->size[0];
    b_x->size[0] = b_loop_ub;
    emxEnsureCapacity_real_T(sp, b_x, w_tmp, &vb_emlrtRTEI);
    b_x_data = b_x->data;
    for (w_tmp = 0; w_tmp < b_loop_ub; w_tmp++) {
      b_x_data[w_tmp] = x_data[i + w_tmp];
    }
    absxk = a * b_x_data[maxdimlen] / u_idx_2 / 1000.0;
    c_t = a * b_x_data[maxdimlen + 1] / u_idx_2 / 1000.0;
    u_idx_2 = a * b_x_data[maxdimlen + 2] / u_idx_2 / 1000.0;
    if (k + 1 > t->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, t->size[1], &m_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &o_emlrtRSI;
    if (k + 1 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &n_emlrtBCI, &st);
    }
    /*  Equinoctial Orbital Elements */
    scale = y_data[6 * k];
    if (y_data[6 * k] < 0.0) {
      scale = -y_data[6 * k];
      /*      warning('p became negative. Switched to absolute value for
       * calculations'); */
    }
    /*  Accelerations */
    /*  Definition of useful values */
    maxdimlen = 6 * k + 5;
    b_w_tmp = muDoubleScalarSin(y_data[maxdimlen]);
    c_w_tmp = muDoubleScalarCos(y_data[maxdimlen]);
    loop_ub = 6 * k + 1;
    w_tmp = 6 * k + 2;
    w = (y_data[loop_ub] * c_w_tmp + 1.0) + y_data[w_tmp] * b_w_tmp;
    /*  r = p/w; */
    b_st.site = &jb_emlrtRSI;
    b_st.site = &jb_emlrtRSI;
    /*  alpha2 = h^2-k^2; */
    p_mu05 = scale / 398600.0;
    b_st.site = &kb_emlrtRSI;
    if (p_mu05 < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &k_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    p_mu05 = muDoubleScalarSqrt(p_mu05);
    /*  State Derivative Calculation */
    b_st.site = &lb_emlrtRSI;
    a = w / scale;
    d = 398600.0 * scale;
    b_st.site = &lb_emlrtRSI;
    if (d < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &k_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    d = muDoubleScalarSqrt(d);
    if (k + 1 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &l_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    x0[0] = Ts * (2.0 * scale / w * p_mu05 * c_t);
    x0_tmp = 6 * k + 3;
    b_x0_tmp = 6 * k + 4;
    x0[1] = Ts *
            (p_mu05 * ((absxk * b_w_tmp +
                        ((w + 1.0) * c_w_tmp + y_data[loop_ub]) * c_t / w) -
                       (y_data[x0_tmp] * b_w_tmp - y_data[b_x0_tmp] * c_w_tmp) *
                           y_data[w_tmp] * u_idx_2 / w));
    x0[2] =
        Ts *
        (p_mu05 *
         ((-absxk * c_w_tmp + ((w + 1.0) * b_w_tmp + y_data[w_tmp]) * c_t / w) +
          (y_data[x0_tmp] * muDoubleScalarSin(y_data[maxdimlen]) -
           y_data[b_x0_tmp] * muDoubleScalarCos(y_data[maxdimlen])) *
              y_data[w_tmp] * u_idx_2 / w));
    scale = p_mu05 *
            ((y_data[x0_tmp] * y_data[x0_tmp] + 1.0) +
             y_data[b_x0_tmp] * y_data[b_x0_tmp]) *
            u_idx_2 / 2.0 / w;
    x0[3] = Ts * (scale * c_w_tmp);
    x0[4] = Ts * (scale * b_w_tmp);
    x0[5] =
        Ts * (d * (a * a) +
              p_mu05 / w *
                  (y_data[x0_tmp] * muDoubleScalarSin(y_data[maxdimlen]) -
                   y_data[b_x0_tmp] * muDoubleScalarCos(y_data[maxdimlen])) *
                  u_idx_2);
    if (k + 2 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 2, 1, y->size[1], &o_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (w_tmp = 0; w_tmp < 6; w_tmp++) {
      d = y_data[w_tmp + 6 * k] + x0[w_tmp];
      x0[w_tmp] = d;
      y_data[w_tmp + 6 * (k + 1)] = d;
    }
    if (((int32_T)ku < 1) || ((int32_T)ku > csi->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ku, 1, csi->size[0], &u_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    m -= Ts * coeffT * csi_data[(int32_T)ku - 1];
    if (k + 2 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 2, 1, y->size[1], &p_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (w_tmp = 0; w_tmp < 6; w_tmp++) {
      x0[w_tmp] = y_data[w_tmp + 6 * (k + 1)] - ybar[w_tmp];
    }
    u_idx_2 = 0.0;
    for (w_tmp = 0; w_tmp < 6; w_tmp++) {
      d = 0.0;
      for (maxdimlen = 0; maxdimlen < 6; maxdimlen++) {
        d += x0[maxdimlen] * Q[maxdimlen + 6 * w_tmp];
      }
      u_idx_2 += d * (y_data[w_tmp + 6 * (k + 1)] - ybar[w_tmp]);
    }
    if (k + 1 > t->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, t->size[1], &v_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    tCost += u_idx_2 * (t_data[k] / 100000.0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &csi);
  emxInit_real_T(sp, &b_y, 2, &dc_emlrtRTEI);
  tCost /= (real_T)t->size[1];
  /*          e = vecnorm((y(1:5,:)-ybar(1:5))./ybar(1:5)).^2; */
  /*          indtf = find(e <= 1e-5,1); */
  /*          if ~isempty(indtf) */
  /*              tf = (indtf-1)*Ts; */
  /*          else */
  /*              tf = tmax+Ts; */
  /*          end */
  st.site = &p_emlrtRSI;
  b_st.site = &hb_emlrtRSI;
  loop_ub = y->size[1];
  i1 = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, b_y, i1, &wb_emlrtRTEI);
  b_y_data = b_y->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    scale = y_data[6 * i1 + 1];
    b_y_data[i1] = scale * scale;
  }
  st.site = &p_emlrtRSI;
  b_st.site = &hb_emlrtRSI;
  loop_ub = y->size[1];
  i1 = t->size[0] * t->size[1];
  t->size[0] = 1;
  t->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, t, i1, &xb_emlrtRTEI);
  t_data = t->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    scale = y_data[6 * i1 + 2];
    t_data[i1] = scale * scale;
  }
  if ((b_y->size[1] != t->size[1]) &&
      ((b_y->size[1] != 1) && (t->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_y->size[1], t->size[1], &e_emlrtECI,
                                (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &c_y, 2, &yb_emlrtRTEI);
  loop_ub = y->size[1];
  i1 = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, c_y, i1, &yb_emlrtRTEI);
  b_y_data = c_y->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_y_data[i1] = y_data[6 * i1 + 2];
  }
  emxInit_real_T(sp, &d_y, 2, &ac_emlrtRTEI);
  loop_ub = y->size[1];
  i1 = d_y->size[0] * d_y->size[1];
  d_y->size[0] = 1;
  d_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, d_y, i1, &ac_emlrtRTEI);
  b_y_data = d_y->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_y_data[i1] = y_data[6 * i1 + 1];
  }
  emxInit_real_T(sp, &r, 2, &fc_emlrtRTEI);
  st.site = &p_emlrtRSI;
  b_atan2(&st, c_y, d_y, r);
  emxFree_real_T(sp, &d_y);
  emxFree_real_T(sp, &c_y);
  if ((y->size[1] != r->size[1]) && ((y->size[1] != 1) && (r->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(y->size[1], r->size[1], &f_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (b_y->size[1] == t->size[1]) {
    loop_ub = b_y->size[1] - 1;
    i1 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    emxEnsureCapacity_real_T(sp, b_y, i1, &bc_emlrtRTEI);
    b_y_data = b_y->data;
    for (i1 = 0; i1 <= loop_ub; i1++) {
      b_y_data[i1] += t_data[i1];
    }
  } else {
    plus(sp, b_y, t);
  }
  st.site = &p_emlrtRSI;
  b_sqrt(&st, b_y);
  if (y->size[1] == r->size[1]) {
    loop_ub = y->size[1];
    i1 = r->size[0] * r->size[1];
    r->size[0] = 1;
    r->size[1] = y->size[1];
    emxEnsureCapacity_real_T(sp, r, i1, &cc_emlrtRTEI);
    csi_data = r->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      csi_data[i1] = y_data[6 * i1 + 5] - csi_data[i1];
    }
  } else {
    d_binary_expand_op(sp, r, y);
  }
  st.site = &p_emlrtRSI;
  b_cos(&st, r);
  csi_data = r->data;
  if ((b_y->size[1] != r->size[1]) &&
      ((b_y->size[1] != 1) && (r->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_y->size[1], r->size[1], &g_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &p_emlrtRSI;
  if (b_y->size[1] == r->size[1]) {
    loop_ub = b_y->size[1] - 1;
    i1 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    emxEnsureCapacity_real_T(&st, b_y, i1, &dc_emlrtRTEI);
    b_y_data = b_y->data;
    for (i1 = 0; i1 <= loop_ub; i1++) {
      b_y_data[i1] = b_y_data[i1] * csi_data[i1] + 1.0;
    }
  } else {
    b_st.site = &p_emlrtRSI;
    c_binary_expand_op(&b_st, b_y, r);
    b_y_data = b_y->data;
  }
  emxFree_real_T(&st, &r);
  b_st.site = &vb_emlrtRSI;
  c_st.site = &wb_emlrtRSI;
  if ((y->size[1] != 1) && (b_y->size[1] != 1) &&
      (y->size[1] != b_y->size[1])) {
    emlrtErrorWithMessageIdR2018a(&c_st, &e_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  scale = alpha * tCost;
  absxk = (1.0 - alpha) * (m0 - m);
  /*          g = [Q(1:5,1:5)*(y(1:5,indtf)-ybar(1:5)).^2; */
  /*              Q(1:5,1:5)*(y(1:5,end)-ybar(1:5)).^2]; */
  if (y->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(y->size[1], 1, y->size[1], &q_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  for (k = 0; k < 5; k++) {
    g[k] = muDoubleScalarAbs(y_data[k + 6 * (y->size[1] - 1)] - ybar[k]) *
           dyinv[k];
  }
  /*          g = []; */
  i1 = b_x->size[0];
  b_x->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, b_x, i1, &vb_emlrtRTEI);
  b_x_data = b_x->data;
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    b_x_data[i1] = x_data[i + i1];
  }
  c_x = *b_x;
  iv2[0] = 3;
  iv2[1] = (int32_T)lu;
  c_x.size = &iv2[0];
  c_x.numDimensions = 2;
  st.site = &q_emlrtRSI;
  vecnorm(&st, &c_x, t);
  t_data = t->data;
  emxFree_real_T(sp, &b_x);
  if (y->size[1] == b_y->size[1]) {
    loop_ub = y->size[1];
    i = h->size[0];
    h->size[0] = (y->size[1] + t->size[1]) + 1;
    emxEnsureCapacity_real_T(sp, h, i, &ec_emlrtRTEI);
    csi_data = h->data;
    for (i = 0; i < loop_ub; i++) {
      csi_data[i] = y_data[6 * i] / b_y_data[i] - 6380.0;
    }
    csi_data[y->size[1]] = m - 1100.0;
    b_loop_ub = t->size[1];
    for (i = 0; i < b_loop_ub; i++) {
      csi_data[(i + loop_ub) + 1] = 1.0 - t_data[i];
    }
  } else {
    st.site = &q_emlrtRSI;
    b_binary_expand_op(&st, h, y, b_y, m, t);
  }
  emxFree_real_T(sp, &b_y);
  emxFree_real_T(sp, &y);
  emxFree_real_T(sp, &t);
  st.site = &r_emlrtRSI;
  if (scale < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &k_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  st.site = &r_emlrtRSI;
  if (absxk < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &k_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  F[0] = 0.1 * muDoubleScalarSqrt(scale);
  F[1] = 0.1 * muDoubleScalarSqrt(absxk);
  *f = 0.01 * (scale + absxk);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (costGaussGrad.c) */
