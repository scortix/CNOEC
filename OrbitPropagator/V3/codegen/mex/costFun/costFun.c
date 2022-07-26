/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * costFun.c
 *
 * Code generation for function 'costFun'
 *
 */

/* Include files */
#include "costFun.h"
#include "EOE2COE.h"
#include "atan2.h"
#include "colon.h"
#include "costFun_data.h"
#include "costFun_emxutil.h"
#include "costFun_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "interp1.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "omp.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    6,         /* lineNo */
    "costFun", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pathName
                                                                          */
};

static emlrtRSInfo b_emlrtRSI = {
    7,         /* lineNo */
    "costFun", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pathName
                                                                          */
};

static emlrtRSInfo c_emlrtRSI = {
    9,         /* lineNo */
    "costFun", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pathName
                                                                          */
};

static emlrtRSInfo d_emlrtRSI = {
    11,        /* lineNo */
    "costFun", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pathName
                                                                          */
};

static emlrtRSInfo e_emlrtRSI = {
    13,        /* lineNo */
    "costFun", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pathName
                                                                          */
};

static emlrtRSInfo f_emlrtRSI = {
    14,        /* lineNo */
    "costFun", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pathName
                                                                          */
};

static emlrtRSInfo g_emlrtRSI = {
    17,        /* lineNo */
    "costFun", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pathName
                                                                          */
};

static emlrtRSInfo h_emlrtRSI = {
    18,        /* lineNo */
    "costFun", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pathName
                                                                          */
};

static emlrtRSInfo i_emlrtRSI = {
    31,        /* lineNo */
    "costFun", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pathName
                                                                          */
};

static emlrtRSInfo j_emlrtRSI = {
    32,        /* lineNo */
    "costFun", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pathName
                                                                          */
};

static emlrtRSInfo k_emlrtRSI = {
    39,        /* lineNo */
    "costFun", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pathName
                                                                          */
};

static emlrtRSInfo l_emlrtRSI = {
    40,        /* lineNo */
    "costFun", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pathName
                                                                          */
};

static emlrtRSInfo n_emlrtRSI = {
    125,                                                          /* lineNo */
    "colon",                                                      /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                       */
};

static emlrtRSInfo lb_emlrtRSI = {
    71,                                                           /* lineNo */
    "power",                                                      /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName */
};

