/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * costGaussGradtf.c
 *
 * Code generation for function 'costGaussGradtf'
 *
 */

/* Include files */
#include "costGaussGradtf.h"
#include "EOE2COE.h"
#include "EOEDerivatives.h"
#include "assertCompatibleDims.h"
#include "atan2.h"
#include "colon.h"
#include "cos.h"
#include "costGaussGradtf_data.h"
#include "costGaussGradtf_emxutil.h"
#include "costGaussGradtf_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "indexShapeCheck.h"
#include "mtimes.h"
#include "mygradcalc.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "vecnorm.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI =
    {
        46,                /* lineNo */
        "costGaussGradtf", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI =
    {
        41,                /* lineNo */
        "costGaussGradtf", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI =
    {
        34,                /* lineNo */
        "costGaussGradtf", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI =
    {
        29,                /* lineNo */
        "costGaussGradtf", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI =
    {
        25,                /* lineNo */
        "costGaussGradtf", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI =
    {
        24,                /* lineNo */
        "costGaussGradtf", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI =
    {
        22,                /* lineNo */
        "costGaussGradtf", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI =
    {
        56,                    /* lineNo */
        "costGaussGradtf/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI =
    {
        57,                    /* lineNo */
        "costGaussGradtf/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI =
    {
        58,                    /* lineNo */
        "costGaussGradtf/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI =
    {
        60,                    /* lineNo */
        "costGaussGradtf/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI =
    {
        62,                    /* lineNo */
        "costGaussGradtf/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI =
    {
        86,                    /* lineNo */
        "costGaussGradtf/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI =
    {
        102,                   /* lineNo */
        "costGaussGradtf/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI =
    {
        108,                   /* lineNo */
        "costGaussGradtf/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI =
    {
        109,                   /* lineNo */
        "costGaussGradtf/fun", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pathName */
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

static emlrtRSInfo cb_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                       */
};

static emlrtRSInfo db_emlrtRSI = {
    71,                                                           /* lineNo */
    "power",                                                      /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    38,        /* lineNo */
    "COE2EOE", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\COE2EOE.m" /* pathName
                                                                          */
};

static emlrtRSInfo rb_emlrtRSI =
    {
        34,               /* lineNo */
        "rdivide_helper", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
        "helper.m" /* pathName */
};

static emlrtRSInfo sb_emlrtRSI = {
    51,    /* lineNo */
    "div", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" /* pathName
                                                                       */
};

static emlrtRSInfo tb_emlrtRSI = {
    15,    /* lineNo */
    "min", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" /* pathName
                                                                     */
};

static emlrtRSInfo ub_emlrtRSI = {
    46,         /* lineNo */
    "minOrMax", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                            */
};

static emlrtRSInfo vb_emlrtRSI = {
    92,        /* lineNo */
    "minimum", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                            */
};

static emlrtRSInfo wb_emlrtRSI =
    {
        209,             /* lineNo */
        "unaryMinOrMax", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo xb_emlrtRSI =
    {
        898,                    /* lineNo */
        "minRealVectorOmitNaN", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo yb_emlrtRSI = {
    72,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo ac_emlrtRSI = {
    64,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = {
    113,         /* lineNo */
    "findFirst", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo cc_emlrtRSI = {
    130,                        /* lineNo */
    "minOrMaxRealVectorKernel", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo lc_emlrtRSI = {
    28,    /* lineNo */
    "cat", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                       */
};

static emlrtRSInfo mc_emlrtRSI = {
    100,        /* lineNo */
    "cat_impl", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                       */
};

static emlrtRSInfo nc_emlrtRSI =
    {
        94,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper."
        "m" /* pathName */
};

static emlrtRSInfo oc_emlrtRSI =
    {
        69,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper."
        "m" /* pathName */
};

static emlrtECInfo emlrtECI =
    {
        1,                 /* nDims */
        46,                /* lineNo */
        15,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtECInfo b_emlrtECI =
    {
        1,                 /* nDims */
        41,                /* lineNo */
        15,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtECInfo c_emlrtECI =
    {
        1,                 /* nDims */
        34,                /* lineNo */
        15,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtECInfo d_emlrtECI =
    {
        1,                 /* nDims */
        29,                /* lineNo */
        15,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    26,                /* lineNo */
    38,                /* colNo */
    "Jac",             /* aName */
    "costGaussGradtf", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    26,                /* lineNo */
    16,                /* colNo */
    "Jac",             /* aName */
    "costGaussGradtf", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    25,                /* lineNo */
    33,                /* colNo */
    "Jac",             /* aName */
    "costGaussGradtf", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
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

static emlrtBCInfo d_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    106,                   /* lineNo */
    27,                    /* colNo */
    "y",                   /* aName */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtECInfo e_emlrtECI =
    {
        2,                     /* nDims */
        102,                   /* lineNo */
        26,                    /* colNo */
        "costGaussGradtf/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtECInfo f_emlrtECI =
    {
        2,                     /* nDims */
        102,                   /* lineNo */
        57,                    /* colNo */
        "costGaussGradtf/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtECInfo g_emlrtECI =
    {
        2,                     /* nDims */
        102,                   /* lineNo */
        31,                    /* colNo */
        "costGaussGradtf/fun", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    86,                    /* lineNo */
    17,                    /* colNo */
    "y",                   /* aName */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    86,                    /* lineNo */
    60,                    /* colNo */
    "y",                   /* aName */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    86,                    /* lineNo */
    53,                    /* colNo */
    "t",                   /* aName */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    86,                    /* lineNo */
    28,                    /* colNo */
    "y",                   /* aName */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    64,                    /* lineNo */
    13,                    /* colNo */
    "y",                   /* aName */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    85,                    /* lineNo */
    39,                    /* colNo */
    "qdir",                /* aName */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    57,                    /* lineNo */
    31,                    /* colNo */
    "x",                   /* aName */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    57,                    /* lineNo */
    26,                    /* colNo */
    "x",                   /* aName */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    57,                    /* lineNo */
    26,                    /* colNo */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    1    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    56,                    /* lineNo */
    19,                    /* colNo */
    "x",                   /* aName */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    56,                    /* lineNo */
    19,                    /* colNo */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    1    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    56,                    /* lineNo */
    17,                    /* colNo */
    "x",                   /* aName */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    53,                    /* lineNo */
    16,                    /* colNo */
    "x",                   /* aName */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    78,                    /* lineNo */
    20,                    /* colNo */
    "csi",                 /* aName */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    79,                    /* lineNo */
    21,                    /* colNo */
    "csi",                 /* aName */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    85,                    /* lineNo */
    28,                    /* colNo */
    "csi",                 /* aName */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    85,                    /* lineNo */
    28,                    /* colNo */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    1    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    87,                    /* lineNo */
    35,                    /* colNo */
    "csi",                 /* aName */
    "costGaussGradtf/fun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGaussGradtf."
    "m", /* pName */
    0    /* checkKind */
};

static emlrtRTEInfo h_emlrtRTEI = {
    58,                   /* lineNo */
    23,                   /* colNo */
    "assertValidSizeArg", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\assertValidSizeArg.m" /* pName */
};

static emlrtRTEInfo p_emlrtRTEI =
    {
        20,                /* lineNo */
        1,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI =
    {
        39,                /* lineNo */
        5,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo r_emlrtRTEI =
    {
        23,                /* lineNo */
        5,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo s_emlrtRTEI =
    {
        39,                /* lineNo */
        13,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo t_emlrtRTEI =
    {
        39,                /* lineNo */
        21,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI =
    {
        24,                /* lineNo */
        11,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI =
    {
        39,                /* lineNo */
        29,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI =
    {
        43,                /* lineNo */
        9,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI =
    {
        48,                /* lineNo */
        9,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI =
    {
        41,                /* lineNo */
        15,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo ab_emlrtRTEI =
    {
        41,                /* lineNo */
        9,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI =
    {
        46,                /* lineNo */
        15,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI =
    {
        24,                /* lineNo */
        15,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI =
    {
        46,                /* lineNo */
        9,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI =
    {
        24,                /* lineNo */
        5,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI =
    {
        25,                /* lineNo */
        11,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI =
    {
        25,                /* lineNo */
        15,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI =
    {
        25,                /* lineNo */
        5,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI =
    {
        26,                /* lineNo */
        5,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI =
    {
        31,                /* lineNo */
        9,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI =
    {
        36,                /* lineNo */
        9,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI =
    {
        29,                /* lineNo */
        15,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI =
    {
        29,                /* lineNo */
        9,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI =
    {
        34,                /* lineNo */
        15,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI =
    {
        34,                /* lineNo */
        9,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI =
    {
        22,                /* lineNo */
        5,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI =
    {
        1,                 /* lineNo */
        52,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI =
    {
        56,                /* lineNo */
        9,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI =
    {
        57,                /* lineNo */
        9,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI =
    {
        63,                /* lineNo */
        9,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI =
    {
        102,               /* lineNo */
        31,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo vb_emlrtRTEI =
    {
        57,                /* lineNo */
        24,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo wb_emlrtRTEI =
    {
        102,               /* lineNo */
        41,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo xb_emlrtRTEI =
    {
        102,               /* lineNo */
        70,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo yb_emlrtRTEI =
    {
        102,               /* lineNo */
        77,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo ac_emlrtRTEI =
    {
        102,               /* lineNo */
        26,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo bc_emlrtRTEI =
    {
        102,               /* lineNo */
        53,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo cc_emlrtRTEI =
    {
        102,               /* lineNo */
        24,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo dc_emlrtRTEI =
    {
        102,               /* lineNo */
        15,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo ec_emlrtRTEI =
    {
        102,               /* lineNo */
        9,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo fc_emlrtRTEI =
    {
        108,               /* lineNo */
        9,                 /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo gc_emlrtRTEI =
    {
        52,                /* lineNo */
        26,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = {
    125,                                                          /* lineNo */
    9,                                                            /* colNo */
    "colon",                                                      /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName */
};

static emlrtRTEInfo wc_emlrtRTEI =
    {
        102,               /* lineNo */
        57,                /* colNo */
        "costGaussGradtf", /* fName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pName */
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
  emxEnsureCapacity_real_T(sp, in1, stride_0_0, &ec_emlrtRTEI);
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
  emxInit_real_T(sp, &b_in1, 2, &cc_emlrtRTEI);
  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = 1;
  if (in2->size[1] == 1) {
    b_in1->size[1] = in1->size[1];
  } else {
    b_in1->size[1] = in2->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &cc_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, in1, i, &cc_emlrtRTEI);
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
  emxInit_real_T(sp, &b_in1, 2, &ub_emlrtRTEI);
  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = 1;
  if (in2->size[1] == 1) {
    b_in1->size[1] = in1->size[1];
  } else {
    b_in1->size[1] = in2->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &ub_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, in1, i, &ub_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[1];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in1_data[i];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void costGaussGradtf(const emlrtStack *sp, const emxArray_real_T *x,
                     real_T tmax, real_T Ts, const real_T b_y0[6],
                     const real_T ybar[6], real_T m0, real_T coeffT,
                     real_T Tmax, real_T ratio, real_T alpha,
                     boolean_T computeGrad, const emxArray_real_T *A,
                     const emxArray_real_T *b, const emxArray_real_T *C,
                     const emxArray_real_T *d, emxArray_real_T *J, real_T *f,
                     emxArray_real_T *gx, emxArray_real_T *hx,
                     emxArray_real_T *Jf, emxArray_real_T *Jg,
                     emxArray_real_T *Jh, real_T *p, real_T *q, real_T F[2],
                     emxArray_real_T *JF)
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
  (void)tmax;
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
  fun(&st, x, Ts, c_y0, ybar, m0, coeffT, Tmax, ratio, alpha, f, g, h, F);
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
    mygradcalc(&st, Ts, b_y0, ybar, m0, coeffT, Tmax, ratio, alpha, x, J, Jac);
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
    b_st.site = &lc_emlrtRSI;
    if ((b_varargin_1->size[0] != 0) && (b_varargin_1->size[1] != 0)) {
      input_sizes_idx_0 = b_varargin_1->size[0];
    } else if (Jac->size[0] != 0) {
      input_sizes_idx_0 = Jac->size[0];
    } else {
      input_sizes_idx_0 = b_varargin_1->size[0];
    }
    c_st.site = &mc_emlrtRSI;
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
    b_st.site = &lc_emlrtRSI;
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
    c_st.site = &mc_emlrtRSI;
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
      b_st.site = &oc_emlrtRSI;
      dynamic_size_checks(&b_st, A, x, A->size[1], x->size[0]);
      b_st.site = &nc_emlrtRSI;
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
      b_st.site = &lc_emlrtRSI;
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
      b_st.site = &oc_emlrtRSI;
      dynamic_size_checks(&b_st, C, x, C->size[1], x->size[0]);
      b_st.site = &nc_emlrtRSI;
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
      b_st.site = &lc_emlrtRSI;
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
      b_st.site = &oc_emlrtRSI;
      dynamic_size_checks(&b_st, A, x, A->size[1], x->size[0]);
      b_st.site = &nc_emlrtRSI;
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
      b_st.site = &lc_emlrtRSI;
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
      b_st.site = &oc_emlrtRSI;
      dynamic_size_checks(&b_st, C, x, C->size[1], x->size[0]);
      b_st.site = &nc_emlrtRSI;
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
      b_st.site = &lc_emlrtRSI;
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
                          const emxArray_real_T *in3, real_T in4,
                          const real_T in5[6], const real_T in6[6], real_T in7,
                          real_T in8, real_T in9, real_T in10, real_T in11,
                          real_T in12[5], emxArray_real_T *in13, real_T in14[2])
{
  emlrtStack st;
  emxArray_real_T *b_in2;
  real_T b_in5[6];
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
    b_in5[i1] = in5[i1];
  }
  st.site = &in1;
  fun(&st, b_in2, in4, b_in5, in6, in7, in8, in9, in10, in11, &out1, in12, in13,
      in14);
  emxFree_real_T(sp, &b_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return out1;
}

void fun(const emlrtStack *sp, const emxArray_real_T *x, real_T Ts,
         real_T b_y0[6], const real_T ybar[6], real_T m0, real_T coeffT,
         real_T Tmax, real_T ratio, real_T alpha, real_T *f, real_T g[5],
         emxArray_real_T *h, real_T F[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_real_T c_x;
  emxArray_real_T *b_x;
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  emxArray_real_T *csi;
  emxArray_real_T *d_y;
  emxArray_real_T *qdir;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *y;
  real_T dyinv[6];
  real_T x0[6];
  const real_T *x_data;
  real_T h_tmp;
  real_T lu;
  real_T m;
  real_T scale;
  real_T y0_tmp;
  real_T *b_x_data;
  real_T *csi_data;
  real_T *qdir_data;
  real_T *y_data;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T idx;
  int32_T k;
  int32_T loop_ub;
  int32_T maxdimlen;
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
    emlrtDynamicBoundsCheckR2012b(x->size[0], 1, x->size[0], &o_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  /*          tmax = min(tf*1.1,tmax); */
  lu = ((real_T)x->size[0] - 2.0) / 4.0;
  if (lu + 1.0 < 2.0) {
    i = 0;
    i1 = -1;
  } else {
    if (x->size[0] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, x->size[0], &n_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i = 1;
    if (lu + 1.0 != muDoubleScalarFloor(lu + 1.0)) {
      emlrtIntegerCheckR2012b(lu + 1.0, &b_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(lu + 1.0) < 1) || ((int32_T)(lu + 1.0) > x->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lu + 1.0), 1, x->size[0],
                                    &m_emlrtBCI, (emlrtCTX)sp);
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
      emlrtIntegerCheckR2012b(lu + 2.0, &emlrtDCI, (emlrtCTX)sp);
    }
    if ((int32_T)(lu + 2.0) > x->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lu + 2.0), 1, x->size[0],
                                    &l_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(lu + 2.0) - 1;
    if ((x->size[0] - 1 < 1) || (x->size[0] - 1 > x->size[0])) {
      emlrtDynamicBoundsCheckR2012b(x->size[0] - 1, 1, x->size[0], &k_emlrtBCI,
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
  b_st.site = &s_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  if (lu != muDoubleScalarFloor(lu)) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &h_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  maxdimlen = b_loop_ub;
  if (b_loop_ub < 1) {
    maxdimlen = 1;
  }
  maxdimlen = muIntScalarMax_sint32(b_loop_ub, maxdimlen);
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
  if (idx != b_loop_ub) {
    emlrtErrorWithMessageIdR2018a(
        &st, &d_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  emxInit_real_T(&st, &qdir, 2, &sb_emlrtRTEI);
  k = qdir->size[0] * qdir->size[1];
  qdir->size[0] = 3;
  qdir->size[1] = (int32_T)lu;
  emxEnsureCapacity_real_T(sp, qdir, k, &sb_emlrtRTEI);
  qdir_data = qdir->data;
  for (k = 0; k < idx; k++) {
    qdir_data[k] = x_data[i + k];
  }
  st.site = &k_emlrtRSI;
  emxInit_real_T(&st, &r, 2, &hc_emlrtRTEI);
  if (muDoubleScalarIsNaN(Ts) || muDoubleScalarIsNaN(x_data[x->size[0] - 1])) {
    maxdimlen = 1;
  } else if ((Ts == 0.0) || ((x_data[x->size[0] - 1] > 0.0) && (Ts < 0.0)) ||
             ((x_data[x->size[0] - 1] < 0.0) && (Ts > 0.0))) {
    maxdimlen = 0;
  } else if (muDoubleScalarIsInf(x_data[x->size[0] - 1]) &&
             muDoubleScalarIsInf(Ts)) {
    maxdimlen = 1;
  } else if (muDoubleScalarIsInf(Ts)) {
    maxdimlen = 1;
  } else if (muDoubleScalarFloor(Ts) == Ts) {
    maxdimlen = (int32_T)(x_data[x->size[0] - 1] / Ts) + 1;
  } else {
    b_st.site = &u_emlrtRSI;
    eml_float_colon(&b_st, Ts, x_data[x->size[0] - 1], r);
    maxdimlen = r->size[1];
  }
  emxInit_real_T(&st, &y, 2, &tb_emlrtRTEI);
  /*  Time vector */
  /*          indtf = find(t>tf,1,'first')-1; */
  st.site = &l_emlrtRSI;
  EOE2COE(&st, b_y0, x0);
  st.site = &m_emlrtRSI;
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
  b_st.site = &eb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  d_st.site = &db_emlrtRSI;
  h_tmp = muDoubleScalarTan(x0[2] / 2.0);
  b_y0[0] = x0[0] * (1.0 - x0[1] * x0[1]);
  y0_tmp = x0[3] + x0[4];
  b_y0[1] = x0[1] * muDoubleScalarCos(y0_tmp);
  b_y0[2] = x0[1] * muDoubleScalarSin(y0_tmp);
  b_y0[3] = muDoubleScalarCos(x0[3]) * h_tmp;
  b_y0[4] = muDoubleScalarSin(x0[3]) * h_tmp;
  b_y0[5] = y0_tmp + x_data[0];
  k = y->size[0] * y->size[1];
  y->size[0] = 6;
  y->size[1] = maxdimlen;
  emxEnsureCapacity_real_T(sp, y, k, &tb_emlrtRTEI);
  y_data = y->data;
  idx = 6 * maxdimlen;
  for (k = 0; k < idx; k++) {
    y_data[k] = 0.0;
  }
  /*  Initialization of vector state */
  if (maxdimlen < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, maxdimlen, &i_emlrtBCI, (emlrtCTX)sp);
  }
  /*  Set initial conditions */
  m = m0;
  for (k = 0; k < 6; k++) {
    scale = b_y0[k];
    y_data[k] = scale;
    dyinv[k] = muDoubleScalarAbs(scale - ybar[k]);
  }
  for (idx = 0; idx < 6; idx++) {
    scale = dyinv[idx];
    scale = (real_T)(scale != 0.0) / (scale + (real_T)(scale == 0.0));
    dyinv[idx] = scale;
    if (scale == 0.0) {
      dyinv[idx] = 1.0 / muDoubleScalarMax(1.0, ybar[idx]);
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  /*  %         Q = diag([1 1 1 1 1 0]'./ybar.^2); */
  /*          Q = diag([1 1 1 1 1 0]'.*dyinv.^2); */
  /*          % R = diag([1 1 1]/umax^2)*0.1; */
  for (k = 0; k <= loop_ub; k++) {
    if (k + 1 > csi->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, csi->size[0], &p_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (csi_data[k] < 0.0) {
      if (k + 1 > csi->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, csi->size[0], &q_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      csi_data[k] = 0.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  /*          tCost = 0; */
  if (maxdimlen - 2 >= 0) {
    i2 = i1;
    c_loop_ub = b_loop_ub;
  }
  emxInit_real_T(sp, &b_x, 1, &vb_emlrtRTEI);
  for (k = 0; k <= maxdimlen - 2; k++) {
    real_T a[3];
    real_T ku;
    ku = muDoubleScalarCeil(((real_T)k + 1.0) / ratio);
    if (ku != (int32_T)ku) {
      emlrtIntegerCheckR2012b(ku, &c_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)ku < 1) || ((int32_T)ku > csi->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ku, 1, csi->size[0], &r_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    h_tmp = Tmax / m * csi_data[(int32_T)ku - 1];
    if (((int32_T)ku < 1) || ((int32_T)ku > (int32_T)lu)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ku, 1, (int32_T)lu, &j_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    y0_tmp = 0.0;
    scale = 3.3121686421112381E-170;
    for (idx = 0; idx < 3; idx++) {
      real_T absxk;
      i1 = b_x->size[0];
      b_x->size[0] = i2 - i;
      emxEnsureCapacity_real_T(sp, b_x, i1, &vb_emlrtRTEI);
      b_x_data = b_x->data;
      for (i1 = 0; i1 < c_loop_ub; i1++) {
        b_x_data[i1] = x_data[i + i1];
      }
      absxk = muDoubleScalarAbs(b_x_data[idx + 3 * ((int32_T)ku - 1)]);
      if (absxk > scale) {
        real_T t;
        t = scale / absxk;
        y0_tmp = y0_tmp * t * t + 1.0;
        scale = absxk;
      } else {
        real_T t;
        t = absxk / scale;
        y0_tmp += t * t;
      }
    }
    y0_tmp = scale * muDoubleScalarSqrt(y0_tmp);
    if (k + 1 > maxdimlen) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, maxdimlen, &g_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (k + 1 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &f_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    idx = 3 * ((int32_T)ku - 1);
    a[0] = h_tmp * qdir_data[idx] / y0_tmp / 1000.0;
    a[1] = h_tmp * qdir_data[idx + 1] / y0_tmp / 1000.0;
    a[2] = h_tmp * qdir_data[idx + 2] / y0_tmp / 1000.0;
    st.site = &n_emlrtRSI;
    EOEDerivatives(*(real_T(*)[6]) & y_data[6 * k], a, x0);
    if (k + 1 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &h_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (k + 2 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 2, 1, y->size[1], &e_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (i1 = 0; i1 < 6; i1++) {
      scale = y_data[i1 + 6 * k] + Ts * x0[i1];
      x0[i1] = scale;
      y_data[i1 + 6 * (k + 1)] = scale;
    }
    if (((int32_T)ku < 1) || ((int32_T)ku > csi->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ku, 1, csi->size[0], &s_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    m -= Ts * coeffT * csi_data[(int32_T)ku - 1];
    /*              tCost = tCost +
     * (y(:,k+1)-ybar)'*Q*(y(:,k+1)-ybar)*(t(k)/1e5); */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &qdir);
  emxInit_real_T(sp, &b_y, 2, &cc_emlrtRTEI);
  /*          e = vecnorm((y(1:5,:)-ybar(1:5))./ybar(1:5)).^2; */
  /*          indtf = find(e <= 1e-5,1); */
  /*          if ~isempty(indtf) */
  /*              tf = (indtf-1)*Ts; */
  /*          else */
  /*              tf = tmax+Ts; */
  /*          end */
  st.site = &o_emlrtRSI;
  b_st.site = &db_emlrtRSI;
  loop_ub = y->size[1];
  i1 = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, b_y, i1, &ub_emlrtRTEI);
  b_x_data = b_y->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    h_tmp = y_data[6 * i1 + 1];
    b_x_data[i1] = h_tmp * h_tmp;
  }
  st.site = &o_emlrtRSI;
  b_st.site = &db_emlrtRSI;
  loop_ub = y->size[1];
  i1 = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, r, i1, &wb_emlrtRTEI);
  csi_data = r->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    h_tmp = y_data[6 * i1 + 2];
    csi_data[i1] = h_tmp * h_tmp;
  }
  if ((b_y->size[1] != r->size[1]) &&
      ((b_y->size[1] != 1) && (r->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_y->size[1], r->size[1], &g_emlrtECI,
                                (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &c_y, 2, &xb_emlrtRTEI);
  loop_ub = y->size[1];
  i1 = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, c_y, i1, &xb_emlrtRTEI);
  qdir_data = c_y->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    qdir_data[i1] = y_data[6 * i1 + 2];
  }
  emxInit_real_T(sp, &d_y, 2, &yb_emlrtRTEI);
  loop_ub = y->size[1];
  i1 = d_y->size[0] * d_y->size[1];
  d_y->size[0] = 1;
  d_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, d_y, i1, &yb_emlrtRTEI);
  b_x_data = d_y->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_x_data[i1] = y_data[6 * i1 + 1];
  }
  emxInit_real_T(sp, &r1, 2, &gc_emlrtRTEI);
  st.site = &o_emlrtRSI;
  b_atan2(&st, c_y, d_y, r1);
  emxFree_real_T(sp, &d_y);
  if ((y->size[1] != r1->size[1]) &&
      ((y->size[1] != 1) && (r1->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(y->size[1], r1->size[1], &f_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (b_y->size[1] == r->size[1]) {
    loop_ub = b_y->size[1] - 1;
    i1 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    emxEnsureCapacity_real_T(sp, b_y, i1, &ac_emlrtRTEI);
    b_x_data = b_y->data;
    for (i1 = 0; i1 <= loop_ub; i1++) {
      b_x_data[i1] += csi_data[i1];
    }
  } else {
    plus(sp, b_y, r);
  }
  st.site = &o_emlrtRSI;
  b_sqrt(&st, b_y);
  if (y->size[1] == r1->size[1]) {
    loop_ub = y->size[1];
    i1 = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = y->size[1];
    emxEnsureCapacity_real_T(sp, r1, i1, &bc_emlrtRTEI);
    csi_data = r1->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      csi_data[i1] = y_data[6 * i1 + 5] - csi_data[i1];
    }
  } else {
    d_binary_expand_op(sp, r1, y);
  }
  st.site = &o_emlrtRSI;
  b_cos(&st, r1);
  csi_data = r1->data;
  if ((b_y->size[1] != r1->size[1]) &&
      ((b_y->size[1] != 1) && (r1->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_y->size[1], r1->size[1], &e_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &o_emlrtRSI;
  if (b_y->size[1] == r1->size[1]) {
    loop_ub = b_y->size[1] - 1;
    i1 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    emxEnsureCapacity_real_T(&st, b_y, i1, &cc_emlrtRTEI);
    b_x_data = b_y->data;
    for (i1 = 0; i1 <= loop_ub; i1++) {
      b_x_data[i1] = b_x_data[i1] * csi_data[i1] + 1.0;
    }
  } else {
    b_st.site = &o_emlrtRSI;
    c_binary_expand_op(&b_st, b_y, r1);
    b_x_data = b_y->data;
  }
  emxFree_real_T(&st, &r1);
  b_st.site = &rb_emlrtRSI;
  loop_ub = y->size[1];
  i1 = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, c_y, i1, &dc_emlrtRTEI);
  qdir_data = c_y->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    qdir_data[i1] = y_data[6 * i1];
  }
  c_st.site = &sb_emlrtRSI;
  assertCompatibleDims(&c_st, c_y, b_y);
  emxFree_real_T(sp, &c_y);
  if (y->size[1] == b_y->size[1]) {
    loop_ub = y->size[1];
    i1 = csi->size[0];
    csi->size[0] = y->size[1];
    emxEnsureCapacity_real_T(sp, csi, i1, &ec_emlrtRTEI);
    csi_data = csi->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      csi_data[i1] = y_data[6 * i1] / b_x_data[i1];
    }
  } else {
    st.site = &o_emlrtRSI;
    b_binary_expand_op(&st, csi, y, b_y);
    csi_data = csi->data;
  }
  emxFree_real_T(sp, &b_y);
  h_tmp = (1.0 - alpha) * (m0 - m);
  *f = 0.01 * (alpha * x_data[x->size[0] - 1] + h_tmp);
  /*          g = [Q(1:5,1:5)*(y(1:5,indtf)-ybar(1:5)).^2; */
  /*              Q(1:5,1:5)*(y(1:5,end)-ybar(1:5)).^2]; */
  if (y->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(y->size[1], 1, y->size[1], &d_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  for (k = 0; k < 5; k++) {
    g[k] = 1000.0 *
           muDoubleScalarAbs(y_data[k + 6 * (y->size[1] - 1)] - ybar[k]) *
           dyinv[k];
  }
  emxFree_real_T(sp, &y);
  /*          g = []; */
  st.site = &p_emlrtRSI;
  b_st.site = &tb_emlrtRSI;
  c_st.site = &ub_emlrtRSI;
  d_st.site = &vb_emlrtRSI;
  if (csi->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &wb_emlrtRSI;
  f_st.site = &xb_emlrtRSI;
  maxdimlen = csi->size[0];
  if (csi->size[0] <= 2) {
    if (csi->size[0] == 1) {
      y0_tmp = csi_data[0];
    } else if ((csi_data[0] > csi_data[1]) ||
               (muDoubleScalarIsNaN(csi_data[0]) &&
                (!muDoubleScalarIsNaN(csi_data[1])))) {
      y0_tmp = csi_data[1];
    } else {
      y0_tmp = csi_data[0];
    }
  } else {
    g_st.site = &ac_emlrtRSI;
    if (!muDoubleScalarIsNaN(csi_data[0])) {
      idx = 1;
    } else {
      boolean_T exitg1;
      idx = 0;
      h_st.site = &bc_emlrtRSI;
      if (csi->size[0] > 2147483646) {
        i_st.site = &x_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= maxdimlen)) {
        if (!muDoubleScalarIsNaN(csi_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      y0_tmp = csi_data[0];
    } else {
      g_st.site = &yb_emlrtRSI;
      y0_tmp = csi_data[idx - 1];
      loop_ub = idx + 1;
      h_st.site = &cc_emlrtRSI;
      if ((idx + 1 <= csi->size[0]) && (csi->size[0] > 2147483646)) {
        i_st.site = &x_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = loop_ub; k <= maxdimlen; k++) {
        scale = csi_data[k - 1];
        if (y0_tmp > scale) {
          y0_tmp = scale;
        }
      }
    }
  }
  emxFree_real_T(&f_st, &csi);
  i1 = b_x->size[0];
  b_x->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, b_x, i1, &vb_emlrtRTEI);
  b_x_data = b_x->data;
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    b_x_data[i1] = x_data[i + i1];
  }
  c_x = *b_x;
  iv1[0] = 3;
  iv1[1] = (int32_T)lu;
  c_x.size = &iv1[0];
  c_x.numDimensions = 2;
  st.site = &p_emlrtRSI;
  vecnorm(&st, &c_x, r);
  csi_data = r->data;
  i = h->size[0];
  h->size[0] = r->size[1] + 2;
  emxEnsureCapacity_real_T(sp, h, i, &fc_emlrtRTEI);
  qdir_data = h->data;
  qdir_data[0] = y0_tmp - 6380.0;
  qdir_data[1] = m - 1100.0;
  loop_ub = r->size[1];
  emxFree_real_T(sp, &b_x);
  for (i = 0; i < loop_ub; i++) {
    qdir_data[i + 2] = 1.0 - csi_data[i];
  }
  emxFree_real_T(sp, &r);
  scale = alpha * x_data[x->size[0] - 1];
  st.site = &q_emlrtRSI;
  if (scale < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &j_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  scale = muDoubleScalarSqrt(scale);
  st.site = &q_emlrtRSI;
  if (h_tmp < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &j_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  F[0] = 0.1 * scale;
  F[1] = 0.1 * muDoubleScalarSqrt(h_tmp);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (costGaussGradtf.c) */
