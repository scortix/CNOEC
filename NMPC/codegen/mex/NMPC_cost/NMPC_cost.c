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
#include "NMPC_cost_data.h"
#include "NMPC_cost_emxutil.h"
#include "NMPC_cost_types.h"
#include "assertCompatibleDims.h"
#include "atan2.h"
#include "cos.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "indexShapeCheck.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    28,                                                     /* lineNo */
    "NMPC_cost",                                            /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    36,                                                     /* lineNo */
    "NMPC_cost",                                            /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    37,                                                     /* lineNo */
    "NMPC_cost",                                            /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    38,                                                     /* lineNo */
    "NMPC_cost",                                            /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    44,                                                     /* lineNo */
    "NMPC_cost",                                            /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    45,                                                     /* lineNo */
    "NMPC_cost",                                            /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    29,                                                          /* lineNo */
    "EOEDerivatives",                                            /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    30,                                                          /* lineNo */
    "EOEDerivatives",                                            /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    38,                                                          /* lineNo */
    "EOEDerivatives",                                            /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                       */
};

static emlrtRSInfo l_emlrtRSI = {
    71,                                                           /* lineNo */
    "power",                                                      /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName */
};

static emlrtRSInfo w_emlrtRSI =
    {
        34,               /* lineNo */
        "rdivide_helper", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
        "helper.m" /* pathName */
};

static emlrtRSInfo x_emlrtRSI = {
    51,    /* lineNo */
    "div", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" /* pathName
                                                                       */
};

static emlrtRSInfo y_emlrtRSI = {
    15,    /* lineNo */
    "min", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" /* pathName
                                                                     */
};

static emlrtRSInfo ab_emlrtRSI = {
    46,         /* lineNo */
    "minOrMax", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                            */
};

static emlrtRSInfo bb_emlrtRSI = {
    92,        /* lineNo */
    "minimum", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                            */
};