static emlrtRSInfo mb_emlrtRSI =
    {
        23,               /* lineNo */
        "EOEDerivatives", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V3\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo nb_emlrtRSI =
    {
        25,               /* lineNo */
        "EOEDerivatives", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V3\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo ob_emlrtRSI =
    {
        33,               /* lineNo */
        "EOEDerivatives", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V3\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo pb_emlrtRSI = {
    16,                                                            /* lineNo */
    "sqrt",                                                        /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" /* pathName
                                                                    */
};

static emlrtRSInfo qb_emlrtRSI = {
    33,                           /* lineNo */
    "applyScalarFunctionInPlace", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunctionInPlace.m" /* pathName */
};

static emlrtRSInfo xb_emlrtRSI = {
    11,                                                           /* lineNo */
    "cos",                                                        /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elfun\\cos.m" /* pathName */
};

static emlrtRSInfo yb_emlrtRSI =
    {
        34,               /* lineNo */
        "rdivide_helper", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
        "helper.m" /* pathName */
};

static emlrtRSInfo ac_emlrtRSI = {
    51,    /* lineNo */
    "div", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" /* pathName
                                                                       */
};

static emlrtRTEInfo emlrtRTEI = {
    13,                     /* lineNo */
    27,                     /* colNo */
    "assertCompatibleDims", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\assertCompatibleDims.m" /* pName */
};

static emlrtECInfo emlrtECI = {
    2,         /* nDims */
    40,        /* lineNo */
    18,        /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

static emlrtECInfo b_emlrtECI = {
    2,         /* nDims */
    40,        /* lineNo */
    49,        /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

static emlrtECInfo c_emlrtECI = {
    2,         /* nDims */
    40,        /* lineNo */
    23,        /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

static emlrtBCInfo emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    39,        /* lineNo */
    20,        /* colNo */
    "y",       /* aName */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    32,        /* lineNo */
    24,        /* colNo */
    "y",       /* aName */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    31,        /* lineNo */
    9,         /* colNo */
    "y",       /* aName */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    31,        /* lineNo */
    52,        /* colNo */
    "y",       /* aName */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    31,        /* lineNo */
    45,        /* colNo */
    "t",       /* aName */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    31,        /* lineNo */
    20,        /* colNo */
    "y",       /* aName */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    24,        /* lineNo */
    5,         /* colNo */
    "y",       /* aName */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    28,        /* lineNo */
    24,        /* colNo */
    "qAngle",  /* aName */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    7,         /* lineNo */
    17,        /* colNo */
    "x",       /* aName */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    7,         /* lineNo */
    12,        /* colNo */
    "x",       /* aName */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    7,         /* lineNo */
    12,        /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m", /* pName
                                                                           */
    1 /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    6,         /* lineNo */
    11,        /* colNo */
    "x",       /* aName */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    6,         /* lineNo */
    11,        /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m", /* pName
                                                                           */
    1 /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    6,         /* lineNo */
    9,         /* colNo */
    "x",       /* aName */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    4,         /* lineNo */
    12,        /* colNo */
    "x",       /* aName */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    29,        /* lineNo */
    20,        /* colNo */
    "csi",     /* aName */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    33,        /* lineNo */
    27,        /* colNo */
    "csi",     /* aName */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    35,        /* lineNo */
    84,        /* colNo */
    "t",       /* aName */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtRTEInfo p_emlrtRTEI = {
    9,         /* lineNo */
    1,         /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

static emlrtRTEInfo q_emlrtRTEI = {
    11,        /* lineNo */
    1,         /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

static emlrtRTEInfo r_emlrtRTEI = {
    6,         /* lineNo */
    7,         /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

static emlrtRTEInfo s_emlrtRTEI = {
    7,         /* lineNo */
    10,        /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

static emlrtRTEInfo t_emlrtRTEI = {
    23,        /* lineNo */
    1,         /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

static emlrtRTEInfo u_emlrtRTEI = {
    40,        /* lineNo */
    23,        /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

static emlrtRTEInfo v_emlrtRTEI = {
    40,        /* lineNo */
    33,        /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

static emlrtRTEInfo w_emlrtRTEI = {
    40,        /* lineNo */
    62,        /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

static emlrtRTEInfo x_emlrtRTEI = {
    40,        /* lineNo */
    69,        /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

static emlrtRTEInfo y_emlrtRTEI = {
    40,        /* lineNo */
    49,        /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    40,        /* lineNo */
    16,        /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    48,        /* lineNo */
    1,         /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    6,         /* lineNo */
    1,         /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

static emlrtRTEInfo db_emlrtRTEI = {
    7,         /* lineNo */
    1,         /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    44,        /* lineNo */
    12,        /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

static emlrtRSInfo bc_emlrtRSI = {
    48,        /* lineNo */
    "costFun", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pathName
                                                                          */
};

/* Function Declarations */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2);

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             real_T in2, real_T in3, real_T in4, real_T in5,
                             const real_T in6[3], const real_T in7[9],
                             const emxArray_real_T *in8,
                             const emxArray_real_T *in9);

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
  emxInit_real_T(sp, &b_in1, 2, &ab_emlrtRTEI);
  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = 1;
  if (in2->size[1] == 1) {
    b_in1->size[1] = in1->size[1];
  } else {
    b_in1->size[1] = in2->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &ab_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, in1, i, &ab_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[1];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in1_data[i];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             real_T in2, real_T in3, real_T in4, real_T in5,
                             const real_T in6[3], const real_T in7[9],
                             const emxArray_real_T *in8,
                             const emxArray_real_T *in9)
{
  emxArray_real_T *b_in8;
  const real_T *in8_data;
  const real_T *in9_data;
  real_T b_in6;
  real_T *b_in8_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in9_data = in9->data;
  in8_data = in8->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  b_in6 = 0.0;
  for (i = 0; i < 3; i++) {
    b_in6 += ((in6[0] * in7[3 * i] + in6[1] * in7[3 * i + 1]) +
              in6[2] * in7[3 * i + 2]) *
             in6[i];
  }
  emxInit_real_T(sp, &b_in8, 1, &sb_emlrtRTEI);
  i = in8->size[1];
  stride_0_0 = b_in8->size[0];
  if (in9->size[1] == 1) {
    b_in8->size[0] = i;
  } else {
    b_in8->size[0] = in9->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in8, stride_0_0, &sb_emlrtRTEI);
  b_in8_data = b_in8->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (in9->size[1] != 1);
  if (in9->size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = in9->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in8_data[i] =
        in8_data[6 * (i * stride_0_0)] / in9_data[i * stride_1_0] - 6380.0;
  }
  i = in1->size[0];
  in1->size[0] = b_in8->size[0] + 2;
  emxEnsureCapacity_real_T(sp, in1, i, &bb_emlrtRTEI);
  in1_data = in1->data;
  in1_data[0] =
      (in2 * in3 + (1.0 - in2) * ((in4 - in5) * 10.0)) + 100000.0 * b_in6;
  in1_data[1] = in5 - 500.0;
  loop_ub = b_in8->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i + 2] = b_in8_data[i];
  }
  emxFree_real_T(sp, &b_in8);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
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
  emxInit_real_T(sp, &b_in2, 2, &y_emlrtRTEI);
  i = in2->size[1];
  stride_0_1 = b_in2->size[0] * b_in2->size[1];
  b_in2->size[0] = 1;
  if (in1->size[1] == 1) {
    b_in2->size[1] = i;
  } else {
    b_in2->size[1] = in1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in2, stride_0_1, &y_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, in1, i, &y_emlrtRTEI);
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
  emxInit_real_T(sp, &b_in1, 2, &u_emlrtRTEI);
  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = 1;
  if (in2->size[1] == 1) {
    b_in1->size[1] = in1->size[1];
  } else {
    b_in1->size[1] = in2->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &u_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, in1, i, &u_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[1];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in1_data[i];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void costFun(const emlrtStack *sp, const emxArray_real_T *x, real_T Ts,
             real_T tmax, real_T b_y0[6], const real_T ybar[6], real_T ratio,
             real_T Tmax, real_T coeffT, real_T m0, real_T alpha,
             emxArray_real_T *J, emxArray_real_T *y, real_T *tCost, real_T *m)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *b_x;
  emxArray_real_T *b_y;
  emxArray_real_T *csi;
  emxArray_real_T *qAngle;
  emxArray_real_T *t;
  emxArray_real_T *topt;
  real_T Q[9];
  real_T x0[6];
  real_T xbar[6];
  real_T Qdiag[3];
  const real_T *x_data;
  real_T lu;
  real_T p;
  real_T w_tmp;
  real_T *csi_data;
  real_T *qAngle_data;
  real_T *topt_data;
  real_T *y_data;
  int32_T iv[2];
  int32_T b_loop_ub;
  int32_T b_x0_tmp;
  int32_T i;
  int32_T k;
  int32_T loop_ub;
  int32_T nx;
  int32_T x0_tmp;
  boolean_T b_p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  lu = ((real_T)x->size[0] - 2.0) / 2.0;
  if (x->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, x->size[0], &m_emlrtBCI, (emlrtCTX)sp);
  }
  if (lu + 1.0 < 2.0) {
    i = 0;
    x0_tmp = 0;
  } else {
    if (x->size[0] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, x->size[0], &l_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i = 1;
    if (lu + 1.0 != muDoubleScalarFloor(lu + 1.0)) {
      emlrtIntegerCheckR2012b(lu + 1.0, &b_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)(lu + 1.0) < 1) || ((int32_T)(lu + 1.0) > x->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lu + 1.0), 1, x->size[0],
                                    &k_emlrtBCI, (emlrtCTX)sp);
    }
    x0_tmp = (int32_T)(lu + 1.0);
  }
  iv[0] = 1;
  nx = x0_tmp - i;
  iv[1] = nx;
  st.site = &emlrtRSI;
  indexShapeCheck(&st, x->size[0], iv);
  if (lu + 2.0 > (real_T)x->size[0] - 1.0) {
    x0_tmp = 0;
    b_x0_tmp = 0;
  } else {
    if (lu + 2.0 != muDoubleScalarFloor(lu + 2.0)) {
      emlrtIntegerCheckR2012b(lu + 2.0, &emlrtDCI, (emlrtCTX)sp);
    }
    if ((int32_T)(lu + 2.0) > x->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lu + 2.0), 1, x->size[0],
                                    &j_emlrtBCI, (emlrtCTX)sp);
    }
    x0_tmp = (int32_T)(lu + 2.0) - 1;
    if ((x->size[0] - 1 < 1) || (x->size[0] - 1 > x->size[0])) {
      emlrtDynamicBoundsCheckR2012b(x->size[0] - 1, 1, x->size[0], &i_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_x0_tmp = x->size[0] - 1;
  }
  iv[0] = 1;
  loop_ub = b_x0_tmp - x0_tmp;
  iv[1] = loop_ub;
  st.site = &b_emlrtRSI;
  indexShapeCheck(&st, x->size[0], iv);
  st.site = &c_emlrtRSI;
  lu = Ts * ratio;
  emxInit_real_T(&st, &topt, 2, &p_emlrtRTEI);
  if (muDoubleScalarIsNaN(lu) || muDoubleScalarIsNaN(tmax)) {
    b_x0_tmp = topt->size[0] * topt->size[1];
    topt->size[0] = 1;
    topt->size[1] = 1;
    emxEnsureCapacity_real_T(&st, topt, b_x0_tmp, &p_emlrtRTEI);
    topt_data = topt->data;
    topt_data[0] = rtNaN;
  } else if ((lu == 0.0) || ((tmax > 0.0) && (lu < 0.0)) ||
             ((tmax < 0.0) && (lu > 0.0))) {
    topt->size[0] = 1;
    topt->size[1] = 0;
  } else if (muDoubleScalarIsInf(tmax) && muDoubleScalarIsInf(lu)) {
    b_x0_tmp = topt->size[0] * topt->size[1];
    topt->size[0] = 1;
    topt->size[1] = 1;
    emxEnsureCapacity_real_T(&st, topt, b_x0_tmp, &p_emlrtRTEI);
    topt_data = topt->data;
    topt_data[0] = rtNaN;
  } else if (muDoubleScalarIsInf(lu)) {
    b_x0_tmp = topt->size[0] * topt->size[1];
    topt->size[0] = 1;
    topt->size[1] = 1;
    emxEnsureCapacity_real_T(&st, topt, b_x0_tmp, &p_emlrtRTEI);
    topt_data = topt->data;
    topt_data[0] = 0.0;
  } else if (muDoubleScalarFloor(lu) == lu) {
    b_x0_tmp = topt->size[0] * topt->size[1];
    topt->size[0] = 1;
    b_loop_ub = (int32_T)(tmax / lu);
    topt->size[1] = b_loop_ub + 1;
    emxEnsureCapacity_real_T(&st, topt, b_x0_tmp, &p_emlrtRTEI);
    topt_data = topt->data;
    for (b_x0_tmp = 0; b_x0_tmp <= b_loop_ub; b_x0_tmp++) {
      topt_data[b_x0_tmp] = lu * (real_T)b_x0_tmp;
    }
  } else {
    b_st.site = &n_emlrtRSI;
    eml_float_colon(&b_st, lu, tmax, topt);
  }
  st.site = &d_emlrtRSI;
  emxInit_real_T(&st, &t, 2, &q_emlrtRTEI);
  topt_data = t->data;
  if (muDoubleScalarIsNaN(Ts) || muDoubleScalarIsNaN(tmax)) {
    b_x0_tmp = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity_real_T(&st, t, b_x0_tmp, &q_emlrtRTEI);
    topt_data = t->data;
    topt_data[0] = rtNaN;
  } else if ((Ts == 0.0) || ((tmax > 0.0) && (Ts < 0.0)) ||
             ((tmax < 0.0) && (Ts > 0.0))) {
    t->size[0] = 1;
    t->size[1] = 0;
  } else if (muDoubleScalarIsInf(tmax) && muDoubleScalarIsInf(Ts)) {
    b_x0_tmp = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity_real_T(&st, t, b_x0_tmp, &q_emlrtRTEI);
    topt_data = t->data;
    topt_data[0] = rtNaN;
  } else if (muDoubleScalarIsInf(Ts)) {
    b_x0_tmp = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity_real_T(&st, t, b_x0_tmp, &q_emlrtRTEI);
    topt_data = t->data;
    topt_data[0] = 0.0;
  } else if (muDoubleScalarFloor(Ts) == Ts) {
    b_x0_tmp = t->size[0] * t->size[1];
    t->size[0] = 1;
    b_loop_ub = (int32_T)(tmax / Ts);
    t->size[1] = b_loop_ub + 1;
    emxEnsureCapacity_real_T(&st, t, b_x0_tmp, &q_emlrtRTEI);
    topt_data = t->data;
    for (b_x0_tmp = 0; b_x0_tmp <= b_loop_ub; b_x0_tmp++) {
      topt_data[b_x0_tmp] = Ts * (real_T)b_x0_tmp;
    }
  } else {
    b_st.site = &n_emlrtRSI;
    eml_float_colon(&b_st, Ts, tmax, t);
    topt_data = t->data;
  }
  emxInit_real_T(&st, &b_x, 1, &r_emlrtRTEI);
  b_x0_tmp = b_x->size[0];
  b_x->size[0] = nx;
  emxEnsureCapacity_real_T(sp, b_x, b_x0_tmp, &r_emlrtRTEI);
  qAngle_data = b_x->data;
  for (b_x0_tmp = 0; b_x0_tmp < nx; b_x0_tmp++) {
    qAngle_data[b_x0_tmp] = x_data[i + b_x0_tmp];
  }
  emxInit_real_T(sp, &csi, 2, &cb_emlrtRTEI);
  st.site = &e_emlrtRSI;
  interp1(&st, topt, b_x, t, csi);
  csi_data = csi->data;
  i = b_x->size[0];
  b_x->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_x, i, &s_emlrtRTEI);
  qAngle_data = b_x->data;
  for (i = 0; i < loop_ub; i++) {
    qAngle_data[i] = x_data[x0_tmp + i];
  }
  emxInit_real_T(sp, &qAngle, 2, &db_emlrtRTEI);
  st.site = &f_emlrtRSI;
  interp1(&st, topt, b_x, t, qAngle);
  qAngle_data = qAngle->data;
  b_y0[5] += x_data[0];
  st.site = &g_emlrtRSI;
  EOE2COE(&st, b_y0, x0);
  st.site = &h_emlrtRSI;
  EOE2COE(&st, ybar, xbar);
  w_tmp = xbar[0] - 0.0 * x0[0];
  w_tmp += 0.1 * (real_T)(w_tmp == 0.0);
  lu = 1.0 / (w_tmp * w_tmp);
  w_tmp = xbar[1] - 0.0 * x0[1];
  w_tmp += 0.1 * (real_T)(w_tmp == 0.0);
  p = 1.0 / (w_tmp * w_tmp);
  w_tmp = xbar[4] - 0.0 * x0[4];
  w_tmp += 0.1 * (real_T)(w_tmp == 0.0);
  emxFree_real_T(sp, &b_x);
  memset(&Q[0], 0, 9U * sizeof(real_T));
  Q[0] = lu;
  Q[4] = p;
  Q[8] = 1.0 / (w_tmp * w_tmp);
  i = y->size[0] * y->size[1];
  y->size[0] = 6;
  y->size[1] = t->size[1];
  emxEnsureCapacity_real_T(sp, y, i, &t_emlrtRTEI);
  y_data = y->data;
  nx = 6 * t->size[1];
  for (i = 0; i < nx; i++) {
    y_data[i] = 0.0;
  }
  if (t->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, t->size[1], &g_emlrtBCI, (emlrtCTX)sp);
  }
  for (i = 0; i < 6; i++) {
    y_data[i] = b_y0[i];
  }
  *m = m0;
  *tCost = 0.0;
  i = t->size[1];
  for (k = 0; k <= i - 2; k++) {
    real_T b_w_tmp;
    real_T c_x0_tmp;
    real_T p_mu05;
    real_T w;
    if (k + 1 > qAngle->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, qAngle->size[1], &h_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (k + 1 > csi->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, csi->size[1], &n_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    lu = Tmax / *m * csi_data[k];
    Qdiag[0] = lu * muDoubleScalarSin(qAngle_data[k]) / 1000.0;
    Qdiag[1] = lu * muDoubleScalarCos(qAngle_data[k]) / 1000.0;
    Qdiag[2] = lu * 0.0 / 1000.0;
    if (k + 1 > t->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, t->size[1], &e_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &i_emlrtRSI;
    if (k + 1 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &d_emlrtBCI, &st);
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
    nx = 6 * k + 5;
    w_tmp = muDoubleScalarSin(y_data[nx]);
    b_w_tmp = muDoubleScalarCos(y_data[nx]);
    loop_ub = 6 * k + 1;
    b_loop_ub = 6 * k + 2;
    w = (y_data[loop_ub] * b_w_tmp + 1.0) + y_data[b_loop_ub] * w_tmp;
    /*  r = p/w; */
    b_st.site = &mb_emlrtRSI;
    c_st.site = &kb_emlrtRSI;
    b_st.site = &mb_emlrtRSI;
    c_st.site = &kb_emlrtRSI;
    /*  alpha2 = h^2-k^2; */
    b_st.site = &nb_emlrtRSI;
    p_mu05 = muDoubleScalarSqrt(p / 398600.0);
    /*  State Derivative Calculation */
    b_st.site = &ob_emlrtRSI;
    lu = w / p;
    c_st.site = &kb_emlrtRSI;
    b_st.site = &ob_emlrtRSI;
    if (k + 1 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &f_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    x0[0] = Ts * (2.0 * p / w * p_mu05 * Qdiag[1]);
    b_x0_tmp = 6 * k + 3;
    x0_tmp = 6 * k + 4;
    x0[1] = Ts * (p_mu05 *
                  ((Qdiag[0] * w_tmp +
                    ((w + 1.0) * b_w_tmp + y_data[loop_ub]) * Qdiag[1] / w) -
                   (y_data[b_x0_tmp] * w_tmp - y_data[x0_tmp] * b_w_tmp) *
                       y_data[b_loop_ub] * Qdiag[2] / w));
    x0[2] = Ts * (p_mu05 *
                  ((-Qdiag[0] * b_w_tmp +
                    ((w + 1.0) * w_tmp + y_data[b_loop_ub]) * Qdiag[1] / w) +
                   (y_data[b_x0_tmp] * muDoubleScalarSin(y_data[nx]) -
                    y_data[x0_tmp] * muDoubleScalarCos(y_data[nx])) *
                       y_data[b_loop_ub] * Qdiag[2] / w));
    c_x0_tmp = p_mu05 *
               ((y_data[b_x0_tmp] * y_data[b_x0_tmp] + 1.0) +
                y_data[x0_tmp] * y_data[x0_tmp]) *
               Qdiag[2] / 2.0 / w;
    x0[3] = Ts * (c_x0_tmp * b_w_tmp);
    x0[4] = Ts * (c_x0_tmp * w_tmp);
    x0[5] = Ts * (muDoubleScalarSqrt(398600.0 * p) * (lu * lu) +
                  p_mu05 / w *
                      (y_data[b_x0_tmp] * muDoubleScalarSin(y_data[nx]) -
                       y_data[x0_tmp] * muDoubleScalarCos(y_data[nx])) *
                      Qdiag[2]);
    if (k + 2 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 2, 1, y->size[1], &c_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (x0_tmp = 0; x0_tmp < 6; x0_tmp++) {
      w_tmp = y_data[x0_tmp + 6 * k] + x0[x0_tmp];
      x0[x0_tmp] = w_tmp;
      y_data[x0_tmp + 6 * (k + 1)] = w_tmp;
    }
    if (k + 1 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &b_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &j_emlrtRSI;
    EOE2COE(&st, *(real_T(*)[6]) & y_data[6 * k], x0);
    if (k + 1 > csi->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, csi->size[1], &o_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    *m -= Ts * coeffT * csi_data[k];
    /*      f = f+(xCOE([1:2 5])-xbar([1:2 5]))'*Q*(xCOE([1:2 5])-xbar([1:2
     * 5]))*t(k); */
    Qdiag[0] = x0[0] - xbar[0];
    Qdiag[1] = x0[1] - xbar[1];
    Qdiag[2] = x0[4] - xbar[4];
    lu = 0.0;
    for (x0_tmp = 0; x0_tmp < 3; x0_tmp++) {
      lu += ((Qdiag[0] * Q[3 * x0_tmp] + Qdiag[1] * Q[3 * x0_tmp + 1]) +
             Qdiag[2] * Q[3 * x0_tmp + 2]) *
            Qdiag[x0_tmp];
    }
    if (k + 1 > t->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, t->size[1], &p_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    *tCost += lu * topt_data[k];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  *tCost = *tCost / (real_T)t->size[1] / tmax * 1000.0;
  if (y->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(y->size[1], 1, y->size[1], &emlrtBCI,
                                  (emlrtCTX)sp);
  }
  st.site = &k_emlrtRSI;
  EOE2COE(&st, *(real_T(*)[6]) & y_data[6 * (y->size[1] - 1)], x0);
  st.site = &l_emlrtRSI;
  b_st.site = &lb_emlrtRSI;
  nx = y->size[1];
  i = csi->size[0] * csi->size[1];
  csi->size[0] = 1;
  csi->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, csi, i, &u_emlrtRTEI);
  csi_data = csi->data;
  for (i = 0; i < nx; i++) {
    lu = y_data[6 * i + 1];
    csi_data[i] = lu * lu;
  }
  st.site = &l_emlrtRSI;
  b_st.site = &lb_emlrtRSI;
  nx = y->size[1];
  i = topt->size[0] * topt->size[1];
  topt->size[0] = 1;
  topt->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, topt, i, &v_emlrtRTEI);
  topt_data = topt->data;
  for (i = 0; i < nx; i++) {
    lu = y_data[6 * i + 2];
    topt_data[i] = lu * lu;
  }
  if ((csi->size[1] != topt->size[1]) &&
      ((csi->size[1] != 1) && (topt->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(csi->size[1], topt->size[1], &c_emlrtECI,
                                (emlrtCTX)sp);
  }
  nx = y->size[1];
  i = qAngle->size[0] * qAngle->size[1];
  qAngle->size[0] = 1;
  qAngle->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, qAngle, i, &w_emlrtRTEI);
  qAngle_data = qAngle->data;
  for (i = 0; i < nx; i++) {
    qAngle_data[i] = y_data[6 * i + 2];
  }
  emxInit_real_T(sp, &b_y, 2, &x_emlrtRTEI);
  nx = y->size[1];
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, b_y, i, &x_emlrtRTEI);
  qAngle_data = b_y->data;
  for (i = 0; i < nx; i++) {
    qAngle_data[i] = y_data[6 * i + 1];
  }
  st.site = &l_emlrtRSI;
  b_atan2(&st, qAngle, b_y, t);
  emxFree_real_T(sp, &b_y);
  emxFree_real_T(sp, &qAngle);
  if ((y->size[1] != t->size[1]) && ((y->size[1] != 1) && (t->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(y->size[1], t->size[1], &b_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &l_emlrtRSI;
  if (csi->size[1] == topt->size[1]) {
    nx = csi->size[1] - 1;
    i = csi->size[0] * csi->size[1];
    csi->size[0] = 1;
    emxEnsureCapacity_real_T(&st, csi, i, &u_emlrtRTEI);
    csi_data = csi->data;
    for (i = 0; i <= nx; i++) {
      csi_data[i] += topt_data[i];
    }
  } else {
    b_st.site = &l_emlrtRSI;
    plus(&b_st, csi, topt);
    csi_data = csi->data;
  }
  emxFree_real_T(&st, &topt);
  b_p = false;
  i = csi->size[1];
  for (k = 0; k < i; k++) {
    if (b_p || (csi_data[k] < 0.0)) {
      b_p = true;
    }
  }
  if (b_p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &b_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  b_st.site = &pb_emlrtRSI;
  nx = csi->size[1];
  c_st.site = &qb_emlrtRSI;
  if (csi->size[1] > 2147483646) {
    d_st.site = &q_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  for (k = 0; k < nx; k++) {
    csi_data[k] = muDoubleScalarSqrt(csi_data[k]);
  }
  st.site = &l_emlrtRSI;
  if (y->size[1] == t->size[1]) {
    nx = y->size[1];
    i = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = y->size[1];
    emxEnsureCapacity_real_T(&st, t, i, &y_emlrtRTEI);
    topt_data = t->data;
    for (i = 0; i < nx; i++) {
      topt_data[i] = y_data[6 * i + 5] - topt_data[i];
    }
  } else {
    b_st.site = &l_emlrtRSI;
    c_binary_expand_op(&b_st, t, y);
    topt_data = t->data;
  }
  b_st.site = &xb_emlrtRSI;
  nx = t->size[1];
  c_st.site = &qb_emlrtRSI;
  if (t->size[1] > 2147483646) {
    d_st.site = &q_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  for (k = 0; k < nx; k++) {
    topt_data[k] = muDoubleScalarCos(topt_data[k]);
  }
  if ((csi->size[1] != t->size[1]) &&
      ((csi->size[1] != 1) && (t->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(csi->size[1], t->size[1], &emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &l_emlrtRSI;
  if (csi->size[1] == t->size[1]) {
    nx = csi->size[1] - 1;
    i = csi->size[0] * csi->size[1];
    csi->size[0] = 1;
    emxEnsureCapacity_real_T(&st, csi, i, &ab_emlrtRTEI);
    csi_data = csi->data;
    for (i = 0; i <= nx; i++) {
      csi_data[i] = csi_data[i] * topt_data[i] + 1.0;
    }
  } else {
    b_st.site = &l_emlrtRSI;
    b_binary_expand_op(&b_st, csi, t);
    csi_data = csi->data;
  }
  emxFree_real_T(&st, &t);
  b_st.site = &yb_emlrtRSI;
  c_st.site = &ac_emlrtRSI;
  if ((y->size[1] != 1) && (csi->size[1] != 1) &&
      (y->size[1] != csi->size[1])) {
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  Qdiag[0] = x0[0] - xbar[0];
  Qdiag[1] = x0[1] - xbar[1];
  Qdiag[2] = x0[4] - xbar[4];
  /*  g = []; */
  /*  h = m-500; */
  if (y->size[1] == csi->size[1]) {
    lu = 0.0;
    for (i = 0; i < 3; i++) {
      lu += ((Qdiag[0] * Q[3 * i] + Qdiag[1] * Q[3 * i + 1]) +
             Qdiag[2] * Q[3 * i + 2]) *
            Qdiag[i];
    }
    nx = y->size[1];
    i = J->size[0];
    J->size[0] = y->size[1] + 2;
    emxEnsureCapacity_real_T(sp, J, i, &bb_emlrtRTEI);
    qAngle_data = J->data;
    qAngle_data[0] =
        (alpha * *tCost + (1.0 - alpha) * ((m0 - *m) * 10.0)) + 100000.0 * lu;
    qAngle_data[1] = *m - 500.0;
    for (i = 0; i < nx; i++) {
      qAngle_data[i + 2] = y_data[6 * i] / csi_data[i] - 6380.0;
    }
  } else {
    st.site = &bc_emlrtRSI;
    binary_expand_op(&st, J, alpha, *tCost, m0, *m, Qdiag, Q, y, csi);
  }
  emxFree_real_T(sp, &csi);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

emlrtCTX emlrtGetRootTLSGlobal(void)
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

/* End of code generation (costFun.c) */
