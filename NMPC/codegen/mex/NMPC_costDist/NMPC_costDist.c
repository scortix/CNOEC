/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NMPC_costDist.c
 *
 * Code generation for function 'NMPC_costDist'
 *
 */

/* Include files */
#include "NMPC_costDist.h"
#include "EOE2COE.h"
#include "EOEDerivatives.h"
#include "NMPC_costDist_data.h"
#include "NMPC_costDist_emxutil.h"
#include "NMPC_costDist_types.h"
#include "assertCompatibleDims.h"
#include "cos.h"
#include "earthNonSphericity.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "indexShapeCheck.h"
#include "moonDisturbance.h"
#include "norm.h"
#include "paraorb2rv.h"
#include "power.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    36,              /* lineNo */
    "NMPC_costDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pathName
                                                                         */
};

static emlrtRSInfo b_emlrtRSI = {
    43,              /* lineNo */
    "NMPC_costDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pathName
                                                                         */
};

static emlrtRSInfo c_emlrtRSI = {
    44,              /* lineNo */
    "NMPC_costDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pathName
                                                                         */
};

static emlrtRSInfo d_emlrtRSI = {
    45,              /* lineNo */
    "NMPC_costDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pathName
                                                                         */
};

static emlrtRSInfo e_emlrtRSI = {
    46,              /* lineNo */
    "NMPC_costDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pathName
                                                                         */
};

static emlrtRSInfo f_emlrtRSI = {
    47,              /* lineNo */
    "NMPC_costDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pathName
                                                                         */
};

static emlrtRSInfo g_emlrtRSI = {
    51,              /* lineNo */
    "NMPC_costDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pathName
                                                                         */
};

static emlrtRSInfo h_emlrtRSI = {
    52,              /* lineNo */
    "NMPC_costDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pathName
                                                                         */
};

static emlrtRSInfo i_emlrtRSI = {
    53,              /* lineNo */
    "NMPC_costDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pathName
                                                                         */
};

static emlrtRSInfo j_emlrtRSI = {
    59,              /* lineNo */
    "NMPC_costDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pathName
                                                                         */
};

static emlrtRSInfo k_emlrtRSI = {
    60,              /* lineNo */
    "NMPC_costDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pathName
                                                                         */
};

static emlrtRSInfo y_emlrtRSI = {
    11,              /* lineNo */
    "rho_selection", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/rho_selection.m" /* pathName
                                                                         */
};

static emlrtRSInfo ab_emlrtRSI = {
    21,                                                        /* lineNo */
    "drag",                                                    /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/drag.m" /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = {
    13,      /* lineNo */
    "atan2", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/atan2.m" /* pathName
                                                                            */
};