static emlrtRSInfo cb_emlrtRSI =
    {
        209,             /* lineNo */
        "unaryMinOrMax", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo db_emlrtRSI =
    {
        898,                    /* lineNo */
        "minRealVectorOmitNaN", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    72,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo fb_emlrtRSI = {
    64,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo gb_emlrtRSI = {
    113,         /* lineNo */
    "findFirst", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo hb_emlrtRSI = {
    130,                        /* lineNo */
    "minOrMaxRealVectorKernel", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI =
    {
        69,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper."
        "m" /* pathName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    35,                                                      /* lineNo */
    9,                                                       /* colNo */
    "u",                                                     /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = {
    27,                                                     /* lineNo */
    9,                                                      /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    28,                                                      /* lineNo */
    18,                                                      /* colNo */
    "x",                                                     /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    28,                                                      /* lineNo */
    28,                                                      /* colNo */
    "x",                                                     /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    28,                                                      /* lineNo */
    11,                                                      /* colNo */
    "dir",                                                   /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,                                                     /* nDims */
    28,                                                     /* lineNo */
    5,                                                      /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    29,                                                      /* lineNo */
    26,                                                      /* colNo */
    "dir",                                                   /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = {
    34,                                                     /* lineNo */
    9,                                                      /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    25,                                                      /* lineNo */
    19,                                                      /* colNo */
    "m",                                                     /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    35,                                                      /* lineNo */
    34,                                                      /* colNo */
    "dir",                                                   /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    21,                                                      /* lineNo */
    8,                                                       /* colNo */
    "yhat",                                                  /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    36,                                                      /* lineNo */
    26,                                                      /* colNo */
    "yhat",                                                  /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    36,                                                      /* lineNo */
    56,                                                      /* colNo */
    "yhat",                                                  /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    36,                                                      /* lineNo */
    63,                                                      /* colNo */
    "u",                                                     /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    36,                                                      /* lineNo */
    12,                                                      /* colNo */
    "yhat",                                                  /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    38,                                                      /* lineNo */
    46,                                                      /* colNo */
    "yref",                                                  /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    38,                                                      /* lineNo */
    58,                                                      /* colNo */
    "yhat",                                                  /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    2,                                                      /* nDims */
    44,                                                     /* lineNo */
    29,                                                     /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtECInfo c_emlrtECI = {
    2,                                                      /* nDims */
    44,                                                     /* lineNo */
    61,                                                     /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtECInfo d_emlrtECI = {
    2,                                                      /* nDims */
    44,                                                     /* lineNo */
    24,                                                     /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    38,                                                      /* lineNo */
    7,                                                       /* colNo */
    "F",                                                     /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    38,                                                      /* lineNo */
    19,                                                      /* colNo */
    "F",                                                     /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtECInfo e_emlrtECI = {
    -1,                                                     /* nDims */
    38,                                                     /* lineNo */
    5,                                                      /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI =
    {
        135,             /* lineNo */
        27,              /* colNo */
        "unaryMinOrMax", /* fName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\unaryMinOrMax.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    20,                                                      /* lineNo */
    16,                                                      /* colNo */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    1                                                        /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    20,                                                      /* lineNo */
    16,                                                      /* colNo */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    4                                                        /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    22,                                                      /* lineNo */
    13,                                                      /* colNo */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    1                                                        /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    22,                                                      /* lineNo */
    13,                                                      /* colNo */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    4                                                        /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    23,                                                      /* lineNo */
    15,                                                      /* colNo */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    1                                                        /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    25,                                                      /* lineNo */
    13,                                                      /* colNo */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    1                                                        /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    20,                                                      /* lineNo */
    1,                                                       /* colNo */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    1                                                        /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    20,                                                      /* lineNo */
    1,                                                       /* colNo */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    4                                                        /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    22,                                                      /* lineNo */
    1,                                                       /* colNo */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    1                                                        /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    23,                                                      /* lineNo */
    1,                                                       /* colNo */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    1                                                        /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    24,                                                      /* lineNo */
    14,                                                      /* colNo */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    1                                                        /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    25,                                                      /* lineNo */
    1,                                                       /* colNo */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    1                                                        /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    32,                                                      /* lineNo */
    1,                                                       /* colNo */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    1                                                        /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    35,                                                      /* lineNo */
    21,                                                      /* colNo */
    "m",                                                     /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    29,                                                      /* lineNo */
    10,                                                      /* colNo */
    "cons",                                                  /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    37,                                                      /* lineNo */
    27,                                                      /* colNo */
    "cons",                                                  /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    37,                                                      /* lineNo */
    7,                                                       /* colNo */
    "F",                                                     /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    40,                                                      /* lineNo */
    20,                                                      /* colNo */
    "m",                                                     /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    40,                                                      /* lineNo */
    33,                                                      /* colNo */
    "cons",                                                  /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    40,                                                      /* lineNo */
    11,                                                      /* colNo */
    "m",                                                     /* aName */
    "NMPC_cost",                                             /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtRTEInfo l_emlrtRTEI = {
    20,                                                     /* lineNo */
    1,                                                      /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo m_emlrtRTEI = {
    22,                                                     /* lineNo */
    1,                                                      /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo n_emlrtRTEI = {
    23,                                                     /* lineNo */
    1,                                                      /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo o_emlrtRTEI = {
    24,                                                     /* lineNo */
    8,                                                      /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo p_emlrtRTEI = {
    25,                                                     /* lineNo */
    1,                                                      /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI = {
    32,                                                     /* lineNo */
    1,                                                      /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo r_emlrtRTEI = {
    44,                                                     /* lineNo */
    29,                                                     /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo s_emlrtRTEI = {
    44,                                                     /* lineNo */
    42,                                                     /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo t_emlrtRTEI = {
    44,                                                     /* lineNo */
    77,                                                     /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI = {
    44,                                                     /* lineNo */
    87,                                                     /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI = {
    44,                                                     /* lineNo */
    24,                                                     /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI = {
    44,                                                     /* lineNo */
    57,                                                     /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI = {
    44,                                                     /* lineNo */
    22,                                                     /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI = {
    44,                                                     /* lineNo */
    10,                                                     /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    44,                                                     /* lineNo */
    9,                                                      /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    45,                                                     /* lineNo */
    1,                                                      /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    24,                                                     /* lineNo */
    1,                                                      /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    1,                                                      /* lineNo */
    14,                                                     /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    44,                                                     /* lineNo */
    61,                                                     /* colNo */
    "NMPC_cost",                                            /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\NMPC\\NMPC_cost.m" /* pName */
};

/* Function Declarations */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2);

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             const emxArray_real_T *in2,
                             const emxArray_real_T *in3);

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2);

static void plus(const emlrtStack *sp, emxArray_real_T *in1,
                 const emxArray_real_T *in2);

/* Function Definitions */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
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
  emxInit_real_T(sp, &b_in1, 2, &x_emlrtRTEI);
  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = 1;
  if (in2->size[1] == 1) {
    b_in1->size[1] = in1->size[1];
  } else {
    b_in1->size[1] = in2->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &x_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, in1, i, &x_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[1];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in1_data[i];
  }
  emxFree_real_T(sp, &b_in1);
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
  emxEnsureCapacity_real_T(sp, in1, stride_0_0, &ab_emlrtRTEI);
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

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
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
  emxInit_real_T(sp, &b_in2, 2, &gb_emlrtRTEI);
  i = in2->size[1];
  stride_0_1 = b_in2->size[0] * b_in2->size[1];
  b_in2->size[0] = 1;
  if (in1->size[1] == 1) {
    b_in2->size[1] = i;
  } else {
    b_in2->size[1] = in1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in2, stride_0_1, &gb_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, in1, i, &gb_emlrtRTEI);
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
  emxInit_real_T(sp, &b_in1, 2, &r_emlrtRTEI);
  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = 1;
  if (in2->size[1] == 1) {
    b_in1->size[1] = in1->size[1];
  } else {
    b_in1->size[1] = in2->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &r_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, in1, i, &r_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[1];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in1_data[i];
  }
  emxFree_real_T(sp, &b_in1);
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
  emxArray_real_T *b_F;
  emxArray_real_T *b_yhat;
  emxArray_real_T *c_yhat;
  emxArray_real_T *cons;
  emxArray_real_T *dir;
  emxArray_real_T *m;
  emxArray_real_T *r;
  emxArray_real_T *u;
  emxArray_real_T *varargin_1;
  emxArray_real_T *y;
  emxArray_real_T *yhat;
  real_T a[36];
  const real_T *x_data;
  const real_T *yref_data;
  real_T absxk;
  real_T b_y;
  real_T scale;
  real_T t;
  real_T *F_data;
  real_T *cons_data;
  real_T *dir_data;
  real_T *m_data;
  real_T *u_data;
  real_T *yhat_data;
  int32_T F[2];
  int32_T F_tmp;
  int32_T i;
  int32_T i1;
  int32_T idx;
  int32_T k;
  int32_T last;
  int32_T loop_ub_tmp;
  int32_T w_tmp;
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
  /*    NMPC_COST Function calculates the cost of the orbital maneuvre
   * considering */
  /*    arbitrary defined weigthed sums. The cost takes into account both the */
  /*    state error and the input magnitude. In addition, an hard constraint on
   */
  /*    the maximum value of the input has been considered. */
  /*    As inputs, the function needs: */
  /*        M:      prediction horizon */
  /*        Ts:     time step of the discrete system */
  /*        x:      optimization variables 3*M */
  /*        y0:     initial condition vector (zEOE state) */
  /*        yref:   desired state vector evolution (zEOE trajectory) */
  /*        Q:      state trajectory weights 6x6 */
  /*        R:      fuel consumption weight */
  /*        m0:     initial mass */
  /*        Tmax:   maximum Thrust */
  /*  t = 0:Ts:Ts*M; % Time vector */
  i = yhat->size[0] * yhat->size[1];
  yhat->size[0] = 6;
  emxEnsureCapacity_real_T(sp, yhat, i, &l_emlrtRTEI);
  if (!(M + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(M + 1.0, &b_emlrtDCI, (emlrtCTX)sp);
  }
  absxk = (int32_T)muDoubleScalarFloor(M + 1.0);
  if (M + 1.0 != absxk) {
    emlrtIntegerCheckR2012b(M + 1.0, &emlrtDCI, (emlrtCTX)sp);
  }
  i = yhat->size[0] * yhat->size[1];
  yhat->size[1] = (int32_T)(M + 1.0);
  emxEnsureCapacity_real_T(sp, yhat, i, &l_emlrtRTEI);
  yhat_data = yhat->data;
  if (!(M + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(M + 1.0, &h_emlrtDCI, (emlrtCTX)sp);
  }
  if (M + 1.0 != absxk) {
    emlrtIntegerCheckR2012b(M + 1.0, &g_emlrtDCI, (emlrtCTX)sp);
  }
  last = 6 * (int32_T)(M + 1.0);
  for (i = 0; i < last; i++) {
    yhat_data[i] = 0.0;
  }
  /*  Initialization of state vectors */
  if ((int32_T)(M + 1.0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)(M + 1.0), &h_emlrtBCI,
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
  last = 3 * (int32_T)M;
  for (i1 = 0; i1 < last; i1++) {
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
  last = 3 * (int32_T)M;
  for (i1 = 0; i1 < last; i1++) {
    dir_data[i1] = 0.0;
  }
  /*  Initialization of direction vector */
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(M, &k_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &cons, 1, &cb_emlrtRTEI);
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
  if (M < 1.0) {
    emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)M, &f_emlrtBCI, (emlrtCTX)sp);
  }
  m_data[0] = m0;
  /*  Initialization of mass */
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, M, mxDOUBLE_CLASS, (int32_T)M,
                                &emlrtRTEI, (emlrtCTX)sp);
  if (M - 1.0 >= 0.0) {
    F[0] = 1;
    idx = 3;
  }
  for (k = 0; k < loop_ub_tmp; k++) {
    absxk = 3.0 * (((real_T)k + 1.0) - 1.0) + 1.0;
    scale = 3.0 * ((real_T)k + 1.0);
    if (absxk > scale) {
      i = 0;
      i1 = 0;
    } else {
      if (((int32_T)absxk < 1) || ((int32_T)absxk > x->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)absxk, 1, x->size[0],
                                      &b_emlrtBCI, (emlrtCTX)sp);
      }
      i = (int32_T)absxk - 1;
      if (((int32_T)scale < 1) || ((int32_T)scale > x->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)scale, 1, x->size[0],
                                      &c_emlrtBCI, (emlrtCTX)sp);
      }
      i1 = (int32_T)scale;
    }
    F_tmp = i1 - i;
    F[1] = F_tmp;
    st.site = &emlrtRSI;
    indexShapeCheck(&st, x->size[0], F);
    if (k + 1 > dir->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, dir->size[1], &d_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    emlrtSubAssignSizeCheckR2012b(&idx, 1, &F_tmp, 1, &emlrtECI, (emlrtCTX)sp);
    dir_data[3 * k] = x_data[i];
    i1 = 3 * k + 1;
    dir_data[i1] = x_data[i + 1];
    last = 3 * k + 2;
    dir_data[last] = x_data[i + 2];
    if (k + 1 > dir->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, dir->size[1], &e_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    scale = 3.3121686421112381E-170;
    absxk = muDoubleScalarAbs(dir_data[3 * k]);
    if (absxk > 3.3121686421112381E-170) {
      b_y = 1.0;
      scale = absxk;
    } else {
      t = absxk / 3.3121686421112381E-170;
      b_y = t * t;
    }
    absxk = muDoubleScalarAbs(dir_data[i1]);
    if (absxk > scale) {
      t = scale / absxk;
      b_y = b_y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      b_y += t * t;
    }
    absxk = muDoubleScalarAbs(dir_data[last]);
    if (absxk > scale) {
      t = scale / absxk;
      b_y = b_y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      b_y += t * t;
    }
    if ((int32_T)(k + 1U) > cons->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, cons->size[0],
                                    &r_emlrtBCI, (emlrtCTX)sp);
    }
    cons_data[k] = scale * muDoubleScalarSqrt(b_y);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxInit_real_T(sp, &b_F, 1, &q_emlrtRTEI);
  absxk = 7.0 * M;
  if (absxk != (int32_T)absxk) {
    emlrtIntegerCheckR2012b(absxk, &m_emlrtDCI, (emlrtCTX)sp);
  }
  i = b_F->size[0];
  b_F->size[0] = (int32_T)absxk;
  emxEnsureCapacity_real_T(sp, b_F, i, &q_emlrtRTEI);
  F_data = b_F->data;
  if (absxk != (int32_T)absxk) {
    emlrtIntegerCheckR2012b(absxk, &m_emlrtDCI, (emlrtCTX)sp);
  }
  last = (int32_T)absxk;
  for (i = 0; i < last; i++) {
    F_data[i] = 0.0;
  }
  /*  Cost Function Calculation */
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, M, mxDOUBLE_CLASS, (int32_T)M,
                                &b_emlrtRTEI, (emlrtCTX)sp);
  if (M - 1.0 >= 0.0) {
    p = (R < 0.0);
    F_tmp = 6;
  }
  for (k = 0; k < loop_ub_tmp; k++) {
    real_T b_Ts[6];
    real_T b_a[6];
    real_T c_Ts_tmp;
    real_T p_mu05;
    real_T w;
    int32_T Ts_tmp;
    int32_T b_Ts_tmp;
    if ((int32_T)(k + 1U) > m->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, m->size[1],
                                    &q_emlrtBCI, (emlrtCTX)sp);
    }
    scale = Tmax / m_data[k] / 1000.0;
    if (k + 1 > dir->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, dir->size[1], &g_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((int32_T)(k + 1U) > u->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, u->size[1], &emlrtBCI,
                                    (emlrtCTX)sp);
    }
    u_data[3 * k] = scale * dir_data[3 * k];
    i = 3 * k + 1;
    u_data[i] = scale * dir_data[i];
    i1 = 3 * k + 2;
    u_data[i1] = scale * dir_data[i1];
    st.site = &b_emlrtRSI;
    if (k + 1 > yhat->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, yhat->size[1], &j_emlrtBCI, &st);
    }
    if (k + 1 > u->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, u->size[1], &k_emlrtBCI, &st);
    }
    /* EOEDerivatives Compute the derivative of the EOE state */
    /*  */
    /*    Inputs: */
    /*        - Time (Unused but necessary for built-in ode integration) */
    /*        - State vector */
    /*        - Acceleration vector */
    /*        - Planetary constant (for Earth use 398600) */
    /*  Equinoctial Orbital Elements */
    absxk = yhat_data[6 * k];
    if (yhat_data[6 * k] < 0.0) {
      absxk = -yhat_data[6 * k];
    }
    /*  Accelerations */
    /*  Definition of useful values */
    last = 6 * k + 5;
    t = muDoubleScalarSin(yhat_data[last]);
    b_y = muDoubleScalarCos(yhat_data[last]);
    idx = 6 * k + 1;
    w_tmp = 6 * k + 2;
    w = (yhat_data[idx] * b_y + 1.0) + yhat_data[w_tmp] * t;
    b_st.site = &h_emlrtRSI;
    c_st.site = &k_emlrtRSI;
    d_st.site = &l_emlrtRSI;
    b_st.site = &h_emlrtRSI;
    c_st.site = &k_emlrtRSI;
    d_st.site = &l_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    p_mu05 = muDoubleScalarSqrt(absxk / 398600.0);
    /*  State Derivative Calculation */
    b_st.site = &j_emlrtRSI;
    scale = w / absxk;
    c_st.site = &k_emlrtRSI;
    d_st.site = &l_emlrtRSI;
    b_st.site = &j_emlrtRSI;
    if ((int32_T)(k + 1U) > yhat->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, yhat->size[1],
                                    &i_emlrtBCI, (emlrtCTX)sp);
    }
    b_Ts[0] = Ts * (2.0 * absxk / w * p_mu05 * u_data[i]);
    Ts_tmp = 6 * k + 3;
    b_Ts_tmp = 6 * k + 4;
    b_Ts[1] =
        Ts * (p_mu05 * ((u_data[3 * k] * t +
                         ((w + 1.0) * b_y + yhat_data[idx]) * u_data[i] / w) -
                        (yhat_data[Ts_tmp] * t - yhat_data[b_Ts_tmp] * b_y) *
                            yhat_data[w_tmp] * u_data[i1] / w));
    b_Ts[2] =
        Ts *
        (p_mu05 * ((-u_data[3 * k] * b_y +
                    ((w + 1.0) * t + yhat_data[w_tmp]) * u_data[i] / w) +
                   (yhat_data[Ts_tmp] * muDoubleScalarSin(yhat_data[last]) -
                    yhat_data[b_Ts_tmp] * muDoubleScalarCos(yhat_data[last])) *
                       yhat_data[w_tmp] * u_data[i1] / w));
    c_Ts_tmp = p_mu05 *
               ((yhat_data[Ts_tmp] * yhat_data[Ts_tmp] + 1.0) +
                yhat_data[b_Ts_tmp] * yhat_data[b_Ts_tmp]) *
               u_data[i1] / 2.0 / w;
    b_Ts[3] = Ts * (c_Ts_tmp * b_y);
    b_Ts[4] = Ts * (c_Ts_tmp * t);
    b_Ts[5] =
        Ts * (muDoubleScalarSqrt(398600.0 * absxk) * (scale * scale) +
              p_mu05 / w *
                  (yhat_data[Ts_tmp] * muDoubleScalarSin(yhat_data[last]) -
                   yhat_data[b_Ts_tmp] * muDoubleScalarCos(yhat_data[last])) *
                  u_data[i1]);
    if (((int32_T)(k + 2U) < 1) || ((int32_T)(k + 2U) > yhat->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 2U), 1, yhat->size[1],
                                    &l_emlrtBCI, (emlrtCTX)sp);
    }
    for (i = 0; i < 6; i++) {
      b_Ts[i] += yhat_data[i + 6 * k];
    }
    for (i = 0; i < 6; i++) {
      yhat_data[i + 6 * (k + 1)] = b_Ts[i];
    }
    st.site = &c_emlrtRSI;
    if (p) {
      emlrtErrorWithMessageIdR2018a(
          &st, &e_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    if ((int32_T)(k + 1U) > cons->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, cons->size[0],
                                    &s_emlrtBCI, (emlrtCTX)sp);
    }
    if ((int32_T)(k + 1U) > b_F->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, b_F->size[0],
                                    &t_emlrtBCI, (emlrtCTX)sp);
    }
    F_data[k] = muDoubleScalarSqrt(R) * cons_data[k];
    absxk = (M + 6.0 * (((real_T)k + 1.0) - 1.0)) + 1.0;
    scale = M + 6.0 * ((real_T)k + 1.0);
    if (absxk > scale) {
      i = 0;
      i1 = 0;
    } else {
      if (((int32_T)absxk < 1) || ((int32_T)absxk > b_F->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)absxk, 1, b_F->size[0],
                                      &o_emlrtBCI, (emlrtCTX)sp);
      }
      i = (int32_T)absxk - 1;
      if (((int32_T)scale < 1) || ((int32_T)scale > b_F->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)scale, 1, b_F->size[0],
                                      &p_emlrtBCI, (emlrtCTX)sp);
      }
      i1 = (int32_T)scale;
    }
    last = i1 - i;
    emlrtSubAssignSizeCheckR2012b(&last, 1, &F_tmp, 1, &e_emlrtECI,
                                  (emlrtCTX)sp);
    memcpy(&a[0], &Q[0], 36U * sizeof(real_T));
    st.site = &d_emlrtRSI;
    b_sqrt(&st, a);
    if ((k + 2 < 1) || (k + 2 > yref->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 2, 1, yref->size[1], &m_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((k + 2 < 1) || (k + 2 > yhat->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 2, 1, yhat->size[1], &n_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (i1 = 0; i1 < 6; i1++) {
      Ts_tmp = i1 + 6 * (k + 1);
      b_Ts[i1] = yref_data[Ts_tmp] - yhat_data[Ts_tmp];
    }
    for (i1 = 0; i1 < 6; i1++) {
      absxk = 0.0;
      for (idx = 0; idx < 6; idx++) {
        absxk += a[i1 + 6 * idx] * b_Ts[idx];
      }
      b_a[i1] = absxk;
    }
    for (i1 = 0; i1 < last; i1++) {
      F_data[i + i1] = b_a[i1];
    }
    if (k + 1 < loop_ub_tmp) {
      if ((int32_T)(k + 1U) > m->size[1]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, m->size[1],
                                      &u_emlrtBCI, (emlrtCTX)sp);
      }
      if ((int32_T)(k + 1U) > cons->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, cons->size[0],
                                      &v_emlrtBCI, (emlrtCTX)sp);
      }
      if (((int32_T)(k + 2U) < 1) || ((int32_T)(k + 2U) > m->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 2U), 1, m->size[1],
                                      &w_emlrtBCI, (emlrtCTX)sp);
      }
      m_data[k + 1] = m_data[k] - Ts * cons_data[k] * coeffT;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &dir);
  emxFree_real_T(sp, &u);
  emxInit_real_T(sp, &y, 2, &x_emlrtRTEI);
  st.site = &e_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  last = yhat->size[1];
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = yhat->size[1];
  emxEnsureCapacity_real_T(&b_st, y, i, &r_emlrtRTEI);
  dir_data = y->data;
  for (i = 0; i < last; i++) {
    scale = yhat_data[6 * i + 1];
    dir_data[i] = scale * scale;
  }
  st.site = &e_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  last = yhat->size[1];
  i = m->size[0] * m->size[1];
  m->size[0] = 1;
  m->size[1] = yhat->size[1];
  emxEnsureCapacity_real_T(&b_st, m, i, &s_emlrtRTEI);
  m_data = m->data;
  for (i = 0; i < last; i++) {
    scale = yhat_data[6 * i + 2];
    m_data[i] = scale * scale;
  }
  if ((y->size[1] != m->size[1]) && ((y->size[1] != 1) && (m->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(y->size[1], m->size[1], &b_emlrtECI,
                                (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &b_yhat, 2, &t_emlrtRTEI);
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
  emxInit_real_T(sp, &r, 2, &db_emlrtRTEI);
  st.site = &e_emlrtRSI;
  b_atan2(&st, b_yhat, c_yhat, r);
  emxFree_real_T(sp, &c_yhat);
  if ((yhat->size[1] != r->size[1]) &&
      ((yhat->size[1] != 1) && (r->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(yhat->size[1], r->size[1], &c_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (y->size[1] == m->size[1]) {
    last = y->size[1] - 1;
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    emxEnsureCapacity_real_T(sp, y, i, &v_emlrtRTEI);
    dir_data = y->data;
    for (i = 0; i <= last; i++) {
      dir_data[i] += m_data[i];
    }
  } else {
    plus(sp, y, m);
  }
  emxFree_real_T(sp, &m);
  st.site = &e_emlrtRSI;
  c_sqrt(&st, y);
  if (yhat->size[1] == r->size[1]) {
    last = yhat->size[1];
    i = r->size[0] * r->size[1];
    r->size[0] = 1;
    r->size[1] = yhat->size[1];
    emxEnsureCapacity_real_T(sp, r, i, &w_emlrtRTEI);
    u_data = r->data;
    for (i = 0; i < last; i++) {
      u_data[i] = yhat_data[6 * i + 5] - u_data[i];
    }
  } else {
    c_binary_expand_op(sp, r, yhat);
  }
  st.site = &e_emlrtRSI;
  b_cos(&st, r);
  u_data = r->data;
  if ((y->size[1] != r->size[1]) && ((y->size[1] != 1) && (r->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(y->size[1], r->size[1], &d_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &e_emlrtRSI;
  if (y->size[1] == r->size[1]) {
    last = y->size[1] - 1;
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    emxEnsureCapacity_real_T(&st, y, i, &x_emlrtRTEI);
    dir_data = y->data;
    for (i = 0; i <= last; i++) {
      dir_data[i] = dir_data[i] * u_data[i] + 1.0;
    }
  } else {
    b_st.site = &e_emlrtRSI;
    b_binary_expand_op(&b_st, y, r);
    dir_data = y->data;
  }
  emxFree_real_T(&st, &r);
  b_st.site = &w_emlrtRSI;
  last = yhat->size[1];
  i = b_yhat->size[0] * b_yhat->size[1];
  b_yhat->size[0] = 1;
  b_yhat->size[1] = yhat->size[1];
  emxEnsureCapacity_real_T(&b_st, b_yhat, i, &y_emlrtRTEI);
  u_data = b_yhat->data;
  for (i = 0; i < last; i++) {
    u_data[i] = yhat_data[6 * i];
  }
  c_st.site = &x_emlrtRSI;
  assertCompatibleDims(&c_st, b_yhat, y);
  st.site = &e_emlrtRSI;
  emxFree_real_T(&st, &b_yhat);
  emxInit_real_T(&st, &varargin_1, 1, &ab_emlrtRTEI);
  if (yhat->size[1] == y->size[1]) {
    last = yhat->size[1];
    i = varargin_1->size[0];
    varargin_1->size[0] = yhat->size[1];
    emxEnsureCapacity_real_T(&st, varargin_1, i, &ab_emlrtRTEI);
    u_data = varargin_1->data;
    for (i = 0; i < last; i++) {
      u_data[i] = yhat_data[6 * i] / dir_data[i];
    }
  } else {
    b_st.site = &e_emlrtRSI;
    binary_expand_op(&b_st, varargin_1, yhat, y);
    u_data = varargin_1->data;
  }
  emxFree_real_T(&st, &y);
  emxFree_real_T(&st, &yhat);
  b_st.site = &y_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  d_st.site = &bb_emlrtRSI;
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &d_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &cb_emlrtRSI;
  f_st.site = &db_emlrtRSI;
  last = varargin_1->size[0];
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      scale = u_data[0];
    } else if ((u_data[0] > u_data[1]) || (muDoubleScalarIsNaN(u_data[0]) &&
                                           (!muDoubleScalarIsNaN(u_data[1])))) {
      scale = u_data[1];
    } else {
      scale = u_data[0];
    }
  } else {
    g_st.site = &fb_emlrtRSI;
    if (!muDoubleScalarIsNaN(u_data[0])) {
      idx = 1;
    } else {
      boolean_T exitg1;
      idx = 0;
      h_st.site = &gb_emlrtRSI;
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
      scale = u_data[0];
    } else {
      g_st.site = &eb_emlrtRSI;
      scale = u_data[idx - 1];
      w_tmp = idx + 1;
      h_st.site = &hb_emlrtRSI;
      if ((idx + 1 <= varargin_1->size[0]) &&
          (varargin_1->size[0] > 2147483646)) {
        i_st.site = &o_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = w_tmp; k <= last; k++) {
        absxk = u_data[k - 1];
        if (scale > absxk) {
          scale = absxk;
        }
      }
    }
  }
  emxFree_real_T(&f_st, &varargin_1);
  st.site = &f_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  dynamic_size_checks(&b_st, b_F, b_F, b_F->size[0], b_F->size[0]);
  i = J->size[0];
  J->size[0] = (cons->size[0] + b_F->size[0]) + 2;
  emxEnsureCapacity_real_T(sp, J, i, &bb_emlrtRTEI);
  u_data = J->data;
  u_data[0] = mtimes(b_F, b_F);
  u_data[1] = scale - 6378.1;
  last = cons->size[0];
  for (i = 0; i < last; i++) {
    u_data[i + 2] = 1.0 - cons_data[i];
  }
  last = b_F->size[0];
  for (i = 0; i < last; i++) {
    u_data[(i + cons->size[0]) + 2] = F_data[i];
  }
  emxFree_real_T(sp, &b_F);
  emxFree_real_T(sp, &cons);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (NMPC_cost.c) */
