/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * costGauss.c
 *
 * Code generation for function 'costGauss'
 *
 */

/* Include files */
#include "costGauss.h"
#include "COE2EOE.h"
#include "EOE2COE.h"
#include "assertCompatibleDims.h"
#include "atan2.h"
#include "colon.h"
#include "cos.h"
#include "costGauss_data.h"
#include "costGauss_emxutil.h"
#include "costGauss_types.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "mtimes.h"
#include "power.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    15,          /* lineNo */
    "costGauss", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pathName
                                                                            */
};

static emlrtRSInfo b_emlrtRSI = {
    16,          /* lineNo */
    "costGauss", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pathName
                                                                            */
};

static emlrtRSInfo c_emlrtRSI = {
    18,          /* lineNo */
    "costGauss", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pathName
                                                                            */
};

static emlrtRSInfo d_emlrtRSI = {
    30,          /* lineNo */
    "costGauss", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pathName
                                                                            */
};

static emlrtRSInfo e_emlrtRSI = {
    35,          /* lineNo */
    "costGauss", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pathName
                                                                            */
};

static emlrtRSInfo f_emlrtRSI = {
    38,          /* lineNo */
    "costGauss", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pathName
                                                                            */
};

static emlrtRSInfo g_emlrtRSI = {
    41,          /* lineNo */
    "costGauss", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pathName
                                                                            */
};

static emlrtRSInfo h_emlrtRSI = {
    42,          /* lineNo */
    "costGauss", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pathName
                                                                            */
};

static emlrtRSInfo i_emlrtRSI = {
    44,          /* lineNo */
    "costGauss", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pathName
                                                                            */
};

static emlrtRSInfo j_emlrtRSI = {
    45,          /* lineNo */
    "costGauss", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pathName
                                                                            */
};

static emlrtRSInfo k_emlrtRSI = {
    117,     /* lineNo */
    "colon", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pathName
                                                                          */
};

static emlrtRSInfo
    r_emlrtRSI =
        {
            44,       /* lineNo */
            "mpower", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/matfun/"
            "mpower.m" /* pathName */
};

