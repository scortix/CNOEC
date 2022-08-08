/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NMPC_cost.c
 *
 * Code generation for function 'NMPC_cost'
 *
 */

/* Include files */
#include "NMPC_cost.h"
#include "EOEDerivatives.h"
#include "NMPC_cost_data.h"
#include "NMPC_cost_emxutil.h"
#include "NMPC_cost_types.h"
#include "assertCompatibleDims.h"
#include "atan2.h"
#include "cos.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "mtimes.h"
#include "power.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    39,          /* lineNo */
    "NMPC_cost", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pathName
                                                                     */
};

static emlrtRSInfo b_emlrtRSI = {
    40,          /* lineNo */
    "NMPC_cost", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pathName
                                                                     */
};

static emlrtRSInfo c_emlrtRSI = {
    41,          /* lineNo */
    "NMPC_cost", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pathName
                                                                     */
};

static emlrtRSInfo d_emlrtRSI = {
    47,          /* lineNo */
    "NMPC_cost", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pathName
                                                                     */
};

static emlrtRSInfo e_emlrtRSI = {
    48,          /* lineNo */
    "NMPC_cost", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pathName
                                                                     */
};

static emlrtRSInfo f_emlrtRSI = {
    49,          /* lineNo */
    "NMPC_cost", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pathName
                                                                     */
};

static emlrtRSInfo g_emlrtRSI = {
    50,          /* lineNo */
    "NMPC_cost", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pathName
                                                                     */
};

static emlrtRSInfo t_emlrtRSI = {
    34,               /* lineNo */
    "rdivide_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "rdivide_helper.m" /* pathName */
};

static emlrtRSInfo
    u_emlrtRSI =
        {
            51,    /* lineNo */
            "div", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "div.m" /* pathName */
};

static emlrtRSInfo v_emlrtRSI = {
    15,    /* lineNo */
    "min", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/min.m" /* pathName
                                                                            */
};

