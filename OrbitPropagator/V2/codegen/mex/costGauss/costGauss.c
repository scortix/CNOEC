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
#include "EOE2COE.h"
#include "assertCompatibleDims.h"
#include "atan2.h"
#include "colon.h"
#include "cos.h"
#include "costGauss_data.h"
#include "costGauss_emxutil.h"
#include "costGauss_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    15,          /* lineNo */
    "costGauss", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pathName
                                                                            */
};

static emlrtRSInfo b_emlrtRSI = {
    16,          /* lineNo */
    "costGauss", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pathName
                                                                            */
};

static emlrtRSInfo c_emlrtRSI = {
    18,          /* lineNo */
    "costGauss", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pathName
                                                                            */
};

static emlrtRSInfo d_emlrtRSI = {
    35,          /* lineNo */
    "costGauss", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pathName
                                                                            */
};

static emlrtRSInfo e_emlrtRSI = {
    44,          /* lineNo */
    "costGauss", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pathName
                                                                            */
};

static emlrtRSInfo f_emlrtRSI = {
    45,          /* lineNo */
    "costGauss", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pathName
                                                                            */
};

static emlrtRSInfo g_emlrtRSI = {
    125,                                                          /* lineNo */
    "colon",                                                      /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                       */
};

static emlrtRSInfo o_emlrtRSI = {
    71,                                                           /* lineNo */
    "power",                                                      /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    38,        /* lineNo */
    "COE2EOE", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\COE2EOE.m" /* pathName
                                                                          */
};