static emlrtRSInfo mb_emlrtRSI =
    {
        57,      /* lineNo */
        "ixfun", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "ixfun.m" /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = {
    34,               /* lineNo */
    "rdivide_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "rdivide_helper.m" /* pathName */
};

static emlrtRSInfo
    pb_emlrtRSI =
        {
            51,    /* lineNo */
            "div", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "div.m" /* pathName */
};

static emlrtRSInfo qb_emlrtRSI = {
    15,    /* lineNo */
    "min", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/min.m" /* pathName
                                                                            */
};

static emlrtRSInfo rb_emlrtRSI = {
    46,         /* lineNo */
    "minOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo sb_emlrtRSI = {
    92,        /* lineNo */
    "minimum", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo tb_emlrtRSI = {
    204,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo ub_emlrtRSI = {
    893,                    /* lineNo */
    "minRealVectorOmitNaN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo vb_emlrtRSI = {
    62,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo wb_emlrtRSI = {
    54,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo xb_emlrtRSI = {
    103,         /* lineNo */
    "findFirst", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo yb_emlrtRSI = {
    120,                        /* lineNo */
    "minOrMaxRealVectorKernel", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo ac_emlrtRSI = {
    69,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

static emlrtBCInfo emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    50,              /* lineNo */
    9,               /* colNo */
    "u",             /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = {
    35,              /* lineNo */
    9,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    36,              /* lineNo */
    18,              /* colNo */
    "x",             /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    36,              /* lineNo */
    28,              /* colNo */
    "x",             /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    36,              /* lineNo */
    11,              /* colNo */
    "dir",           /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,              /* nDims */
    36,              /* lineNo */
    5,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    37,              /* lineNo */
    26,              /* colNo */
    "dir",           /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = {
    42,              /* lineNo */
    9,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    29,              /* lineNo */
    8,               /* colNo */
    "yhat",          /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    43,              /* lineNo */
    27,              /* colNo */
    "yhat",          /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    33,              /* lineNo */
    19,              /* colNo */
    "m",             /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    48,              /* lineNo */
    25,              /* colNo */
    "m",             /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    50,              /* lineNo */
    34,              /* colNo */
    "dir",           /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    51,              /* lineNo */
    26,              /* colNo */
    "yhat",          /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    51,              /* lineNo */
    56,              /* colNo */
    "yhat",          /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    51,              /* lineNo */
    63,              /* colNo */
    "u",             /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    51,              /* lineNo */
    12,              /* colNo */
    "yhat",          /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    53,              /* lineNo */
    46,              /* colNo */
    "yref",          /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    53,              /* lineNo */
    58,              /* colNo */
    "yhat",          /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    2,               /* nDims */
    59,              /* lineNo */
    29,              /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtECInfo c_emlrtECI = {
    2,               /* nDims */
    59,              /* lineNo */
    61,              /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtECInfo d_emlrtECI = {
    2,               /* nDims */
    59,              /* lineNo */
    24,              /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    53,              /* lineNo */
    7,               /* colNo */
    "F",             /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    53,              /* lineNo */
    19,              /* colNo */
    "F",             /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtECInfo e_emlrtECI = {
    -1,              /* nDims */
    53,              /* lineNo */
    5,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtRTEInfo d_emlrtRTEI = {
    130,             /* lineNo */
    27,              /* colNo */
    "unaryMinOrMax", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    28,              /* lineNo */
    16,              /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    28,              /* lineNo */
    16,              /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    4 /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    30,              /* lineNo */
    13,              /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    30,              /* lineNo */
    13,              /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    4 /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    31,              /* lineNo */
    15,              /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    33,              /* lineNo */
    13,              /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    28,              /* lineNo */
    1,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    28,              /* lineNo */
    1,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    4 /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    30,              /* lineNo */
    1,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    31,              /* lineNo */
    1,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    32,              /* lineNo */
    14,              /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    33,              /* lineNo */
    1,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    40,              /* lineNo */
    1,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    1 /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    37,              /* lineNo */
    10,              /* colNo */
    "cons",          /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    50,              /* lineNo */
    21,              /* colNo */
    "m",             /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    52,              /* lineNo */
    27,              /* colNo */
    "cons",          /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    52,              /* lineNo */
    7,               /* colNo */
    "F",             /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    55,              /* lineNo */
    20,              /* colNo */
    "m",             /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    55,              /* lineNo */
    33,              /* colNo */
    "cons",          /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    55,              /* lineNo */
    11,              /* colNo */
    "m",             /* aName */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtRTEInfo l_emlrtRTEI = {
    28,              /* lineNo */
    1,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtRTEInfo m_emlrtRTEI = {
    30,              /* lineNo */
    1,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtRTEInfo n_emlrtRTEI = {
    31,              /* lineNo */
    1,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtRTEInfo o_emlrtRTEI = {
    32,              /* lineNo */
    8,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtRTEInfo p_emlrtRTEI = {
    33,              /* lineNo */
    1,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtRTEInfo q_emlrtRTEI = {
    40,              /* lineNo */
    1,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtRTEInfo r_emlrtRTEI = {
    59,              /* lineNo */
    29,              /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtRTEInfo s_emlrtRTEI = {
    59,              /* lineNo */
    42,              /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtRTEInfo t_emlrtRTEI = {
    59,              /* lineNo */
    71,              /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtRTEInfo u_emlrtRTEI = {
    59,              /* lineNo */
    24,              /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtRTEInfo v_emlrtRTEI = {
    59,              /* lineNo */
    57,              /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtRTEInfo w_emlrtRTEI = {
    59,              /* lineNo */
    22,              /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtRTEInfo x_emlrtRTEI = {
    59,              /* lineNo */
    10,              /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtRTEInfo y_emlrtRTEI = {
    59,              /* lineNo */
    9,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    60,              /* lineNo */
    1,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    32,              /* lineNo */
    1,               /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    59,              /* lineNo */
    61,              /* colNo */
    "NMPC_costDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costDist.m" /* pName
                                                                         */
};

/* Function Declarations */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *y,
                               const emxArray_real_T *r1);

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *varargin_1,
                             const emxArray_real_T *yhat,
                             const emxArray_real_T *y);

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *r1,
                               const emxArray_real_T *yhat);

static void plus(const emlrtStack *sp, emxArray_real_T *y,
                 const emxArray_real_T *m);

/* Function Definitions */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *y,
                               const emxArray_real_T *r1)
{
  emxArray_real_T *b_y;
  const real_T *r;
  real_T *b_y_data;
  real_T *y_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  r = r1->data;
  y_data = y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_y, 2, &w_emlrtRTEI);
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  if (r1->size[1] == 1) {
    b_y->size[1] = y->size[1];
  } else {
    b_y->size[1] = r1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_y, i, &w_emlrtRTEI);
  b_y_data = b_y->data;
  stride_0_1 = (y->size[1] != 1);
  stride_1_1 = (r1->size[1] != 1);
  if (r1->size[1] == 1) {
    loop_ub = y->size[1];
  } else {
    loop_ub = r1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] = y_data[i * stride_0_1] * r[i * stride_1_1] + 1.0;
  }
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, y, i, &w_emlrtRTEI);
  y_data = y->data;
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    y_data[i] = b_y_data[i];
  }
  emxFree_real_T(sp, &b_y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *varargin_1,
                             const emxArray_real_T *yhat,
                             const emxArray_real_T *y)
{
  const real_T *y_data;
  const real_T *yhat_data;
  real_T *varargin_1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  y_data = y->data;
  yhat_data = yhat->data;
  i = yhat->size[1];
  stride_0_0 = varargin_1->size[0];
  if (y->size[1] == 1) {
    varargin_1->size[0] = i;
  } else {
    varargin_1->size[0] = y->size[1];
  }
  emxEnsureCapacity_real_T(sp, varargin_1, stride_0_0, &y_emlrtRTEI);
  varargin_1_data = varargin_1->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (y->size[1] != 1);
  if (y->size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = y->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    varargin_1_data[i] =
        yhat_data[6 * (i * stride_0_0)] / y_data[i * stride_1_0];
  }
}

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *r1,
                               const emxArray_real_T *yhat)
{
  emxArray_real_T *b_yhat;
  const real_T *yhat_data;
  real_T *b_yhat_data;
  real_T *r;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  yhat_data = yhat->data;
  r = r1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_yhat, 2, &eb_emlrtRTEI);
  i = yhat->size[1];
  stride_0_1 = b_yhat->size[0] * b_yhat->size[1];
  b_yhat->size[0] = 1;
  if (r1->size[1] == 1) {
    b_yhat->size[1] = i;
  } else {
    b_yhat->size[1] = r1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_yhat, stride_0_1, &eb_emlrtRTEI);
  b_yhat_data = b_yhat->data;
  stride_0_1 = (i != 1);
  stride_1_1 = (r1->size[1] != 1);
  if (r1->size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = r1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_yhat_data[i] = yhat_data[6 * (i * stride_0_1) + 5] - r[i * stride_1_1];
  }
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = b_yhat->size[1];
  emxEnsureCapacity_real_T(sp, r1, i, &eb_emlrtRTEI);
  r = r1->data;
  loop_ub = b_yhat->size[1];
  for (i = 0; i < loop_ub; i++) {
    r[i] = b_yhat_data[i];
  }
  emxFree_real_T(sp, &b_yhat);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void plus(const emlrtStack *sp, emxArray_real_T *y,
                 const emxArray_real_T *m)
{
  emxArray_real_T *b_y;
  const real_T *m_data;
  real_T *b_y_data;
  real_T *y_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  m_data = m->data;
  y_data = y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_y, 2, &r_emlrtRTEI);
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  if (m->size[1] == 1) {
    b_y->size[1] = y->size[1];
  } else {
    b_y->size[1] = m->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_y, i, &r_emlrtRTEI);
  b_y_data = b_y->data;
  stride_0_1 = (y->size[1] != 1);
  stride_1_1 = (m->size[1] != 1);
  if (m->size[1] == 1) {
    loop_ub = y->size[1];
  } else {
    loop_ub = m->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] = y_data[i * stride_0_1] + m_data[i * stride_1_1];
  }
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, y, i, &r_emlrtRTEI);
  y_data = y->data;
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    y_data[i] = b_y_data[i];
  }
  emxFree_real_T(sp, &b_y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void NMPC_costDist(const emlrtStack *sp, real_T M, real_T Ts,
                   const emxArray_real_T *x, const real_T b_y0[6],
                   const emxArray_real_T *yref, const real_T Q[36], real_T R,
                   real_T coeffT, real_T m0, real_T Tmax, const real_T xp[4],
                   const real_T yp[4], const real_T zp[4], real_T S, real_T Cd,
                   const real_T rho_table[84], emxArray_real_T *J)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_real_T *b_F;
  emxArray_real_T *b_yhat;
  emxArray_real_T *cons;
  emxArray_real_T *dir;
  emxArray_real_T *m;
  emxArray_real_T *u;
  emxArray_real_T *varargin_1;
  emxArray_real_T *y;
  emxArray_real_T *yhat;
  real_T b_a[36];
  real_T ir[9];
  real_T c_a[6];
  real_T yCOE[6];
  real_T DJ2[3];
  real_T b_r[3];
  real_T v[3];
  real_T v_rel[3];
  const real_T *x_data;
  const real_T *yref_data;
  real_T a;
  real_T d;
  real_T d1;
  real_T ir_idx_0;
  real_T ir_idx_1;
  real_T r;
  real_T v_idx_0;
  real_T v_idx_1;
  real_T v_idx_2;
  real_T *F_data;
  real_T *cons_data;
  real_T *dir_data;
  real_T *m_data;
  real_T *u_data;
  real_T *yhat_data;
  int32_T F[2];
  int32_T F_tmp;
  int32_T b_m;
  int32_T b_select;
  int32_T i;
  int32_T i1;
  int32_T idx;
  int32_T k;
  int32_T loop_ub_tmp;
  boolean_T exitg1;
  boolean_T p;
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
  emxInit_real_T(sp, &yhat, 2, &l_emlrtRTEI);
  /*    NMPC_COSTDIST Function calculates the cost of the orbital maneuvre
   * considering */
  /*    arbitrary defined weigthed sums. The cost takes into account both the */
  /*    state error and the input magnitude. In addition, an hard constraint on
   */
  /*    the maximum value of the input has been considered. The future */
  /*    disturbances prediction is included passing the usefuel parameters too.
   */
  /*    As inputs, the function needs: */
  /*        M:          prediction horizon */
  /*        Ts:         time step of the discrete system */
  /*        x:          optimization variables 3*M */
  /*        y0:         initial condition vector (zEOE state) */
  /*        yref:       desired state vector evolution (zEOE trajectory) */
  /*        Q:          state trajectory weights 6x6 */
  /*        R:          fuel consumption weight */
  /*        m0:         initial mass */
  /*        Tmax:       maximum Thrust */
  /*        xp:         moon position parameters for x axis position estimation
   */
  /*        yp:         moon position parameters for y axis position estimation
   */
  /*        zp:         moon position parameters for z axis position estimation
   */
  /*        S:          surface of the spacecraft */
  /*        Cd:         drag coefficient */
  /*        rho_table:  air density table, see the relative script */
  /*  t = 0:Ts:Ts*M; % Time vector */
  i = yhat->size[0] * yhat->size[1];
  yhat->size[0] = 6;
  emxEnsureCapacity_real_T(sp, yhat, i, &l_emlrtRTEI);
  if (!(M + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(M + 1.0, &b_emlrtDCI, (emlrtCTX)sp);
  }
  d = (int32_T)muDoubleScalarFloor(M + 1.0);
  if (M + 1.0 != d) {
    emlrtIntegerCheckR2012b(M + 1.0, &emlrtDCI, (emlrtCTX)sp);
  }
  i = yhat->size[0] * yhat->size[1];
  yhat->size[1] = (int32_T)(M + 1.0);
  emxEnsureCapacity_real_T(sp, yhat, i, &l_emlrtRTEI);
  yhat_data = yhat->data;
  if (!(M + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(M + 1.0, &h_emlrtDCI, (emlrtCTX)sp);
  }
  if (M + 1.0 != d) {
    emlrtIntegerCheckR2012b(M + 1.0, &g_emlrtDCI, (emlrtCTX)sp);
  }
  idx = 6 * (int32_T)(M + 1.0);
  for (i = 0; i < idx; i++) {
    yhat_data[i] = 0.0;
  }
  /*  Initialization of state vectors */
  if (1 > (int32_T)(M + 1.0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)(M + 1.0), &f_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  for (i = 0; i < 6; i++) {
    yhat_data[i] = b_y0[i];
  }
  emxInit_real_T(sp, &u, 2, &m_emlrtRTEI);
  /*  Set initial conditions */
  i = u->size[0] * u->size[1];
  u->size[0] = 3;
  emxEnsureCapacity_real_T(sp, u, i, &m_emlrtRTEI);
  if (!(M >= 0.0)) {
    emlrtNonNegativeCheckR2012b(M, &d_emlrtDCI, (emlrtCTX)sp);
  }
  i = (int32_T)muDoubleScalarFloor(M);
  if (M != i) {
    emlrtIntegerCheckR2012b(M, &c_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = u->size[0] * u->size[1];
  u->size[1] = (int32_T)M;
  emxEnsureCapacity_real_T(sp, u, i1, &m_emlrtRTEI);
  u_data = u->data;
  if (M != i) {
    emlrtIntegerCheckR2012b(M, &i_emlrtDCI, (emlrtCTX)sp);
  }
  idx = 3 * (int32_T)M;
  for (i1 = 0; i1 < idx; i1++) {
    u_data[i1] = 0.0;
  }
  emxInit_real_T(sp, &dir, 2, &n_emlrtRTEI);
  /*  Initialization of input vectors */
  i1 = dir->size[0] * dir->size[1];
  dir->size[0] = 3;
  emxEnsureCapacity_real_T(sp, dir, i1, &n_emlrtRTEI);
  if (M != i) {
    emlrtIntegerCheckR2012b(M, &e_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub_tmp = (int32_T)M;
  i1 = dir->size[0] * dir->size[1];
  dir->size[1] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, dir, i1, &n_emlrtRTEI);
  dir_data = dir->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(M, &j_emlrtDCI, (emlrtCTX)sp);
  }
  idx = 3 * (int32_T)M;
  for (i1 = 0; i1 < idx; i1++) {
    dir_data[i1] = 0.0;
  }
  /*  Initialization of direction vector */
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(M, &k_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &cons, 1, &bb_emlrtRTEI);
  emxInit_real_T(sp, &m, 2, &p_emlrtRTEI);
  i1 = cons->size[0];
  cons->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, cons, i1, &o_emlrtRTEI);
  cons_data = cons->data;
  /*  Initialization of consumption vector */
  i1 = m->size[0] * m->size[1];
  m->size[0] = 1;
  emxEnsureCapacity_real_T(sp, m, i1, &p_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(M, &f_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = m->size[0] * m->size[1];
  m->size[1] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, m, i1, &p_emlrtRTEI);
  m_data = m->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(M, &l_emlrtDCI, (emlrtCTX)sp);
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    m_data[i] = 0.0;
  }
  if (1.0 > M) {
    emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)M, &h_emlrtBCI, (emlrtCTX)sp);
  }
  m_data[0] = m0;
  /*  Initialization of mass */
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, M, mxDOUBLE_CLASS, (int32_T)M,
                                &emlrtRTEI, (emlrtCTX)sp);
  if (0.0 <= M - 1.0) {
    F[0] = 1;
    b_m = 3;
  }
  for (k = 0; k < loop_ub_tmp; k++) {
    d = 3.0 * (((real_T)k + 1.0) - 1.0) + 1.0;
    v_idx_2 = 3.0 * ((real_T)k + 1.0);
    if (d > v_idx_2) {
      i = 0;
      i1 = 0;
    } else {
      if (((int32_T)d < 1) || ((int32_T)d > x->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, x->size[0], &b_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = (int32_T)d - 1;
      if (((int32_T)v_idx_2 < 1) || ((int32_T)v_idx_2 > x->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)v_idx_2, 1, x->size[0],
                                      &c_emlrtBCI, (emlrtCTX)sp);
      }
      i1 = (int32_T)v_idx_2;
    }
    F_tmp = i1 - i;
    F[1] = F_tmp;
    st.site = &emlrtRSI;
    indexShapeCheck(&st, x->size[0], F);
    if (k + 1 > dir->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, dir->size[1], &d_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    emlrtSubAssignSizeCheckR2012b(&b_m, 1, &F_tmp, 1, &emlrtECI, (emlrtCTX)sp);
    dir_data[3 * k] = x_data[i];
    dir_data[3 * k + 1] = x_data[i + 1];
    dir_data[3 * k + 2] = x_data[i + 2];
    if ((int32_T)(k + 1U) > dir->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, dir->size[1],
                                    &e_emlrtBCI, (emlrtCTX)sp);
    }
    if ((int32_T)(k + 1U) > cons->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, cons->size[0],
                                    &s_emlrtBCI, (emlrtCTX)sp);
    }
    cons_data[k] = b_norm(*(real_T(*)[3]) & dir_data[3 * k]);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxInit_real_T(sp, &b_F, 1, &q_emlrtRTEI);
  d = 7.0 * M;
  if (d != (int32_T)d) {
    emlrtIntegerCheckR2012b(d, &m_emlrtDCI, (emlrtCTX)sp);
  }
  i = b_F->size[0];
  b_F->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, b_F, i, &q_emlrtRTEI);
  F_data = b_F->data;
  if (d != (int32_T)d) {
    emlrtIntegerCheckR2012b(d, &m_emlrtDCI, (emlrtCTX)sp);
  }
  idx = (int32_T)d;
  for (i = 0; i < idx; i++) {
    F_data[i] = 0.0;
  }
  /*  Cost Function Calculation */
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, M, mxDOUBLE_CLASS, (int32_T)M,
                                &b_emlrtRTEI, (emlrtCTX)sp);
  if (0.0 <= M - 1.0) {
    p = (R < 0.0);
    F_tmp = 6;
  }
  for (k = 0; k < loop_ub_tmp; k++) {
    if ((int32_T)(k + 1U) > yhat->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, yhat->size[1],
                                    &g_emlrtBCI, (emlrtCTX)sp);
    }
    st.site = &b_emlrtRSI;
    EOE2COE(&st, *(real_T(*)[6]) & yhat_data[6 * k], yCOE);
    st.site = &c_emlrtRSI;
    earthNonSphericity(yCOE, DJ2);
    st.site = &d_emlrtRSI;
    /*    RHO_SELECTION function to select the air density taking as input the
     */
    /*    orbital state in classical coordinate and the rho_table, see relative
     */
    /*    script */
    b_st.site = &y_emlrtRSI;
    c_st.site = &p_emlrtRSI;
    d_st.site = &q_emlrtRSI;
    /*  semilatum rectum [km] */
    r = yCOE[0] * (1.0 - yCOE[1] * yCOE[1]) /
        (yCOE[1] * muDoubleScalarCos(yCOE[5]) + 1.0);
    /*  distance from focus in km */
    /* [km] %correction, before it was e+6 */
    /* [km] */
    /*  R = sqrt(r^2+(e*a)^2+2*r*e*a*cos(theta)) % distance from earth */
    /* selection of rho_ */
    b_select = -1;
    idx = 0;
    exitg1 = false;
    while ((!exitg1) && (idx < 27)) {
      if (r - 6378.1 < rho_table[idx + 1]) {
        b_select = idx;
        exitg1 = true;
      } else {
        idx++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
    }
    if (b_select + 1 == 0) {
      b_select = 27;
    }
    st.site = &e_emlrtRSI;
    /*    DRAG returns a vector of perturbations in the spacecraft frame given
     */
    /*    from the aerodynamical drag in kg*km/s^2 taking as input: */
    /*        the air density rho [kg/m^3] */
    /*        the surface S [m^2] */
    /*        the drag coefficient Cd */
    /*        the orbital elements in Classica Coordinate x */
    b_st.site = &ab_emlrtRSI;
    paraorb2rv(yCOE[0], yCOE[1], yCOE[2], yCOE[3], yCOE[4], yCOE[5], b_r, v);
    a = -S * Cd / 2.0 *
        (rho_table[b_select + 28] *
         muDoubleScalarExp(-((r - 6378.1) - rho_table[b_select]) /
                           rho_table[b_select + 56]));
    d = b_norm(b_r);
    v_rel[0] = b_r[1] * v[2] - v[1] * b_r[2];
    v_rel[1] = v[0] * b_r[2] - b_r[0] * v[2];
    v_rel[2] = b_r[0] * v[1] - v[0] * b_r[1];
    v_idx_2 = b_norm(v_rel);
    r = b_r[0] / d;
    ir_idx_0 = r;
    d1 = v_rel[0] / v_idx_2;
    v_rel[0] = d1;
    ir[0] = r;
    ir[2] = d1;
    v_idx_0 = v[0] - (0.0 * b_r[2] - 7.2921E-5 * b_r[1]);
    r = b_r[1] / d;
    ir_idx_1 = r;
    d1 = v_rel[1] / v_idx_2;
    v_rel[1] = d1;
    ir[3] = r;
    ir[5] = d1;
    v_idx_1 = v[1] - (7.2921E-5 * b_r[0] - 0.0 * b_r[2]);
    r = b_r[2] / d;
    d1 = v_rel[2] / v_idx_2;
    ir[6] = r;
    ir[8] = d1;
    v_idx_2 = v[2] - (0.0 * b_r[1] - 0.0 * b_r[0]);
    ir[1] = v_rel[1] * r - ir_idx_1 * d1;
    ir[4] = ir_idx_0 * d1 - v_rel[0] * r;
    ir[7] = v_rel[0] * ir_idx_1 - ir_idx_0 * v_rel[1];
    for (idx = 0; idx < 3; idx++) {
      d = (ir[idx] * v_idx_0 + ir[idx + 3] * v_idx_1) + ir[idx + 6] * v_idx_2;
      b_r[idx] = d * d;
    }
    /*  1000 is a scaling factor since the surface S is given in m^2, the */
    /*  relative velocity v_rel in km/s and the air density in kg/m^3 */
    st.site = &f_emlrtRSI;
    moonDisturbance(&st, yCOE, ((real_T)k + 1.0) * Ts, xp, yp, zp, v_rel);
    if (k + 1 > m->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, m->size[1], &i_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((int32_T)(k + 1U) > m->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, m->size[1],
                                    &t_emlrtBCI, (emlrtCTX)sp);
    }
    v_idx_2 = Tmax / m_data[k] / 1000.0;
    if (k + 1 > dir->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, dir->size[1], &j_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((int32_T)(k + 1U) > u->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, u->size[1], &emlrtBCI,
                                    (emlrtCTX)sp);
    }
    u_data[3 * k] = v_idx_2 * dir_data[3 * k];
    i = 3 * k + 1;
    u_data[i] = v_idx_2 * dir_data[i];
    i1 = 3 * k + 2;
    u_data[i1] = v_idx_2 * dir_data[i1];
    if ((int32_T)(k + 1U) > yhat->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, yhat->size[1],
                                    &l_emlrtBCI, (emlrtCTX)sp);
    }
    if ((int32_T)(k + 1U) > u->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, u->size[1],
                                    &m_emlrtBCI, (emlrtCTX)sp);
    }
    v_idx_2 = m_data[k];
    DJ2[0] =
        u_data[3 * k] + ((DJ2[0] + a * b_r[0] / 1000.0 / v_idx_2) + v_rel[0]);
    DJ2[1] = u_data[i] + ((DJ2[1] + a * b_r[1] / 1000.0 / v_idx_2) + v_rel[1]);
    DJ2[2] = u_data[i1] + ((DJ2[2] + a * b_r[2] / 1000.0 / v_idx_2) + v_rel[2]);
    st.site = &g_emlrtRSI;
    EOEDerivatives(&st, *(real_T(*)[6]) & yhat_data[6 * k], DJ2, yCOE);
    if ((int32_T)(k + 1U) > yhat->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, yhat->size[1],
                                    &k_emlrtBCI, (emlrtCTX)sp);
    }
    if (((int32_T)(k + 2U) < 1) || ((int32_T)(k + 2U) > yhat->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 2U), 1, yhat->size[1],
                                    &n_emlrtBCI, (emlrtCTX)sp);
    }
    for (i = 0; i < 6; i++) {
      yCOE[i] = yhat_data[i + 6 * k] + Ts * yCOE[i];
    }
    for (i = 0; i < 6; i++) {
      yhat_data[i + 6 * (k + 1)] = yCOE[i];
    }
    st.site = &h_emlrtRSI;
    if (p) {
      emlrtErrorWithMessageIdR2018a(
          &st, &e_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    if ((int32_T)(k + 1U) > cons->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, cons->size[0],
                                    &u_emlrtBCI, (emlrtCTX)sp);
    }
    if ((int32_T)(k + 1U) > b_F->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, b_F->size[0],
                                    &v_emlrtBCI, (emlrtCTX)sp);
    }
    F_data[k] = muDoubleScalarSqrt(R) * cons_data[k];
    d = (M + 6.0 * (((real_T)k + 1.0) - 1.0)) + 1.0;
    v_idx_2 = M + 6.0 * ((real_T)k + 1.0);
    if (d > v_idx_2) {
      i = 0;
      i1 = 0;
    } else {
      if (((int32_T)d < 1) || ((int32_T)d > b_F->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, b_F->size[0], &q_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = (int32_T)d - 1;
      if (((int32_T)v_idx_2 < 1) || ((int32_T)v_idx_2 > b_F->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)v_idx_2, 1, b_F->size[0],
                                      &r_emlrtBCI, (emlrtCTX)sp);
      }
      i1 = (int32_T)v_idx_2;
    }
    b_select = i1 - i;
    emlrtSubAssignSizeCheckR2012b(&b_select, 1, &F_tmp, 1, &e_emlrtECI,
                                  (emlrtCTX)sp);
    memcpy(&b_a[0], &Q[0], 36U * sizeof(real_T));
    st.site = &i_emlrtRSI;
    b_sqrt(&st, b_a);
    if ((k + 2 < 1) || (k + 2 > yref->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 2, 1, yref->size[1], &o_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((k + 2 < 1) || (k + 2 > yhat->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 2, 1, yhat->size[1], &p_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (i1 = 0; i1 < 6; i1++) {
      idx = i1 + 6 * (k + 1);
      yCOE[i1] = yref_data[idx] - yhat_data[idx];
    }
    for (i1 = 0; i1 < 6; i1++) {
      d = 0.0;
      for (idx = 0; idx < 6; idx++) {
        d += b_a[i1 + 6 * idx] * yCOE[idx];
      }
      c_a[i1] = d;
    }
    for (i1 = 0; i1 < b_select; i1++) {
      F_data[i + i1] = c_a[i1];
    }
    if (k + 1 < loop_ub_tmp) {
      if ((int32_T)(k + 1U) > m->size[1]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, m->size[1],
                                      &w_emlrtBCI, (emlrtCTX)sp);
      }
      if ((int32_T)(k + 1U) > cons->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, cons->size[0],
                                      &x_emlrtBCI, (emlrtCTX)sp);
      }
      if (((int32_T)(k + 2U) < 1) || ((int32_T)(k + 2U) > m->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 2U), 1, m->size[1],
                                      &y_emlrtBCI, (emlrtCTX)sp);
      }
      m_data[k + 1] = m_data[k] - Ts * cons_data[k] * coeffT;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &dir);
  emxFree_real_T(sp, &u);
  emxInit_real_T(sp, &b_yhat, 2, &r_emlrtRTEI);
  idx = yhat->size[1];
  i = b_yhat->size[0] * b_yhat->size[1];
  b_yhat->size[0] = 1;
  b_yhat->size[1] = yhat->size[1];
  emxEnsureCapacity_real_T(sp, b_yhat, i, &r_emlrtRTEI);
  u_data = b_yhat->data;
  for (i = 0; i < idx; i++) {
    u_data[i] = yhat_data[6 * i + 1];
  }
  emxInit_real_T(sp, &y, 2, &w_emlrtRTEI);
  st.site = &j_emlrtRSI;
  power(&st, b_yhat, y);
  idx = yhat->size[1];
  i = b_yhat->size[0] * b_yhat->size[1];
  b_yhat->size[0] = 1;
  b_yhat->size[1] = yhat->size[1];
  emxEnsureCapacity_real_T(sp, b_yhat, i, &s_emlrtRTEI);
  u_data = b_yhat->data;
  for (i = 0; i < idx; i++) {
    u_data[i] = yhat_data[6 * i + 2];
  }
  st.site = &j_emlrtRSI;
  power(&st, b_yhat, m);
  m_data = m->data;
  if ((y->size[1] != m->size[1]) && ((y->size[1] != 1) && (m->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(y->size[1], m->size[1], &b_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &j_emlrtRSI;
  b_st.site = &lb_emlrtRSI;
  c_st.site = &mb_emlrtRSI;
  idx = yhat->size[1];
  i = b_yhat->size[0] * b_yhat->size[1];
  b_yhat->size[0] = 1;
  b_yhat->size[1] = yhat->size[1];
  emxEnsureCapacity_real_T(&c_st, b_yhat, i, &t_emlrtRTEI);
  u_data = b_yhat->data;
  for (i = 0; i < idx; i++) {
    v_idx_2 = yhat_data[6 * i + 2];
    r = yhat_data[6 * i + 1];
    u_data[i] = muDoubleScalarAtan2(v_idx_2, r);
  }
  if ((yhat->size[1] != b_yhat->size[1]) &&
      ((yhat->size[1] != 1) && (b_yhat->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(yhat->size[1], b_yhat->size[1], &c_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (y->size[1] == m->size[1]) {
    idx = y->size[1] - 1;
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    emxEnsureCapacity_real_T(sp, y, i, &u_emlrtRTEI);
    dir_data = y->data;
    for (i = 0; i <= idx; i++) {
      dir_data[i] += m_data[i];
    }
  } else {
    plus(sp, y, m);
  }
  emxFree_real_T(sp, &m);
  st.site = &j_emlrtRSI;
  c_sqrt(&st, y);
  if (yhat->size[1] == b_yhat->size[1]) {
    idx = yhat->size[1];
    i = b_yhat->size[0] * b_yhat->size[1];
    b_yhat->size[0] = 1;
    b_yhat->size[1] = yhat->size[1];
    emxEnsureCapacity_real_T(sp, b_yhat, i, &v_emlrtRTEI);
    u_data = b_yhat->data;
    for (i = 0; i < idx; i++) {
      u_data[i] = yhat_data[6 * i + 5] - u_data[i];
    }
  } else {
    c_binary_expand_op(sp, b_yhat, yhat);
  }
  st.site = &j_emlrtRSI;
  b_cos(&st, b_yhat);
  u_data = b_yhat->data;
  if ((y->size[1] != b_yhat->size[1]) &&
      ((y->size[1] != 1) && (b_yhat->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(y->size[1], b_yhat->size[1], &d_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &j_emlrtRSI;
  if (y->size[1] == b_yhat->size[1]) {
    idx = y->size[1] - 1;
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    emxEnsureCapacity_real_T(&st, y, i, &w_emlrtRTEI);
    dir_data = y->data;
    for (i = 0; i <= idx; i++) {
      dir_data[i] = dir_data[i] * u_data[i] + 1.0;
    }
  } else {
    b_st.site = &j_emlrtRSI;
    b_binary_expand_op(&b_st, y, b_yhat);
    dir_data = y->data;
  }
  b_st.site = &ob_emlrtRSI;
  idx = yhat->size[1];
  i = b_yhat->size[0] * b_yhat->size[1];
  b_yhat->size[0] = 1;
  b_yhat->size[1] = yhat->size[1];
  emxEnsureCapacity_real_T(&b_st, b_yhat, i, &x_emlrtRTEI);
  u_data = b_yhat->data;
  for (i = 0; i < idx; i++) {
    u_data[i] = yhat_data[6 * i];
  }
  c_st.site = &pb_emlrtRSI;
  assertCompatibleDims(&c_st, b_yhat, y);
  st.site = &j_emlrtRSI;
  emxFree_real_T(&st, &b_yhat);
  emxInit_real_T(&st, &varargin_1, 1, &y_emlrtRTEI);
  if (yhat->size[1] == y->size[1]) {
    idx = yhat->size[1];
    i = varargin_1->size[0];
    varargin_1->size[0] = yhat->size[1];
    emxEnsureCapacity_real_T(&st, varargin_1, i, &y_emlrtRTEI);
    u_data = varargin_1->data;
    for (i = 0; i < idx; i++) {
      u_data[i] = yhat_data[6 * i] / dir_data[i];
    }
  } else {
    b_st.site = &j_emlrtRSI;
    binary_expand_op(&b_st, varargin_1, yhat, y);
    u_data = varargin_1->data;
  }
  emxFree_real_T(&st, &y);
  emxFree_real_T(&st, &yhat);
  b_st.site = &qb_emlrtRSI;
  c_st.site = &rb_emlrtRSI;
  d_st.site = &sb_emlrtRSI;
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &d_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &tb_emlrtRSI;
  f_st.site = &ub_emlrtRSI;
  b_select = varargin_1->size[0];
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
    g_st.site = &wb_emlrtRSI;
    if (!muDoubleScalarIsNaN(u_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &xb_emlrtRSI;
      if (varargin_1->size[0] > 2147483646) {
        i_st.site = &kb_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= b_select)) {
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
      g_st.site = &vb_emlrtRSI;
      r = u_data[idx - 1];
      b_m = idx + 1;
      h_st.site = &yb_emlrtRSI;
      if ((idx + 1 <= varargin_1->size[0]) &&
          (varargin_1->size[0] > 2147483646)) {
        i_st.site = &kb_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = b_m; k <= b_select; k++) {
        d = u_data[k - 1];
        if (r > d) {
          r = d;
        }
      }
    }
  }
  emxFree_real_T(&f_st, &varargin_1);
  st.site = &k_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
  dynamic_size_checks(&b_st, b_F, b_F, b_F->size[0], b_F->size[0]);
  if (b_F->size[0] < 1) {
    v_idx_2 = 0.0;
  } else {
    n_t = (ptrdiff_t)b_F->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    v_idx_2 = ddot(&n_t, &F_data[0], &incx_t, &F_data[0], &incy_t);
  }
  i = J->size[0];
  J->size[0] = (cons->size[0] + b_F->size[0]) + 2;
  emxEnsureCapacity_real_T(sp, J, i, &ab_emlrtRTEI);
  u_data = J->data;
  u_data[0] = v_idx_2;
  u_data[1] = r - 6378.1;
  idx = cons->size[0];
  for (i = 0; i < idx; i++) {
    u_data[i + 2] = 1.0 - cons_data[i];
  }
  idx = b_F->size[0];
  for (i = 0; i < idx; i++) {
    u_data[(i + cons->size[0]) + 2] = F_data[i];
  }
  emxFree_real_T(sp, &b_F);
  emxFree_real_T(sp, &cons);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (NMPC_costDist.c) */