static emlrtRSInfo u_emlrtRSI =
    {
        23,               /* lineNo */
        "EOEDerivatives", /* fcnName */
        "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/"
        "EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo v_emlrtRSI =
    {
        25,               /* lineNo */
        "EOEDerivatives", /* fcnName */
        "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/"
        "EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo w_emlrtRSI =
    {
        33,               /* lineNo */
        "EOEDerivatives", /* fcnName */
        "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/"
        "EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    34,               /* lineNo */
    "rdivide_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "rdivide_helper.m" /* pathName */
};

static emlrtRSInfo
    fb_emlrtRSI =
        {
            51,    /* lineNo */
            "div", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "div.m" /* pathName */
};

static emlrtRSInfo gb_emlrtRSI = {
    15,    /* lineNo */
    "min", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/min.m" /* pathName
                                                                            */
};

static emlrtRSInfo hb_emlrtRSI = {
    46,         /* lineNo */
    "minOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = {
    92,        /* lineNo */
    "minimum", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo jb_emlrtRSI = {
    204,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = {
    893,                    /* lineNo */
    "minRealVectorOmitNaN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = {
    62,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo mb_emlrtRSI = {
    54,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo nb_emlrtRSI = {
    103,         /* lineNo */
    "findFirst", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = {
    120,                        /* lineNo */
    "minOrMaxRealVectorKernel", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo pb_emlrtRSI = {
    69,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

static emlrtBCInfo
    emlrtBCI =
        {
            -1,          /* iFirst */
            -1,          /* iLast */
            35,          /* lineNo */
            20,          /* colNo */
            "y",         /* aName */
            "costGauss", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/"
            "costGauss.m", /* pName */
            0              /* checkKind */
};

static emlrtBCInfo
    b_emlrtBCI =
        {
            -1,          /* iFirst */
            -1,          /* iLast */
            35,          /* lineNo */
            45,          /* colNo */
            "t",         /* aName */
            "costGauss", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/"
            "costGauss.m", /* pName */
            0              /* checkKind */
};

static emlrtBCInfo
    c_emlrtBCI =
        {
            -1,          /* iFirst */
            -1,          /* iLast */
            35,          /* lineNo */
            52,          /* colNo */
            "y",         /* aName */
            "costGauss", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/"
            "costGauss.m", /* pName */
            0              /* checkKind */
};

static emlrtDCInfo
    emlrtDCI =
        {
            35,          /* lineNo */
            59,          /* colNo */
            "costGauss", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/"
            "costGauss.m", /* pName */
            1              /* checkKind */
};

static emlrtBCInfo
    d_emlrtBCI =
        {
            -1,          /* iFirst */
            -1,          /* iLast */
            35,          /* lineNo */
            59,          /* colNo */
            "u",         /* aName */
            "costGauss", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/"
            "costGauss.m", /* pName */
            0              /* checkKind */
};

static emlrtBCInfo
    e_emlrtBCI =
        {
            -1,          /* iFirst */
            -1,          /* iLast */
            35,          /* lineNo */
            9,           /* colNo */
            "y",         /* aName */
            "costGauss", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/"
            "costGauss.m", /* pName */
            0              /* checkKind */
};

static emlrtBCInfo
    f_emlrtBCI =
        {
            -1,          /* iFirst */
            -1,          /* iLast */
            38,          /* lineNo */
            39,          /* colNo */
            "u",         /* aName */
            "costGauss", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/"
            "costGauss.m", /* pName */
            0              /* checkKind */
};

static emlrtBCInfo
    g_emlrtBCI =
        {
            -1,          /* iFirst */
            -1,          /* iLast */
            38,          /* lineNo */
            57,          /* colNo */
            "y",         /* aName */
            "costGauss", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/"
            "costGauss.m", /* pName */
            0              /* checkKind */
};

static emlrtBCInfo
    h_emlrtBCI =
        {
            -1,          /* iFirst */
            -1,          /* iLast */
            38,          /* lineNo */
            7,           /* colNo */
            "F",         /* aName */
            "costGauss", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/"
            "costGauss.m", /* pName */
            0              /* checkKind */
};

static emlrtBCInfo
    i_emlrtBCI =
        {
            -1,          /* iFirst */
            -1,          /* iLast */
            38,          /* lineNo */
            18,          /* colNo */
            "F",         /* aName */
            "costGauss", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/"
            "costGauss.m", /* pName */
            0              /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,          /* nDims */
    38,          /* lineNo */
    5,           /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

static emlrtBCInfo
    j_emlrtBCI =
        {
            -1,          /* iFirst */
            -1,          /* iLast */
            42,          /* lineNo */
            42,          /* colNo */
            "y",         /* aName */
            "costGauss", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/"
            "costGauss.m", /* pName */
            0              /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    2,           /* nDims */
    44,          /* lineNo */
    26,          /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

static emlrtECInfo c_emlrtECI = {
    2,           /* nDims */
    44,          /* lineNo */
    52,          /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

static emlrtECInfo d_emlrtECI = {
    2,           /* nDims */
    44,          /* lineNo */
    21,          /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

static emlrtBCInfo
    k_emlrtBCI =
        {
            -1,          /* iFirst */
            -1,          /* iLast */
            42,          /* lineNo */
            3,           /* colNo */
            "F",         /* aName */
            "costGauss", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/"
            "costGauss.m", /* pName */
            0              /* checkKind */
};

static emlrtECInfo e_emlrtECI = {
    -1,          /* nDims */
    42,          /* lineNo */
    1,           /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo b_emlrtRTEI = {
    130,             /* lineNo */
    27,              /* colNo */
    "unaryMinOrMax", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pName */
};

static emlrtDCInfo
    b_emlrtDCI =
        {
            20,          /* lineNo */
            13,          /* colNo */
            "costGauss", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/"
            "costGauss.m", /* pName */
            1              /* checkKind */
};

static emlrtDCInfo
    c_emlrtDCI =
        {
            20,          /* lineNo */
            1,           /* colNo */
            "costGauss", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/"
            "costGauss.m", /* pName */
            1              /* checkKind */
};

static emlrtDCInfo
    d_emlrtDCI =
        {
            31,          /* lineNo */
            1,           /* colNo */
            "costGauss", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/"
            "costGauss.m", /* pName */
            1              /* checkKind */
};

static emlrtRTEInfo h_emlrtRTEI = {
    20,          /* lineNo */
    1,           /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo i_emlrtRTEI = {
    31,          /* lineNo */
    1,           /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo j_emlrtRTEI = {
    44,          /* lineNo */
    26,          /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo k_emlrtRTEI = {
    44,          /* lineNo */
    36,          /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo l_emlrtRTEI = {
    44,          /* lineNo */
    65,          /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo m_emlrtRTEI = {
    44,          /* lineNo */
    72,          /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo n_emlrtRTEI = {
    44,          /* lineNo */
    21,          /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo o_emlrtRTEI = {
    44,          /* lineNo */
    48,          /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo p_emlrtRTEI = {
    44,          /* lineNo */
    19,          /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo q_emlrtRTEI = {
    44,          /* lineNo */
    10,          /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo r_emlrtRTEI = {
    44,          /* lineNo */
    9,           /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo s_emlrtRTEI = {
    45,          /* lineNo */
    1,           /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo t_emlrtRTEI = {
    1,           /* lineNo */
    14,          /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo u_emlrtRTEI = {
    117,     /* lineNo */
    9,       /* colNo */
    "colon", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pName
                                                                          */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    44,          /* lineNo */
    52,          /* colNo */
    "costGauss", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC/OrbitPropagator/costGauss.m" /* pName
                                                                            */
};

/* Function Declarations */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *y,
                               const emxArray_real_T *r1);

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *varargin_1,
                             const emxArray_real_T *y,
                             const emxArray_real_T *b_y);

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *r1,
                               const emxArray_real_T *y);

static void plus(const emlrtStack *sp, emxArray_real_T *y,
                 const emxArray_real_T *r1);

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
  emxInit_real_T(sp, &b_y, 2, &p_emlrtRTEI);
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  if (r1->size[1] == 1) {
    b_y->size[1] = y->size[1];
  } else {
    b_y->size[1] = r1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_y, i, &p_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, y, i, &p_emlrtRTEI);
  y_data = y->data;
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    y_data[i] = b_y_data[i];
  }
  emxFree_real_T(sp, &b_y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *varargin_1,
                             const emxArray_real_T *y,
                             const emxArray_real_T *b_y)
{
  const real_T *b_y_data;
  const real_T *y_data;
  real_T *varargin_1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  y_data = b_y->data;
  b_y_data = y->data;
  i = y->size[1];
  stride_0_0 = varargin_1->size[0];
  if (b_y->size[1] == 1) {
    varargin_1->size[0] = i;
  } else {
    varargin_1->size[0] = b_y->size[1];
  }
  emxEnsureCapacity_real_T(sp, varargin_1, stride_0_0, &r_emlrtRTEI);
  varargin_1_data = varargin_1->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (b_y->size[1] != 1);
  if (b_y->size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = b_y->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    varargin_1_data[i] =
        b_y_data[6 * (i * stride_0_0)] / y_data[i * stride_1_0];
  }
}

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *r1,
                               const emxArray_real_T *y)
{
  emxArray_real_T *b_y;
  const real_T *y_data;
  real_T *b_y_data;
  real_T *r;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  y_data = y->data;
  r = r1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_y, 2, &bb_emlrtRTEI);
  i = y->size[1];
  stride_0_1 = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  if (r1->size[1] == 1) {
    b_y->size[1] = i;
  } else {
    b_y->size[1] = r1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_y, stride_0_1, &bb_emlrtRTEI);
  b_y_data = b_y->data;
  stride_0_1 = (i != 1);
  stride_1_1 = (r1->size[1] != 1);
  if (r1->size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = r1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] = y_data[6 * (i * stride_0_1) + 5] - r[i * stride_1_1];
  }
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, r1, i, &bb_emlrtRTEI);
  r = r1->data;
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    r[i] = b_y_data[i];
  }
  emxFree_real_T(sp, &b_y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void plus(const emlrtStack *sp, emxArray_real_T *y,
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
  emxInit_real_T(sp, &b_y, 2, &j_emlrtRTEI);
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  if (r1->size[1] == 1) {
    b_y->size[1] = y->size[1];
  } else {
    b_y->size[1] = r1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_y, i, &j_emlrtRTEI);
  b_y_data = b_y->data;
  stride_0_1 = (y->size[1] != 1);
  stride_1_1 = (r1->size[1] != 1);
  if (r1->size[1] == 1) {
    loop_ub = y->size[1];
  } else {
    loop_ub = r1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] = y_data[i * stride_0_1] + r[i * stride_1_1];
  }
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, y, i, &j_emlrtRTEI);
  y_data = y->data;
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    y_data[i] = b_y_data[i];
  }
  emxFree_real_T(sp, &b_y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void costGauss(const emlrtStack *sp, real_T tmax, real_T Ts, real_T b_y0[6],
               const emxArray_real_T *u, const real_T ybar[6], real_T umax,
               real_T theta0, real_T ratio, emxArray_real_T *J)
{
  static const int8_T iv[6] = {1, 1, 1, 1, 1, 0};
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
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  emxArray_real_T *d_y;
  emxArray_real_T *r;
  emxArray_real_T *r2;
  emxArray_real_T *varargin_1;
  emxArray_real_T *y;
  real_T Q[36];
  real_T d_a[36];
  real_T R[9];
  real_T c_a[9];
  real_T dyinv[6];
  real_T x0[6];
  real_T a[3];
  const real_T *u_data;
  real_T b_a;
  real_T b_w_tmp;
  real_T b_x0_tmp;
  real_T c_w_tmp;
  real_T c_x0_tmp;
  real_T d;
  real_T ku;
  real_T p;
  real_T p_mu05;
  real_T w;
  real_T x0_tmp;
  real_T *F_data;
  real_T *J_data;
  real_T *b_y_data;
  real_T *r1;
  real_T *y_data;
  int32_T b_u;
  int32_T d_x0_tmp;
  int32_T e_x0_tmp;
  int32_T idx;
  int32_T k;
  int32_T last;
  int32_T t_size_idx_1;
  int32_T w_tmp;
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
  u_data = u->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* COST Function calculates the cost of the orbital maneuvre considering */
  /*    arbitrary defined weigthed sums. The cost takes into account both the */
  /*    state error and the input magnitude. In addition, an hard constraint on
   */
  /*    the maximum value of the input has been considered. */
  /*    As inputs, the function needs: */
  /*        tmax: final instant of the maneuvre */
  /*        Ts: time step of the discrete system */
  /*        y0: initial condition vector */
  /*        u: input vector */
  /*        ybar: desired state vector */
  /*        umax: maximum value for inputs */
  st.site = &emlrtRSI;
  emxInit_real_T(&st, &r, 2, &u_emlrtRTEI);
  if (muDoubleScalarIsNaN(Ts) || muDoubleScalarIsNaN(tmax)) {
    t_size_idx_1 = 1;
  } else if ((Ts == 0.0) || ((0.0 < tmax) && (Ts < 0.0)) ||
             ((tmax < 0.0) && (Ts > 0.0))) {
    t_size_idx_1 = 0;
  } else if (muDoubleScalarIsInf(tmax) &&
             (muDoubleScalarIsInf(Ts) || (0.0 == tmax))) {
    t_size_idx_1 = 1;
  } else if (muDoubleScalarIsInf(Ts)) {
    t_size_idx_1 = 1;
  } else if (muDoubleScalarFloor(Ts) == Ts) {
    t_size_idx_1 = (int32_T)muDoubleScalarFloor(tmax / Ts) + 1;
  } else {
    b_st.site = &k_emlrtRSI;
    eml_float_colon(&b_st, Ts, tmax, r);
    t_size_idx_1 = r->size[1];
  }
  emxInit_real_T(&st, &y, 2, &h_emlrtRTEI);
  /*  Time vector */
  st.site = &b_emlrtRSI;
  EOE2COE(&st, b_y0, x0);
  x0[5] = theta0;
  st.site = &c_emlrtRSI;
  COE2EOE(x0, b_y0);
  /*  y0(6) = y0(6)+theta0; */
  w_tmp = y->size[0] * y->size[1];
  y->size[0] = 6;
  emxEnsureCapacity_real_T(sp, y, w_tmp, &h_emlrtRTEI);
  d = t_size_idx_1 + 1;
  if ((real_T)t_size_idx_1 + 1.0 != d) {
    emlrtIntegerCheckR2012b((real_T)t_size_idx_1 + 1.0, &b_emlrtDCI,
                            (emlrtCTX)sp);
  }
  w_tmp = y->size[0] * y->size[1];
  y->size[1] = t_size_idx_1 + 1;
  emxEnsureCapacity_real_T(sp, y, w_tmp, &h_emlrtRTEI);
  y_data = y->data;
  if ((real_T)t_size_idx_1 + 1.0 != d) {
    emlrtIntegerCheckR2012b((real_T)t_size_idx_1 + 1.0, &c_emlrtDCI,
                            (emlrtCTX)sp);
  }
  last = 6 * (t_size_idx_1 + 1);
  for (w_tmp = 0; w_tmp < last; w_tmp++) {
    y_data[w_tmp] = 0.0;
  }
  /*  Initialization of vector state */
  /*  Set initial conditions */
  /*  J = 0; % Initialization of cost function */
  /*  Weights Definition */
  for (k = 0; k < 6; k++) {
    d = b_y0[k];
    y_data[k] = d;
    dyinv[k] = muDoubleScalarAbs(d - ybar[k]);
  }
  for (last = 0; last < 6; last++) {
    d = dyinv[last];
    d = (real_T)(d != 0.0) / (d + (real_T)(d == 0.0));
    dyinv[last] = d;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  for (k = 0; k < 6; k++) {
    d = dyinv[k];
    x0[k] = (real_T)iv[k] * (d * d);
  }
  diag(x0, Q);
  st.site = &d_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  p = umax * umax;
  a[0] = 1.0 / p;
  a[1] = 1.0 / p;
  a[2] = 1.0 / p;
  b_diag(a, R);
  for (w_tmp = 0; w_tmp < 9; w_tmp++) {
    R[w_tmp] *= 0.1;
  }
  emxInit_real_T(sp, &F, 1, &i_emlrtRTEI);
  if (u->size[1] == 0) {
    b_u = 0;
  } else {
    b_u = muIntScalarMax_sint32(3, u->size[1]);
  }
  d = 9.0 * (real_T)b_u + 6.0;
  if (d != (int32_T)d) {
    emlrtIntegerCheckR2012b(d, &d_emlrtDCI, (emlrtCTX)sp);
  }
  w_tmp = F->size[0];
  F->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, F, w_tmp, &i_emlrtRTEI);
  F_data = F->data;
  if (d != (int32_T)d) {
    emlrtIntegerCheckR2012b(d, &d_emlrtDCI, (emlrtCTX)sp);
  }
  last = (int32_T)d;
  for (w_tmp = 0; w_tmp < last; w_tmp++) {
    F_data[w_tmp] = 0.0;
  }
  /*  Cost Function Calculation */
  for (k = 0; k < t_size_idx_1; k++) {
    ku = muDoubleScalarCeil(((real_T)k + 1.0) / ratio);
    if ((k + 1 < 1) || (k + 1 > t_size_idx_1)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, t_size_idx_1, &b_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &e_emlrtRSI;
    if ((k + 1 < 1) || (k + 1 > y->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &c_emlrtBCI, &st);
    }
    if (ku != (int32_T)ku) {
      emlrtIntegerCheckR2012b(ku, &emlrtDCI, &st);
    }
    if (((int32_T)ku < 1) || ((int32_T)ku > u->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ku, 1, u->size[1], &d_emlrtBCI,
                                    &st);
    }
    /*  Equinoctial Orbital Elements */
    p = y_data[6 * k];
    if (y_data[6 * k] < 0.0) {
      p = -y_data[6 * k];
      /*      warning('p became negative. Switched to absolute value for
       * calculations'); */
    }
    /*  Accelerations */
    /*  Definition of useful values */
    last = 6 * k + 5;
    b_w_tmp = muDoubleScalarSin(y_data[last]);
    c_w_tmp = muDoubleScalarCos(y_data[last]);
    idx = 6 * k + 1;
    w_tmp = 6 * k + 2;
    w = (y_data[idx] * c_w_tmp + 1.0) + y_data[w_tmp] * b_w_tmp;
    /*  r = p/w; */
    b_st.site = &u_emlrtRSI;
    c_st.site = &r_emlrtRSI;
    d_st.site = &s_emlrtRSI;
    b_st.site = &u_emlrtRSI;
    c_st.site = &r_emlrtRSI;
    d_st.site = &s_emlrtRSI;
    /*  alpha2 = h^2-k^2; */
    p_mu05 = p / 398600.0;
    b_st.site = &v_emlrtRSI;
    if (p_mu05 < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &d_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    p_mu05 = muDoubleScalarSqrt(p_mu05);
    /*  State Derivative Calculation */
    b_st.site = &w_emlrtRSI;
    b_a = w / p;
    c_st.site = &r_emlrtRSI;
    d_st.site = &s_emlrtRSI;
    d = 398600.0 * p;
    b_st.site = &w_emlrtRSI;
    if (d < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &d_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    d = muDoubleScalarSqrt(d);
    if ((k + 1 < 1) || (k + 1 > y->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_u = 3 * ((int32_T)ku - 1);
    x0_tmp = u_data[b_u + 1];
    x0[0] = Ts * (2.0 * p / w * p_mu05 * x0_tmp);
    b_x0_tmp = u_data[b_u];
    c_x0_tmp = u_data[b_u + 2];
    d_x0_tmp = 6 * k + 3;
    e_x0_tmp = 6 * k + 4;
    x0[1] = Ts * (p_mu05 *
                  ((b_x0_tmp * b_w_tmp +
                    ((w + 1.0) * c_w_tmp + y_data[idx]) * x0_tmp / w) -
                   (y_data[d_x0_tmp] * b_w_tmp - y_data[e_x0_tmp] * c_w_tmp) *
                       y_data[w_tmp] * c_x0_tmp / w));
    x0[2] =
        Ts * (p_mu05 * ((-b_x0_tmp * c_w_tmp +
                         ((w + 1.0) * b_w_tmp + y_data[w_tmp]) * x0_tmp / w) +
                        (y_data[d_x0_tmp] * muDoubleScalarSin(y_data[last]) -
                         y_data[e_x0_tmp] * muDoubleScalarCos(y_data[last])) *
                            y_data[w_tmp] * u_data[b_u + 2] / w));
    p = p_mu05 *
        ((y_data[d_x0_tmp] * y_data[d_x0_tmp] + 1.0) +
         y_data[e_x0_tmp] * y_data[e_x0_tmp]) *
        c_x0_tmp / 2.0 / w;
    x0[3] = Ts * (p * c_w_tmp);
    x0[4] = Ts * (p * b_w_tmp);
    x0[5] = Ts * (d * (b_a * b_a) +
                  p_mu05 / w *
                      (y_data[d_x0_tmp] * muDoubleScalarSin(y_data[last]) -
                       y_data[e_x0_tmp] * muDoubleScalarCos(y_data[last])) *
                      c_x0_tmp);
    if (((int32_T)(k + 2U) < 1) || ((int32_T)(k + 2U) > y->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 2U), 1, y->size[1],
                                    &e_emlrtBCI, (emlrtCTX)sp);
    }
    for (w_tmp = 0; w_tmp < 6; w_tmp++) {
      x0[w_tmp] += y_data[w_tmp + 6 * k];
    }
    for (w_tmp = 0; w_tmp < 6; w_tmp++) {
      y_data[w_tmp + 6 * (k + 1)] = x0[w_tmp];
    }
    /*      J = J + u(:,k)'*R*u(:,k) +
     * (y(:,k+1)-ybar)'*Q*(y(:,k+1)-ybar)*(k/10); */
    if ((real_T)k + 1.0 == ratio * ku) {
      d = 9.0 * (ku - 1.0) + 1.0;
      p = 9.0 * ku;
      if (d > p) {
        w_tmp = 0;
        last = 0;
      } else {
        if (((int32_T)d < 1) || ((int32_T)d > F->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, F->size[0], &h_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        w_tmp = (int32_T)d - 1;
        if (((int32_T)p < 1) || ((int32_T)p > F->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)p, 1, F->size[0], &i_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        last = (int32_T)p;
      }
      last -= w_tmp;
      if (last != 9) {
        emlrtSubAssignSizeCheck1dR2017a(last, 9, &emlrtECI, (emlrtCTX)sp);
      }
      memcpy(&c_a[0], &R[0], 9U * sizeof(real_T));
      st.site = &f_emlrtRSI;
      b_sqrt(&st, c_a);
      if (((int32_T)ku < 1) || ((int32_T)ku > u->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)ku, 1, u->size[1], &f_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      memcpy(&d_a[0], &Q[0], 36U * sizeof(real_T));
      st.site = &f_emlrtRSI;
      c_sqrt(d_a);
      if (((int32_T)(((real_T)k + 1.0) + 1.0) < 1) ||
          ((int32_T)(((real_T)k + 1.0) + 1.0) > y->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(((real_T)k + 1.0) + 1.0), 1,
                                      y->size[1], &g_emlrtBCI, (emlrtCTX)sp);
      }
      p = 100.0 * ((real_T)k + 1.0) / (real_T)t_size_idx_1;
      st.site = &f_emlrtRSI;
      if (p < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &st, &d_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      p = muDoubleScalarSqrt(p);
      for (last = 0; last < 3; last++) {
        a[last] = (c_a[last] * b_x0_tmp + c_a[last + 3] * x0_tmp) +
                  c_a[last + 6] * c_x0_tmp;
      }
      for (last = 0; last < 6; last++) {
        dyinv[last] = y_data[last + 6 * (k + 1)] - ybar[last];
      }
      for (last = 0; last < 6; last++) {
        d = 0.0;
        for (idx = 0; idx < 6; idx++) {
          d += d_a[last + 6 * idx] * dyinv[idx];
        }
        x0[last] = d;
      }
      F_data[w_tmp] = a[0];
      F_data[w_tmp + 1] = a[1];
      F_data[w_tmp + 2] = a[2];
      for (last = 0; last < 6; last++) {
        F_data[(w_tmp + last) + 3] = x0[last] * p;
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  d = u->size[1];
  st.site = &g_emlrtRSI;
  if (d < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &d_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  d = muDoubleScalarSqrt(d);
  last = F->size[0];
  for (w_tmp = 0; w_tmp < last; w_tmp++) {
    F_data[w_tmp] /= d;
  }
  if (u->size[1] == 0) {
    b_u = 0;
  } else {
    b_u = muIntScalarMax_sint32(3, u->size[1]);
  }
  d = 9.0 * (real_T)b_u + 1.0;
  if (d > F->size[0]) {
    w_tmp = -1;
    last = -1;
  } else {
    w_tmp = (int32_T)d;
    if (w_tmp > F->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, F->size[0], &k_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    w_tmp -= 2;
    last = F->size[0] - 1;
  }
  last -= w_tmp;
  if (last != 6) {
    emlrtSubAssignSizeCheck1dR2017a(last, 6, &e_emlrtECI, (emlrtCTX)sp);
  }
  st.site = &h_emlrtRSI;
  c_sqrt(Q);
  if (y->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(y->size[1], 1, y->size[1], &j_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  for (last = 0; last < 6; last++) {
    dyinv[last] = y_data[last + 6 * (y->size[1] - 1)] - ybar[last];
  }
  for (last = 0; last < 6; last++) {
    d = 0.0;
    for (idx = 0; idx < 6; idx++) {
      d += 10.0 * Q[last + 6 * idx] * dyinv[idx];
    }
    x0[last] = d;
  }
  for (last = 0; last < 6; last++) {
    F_data[(w_tmp + last) + 1] = x0[last] * 10.0;
  }
  emxInit_real_T(sp, &b_y, 2, &j_emlrtRTEI);
  /*  J = J/size(u,2) + 1e3*length(t)/10*(y(:,end)-ybar)'*Q*(y(:,end)-ybar); */
  last = y->size[1];
  w_tmp = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, b_y, w_tmp, &j_emlrtRTEI);
  J_data = b_y->data;
  for (w_tmp = 0; w_tmp < last; w_tmp++) {
    J_data[w_tmp] = y_data[6 * w_tmp + 1];
  }
  emxInit_real_T(sp, &c_y, 2, &p_emlrtRTEI);
  st.site = &i_emlrtRSI;
  power(&st, b_y, c_y);
  last = y->size[1];
  w_tmp = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, b_y, w_tmp, &k_emlrtRTEI);
  J_data = b_y->data;
  for (w_tmp = 0; w_tmp < last; w_tmp++) {
    J_data[w_tmp] = y_data[6 * w_tmp + 2];
  }
  st.site = &i_emlrtRSI;
  power(&st, b_y, r);
  r1 = r->data;
  if ((c_y->size[1] != r->size[1]) &&
      ((c_y->size[1] != 1) && (r->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(c_y->size[1], r->size[1], &b_emlrtECI,
                                (emlrtCTX)sp);
  }
  last = y->size[1];
  w_tmp = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, b_y, w_tmp, &l_emlrtRTEI);
  J_data = b_y->data;
  for (w_tmp = 0; w_tmp < last; w_tmp++) {
    J_data[w_tmp] = y_data[6 * w_tmp + 2];
  }
  emxInit_real_T(sp, &d_y, 2, &m_emlrtRTEI);
  last = y->size[1];
  w_tmp = d_y->size[0] * d_y->size[1];
  d_y->size[0] = 1;
  d_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, d_y, w_tmp, &m_emlrtRTEI);
  J_data = d_y->data;
  for (w_tmp = 0; w_tmp < last; w_tmp++) {
    J_data[w_tmp] = y_data[6 * w_tmp + 1];
  }
  emxInit_real_T(sp, &r2, 2, &t_emlrtRTEI);
  st.site = &i_emlrtRSI;
  b_atan2(&st, b_y, d_y, r2);
  emxFree_real_T(sp, &d_y);
  if ((y->size[1] != r2->size[1]) &&
      ((y->size[1] != 1) && (r2->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(y->size[1], r2->size[1], &c_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (c_y->size[1] == r->size[1]) {
    last = c_y->size[1] - 1;
    w_tmp = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    emxEnsureCapacity_real_T(sp, c_y, w_tmp, &n_emlrtRTEI);
    b_y_data = c_y->data;
    for (w_tmp = 0; w_tmp <= last; w_tmp++) {
      b_y_data[w_tmp] += r1[w_tmp];
    }
  } else {
    plus(sp, c_y, r);
  }
  emxFree_real_T(sp, &r);
  st.site = &i_emlrtRSI;
  d_sqrt(&st, c_y);
  if (y->size[1] == r2->size[1]) {
    last = y->size[1];
    w_tmp = r2->size[0] * r2->size[1];
    r2->size[0] = 1;
    r2->size[1] = y->size[1];
    emxEnsureCapacity_real_T(sp, r2, w_tmp, &o_emlrtRTEI);
    r1 = r2->data;
    for (w_tmp = 0; w_tmp < last; w_tmp++) {
      r1[w_tmp] = y_data[6 * w_tmp + 5] - r1[w_tmp];
    }
  } else {
    c_binary_expand_op(sp, r2, y);
  }
  st.site = &i_emlrtRSI;
  b_cos(&st, r2);
  r1 = r2->data;
  if ((c_y->size[1] != r2->size[1]) &&
      ((c_y->size[1] != 1) && (r2->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(c_y->size[1], r2->size[1], &d_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &i_emlrtRSI;
  if (c_y->size[1] == r2->size[1]) {
    last = c_y->size[1] - 1;
    w_tmp = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    emxEnsureCapacity_real_T(&st, c_y, w_tmp, &p_emlrtRTEI);
    b_y_data = c_y->data;
    for (w_tmp = 0; w_tmp <= last; w_tmp++) {
      b_y_data[w_tmp] = b_y_data[w_tmp] * r1[w_tmp] + 1.0;
    }
  } else {
    b_st.site = &i_emlrtRSI;
    b_binary_expand_op(&b_st, c_y, r2);
    b_y_data = c_y->data;
  }
  emxFree_real_T(&st, &r2);
  b_st.site = &eb_emlrtRSI;
  last = y->size[1];
  w_tmp = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, b_y, w_tmp, &q_emlrtRTEI);
  J_data = b_y->data;
  for (w_tmp = 0; w_tmp < last; w_tmp++) {
    J_data[w_tmp] = y_data[6 * w_tmp];
  }
  c_st.site = &fb_emlrtRSI;
  assertCompatibleDims(&c_st, b_y, c_y);
  st.site = &i_emlrtRSI;
  emxFree_real_T(&st, &b_y);
  emxInit_real_T(&st, &varargin_1, 1, &r_emlrtRTEI);
  if (y->size[1] == c_y->size[1]) {
    last = y->size[1];
    w_tmp = varargin_1->size[0];
    varargin_1->size[0] = y->size[1];
    emxEnsureCapacity_real_T(&st, varargin_1, w_tmp, &r_emlrtRTEI);
    J_data = varargin_1->data;
    for (w_tmp = 0; w_tmp < last; w_tmp++) {
      J_data[w_tmp] = y_data[6 * w_tmp] / b_y_data[w_tmp];
    }
  } else {
    b_st.site = &i_emlrtRSI;
    binary_expand_op(&b_st, varargin_1, y, c_y);
    J_data = varargin_1->data;
  }
  emxFree_real_T(&st, &c_y);
  emxFree_real_T(&st, &y);
  b_st.site = &gb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  d_st.site = &ib_emlrtRSI;
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &jb_emlrtRSI;
  f_st.site = &kb_emlrtRSI;
  last = varargin_1->size[0];
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      p = J_data[0];
    } else if ((J_data[0] > J_data[1]) || (muDoubleScalarIsNaN(J_data[0]) &&
                                           (!muDoubleScalarIsNaN(J_data[1])))) {
      p = J_data[1];
    } else {
      p = J_data[0];
    }
  } else {
    g_st.site = &mb_emlrtRSI;
    if (!muDoubleScalarIsNaN(J_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &nb_emlrtRSI;
      if (varargin_1->size[0] > 2147483646) {
        i_st.site = &n_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(J_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      p = J_data[0];
    } else {
      g_st.site = &lb_emlrtRSI;
      p = J_data[idx - 1];
      w_tmp = idx + 1;
      h_st.site = &ob_emlrtRSI;
      if ((idx + 1 <= varargin_1->size[0]) &&
          (varargin_1->size[0] > 2147483646)) {
        i_st.site = &n_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = w_tmp; k <= last; k++) {
        d = J_data[k - 1];
        if (p > d) {
          p = d;
        }
      }
    }
  }
  emxFree_real_T(&f_st, &varargin_1);
  st.site = &j_emlrtRSI;
  b_st.site = &pb_emlrtRSI;
  w_tmp = J->size[0];
  J->size[0] = F->size[0] + 2;
  emxEnsureCapacity_real_T(sp, J, w_tmp, &s_emlrtRTEI);
  J_data = J->data;
  J_data[0] = mtimes(F, F);
  J_data[1] = p - 6378.1;
  last = F->size[0];
  for (w_tmp = 0; w_tmp < last; w_tmp++) {
    J_data[w_tmp + 2] = F_data[w_tmp];
  }
  emxFree_real_T(sp, &F);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (costGauss.c) */