static emlrtRSInfo q_emlrtRSI =
    {
        23,               /* lineNo */
        "EOEDerivatives", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI =
    {
        25,               /* lineNo */
        "EOEDerivatives", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo s_emlrtRSI =
    {
        33,               /* lineNo */
        "EOEDerivatives", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo db_emlrtRSI =
    {
        34,               /* lineNo */
        "rdivide_helper", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
        "helper.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    51,    /* lineNo */
    "div", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" /* pathName
                                                                       */
};

static emlrtRSInfo fb_emlrtRSI = {
    15,    /* lineNo */
    "min", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" /* pathName
                                                                     */
};

static emlrtRSInfo gb_emlrtRSI = {
    46,         /* lineNo */
    "minOrMax", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                            */
};

static emlrtRSInfo hb_emlrtRSI = {
    92,        /* lineNo */
    "minimum", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                            */
};

static emlrtRSInfo ib_emlrtRSI =
    {
        209,             /* lineNo */
        "unaryMinOrMax", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo jb_emlrtRSI =
    {
        898,                    /* lineNo */
        "minRealVectorOmitNaN", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = {
    72,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = {
    64,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo mb_emlrtRSI = {
    113,         /* lineNo */
    "findFirst", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo nb_emlrtRSI = {
    130,                        /* lineNo */
    "minOrMaxRealVectorKernel", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRTEInfo b_emlrtRTEI =
    {
        135,             /* lineNo */
        27,              /* colNo */
        "unaryMinOrMax", /* fName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\unaryMinOrMax.m" /* pName */
};

static emlrtBCInfo
    emlrtBCI =
        {
            -1,          /* iFirst */
            -1,          /* iLast */
            45,          /* lineNo */
            29,          /* colNo */
            "y",         /* aName */
            "costGauss", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\costGauss.m", /* pName */
            0                                            /* checkKind */
};

static emlrtECInfo emlrtECI = {
    2,           /* nDims */
    44,          /* lineNo */
    21,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pName
                                                                            */
};

static emlrtECInfo b_emlrtECI = {
    2,           /* nDims */
    44,          /* lineNo */
    52,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pName
                                                                            */
};

static emlrtECInfo c_emlrtECI = {
    2,           /* nDims */
    44,          /* lineNo */
    26,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pName
                                                                            */
};

static emlrtBCInfo
    b_emlrtBCI =
        {
            -1,          /* iFirst */
            -1,          /* iLast */
            35,          /* lineNo */
            9,           /* colNo */
            "y",         /* aName */
            "costGauss", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\costGauss.m", /* pName */
            0                                            /* checkKind */
};

static emlrtBCInfo
    c_emlrtBCI =
        {
            -1,          /* iFirst */
            -1,          /* iLast */
            35,          /* lineNo */
            59,          /* colNo */
            "u",         /* aName */
            "costGauss", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\costGauss.m", /* pName */
            0                                            /* checkKind */
};

static emlrtDCInfo
    emlrtDCI =
        {
            35,          /* lineNo */
            59,          /* colNo */
            "costGauss", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\costGauss.m", /* pName */
            1                                            /* checkKind */
};

static emlrtBCInfo
    d_emlrtBCI =
        {
            -1,          /* iFirst */
            -1,          /* iLast */
            35,          /* lineNo */
            52,          /* colNo */
            "y",         /* aName */
            "costGauss", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\costGauss.m", /* pName */
            0                                            /* checkKind */
};

static emlrtBCInfo
    e_emlrtBCI =
        {
            -1,          /* iFirst */
            -1,          /* iLast */
            35,          /* lineNo */
            45,          /* colNo */
            "t",         /* aName */
            "costGauss", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\costGauss.m", /* pName */
            0                                            /* checkKind */
};

static emlrtBCInfo
    f_emlrtBCI =
        {
            -1,          /* iFirst */
            -1,          /* iLast */
            35,          /* lineNo */
            20,          /* colNo */
            "y",         /* aName */
            "costGauss", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\costGauss.m", /* pName */
            0                                            /* checkKind */
};

static emlrtDCInfo
    b_emlrtDCI =
        {
            20,          /* lineNo */
            13,          /* colNo */
            "costGauss", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\costGauss.m", /* pName */
            1                                            /* checkKind */
};

static emlrtDCInfo
    c_emlrtDCI =
        {
            20,          /* lineNo */
            1,           /* colNo */
            "costGauss", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\costGauss.m", /* pName */
            1                                            /* checkKind */
};

static emlrtRTEInfo h_emlrtRTEI = {
    20,          /* lineNo */
    1,           /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo i_emlrtRTEI = {
    44,          /* lineNo */
    26,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo j_emlrtRTEI = {
    44,          /* lineNo */
    36,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo k_emlrtRTEI = {
    44,          /* lineNo */
    65,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo l_emlrtRTEI = {
    44,          /* lineNo */
    72,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo m_emlrtRTEI = {
    44,          /* lineNo */
    21,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo n_emlrtRTEI = {
    44,          /* lineNo */
    48,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo o_emlrtRTEI = {
    44,          /* lineNo */
    19,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo p_emlrtRTEI = {
    44,          /* lineNo */
    10,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo q_emlrtRTEI = {
    44,          /* lineNo */
    9,           /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo r_emlrtRTEI = {
    1,           /* lineNo */
    14,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pName
                                                                            */
};

static emlrtRTEInfo s_emlrtRTEI = {
    125,                                                          /* lineNo */
    9,                                                            /* colNo */
    "colon",                                                      /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI = {
    44,          /* lineNo */
    52,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\costGauss.m" /* pName
                                                                            */
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
  emxInit_real_T(sp, &b_in1, 2, &o_emlrtRTEI);
  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = 1;
  if (in2->size[1] == 1) {
    b_in1->size[1] = in1->size[1];
  } else {
    b_in1->size[1] = in2->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &o_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, in1, i, &o_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, in1, stride_0_0, &q_emlrtRTEI);
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
  emxInit_real_T(sp, &b_in2, 2, &w_emlrtRTEI);
  i = in2->size[1];
  stride_0_1 = b_in2->size[0] * b_in2->size[1];
  b_in2->size[0] = 1;
  if (in1->size[1] == 1) {
    b_in2->size[1] = i;
  } else {
    b_in2->size[1] = in1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in2, stride_0_1, &w_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, in1, i, &w_emlrtRTEI);
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
  emxInit_real_T(sp, &b_in1, 2, &i_emlrtRTEI);
  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = 1;
  if (in2->size[1] == 1) {
    b_in1->size[1] = in1->size[1];
  } else {
    b_in1->size[1] = in2->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &i_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, in1, i, &i_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[1];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in1_data[i];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void costGauss(const emlrtStack *sp, real_T tmax, real_T Ts, real_T b_y0[6],
               const emxArray_real_T *u, const real_T ybar[6], real_T umax,
               real_T theta0, real_T ratio, real_T J[8])
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
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  emxArray_real_T *d_y;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *varargin_1;
  emxArray_real_T *y;
  real_T Q[36];
  real_T dyinv[6];
  real_T x0[6];
  real_T b[5];
  const real_T *u_data;
  real_T ku;
  real_T p;
  real_T *b_y_data;
  real_T *c_y_data;
  real_T *varargin_1_data;
  real_T *y_data;
  int32_T c_w_tmp;
  int32_T idx;
  int32_T k;
  int32_T last;
  int32_T t_size_idx_1;
  (void)umax;
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
  emxInit_real_T(&st, &r, 2, &s_emlrtRTEI);
  if (muDoubleScalarIsNaN(Ts) || muDoubleScalarIsNaN(tmax)) {
    t_size_idx_1 = 1;
  } else if ((Ts == 0.0) || ((tmax > 0.0) && (Ts < 0.0)) ||
             ((tmax < 0.0) && (Ts > 0.0))) {
    t_size_idx_1 = 0;
  } else if (muDoubleScalarIsInf(tmax) && muDoubleScalarIsInf(Ts)) {
    t_size_idx_1 = 1;
  } else if (muDoubleScalarIsInf(Ts)) {
    t_size_idx_1 = 1;
  } else if (muDoubleScalarFloor(Ts) == Ts) {
    t_size_idx_1 = (int32_T)(tmax / Ts) + 1;
  } else {
    b_st.site = &g_emlrtRSI;
    eml_float_colon(&b_st, Ts, tmax, r);
    t_size_idx_1 = r->size[1];
  }
  emxInit_real_T(&st, &y, 2, &h_emlrtRTEI);
  /*  Time vector */
  st.site = &b_emlrtRSI;
  EOE2COE(&st, b_y0, x0);
  st.site = &c_emlrtRSI;
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
  b_st.site = &p_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  d_st.site = &o_emlrtRSI;
  ku = muDoubleScalarTan(x0[2] / 2.0);
  b_y0[0] = x0[0] * (1.0 - x0[1] * x0[1]);
  p = x0[3] + x0[4];
  b_y0[1] = x0[1] * muDoubleScalarCos(p);
  b_y0[2] = x0[1] * muDoubleScalarSin(p);
  b_y0[3] = muDoubleScalarCos(x0[3]) * ku;
  b_y0[4] = muDoubleScalarSin(x0[3]) * ku;
  b_y0[5] = p + theta0;
  /*  y0(6) = y0(6)+theta0; */
  idx = y->size[0] * y->size[1];
  y->size[0] = 6;
  emxEnsureCapacity_real_T(sp, y, idx, &h_emlrtRTEI);
  ku = t_size_idx_1 + 1;
  if ((real_T)t_size_idx_1 + 1.0 != ku) {
    emlrtIntegerCheckR2012b((real_T)t_size_idx_1 + 1.0, &b_emlrtDCI,
                            (emlrtCTX)sp);
  }
  idx = y->size[0] * y->size[1];
  y->size[1] = t_size_idx_1 + 1;
  emxEnsureCapacity_real_T(sp, y, idx, &h_emlrtRTEI);
  y_data = y->data;
  if ((real_T)t_size_idx_1 + 1.0 != ku) {
    emlrtIntegerCheckR2012b((real_T)t_size_idx_1 + 1.0, &c_emlrtDCI,
                            (emlrtCTX)sp);
  }
  last = 6 * (t_size_idx_1 + 1);
  for (idx = 0; idx < last; idx++) {
    y_data[idx] = 0.0;
  }
  /*  Initialization of vector state */
  /*  Set initial conditions */
  /*  J = 0; % Initialization of cost function */
  /*  Weights Definition */
  for (k = 0; k < 6; k++) {
    ku = b_y0[k];
    y_data[k] = ku;
    dyinv[k] = muDoubleScalarAbs(ku - ybar[k]);
  }
  for (last = 0; last < 6; last++) {
    ku = dyinv[last];
    ku = (real_T)(ku != 0.0) / (ku + (real_T)(ku == 0.0));
    dyinv[last] = ku;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  for (k = 0; k < 6; k++) {
    ku = dyinv[k];
    x0[k] = (real_T)iv[k] * (ku * ku);
  }
  memset(&Q[0], 0, 36U * sizeof(real_T));
  for (last = 0; last < 6; last++) {
    Q[last + 6 * last] = x0[last];
  }
  /*  R = diag([1 1 1]/umax^2)*0.1; */
  /*  F = zeros(9*length(u)+6,1);  */
  /*  Cost Function Calculation */
  for (k = 0; k < t_size_idx_1; k++) {
    real_T a;
    real_T b_w_tmp;
    real_T p_mu05;
    real_T w;
    real_T w_tmp;
    real_T x;
    real_T x0_tmp;
    int32_T b_x0_tmp;
    int32_T c_x0_tmp;
    int32_T x0_tmp_tmp;
    ku = muDoubleScalarCeil(((real_T)k + 1.0) / ratio);
    if ((k + 1 < 1) || (k + 1 > t_size_idx_1)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, t_size_idx_1, &e_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &d_emlrtRSI;
    if ((k + 1 < 1) || (k + 1 > y->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &d_emlrtBCI, &st);
    }
    if (ku != (int32_T)ku) {
      emlrtIntegerCheckR2012b(ku, &emlrtDCI, &st);
    }
    if (((int32_T)ku < 1) || ((int32_T)ku > u->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ku, 1, u->size[1], &c_emlrtBCI,
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
    w_tmp = muDoubleScalarSin(y_data[last]);
    b_w_tmp = muDoubleScalarCos(y_data[last]);
    idx = 6 * k + 1;
    c_w_tmp = 6 * k + 2;
    w = (y_data[idx] * b_w_tmp + 1.0) + y_data[c_w_tmp] * w_tmp;
    /*  r = p/w; */
    b_st.site = &q_emlrtRSI;
    c_st.site = &n_emlrtRSI;
    d_st.site = &o_emlrtRSI;
    b_st.site = &q_emlrtRSI;
    c_st.site = &n_emlrtRSI;
    d_st.site = &o_emlrtRSI;
    /*  alpha2 = h^2-k^2; */
    b_st.site = &r_emlrtRSI;
    x = p / 398600.0;
    if (x < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    p_mu05 = muDoubleScalarSqrt(x);
    /*  State Derivative Calculation */
    b_st.site = &s_emlrtRSI;
    a = w / p;
    c_st.site = &n_emlrtRSI;
    d_st.site = &o_emlrtRSI;
    b_st.site = &s_emlrtRSI;
    x = 398600.0 * p;
    if (x < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    if ((k + 1 < 1) || (k + 1 > y->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &f_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    x0_tmp_tmp = 3 * ((int32_T)ku - 1);
    x0_tmp = u_data[x0_tmp_tmp + 1];
    x0[0] = Ts * (2.0 * p / w * p_mu05 * x0_tmp);
    ku = u_data[x0_tmp_tmp];
    p = u_data[x0_tmp_tmp + 2];
    b_x0_tmp = 6 * k + 3;
    c_x0_tmp = 6 * k + 4;
    x0[1] =
        Ts * (p_mu05 *
              ((ku * w_tmp + ((w + 1.0) * b_w_tmp + y_data[idx]) * x0_tmp / w) -
               (y_data[b_x0_tmp] * w_tmp - y_data[c_x0_tmp] * b_w_tmp) *
                   y_data[c_w_tmp] * p / w));
    x0[2] =
        Ts * (p_mu05 * ((-ku * b_w_tmp +
                         ((w + 1.0) * w_tmp + y_data[c_w_tmp]) * x0_tmp / w) +
                        (y_data[b_x0_tmp] * muDoubleScalarSin(y_data[last]) -
                         y_data[c_x0_tmp] * muDoubleScalarCos(y_data[last])) *
                            y_data[c_w_tmp] * u_data[x0_tmp_tmp + 2] / w));
    x0_tmp = p_mu05 *
             ((y_data[b_x0_tmp] * y_data[b_x0_tmp] + 1.0) +
              y_data[c_x0_tmp] * y_data[c_x0_tmp]) *
             p / 2.0 / w;
    x0[3] = Ts * (x0_tmp * b_w_tmp);
    x0[4] = Ts * (x0_tmp * w_tmp);
    x0[5] = Ts * (muDoubleScalarSqrt(x) * (a * a) +
                  p_mu05 / w *
                      (y_data[b_x0_tmp] * muDoubleScalarSin(y_data[last]) -
                       y_data[c_x0_tmp] * muDoubleScalarCos(y_data[last])) *
                      p);
    if (((int32_T)(k + 2U) < 1) || ((int32_T)(k + 2U) > y->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 2U), 1, y->size[1],
                                    &b_emlrtBCI, (emlrtCTX)sp);
    }
    for (idx = 0; idx < 6; idx++) {
      x0[idx] += y_data[idx + 6 * k];
    }
    for (idx = 0; idx < 6; idx++) {
      y_data[idx + 6 * (k + 1)] = x0[idx];
    }
    /*      J = J + u(:,k)'*R*u(:,k) +
     * (y(:,k+1)-ybar)'*Q*(y(:,k+1)-ybar)*(k/10); */
    /*  if k == ratio*ku */
    /*      F(9*(ku-1)+1:9*ku) = [sqrt(R)*u(:,ku);
     * sqrt(Q)*(y(:,k+1)-ybar)*sqrt(100*k/length(t))]; */
    /*  end */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxInit_real_T(sp, &b_y, 2, &o_emlrtRTEI);
  /*  F = F/sqrt(size(u,2)); */
  /*  F(9*length(u)+1:end) = 10^1*sqrt(Q)*(y(:,end)-ybar)*sqrt(100); */
  /*  J = J/size(u,2) + 1e3*length(t)/10*(y(:,end)-ybar)'*Q*(y(:,end)-ybar); */
  st.site = &e_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  last = y->size[1];
  idx = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, b_y, idx, &i_emlrtRTEI);
  b_y_data = b_y->data;
  for (idx = 0; idx < last; idx++) {
    ku = y_data[6 * idx + 1];
    b_y_data[idx] = ku * ku;
  }
  st.site = &e_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  last = y->size[1];
  idx = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, r, idx, &j_emlrtRTEI);
  varargin_1_data = r->data;
  for (idx = 0; idx < last; idx++) {
    ku = y_data[6 * idx + 2];
    varargin_1_data[idx] = ku * ku;
  }
  if ((b_y->size[1] != r->size[1]) &&
      ((b_y->size[1] != 1) && (r->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_y->size[1], r->size[1], &c_emlrtECI,
                                (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &c_y, 2, &k_emlrtRTEI);
  last = y->size[1];
  idx = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, c_y, idx, &k_emlrtRTEI);
  c_y_data = c_y->data;
  for (idx = 0; idx < last; idx++) {
    c_y_data[idx] = y_data[6 * idx + 2];
  }
  emxInit_real_T(sp, &d_y, 2, &l_emlrtRTEI);
  last = y->size[1];
  idx = d_y->size[0] * d_y->size[1];
  d_y->size[0] = 1;
  d_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, d_y, idx, &l_emlrtRTEI);
  b_y_data = d_y->data;
  for (idx = 0; idx < last; idx++) {
    b_y_data[idx] = y_data[6 * idx + 1];
  }
  emxInit_real_T(sp, &r1, 2, &r_emlrtRTEI);
  st.site = &e_emlrtRSI;
  b_atan2(&st, c_y, d_y, r1);
  emxFree_real_T(sp, &d_y);
  if ((y->size[1] != r1->size[1]) &&
      ((y->size[1] != 1) && (r1->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(y->size[1], r1->size[1], &b_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (b_y->size[1] == r->size[1]) {
    last = b_y->size[1] - 1;
    idx = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    emxEnsureCapacity_real_T(sp, b_y, idx, &m_emlrtRTEI);
    b_y_data = b_y->data;
    for (idx = 0; idx <= last; idx++) {
      b_y_data[idx] += varargin_1_data[idx];
    }
  } else {
    plus(sp, b_y, r);
  }
  emxFree_real_T(sp, &r);
  st.site = &e_emlrtRSI;
  b_sqrt(&st, b_y);
  if (y->size[1] == r1->size[1]) {
    last = y->size[1];
    idx = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = y->size[1];
    emxEnsureCapacity_real_T(sp, r1, idx, &n_emlrtRTEI);
    varargin_1_data = r1->data;
    for (idx = 0; idx < last; idx++) {
      varargin_1_data[idx] = y_data[6 * idx + 5] - varargin_1_data[idx];
    }
  } else {
    c_binary_expand_op(sp, r1, y);
  }
  st.site = &e_emlrtRSI;
  b_cos(&st, r1);
  varargin_1_data = r1->data;
  if ((b_y->size[1] != r1->size[1]) &&
      ((b_y->size[1] != 1) && (r1->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_y->size[1], r1->size[1], &emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &e_emlrtRSI;
  if (b_y->size[1] == r1->size[1]) {
    last = b_y->size[1] - 1;
    idx = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    emxEnsureCapacity_real_T(&st, b_y, idx, &o_emlrtRTEI);
    b_y_data = b_y->data;
    for (idx = 0; idx <= last; idx++) {
      b_y_data[idx] = b_y_data[idx] * varargin_1_data[idx] + 1.0;
    }
  } else {
    b_st.site = &e_emlrtRSI;
    b_binary_expand_op(&b_st, b_y, r1);
    b_y_data = b_y->data;
  }
  emxFree_real_T(&st, &r1);
  b_st.site = &db_emlrtRSI;
  last = y->size[1];
  idx = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, c_y, idx, &p_emlrtRTEI);
  c_y_data = c_y->data;
  for (idx = 0; idx < last; idx++) {
    c_y_data[idx] = y_data[6 * idx];
  }
  c_st.site = &eb_emlrtRSI;
  assertCompatibleDims(&c_st, c_y, b_y);
  st.site = &e_emlrtRSI;
  emxFree_real_T(&st, &c_y);
  emxInit_real_T(&st, &varargin_1, 1, &q_emlrtRTEI);
  if (y->size[1] == b_y->size[1]) {
    last = y->size[1];
    idx = varargin_1->size[0];
    varargin_1->size[0] = y->size[1];
    emxEnsureCapacity_real_T(&st, varargin_1, idx, &q_emlrtRTEI);
    varargin_1_data = varargin_1->data;
    for (idx = 0; idx < last; idx++) {
      varargin_1_data[idx] = y_data[6 * idx] / b_y_data[idx];
    }
  } else {
    b_st.site = &e_emlrtRSI;
    binary_expand_op(&b_st, varargin_1, y, b_y);
    varargin_1_data = varargin_1->data;
  }
  emxFree_real_T(&st, &b_y);
  b_st.site = &fb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  d_st.site = &hb_emlrtRSI;
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &ib_emlrtRSI;
  f_st.site = &jb_emlrtRSI;
  last = varargin_1->size[0];
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      p = varargin_1_data[0];
    } else if ((varargin_1_data[0] > varargin_1_data[1]) ||
               (muDoubleScalarIsNaN(varargin_1_data[0]) &&
                (!muDoubleScalarIsNaN(varargin_1_data[1])))) {
      p = varargin_1_data[1];
    } else {
      p = varargin_1_data[0];
    }
  } else {
    g_st.site = &lb_emlrtRSI;
    if (!muDoubleScalarIsNaN(varargin_1_data[0])) {
      idx = 1;
    } else {
      boolean_T exitg1;
      idx = 0;
      h_st.site = &mb_emlrtRSI;
      if (varargin_1->size[0] > 2147483646) {
        i_st.site = &j_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(varargin_1_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      p = varargin_1_data[0];
    } else {
      g_st.site = &kb_emlrtRSI;
      p = varargin_1_data[idx - 1];
      c_w_tmp = idx + 1;
      h_st.site = &nb_emlrtRSI;
      if ((idx + 1 <= varargin_1->size[0]) &&
          (varargin_1->size[0] > 2147483646)) {
        i_st.site = &j_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = c_w_tmp; k <= last; k++) {
        ku = varargin_1_data[k - 1];
        if (p > ku) {
          p = ku;
        }
      }
    }
  }
  emxFree_real_T(&f_st, &varargin_1);
  if (y->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(y->size[1], 1, y->size[1], &emlrtBCI,
                                  (emlrtCTX)sp);
  }
  for (k = 0; k < 5; k++) {
    ku = y_data[k + 6 * (y->size[1] - 1)] - ybar[k];
    b[k] = ku * ku;
  }
  emxFree_real_T(sp, &y);
  st.site = &f_emlrtRSI;
  if (tmax < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  J[0] = tmax;
  for (idx = 0; idx < 5; idx++) {
    ku = 0.0;
    for (last = 0; last < 5; last++) {
      ku += Q[idx + 6 * last] * b[last];
    }
    J[idx + 1] = ku;
  }
  J[6] = p - 6378.1;
  J[7] = muDoubleScalarSqrt(tmax);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (costGauss.c) */