static emlrtRSInfo w_emlrtRSI = {
    46,         /* lineNo */
    "minOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo x_emlrtRSI = {
    92,        /* lineNo */
    "minimum", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo y_emlrtRSI = {
    204,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo ab_emlrtRSI = {
    893,                    /* lineNo */
    "minRealVectorOmitNaN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo bb_emlrtRSI = {
    62,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = {
    54,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo db_emlrtRSI = {
    103,         /* lineNo */
    "findFirst", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    120,                        /* lineNo */
    "minOrMaxRealVectorKernel", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo fb_emlrtRSI = {
    15,    /* lineNo */
    "max", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/max.m" /* pathName
                                                                            */
};

static emlrtRSInfo gb_emlrtRSI = {
    44,         /* lineNo */
    "minOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo hb_emlrtRSI = {
    79,        /* lineNo */
    "maximum", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = {
    186,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo jb_emlrtRSI = {
    897,                    /* lineNo */
    "maxRealVectorOmitNaN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = {
    69,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

static emlrtBCInfo emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    43,          /* lineNo */
    11,          /* colNo */
    "m",         /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    43,          /* lineNo */
    33,          /* colNo */
    "xi",        /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    43,          /* lineNo */
    20,          /* colNo */
    "m",         /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    40,          /* lineNo */
    7,           /* colNo */
    "F",         /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    40,          /* lineNo */
    27,          /* colNo */
    "xi",        /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    38,          /* lineNo */
    33,          /* colNo */
    "xi",        /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    38,          /* lineNo */
    21,          /* colNo */
    "m",         /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    32,          /* lineNo */
    14,          /* colNo */
    "rAngle",    /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    32,          /* lineNo */
    21,          /* colNo */
    "x",         /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    31,          /* lineNo */
    14,          /* colNo */
    "qAngle",    /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    31,          /* lineNo */
    21,          /* colNo */
    "x",         /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    30,          /* lineNo */
    10,          /* colNo */
    "xi",        /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    30,          /* lineNo */
    17,          /* colNo */
    "x",         /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    35,          /* lineNo */
    1,           /* colNo */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    27,          /* lineNo */
    1,           /* colNo */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    26,          /* lineNo */
    1,           /* colNo */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    25,          /* lineNo */
    1,           /* colNo */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    24,          /* lineNo */
    1,           /* colNo */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    23,          /* lineNo */
    1,           /* colNo */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    21,          /* lineNo */
    1,           /* colNo */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    4 /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    21,          /* lineNo */
    1,           /* colNo */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    27,          /* lineNo */
    13,          /* colNo */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    26,          /* lineNo */
    18,          /* colNo */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    25,          /* lineNo */
    18,          /* colNo */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    24,          /* lineNo */
    14,          /* colNo */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    23,          /* lineNo */
    13,          /* colNo */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    4 /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = {
    23,          /* lineNo */
    13,          /* colNo */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = {
    21,          /* lineNo */
    16,          /* colNo */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    4 /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = {
    21,          /* lineNo */
    16,          /* colNo */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    1 /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = {
    29,                                                             /* lineNo */
    9,                                                              /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    37,                                                             /* lineNo */
    9,                                                              /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    27,          /* lineNo */
    19,          /* colNo */
    "m",         /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    38,          /* lineNo */
    48,          /* colNo */
    "qAngle",    /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    38,          /* lineNo */
    63,          /* colNo */
    "rAngle",    /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    38,          /* lineNo */
    78,          /* colNo */
    "qAngle",    /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    38,          /* lineNo */
    93,          /* colNo */
    "rAngle",    /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    22,          /* lineNo */
    8,           /* colNo */
    "yhat",      /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    39,          /* lineNo */
    26,          /* colNo */
    "yhat",      /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    39,          /* lineNo */
    56,          /* colNo */
    "yhat",      /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    39,          /* lineNo */
    63,          /* colNo */
    "u",         /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    39,          /* lineNo */
    12,          /* colNo */
    "yhat",      /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    41,          /* lineNo */
    46,          /* colNo */
    "yref",      /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    41,          /* lineNo */
    56,          /* colNo */
    "yhat",      /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo emlrtECI = {
    2,                                                              /* nDims */
    47,                                                             /* lineNo */
    29,                                                             /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtECInfo b_emlrtECI = {
    2,                                                              /* nDims */
    47,                                                             /* lineNo */
    61,                                                             /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtECInfo c_emlrtECI = {
    2,                                                              /* nDims */
    47,                                                             /* lineNo */
    24,                                                             /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    41,          /* lineNo */
    7,           /* colNo */
    "F",         /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    41,          /* lineNo */
    19,          /* colNo */
    "F",         /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo d_emlrtECI = {
    -1,                                                             /* nDims */
    41,                                                             /* lineNo */
    5,                                                              /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    130,             /* lineNo */
    27,              /* colNo */
    "unaryMinOrMax", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pName */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    38,          /* lineNo */
    9,           /* colNo */
    "u",         /* aName */
    "NMPC_cost", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m", /* pName */
    0 /* checkKind */
};

static emlrtRTEInfo k_emlrtRTEI = {
    21,                                                             /* lineNo */
    1,                                                              /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo l_emlrtRTEI = {
    23,                                                             /* lineNo */
    1,                                                              /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo m_emlrtRTEI = {
    24,                                                             /* lineNo */
    1,                                                              /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo n_emlrtRTEI = {
    25,                                                             /* lineNo */
    1,                                                              /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo o_emlrtRTEI = {
    26,                                                             /* lineNo */
    1,                                                              /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo p_emlrtRTEI = {
    27,                                                             /* lineNo */
    1,                                                              /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI = {
    35,                                                             /* lineNo */
    1,                                                              /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo r_emlrtRTEI = {
    47,                                                             /* lineNo */
    29,                                                             /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo s_emlrtRTEI = {
    47,                                                             /* lineNo */
    42,                                                             /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo t_emlrtRTEI = {
    47,                                                             /* lineNo */
    77,                                                             /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI = {
    47,                                                             /* lineNo */
    87,                                                             /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI = {
    47,                                                             /* lineNo */
    24,                                                             /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI = {
    47,                                                             /* lineNo */
    57,                                                             /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI = {
    47,                                                             /* lineNo */
    22,                                                             /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI = {
    47,                                                             /* lineNo */
    10,                                                             /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    47,                                                             /* lineNo */
    9,                                                              /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    50,                                                             /* lineNo */
    1,                                                              /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    47,                                                             /* lineNo */
    61,                                                             /* colNo */
    "NMPC_cost",                                                    /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_cost.m" /* pName */
};

/* Function Declarations */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *m,
                               const emxArray_real_T *rAngle);

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *varargin_1,
                             const emxArray_real_T *yhat,
                             const emxArray_real_T *m);

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *rAngle,
                               const emxArray_real_T *yhat);

static void plus(const emlrtStack *sp, emxArray_real_T *m,
                 const emxArray_real_T *qAngle);

/* Function Definitions */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *m,
                               const emxArray_real_T *rAngle)
{
  emxArray_real_T *b_m;
  const real_T *rAngle_data;
  real_T *b_m_data;
  real_T *m_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  rAngle_data = rAngle->data;
  m_data = m->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_m, 2, &x_emlrtRTEI);
  i = b_m->size[0] * b_m->size[1];
  b_m->size[0] = 1;
  if (rAngle->size[1] == 1) {
    b_m->size[1] = m->size[1];
  } else {
    b_m->size[1] = rAngle->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_m, i, &x_emlrtRTEI);
  b_m_data = b_m->data;
  stride_0_1 = (m->size[1] != 1);
  stride_1_1 = (rAngle->size[1] != 1);
  if (rAngle->size[1] == 1) {
    loop_ub = m->size[1];
  } else {
    loop_ub = rAngle->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_m_data[i] = m_data[i * stride_0_1] * rAngle_data[i * stride_1_1] + 1.0;
  }
  i = m->size[0] * m->size[1];
  m->size[0] = 1;
  m->size[1] = b_m->size[1];
  emxEnsureCapacity_real_T(sp, m, i, &x_emlrtRTEI);
  m_data = m->data;
  loop_ub = b_m->size[1];
  for (i = 0; i < loop_ub; i++) {
    m_data[i] = b_m_data[i];
  }
  emxFree_real_T(sp, &b_m);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *varargin_1,
                             const emxArray_real_T *yhat,
                             const emxArray_real_T *m)
{
  const real_T *m_data;
  const real_T *yhat_data;
  real_T *varargin_1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  m_data = m->data;
  yhat_data = yhat->data;
  i = yhat->size[1];
  stride_0_0 = varargin_1->size[0];
  if (m->size[1] == 1) {
    varargin_1->size[0] = i;
  } else {
    varargin_1->size[0] = m->size[1];
  }
  emxEnsureCapacity_real_T(sp, varargin_1, stride_0_0, &ab_emlrtRTEI);
  varargin_1_data = varargin_1->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (m->size[1] != 1);
  if (m->size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = m->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    varargin_1_data[i] =
        yhat_data[6 * (i * stride_0_0)] / m_data[i * stride_1_0];
  }
}

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *rAngle,
                               const emxArray_real_T *yhat)
{
  emxArray_real_T *b_yhat;
  const real_T *yhat_data;
  real_T *b_yhat_data;
  real_T *rAngle_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  yhat_data = yhat->data;
  rAngle_data = rAngle->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_yhat, 2, &gb_emlrtRTEI);
  i = yhat->size[1];
  stride_0_1 = b_yhat->size[0] * b_yhat->size[1];
  b_yhat->size[0] = 1;
  if (rAngle->size[1] == 1) {
    b_yhat->size[1] = i;
  } else {
    b_yhat->size[1] = rAngle->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_yhat, stride_0_1, &gb_emlrtRTEI);
  b_yhat_data = b_yhat->data;
  stride_0_1 = (i != 1);
  stride_1_1 = (rAngle->size[1] != 1);
  if (rAngle->size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = rAngle->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_yhat_data[i] =
        yhat_data[6 * (i * stride_0_1) + 5] - rAngle_data[i * stride_1_1];
  }
  i = rAngle->size[0] * rAngle->size[1];
  rAngle->size[0] = 1;
  rAngle->size[1] = b_yhat->size[1];
  emxEnsureCapacity_real_T(sp, rAngle, i, &gb_emlrtRTEI);
  rAngle_data = rAngle->data;
  loop_ub = b_yhat->size[1];
  for (i = 0; i < loop_ub; i++) {
    rAngle_data[i] = b_yhat_data[i];
  }
  emxFree_real_T(sp, &b_yhat);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void plus(const emlrtStack *sp, emxArray_real_T *m,
                 const emxArray_real_T *qAngle)
{
  emxArray_real_T *b_m;
  const real_T *qAngle_data;
  real_T *b_m_data;
  real_T *m_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  qAngle_data = qAngle->data;
  m_data = m->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_m, 2, &r_emlrtRTEI);
  i = b_m->size[0] * b_m->size[1];
  b_m->size[0] = 1;
  if (qAngle->size[1] == 1) {
    b_m->size[1] = m->size[1];
  } else {
    b_m->size[1] = qAngle->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_m, i, &r_emlrtRTEI);
  b_m_data = b_m->data;
  stride_0_1 = (m->size[1] != 1);
  stride_1_1 = (qAngle->size[1] != 1);
  if (qAngle->size[1] == 1) {
    loop_ub = m->size[1];
  } else {
    loop_ub = qAngle->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_m_data[i] = m_data[i * stride_0_1] + qAngle_data[i * stride_1_1];
  }
  i = m->size[0] * m->size[1];
  m->size[0] = 1;
  m->size[1] = b_m->size[1];
  emxEnsureCapacity_real_T(sp, m, i, &r_emlrtRTEI);
  m_data = m->data;
  loop_ub = b_m->size[1];
  for (i = 0; i < loop_ub; i++) {
    m_data[i] = b_m_data[i];
  }
  emxFree_real_T(sp, &b_m);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void NMPC_cost(const emlrtStack *sp, real_T M, real_T Ts,
               const emxArray_real_T *x, const real_T b_y0[6],
               const emxArray_real_T *yref, const real_T Q[36], real_T R,
               real_T coeffT, real_T m0, real_T Tmax, emxArray_real_T *J)
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
  emxArray_real_T *F;
  emxArray_real_T *b_yhat;
  emxArray_real_T *c_yhat;
  emxArray_real_T *m;
  emxArray_real_T *qAngle;
  emxArray_real_T *rAngle;
  emxArray_real_T *u;
  emxArray_real_T *varargin_1;
  emxArray_real_T *xi;
  emxArray_real_T *yhat;
  real_T a[36];
  real_T b[6];
  real_T b_a[6];
  const real_T *x_data;
  const real_T *yref_data;
  real_T d;
  real_T maxXi;
  real_T minXi;
  real_T r;
  real_T *F_data;
  real_T *m_data;
  real_T *qAngle_data;
  real_T *rAngle_data;
  real_T *u_data;
  real_T *xi_data;
  real_T *yhat_data;
  int32_T b_rAngle;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T idx;
  int32_T k;
  int32_T last;
  boolean_T exitg1;
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
  yref_data = yref->data;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &yhat, 2, &k_emlrtRTEI);
  /* COST Function calculates the cost of the orbital maneuvre considering */
  /*    arbitrary defined weigthed sums. The cost takes into account both the */
  /*    state error and the input magnitude. In addition, an hard constraint on
   */
  /*    the maximum value of the input has been considered. */
  /*    As inputs, the function needs: */
  /*        M: prediction horizon */
  /*        Ts: time step of the discrete system */
  /*        y0: initial condition vector */
  /*        u0: input vector from trajectory */
  /*        ybar: desired state vector */
  /*        umax: maximum value for inputs */
  /*        x: optimization variables 3*M inputs,  6*M states (current state
   * given) */
  /*        variables in this order */
  /*        Q: state trajectory weights 6x6 */
  /*        R: fuel consumption weight */
  /*  t = 0:Ts:Ts*M; % Time vector */
  i = yhat->size[0] * yhat->size[1];
  yhat->size[0] = 6;
  emxEnsureCapacity_real_T(sp, yhat, i, &k_emlrtRTEI);
  if (!(M + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(M + 1.0, &o_emlrtDCI, (emlrtCTX)sp);
  }
  d = (int32_T)muDoubleScalarFloor(M + 1.0);
  if (M + 1.0 != d) {
    emlrtIntegerCheckR2012b(M + 1.0, &p_emlrtDCI, (emlrtCTX)sp);
  }
  i = yhat->size[0] * yhat->size[1];
  yhat->size[1] = (int32_T)(M + 1.0);
  emxEnsureCapacity_real_T(sp, yhat, i, &k_emlrtRTEI);
  yhat_data = yhat->data;
  if (!(M + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(M + 1.0, &g_emlrtDCI, (emlrtCTX)sp);
  }
  if (M + 1.0 != d) {
    emlrtIntegerCheckR2012b(M + 1.0, &h_emlrtDCI, (emlrtCTX)sp);
  }
  last = 6 * (int32_T)(M + 1.0);
  for (i = 0; i < last; i++) {
    yhat_data[i] = 0.0;
  }
  /*  Initialization of state vectors */
  if (1 > (int32_T)(M + 1.0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)(M + 1.0), &s_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  for (i = 0; i < 6; i++) {
    yhat_data[i] = b_y0[i];
  }
  emxInit_real_T(sp, &u, 2, &l_emlrtRTEI);
  /*  Set initial conditions */
  i = u->size[0] * u->size[1];
  u->size[0] = 3;
  emxEnsureCapacity_real_T(sp, u, i, &l_emlrtRTEI);
  if (!(M >= 0.0)) {
    emlrtNonNegativeCheckR2012b(M, &m_emlrtDCI, (emlrtCTX)sp);
  }
  i = (int32_T)muDoubleScalarFloor(M);
  if (M != i) {
    emlrtIntegerCheckR2012b(M, &n_emlrtDCI, (emlrtCTX)sp);
  }
  idx = (int32_T)M;
  i1 = u->size[0] * u->size[1];
  u->size[1] = idx;
  emxEnsureCapacity_real_T(sp, u, i1, &l_emlrtRTEI);
  u_data = u->data;
  if (idx != i) {
    emlrtIntegerCheckR2012b(M, &f_emlrtDCI, (emlrtCTX)sp);
  }
  last = 3 * idx;
  for (i1 = 0; i1 < last; i1++) {
    u_data[i1] = 0.0;
  }
  emxInit_real_T(sp, &xi, 2, &m_emlrtRTEI);
  /*  Initialization of input vectors */
  i1 = xi->size[0] * xi->size[1];
  xi->size[0] = 1;
  emxEnsureCapacity_real_T(sp, xi, i1, &m_emlrtRTEI);
  if (idx != i) {
    emlrtIntegerCheckR2012b(M, &l_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = xi->size[0] * xi->size[1];
  xi->size[1] = idx;
  emxEnsureCapacity_real_T(sp, xi, i1, &m_emlrtRTEI);
  xi_data = xi->data;
  if (idx != i) {
    emlrtIntegerCheckR2012b(M, &e_emlrtDCI, (emlrtCTX)sp);
  }
  for (i1 = 0; i1 < idx; i1++) {
    xi_data[i1] = 0.0;
  }
  emxInit_real_T(sp, &qAngle, 2, &n_emlrtRTEI);
  /*  Initialization of fuel utilization */
  i1 = qAngle->size[0] * qAngle->size[1];
  qAngle->size[0] = 1;
  emxEnsureCapacity_real_T(sp, qAngle, i1, &n_emlrtRTEI);
  if (idx != i) {
    emlrtIntegerCheckR2012b(M, &k_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = qAngle->size[0] * qAngle->size[1];
  qAngle->size[1] = idx;
  emxEnsureCapacity_real_T(sp, qAngle, i1, &n_emlrtRTEI);
  qAngle_data = qAngle->data;
  if (idx != i) {
    emlrtIntegerCheckR2012b(M, &d_emlrtDCI, (emlrtCTX)sp);
  }
  for (i1 = 0; i1 < idx; i1++) {
    qAngle_data[i1] = 0.0;
  }
  emxInit_real_T(sp, &rAngle, 2, &o_emlrtRTEI);
  /*  Initialization of qAngle */
  i1 = rAngle->size[0] * rAngle->size[1];
  rAngle->size[0] = 1;
  emxEnsureCapacity_real_T(sp, rAngle, i1, &o_emlrtRTEI);
  if (idx != i) {
    emlrtIntegerCheckR2012b(M, &j_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = rAngle->size[0] * rAngle->size[1];
  rAngle->size[1] = idx;
  emxEnsureCapacity_real_T(sp, rAngle, i1, &o_emlrtRTEI);
  rAngle_data = rAngle->data;
  if (idx != i) {
    emlrtIntegerCheckR2012b(M, &c_emlrtDCI, (emlrtCTX)sp);
  }
  for (i1 = 0; i1 < idx; i1++) {
    rAngle_data[i1] = 0.0;
  }
  emxInit_real_T(sp, &m, 2, &p_emlrtRTEI);
  /*  Initialization of rAngle */
  i1 = m->size[0] * m->size[1];
  m->size[0] = 1;
  emxEnsureCapacity_real_T(sp, m, i1, &p_emlrtRTEI);
  if (idx != i) {
    emlrtIntegerCheckR2012b(M, &i_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = m->size[0] * m->size[1];
  m->size[1] = idx;
  emxEnsureCapacity_real_T(sp, m, i1, &p_emlrtRTEI);
  m_data = m->data;
  if (idx != i) {
    emlrtIntegerCheckR2012b(M, &b_emlrtDCI, (emlrtCTX)sp);
  }
  for (i = 0; i < idx; i++) {
    m_data[i] = 0.0;
  }
  if (1.0 > M) {
    emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)M, &n_emlrtBCI, (emlrtCTX)sp);
  }
  m_data[0] = m0;
  /*  Initialization of mass */
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, M, mxDOUBLE_CLASS, (int32_T)M,
                                &emlrtRTEI, (emlrtCTX)sp);
  for (k = 0; k < idx; k++) {
    if ((int32_T)(k + 1U) > xi->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, xi->size[1],
                                    &l_emlrtBCI, (emlrtCTX)sp);
    }
    if ((int32_T)(k + 1U) > x->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, x->size[0],
                                    &m_emlrtBCI, (emlrtCTX)sp);
    }
    xi_data[k] = x_data[k];
    if ((int32_T)(k + 1U) > qAngle->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, qAngle->size[1],
                                    &j_emlrtBCI, (emlrtCTX)sp);
    }
    i = (idx + k) + 1;
    if ((i < 1) || (i > x->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, x->size[0], &k_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    qAngle_data[k] = x_data[i - 1];
    if ((int32_T)(k + 1U) > rAngle->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, rAngle->size[1],
                                    &h_emlrtBCI, (emlrtCTX)sp);
    }
    i = (int32_T)(2.0 * M + ((real_T)k + 1.0));
    if ((i < 1) || (i > x->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, x->size[0], &i_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    rAngle_data[k] = x_data[i - 1];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxInit_real_T(sp, &F, 1, &q_emlrtRTEI);
  d = 7.0 * M;
  if (d != (int32_T)d) {
    emlrtIntegerCheckR2012b(d, &emlrtDCI, (emlrtCTX)sp);
  }
  i = F->size[0];
  F->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, F, i, &q_emlrtRTEI);
  F_data = F->data;
  if (d != (int32_T)d) {
    emlrtIntegerCheckR2012b(d, &emlrtDCI, (emlrtCTX)sp);
  }
  last = (int32_T)d;
  for (i = 0; i < last; i++) {
    F_data[i] = 0.0;
  }
  /*  Cost Function Calculation */
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, M, mxDOUBLE_CLASS, (int32_T)M,
                                &b_emlrtRTEI, (emlrtCTX)sp);
  if (0.0 <= M - 1.0) {
    b_rAngle = 6;
  }
  for (k = 0; k < idx; k++) {
    if (k + 1 > qAngle->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, qAngle->size[1], &o_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (k + 1 > rAngle->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, rAngle->size[1], &p_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (k + 1 > qAngle->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, qAngle->size[1], &q_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (k + 1 > rAngle->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, rAngle->size[1], &r_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((int32_T)(k + 1U) > xi->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, xi->size[1],
                                    &f_emlrtBCI, (emlrtCTX)sp);
    }
    if ((int32_T)(k + 1U) > m->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, m->size[1],
                                    &g_emlrtBCI, (emlrtCTX)sp);
    }
    r = Tmax / m_data[k] / 1000.0 * xi_data[k];
    if ((int32_T)(k + 1U) > u->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, u->size[1],
                                    &cb_emlrtBCI, (emlrtCTX)sp);
    }
    minXi = muDoubleScalarCos(rAngle_data[k]);
    u_data[3 * k] = r * (muDoubleScalarSin(qAngle_data[k]) * minXi);
    u_data[3 * k + 1] = r * (muDoubleScalarCos(qAngle_data[k]) * minXi);
    u_data[3 * k + 2] = r * muDoubleScalarSin(rAngle_data[k]);
    if ((int32_T)(k + 1U) > yhat->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, yhat->size[1],
                                    &u_emlrtBCI, (emlrtCTX)sp);
    }
    if ((int32_T)(k + 1U) > u->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, u->size[1],
                                    &v_emlrtBCI, (emlrtCTX)sp);
    }
    st.site = &emlrtRSI;
    EOEDerivatives(&st, *(real_T(*)[6]) & yhat_data[6 * k],
                   *(real_T(*)[3]) & u_data[3 * k], b);
    if ((int32_T)(k + 1U) > yhat->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, yhat->size[1],
                                    &t_emlrtBCI, (emlrtCTX)sp);
    }
    if (((int32_T)(k + 2U) < 1) || ((int32_T)(k + 2U) > yhat->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 2U), 1, yhat->size[1],
                                    &w_emlrtBCI, (emlrtCTX)sp);
    }
    for (i = 0; i < 6; i++) {
      b[i] = yhat_data[i + 6 * k] + Ts * b[i];
    }
    for (i = 0; i < 6; i++) {
      yhat_data[i + 6 * (k + 1)] = b[i];
    }
    st.site = &b_emlrtRSI;
    if (R < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &i_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    if ((int32_T)(k + 1U) > F->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, F->size[0],
                                    &d_emlrtBCI, (emlrtCTX)sp);
    }
    if ((int32_T)(k + 1U) > xi->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, xi->size[1],
                                    &e_emlrtBCI, (emlrtCTX)sp);
    }
    F_data[k] = muDoubleScalarSqrt(R) * xi_data[k];
    d = (M + 6.0 * (((real_T)k + 1.0) - 1.0)) + 1.0;
    r = M + 6.0 * ((real_T)k + 1.0);
    if (d > r) {
      i = 0;
      i1 = 0;
    } else {
      if (((int32_T)d < 1) || ((int32_T)d > F->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, F->size[0], &ab_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = (int32_T)d - 1;
      if (((int32_T)r < 1) || ((int32_T)r > F->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)r, 1, F->size[0], &bb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i1 = (int32_T)r;
    }
    last = i1 - i;
    emlrtSubAssignSizeCheckR2012b(&last, 1, &b_rAngle, 1, &d_emlrtECI,
                                  (emlrtCTX)sp);
    memcpy(&a[0], &Q[0], 36U * sizeof(real_T));
    st.site = &c_emlrtRSI;
    b_sqrt(&st, a);
    if (k + 1 > yref->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, yref->size[1], &x_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((k + 2 < 1) || (k + 2 > yhat->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 2, 1, yhat->size[1], &y_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (i1 = 0; i1 < 6; i1++) {
      b[i1] = yref_data[i1 + 6 * k] - yhat_data[i1 + 6 * (k + 1)];
    }
    for (i1 = 0; i1 < 6; i1++) {
      d = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        d += a[i1 + 6 * i2] * b[i2];
      }
      b_a[i1] = d;
    }
    for (i1 = 0; i1 < last; i1++) {
      F_data[i + i1] = b_a[i1];
    }
    if (k + 1 < idx) {
      if (((int32_T)(k + 2U) < 1) || ((int32_T)(k + 2U) > m->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 2U), 1, m->size[1],
                                      &emlrtBCI, (emlrtCTX)sp);
      }
      if ((int32_T)(k + 1U) > xi->size[1]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, xi->size[1],
                                      &b_emlrtBCI, (emlrtCTX)sp);
      }
      if ((int32_T)(k + 1U) > m->size[1]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, m->size[1],
                                      &c_emlrtBCI, (emlrtCTX)sp);
      }
      m_data[k + 1] = m_data[k] - Ts * xi_data[k] * coeffT;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &u);
  emxInit_real_T(sp, &b_yhat, 2, &r_emlrtRTEI);
  last = yhat->size[1];
  i = b_yhat->size[0] * b_yhat->size[1];
  b_yhat->size[0] = 1;
  b_yhat->size[1] = yhat->size[1];
  emxEnsureCapacity_real_T(sp, b_yhat, i, &r_emlrtRTEI);
  u_data = b_yhat->data;
  for (i = 0; i < last; i++) {
    u_data[i] = yhat_data[6 * i + 1];
  }
  st.site = &d_emlrtRSI;
  power(&st, b_yhat, m);
  last = yhat->size[1];
  i = b_yhat->size[0] * b_yhat->size[1];
  b_yhat->size[0] = 1;
  b_yhat->size[1] = yhat->size[1];
  emxEnsureCapacity_real_T(sp, b_yhat, i, &s_emlrtRTEI);
  u_data = b_yhat->data;
  for (i = 0; i < last; i++) {
    u_data[i] = yhat_data[6 * i + 2];
  }
  st.site = &d_emlrtRSI;
  power(&st, b_yhat, qAngle);
  qAngle_data = qAngle->data;
  if ((m->size[1] != qAngle->size[1]) &&
      ((m->size[1] != 1) && (qAngle->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(m->size[1], qAngle->size[1], &emlrtECI,
                                (emlrtCTX)sp);
  }
  last = yhat->size[1];
  i = b_yhat->size[0] * b_yhat->size[1];
  b_yhat->size[0] = 1;
  b_yhat->size[1] = yhat->size[1];
  emxEnsureCapacity_real_T(sp, b_yhat, i, &t_emlrtRTEI);
  u_data = b_yhat->data;
  for (i = 0; i < last; i++) {
    u_data[i] = yhat_data[6 * i + 2];
  }
  emxInit_real_T(sp, &c_yhat, 2, &u_emlrtRTEI);
  last = yhat->size[1];
  i = c_yhat->size[0] * c_yhat->size[1];
  c_yhat->size[0] = 1;
  c_yhat->size[1] = yhat->size[1];
  emxEnsureCapacity_real_T(sp, c_yhat, i, &u_emlrtRTEI);
  u_data = c_yhat->data;
  for (i = 0; i < last; i++) {
    u_data[i] = yhat_data[6 * i + 1];
  }
  st.site = &d_emlrtRSI;
  b_atan2(&st, b_yhat, c_yhat, rAngle);
  emxFree_real_T(sp, &c_yhat);
  if ((yhat->size[1] != rAngle->size[1]) &&
      ((yhat->size[1] != 1) && (rAngle->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(yhat->size[1], rAngle->size[1], &b_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (m->size[1] == qAngle->size[1]) {
    last = m->size[1] - 1;
    i = m->size[0] * m->size[1];
    m->size[0] = 1;
    emxEnsureCapacity_real_T(sp, m, i, &v_emlrtRTEI);
    m_data = m->data;
    for (i = 0; i <= last; i++) {
      m_data[i] += qAngle_data[i];
    }
  } else {
    plus(sp, m, qAngle);
  }
  emxFree_real_T(sp, &qAngle);
  st.site = &d_emlrtRSI;
  c_sqrt(&st, m);
  if (yhat->size[1] == rAngle->size[1]) {
    last = yhat->size[1];
    i = rAngle->size[0] * rAngle->size[1];
    rAngle->size[0] = 1;
    rAngle->size[1] = yhat->size[1];
    emxEnsureCapacity_real_T(sp, rAngle, i, &w_emlrtRTEI);
    rAngle_data = rAngle->data;
    for (i = 0; i < last; i++) {
      rAngle_data[i] = yhat_data[6 * i + 5] - rAngle_data[i];
    }
  } else {
    c_binary_expand_op(sp, rAngle, yhat);
  }
  st.site = &d_emlrtRSI;
  b_cos(&st, rAngle);
  rAngle_data = rAngle->data;
  if ((m->size[1] != rAngle->size[1]) &&
      ((m->size[1] != 1) && (rAngle->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(m->size[1], rAngle->size[1], &c_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &d_emlrtRSI;
  if (m->size[1] == rAngle->size[1]) {
    last = m->size[1] - 1;
    i = m->size[0] * m->size[1];
    m->size[0] = 1;
    emxEnsureCapacity_real_T(&st, m, i, &x_emlrtRTEI);
    m_data = m->data;
    for (i = 0; i <= last; i++) {
      m_data[i] = m_data[i] * rAngle_data[i] + 1.0;
    }
  } else {
    b_st.site = &d_emlrtRSI;
    b_binary_expand_op(&b_st, m, rAngle);
    m_data = m->data;
  }
  emxFree_real_T(&st, &rAngle);
  b_st.site = &t_emlrtRSI;
  last = yhat->size[1];
  i = b_yhat->size[0] * b_yhat->size[1];
  b_yhat->size[0] = 1;
  b_yhat->size[1] = yhat->size[1];
  emxEnsureCapacity_real_T(&b_st, b_yhat, i, &y_emlrtRTEI);
  u_data = b_yhat->data;
  for (i = 0; i < last; i++) {
    u_data[i] = yhat_data[6 * i];
  }
  c_st.site = &u_emlrtRSI;
  assertCompatibleDims(&c_st, b_yhat, m);
  st.site = &d_emlrtRSI;
  emxFree_real_T(&st, &b_yhat);
  emxInit_real_T(&st, &varargin_1, 1, &ab_emlrtRTEI);
  if (yhat->size[1] == m->size[1]) {
    last = yhat->size[1];
    i = varargin_1->size[0];
    varargin_1->size[0] = yhat->size[1];
    emxEnsureCapacity_real_T(&st, varargin_1, i, &ab_emlrtRTEI);
    u_data = varargin_1->data;
    for (i = 0; i < last; i++) {
      u_data[i] = yhat_data[6 * i] / m_data[i];
    }
  } else {
    b_st.site = &d_emlrtRSI;
    binary_expand_op(&b_st, varargin_1, yhat, m);
    u_data = varargin_1->data;
  }
  emxFree_real_T(&st, &m);
  emxFree_real_T(&st, &yhat);
  b_st.site = &v_emlrtRSI;
  c_st.site = &w_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &d_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &y_emlrtRSI;
  f_st.site = &ab_emlrtRSI;
  last = varargin_1->size[0];
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      r = u_data[0];
    } else if ((u_data[0] > u_data[1]) || (muDoubleScalarIsNaN(u_data[0]) &&
                                           (!muDoubleScalarIsNaN(u_data[1])))) {
      r = u_data[1];
    } else {
      r = u_data[0];
    }
  } else {
    g_st.site = &cb_emlrtRSI;
    if (!muDoubleScalarIsNaN(u_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &db_emlrtRSI;
      if (varargin_1->size[0] > 2147483646) {
        i_st.site = &o_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(u_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      r = u_data[0];
    } else {
      g_st.site = &bb_emlrtRSI;
      r = u_data[idx - 1];
      b_rAngle = idx + 1;
      h_st.site = &eb_emlrtRSI;
      if ((idx + 1 <= varargin_1->size[0]) &&
          (varargin_1->size[0] > 2147483646)) {
        i_st.site = &o_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = b_rAngle; k <= last; k++) {
        d = u_data[k - 1];
        if (r > d) {
          r = d;
        }
      }
    }
  }
  emxFree_real_T(&f_st, &varargin_1);
  st.site = &e_emlrtRSI;
  b_st.site = &v_emlrtRSI;
  c_st.site = &w_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  if (xi->size[1] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &d_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &y_emlrtRSI;
  f_st.site = &ab_emlrtRSI;
  last = xi->size[1];
  if (xi->size[1] <= 2) {
    if (xi->size[1] == 1) {
      minXi = xi_data[0];
    } else if ((xi_data[0] > xi_data[1]) ||
               (muDoubleScalarIsNaN(xi_data[0]) &&
                (!muDoubleScalarIsNaN(xi_data[1])))) {
      minXi = xi_data[1];
    } else {
      minXi = xi_data[0];
    }
  } else {
    g_st.site = &cb_emlrtRSI;
    if (!muDoubleScalarIsNaN(xi_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &db_emlrtRSI;
      if (xi->size[1] > 2147483646) {
        i_st.site = &o_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(xi_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      minXi = xi_data[0];
    } else {
      g_st.site = &bb_emlrtRSI;
      minXi = xi_data[idx - 1];
      b_rAngle = idx + 1;
      h_st.site = &eb_emlrtRSI;
      if ((idx + 1 <= xi->size[1]) && (xi->size[1] > 2147483646)) {
        i_st.site = &o_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = b_rAngle; k <= last; k++) {
        d = xi_data[k - 1];
        if (minXi > d) {
          minXi = d;
        }
      }
    }
  }
  st.site = &f_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  d_st.site = &hb_emlrtRSI;
  e_st.site = &ib_emlrtRSI;
  f_st.site = &jb_emlrtRSI;
  last = xi->size[1];
  if (xi->size[1] <= 2) {
    if (xi->size[1] == 1) {
      maxXi = xi_data[0];
    } else if ((xi_data[0] < xi_data[1]) ||
               (muDoubleScalarIsNaN(xi_data[0]) &&
                (!muDoubleScalarIsNaN(xi_data[1])))) {
      maxXi = xi_data[1];
    } else {
      maxXi = xi_data[0];
    }
  } else {
    g_st.site = &cb_emlrtRSI;
    if (!muDoubleScalarIsNaN(xi_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &db_emlrtRSI;
      if (xi->size[1] > 2147483646) {
        i_st.site = &o_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(xi_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      maxXi = xi_data[0];
    } else {
      g_st.site = &bb_emlrtRSI;
      maxXi = xi_data[idx - 1];
      b_rAngle = idx + 1;
      h_st.site = &eb_emlrtRSI;
      if ((idx + 1 <= xi->size[1]) && (xi->size[1] > 2147483646)) {
        i_st.site = &o_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = b_rAngle; k <= last; k++) {
        d = xi_data[k - 1];
        if (maxXi < d) {
          maxXi = d;
        }
      }
    }
  }
  emxFree_real_T(&f_st, &xi);
  st.site = &g_emlrtRSI;
  b_st.site = &kb_emlrtRSI;
  dynamic_size_checks(&b_st, F, F, F->size[0], F->size[0]);
  i = J->size[0];
  J->size[0] = F->size[0] + 4;
  emxEnsureCapacity_real_T(sp, J, i, &bb_emlrtRTEI);
  u_data = J->data;
  u_data[0] = mtimes(F, F);
  u_data[1] = r - 6378.1;
  u_data[2] = 1.0 - maxXi;
  u_data[3] = minXi;
  last = F->size[0];
  for (i = 0; i < last; i++) {
    u_data[i + 4] = F_data[i];
  }
  emxFree_real_T(sp, &F);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (NMPC_cost.c) */
