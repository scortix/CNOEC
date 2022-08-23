/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * costFunUnc.c
 *
 * Code generation for function 'costFunUnc'
 *
 */

/* Include files */
#include "costFunUnc.h"
#include "EOE2COE.h"
#include "colon.h"
#include "cos.h"
#include "costFunUnc_data.h"
#include "costFunUnc_emxutil.h"
#include "costFunUnc_types.h"
#include "exp.h"
#include "indexShapeCheck.h"
#include "mean.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    5,            /* lineNo */
    "costFunUnc", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    6,            /* lineNo */
    "costFunUnc", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    8,            /* lineNo */
    "costFunUnc", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    9,            /* lineNo */
    "costFunUnc", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    19,           /* lineNo */
    "costFunUnc", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    20,           /* lineNo */
    "costFunUnc", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    37,           /* lineNo */
    "costFunUnc", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    39,           /* lineNo */
    "costFunUnc", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    46,           /* lineNo */
    "costFunUnc", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    52,           /* lineNo */
    "costFunUnc", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    56,           /* lineNo */
    "costFunUnc", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    117,     /* lineNo */
    "colon", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pathName
                                                                          */
};

static emlrtRSInfo u_emlrtRSI = {
    71,      /* lineNo */
    "power", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/power.m" /* pathName
                                                                          */
};

static emlrtRSInfo v_emlrtRSI = {
    29,               /* lineNo */
    "EOEDerivatives", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo w_emlrtRSI = {
    30,               /* lineNo */
    "EOEDerivatives", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo x_emlrtRSI = {
    38,               /* lineNo */
    "EOEDerivatives", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo bb_emlrtRSI = {
    13,      /* lineNo */
    "atan2", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/atan2.m" /* pathName
                                                                            */
};

static emlrtRSInfo cb_emlrtRSI =
    {
        57,      /* lineNo */
        "ixfun", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "ixfun.m" /* pathName */
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

static emlrtMCInfo emlrtMCI = {
    15,           /* lineNo */
    8,            /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtMCInfo b_emlrtMCI = {
    15,           /* lineNo */
    7,            /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtMCInfo c_emlrtMCI = {
    16,           /* lineNo */
    11,           /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtMCInfo d_emlrtMCI = {
    16,           /* lineNo */
    10,           /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    13,                     /* lineNo */
    27,                     /* colNo */
    "assertCompatibleDims", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/assertCompatibleDims.m" /* pName */
};

static emlrtECInfo emlrtECI = {
    2,            /* nDims */
    52,           /* lineNo */
    18,           /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtECInfo b_emlrtECI = {
    2,            /* nDims */
    52,           /* lineNo */
    49,           /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtECInfo c_emlrtECI = {
    2,            /* nDims */
    52,           /* lineNo */
    23,           /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtBCInfo emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    46,           /* lineNo */
    20,           /* colNo */
    "y",          /* aName */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    39,           /* lineNo */
    24,           /* colNo */
    "y",          /* aName */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    37,           /* lineNo */
    9,            /* colNo */
    "y",          /* aName */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    37,           /* lineNo */
    52,           /* colNo */
    "y",          /* aName */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    37,           /* lineNo */
    45,           /* colNo */
    "t",          /* aName */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    37,           /* lineNo */
    20,           /* colNo */
    "y",          /* aName */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    29,           /* lineNo */
    5,            /* colNo */
    "y",          /* aName */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    35,           /* lineNo */
    24,           /* colNo */
    "qAngle",     /* aName */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    6,            /* lineNo */
    12,           /* colNo */
    "x",          /* aName */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m", /* pName */
    0                                     /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    6,            /* lineNo */
    12,           /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m", /* pName */
    1                                     /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    5,            /* lineNo */
    11,           /* colNo */
    "x",          /* aName */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m", /* pName */
    0                                     /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    5,            /* lineNo */
    11,           /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m", /* pName */
    1                                     /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    5,            /* lineNo */
    9,            /* colNo */
    "x",          /* aName */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    4,            /* lineNo */
    12,           /* colNo */
    "x",          /* aName */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    36,           /* lineNo */
    20,           /* colNo */
    "csi",        /* aName */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    38,           /* lineNo */
    27,           /* colNo */
    "csi",        /* aName */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m", /* pName */
    0                                     /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    40,           /* lineNo */
    84,           /* colNo */
    "t",          /* aName */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m", /* pName */
    0                                     /* checkKind */
};

static emlrtRTEInfo f_emlrtRTEI = {
    8,            /* lineNo */
    1,            /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtRTEInfo g_emlrtRTEI = {
    9,            /* lineNo */
    1,            /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtRTEInfo h_emlrtRTEI = {
    5,            /* lineNo */
    7,            /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtRTEInfo i_emlrtRTEI = {
    6,            /* lineNo */
    10,           /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtRTEInfo j_emlrtRTEI = {
    28,           /* lineNo */
    1,            /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtRTEInfo k_emlrtRTEI = {
    52,           /* lineNo */
    23,           /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtRTEInfo l_emlrtRTEI = {
    52,           /* lineNo */
    33,           /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtRTEInfo m_emlrtRTEI = {
    52,           /* lineNo */
    56,           /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtRTEInfo n_emlrtRTEI = {
    52,           /* lineNo */
    18,           /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtRTEInfo o_emlrtRTEI = {
    52,           /* lineNo */
    45,           /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtRTEInfo p_emlrtRTEI = {
    52,           /* lineNo */
    16,           /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI = {
    56,           /* lineNo */
    12,           /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtRTEInfo r_emlrtRTEI = {
    5,            /* lineNo */
    1,            /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtRTEInfo s_emlrtRTEI = {
    6,            /* lineNo */
    1,            /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI = {
    76,                  /* lineNo */
    13,                  /* colNo */
    "eml_mtimes_helper", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI = {
    52,           /* lineNo */
    49,           /* colNo */
    "costFunUnc", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pName */
};

static emlrtRSInfo sb_emlrtRSI = {
    16,           /* lineNo */
    "costFunUnc", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pathName */
};

static emlrtRSInfo tb_emlrtRSI = {
    15,           /* lineNo */
    "costFunUnc", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC "
    "git/OptimalTrajectory/costFunUnc.m" /* pathName */
};

/* Function Declarations */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *y,
                               const emxArray_real_T *topt);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *qAngle,
                             real_T m, const emxArray_real_T *y,
                             const emxArray_real_T *b_y,
                             const emxArray_real_T *csi);

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *topt,
                               const emxArray_real_T *y);

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *a__output_of_transpose_,
                             const char_T *identifier, emxArray_real_T *y);

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static const mxArray *makima(const emlrtStack *sp, const mxArray *m1,
                             const mxArray *m2, const mxArray *m3,
                             emlrtMCInfo *location);

static void plus(const emlrtStack *sp, emxArray_real_T *y,
                 const emxArray_real_T *t);

static const mxArray *transpose(const emlrtStack *sp, const mxArray *m1,
                                emlrtMCInfo *location);

/* Function Definitions */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *y,
                               const emxArray_real_T *topt)
{
  emxArray_real_T *b_y;
  const real_T *topt_data;
  real_T *b_y_data;
  real_T *y_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  topt_data = topt->data;
  y_data = y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_y, 2, &p_emlrtRTEI);
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  if (topt->size[1] == 1) {
    b_y->size[1] = y->size[1];
  } else {
    b_y->size[1] = topt->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_y, i, &p_emlrtRTEI);
  b_y_data = b_y->data;
  stride_0_1 = (y->size[1] != 1);
  stride_1_1 = (topt->size[1] != 1);
  if (topt->size[1] == 1) {
    loop_ub = y->size[1];
  } else {
    loop_ub = topt->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] = y_data[i * stride_0_1] * topt_data[i * stride_1_1] + 1.0;
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

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  const real_T *u_data;
  real_T *pData;
  int32_T b_i;
  int32_T i;
  u_data = u->data;
  y = NULL;
  m = emlrtCreateNumericArray(1, &u->size[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[0]; b_i++) {
    pData[i] = u_data[b_i];
    i++;
  }
  emlrtAssign(&y, m);
  return y;
}

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *qAngle,
                             real_T m, const emxArray_real_T *y,
                             const emxArray_real_T *b_y,
                             const emxArray_real_T *csi)
{
  emxArray_real_T *r;
  const real_T *b_y_data;
  const real_T *csi_data;
  const real_T *y_data;
  real_T *qAngle_data;
  real_T *r1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  csi_data = csi->data;
  y_data = b_y->data;
  b_y_data = y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &r, 1, &v_emlrtRTEI);
  i = y->size[1];
  stride_0_0 = r->size[0];
  if (b_y->size[1] == 1) {
    r->size[0] = i;
  } else {
    r->size[0] = b_y->size[1];
  }
  emxEnsureCapacity_real_T(sp, r, stride_0_0, &v_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (b_y->size[1] != 1);
  if (b_y->size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = b_y->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    r1[i] = -20.0 *
            (b_y_data[6 * (i * stride_0_0)] / y_data[i * stride_1_0] - 6380.0);
  }
  i = qAngle->size[0];
  qAngle->size[0] = ((r->size[0] + csi->size[0]) + csi->size[0]) + 1;
  emxEnsureCapacity_real_T(sp, qAngle, i, &q_emlrtRTEI);
  qAngle_data = qAngle->data;
  qAngle_data[0] = -20.0 * (m - 400.0);
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    qAngle_data[i + 1] = r1[i];
  }
  loop_ub = csi->size[0];
  for (i = 0; i < loop_ub; i++) {
    qAngle_data[(i + r->size[0]) + 1] = -20.0 * (1.0 - csi_data[i]);
  }
  loop_ub = csi->size[0];
  for (i = 0; i < loop_ub; i++) {
    qAngle_data[((i + r->size[0]) + csi->size[0]) + 1] = -20.0 * csi_data[i];
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *topt,
                               const emxArray_real_T *y)
{
  emxArray_real_T *b_y;
  const real_T *y_data;
  real_T *b_y_data;
  real_T *topt_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  y_data = y->data;
  topt_data = topt->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_y, 2, &w_emlrtRTEI);
  i = y->size[1];
  stride_0_1 = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  if (topt->size[1] == 1) {
    b_y->size[1] = i;
  } else {
    b_y->size[1] = topt->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_y, stride_0_1, &w_emlrtRTEI);
  b_y_data = b_y->data;
  stride_0_1 = (i != 1);
  stride_1_1 = (topt->size[1] != 1);
  if (topt->size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = topt->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] = y_data[6 * (i * stride_0_1) + 5] - topt_data[i * stride_1_1];
  }
  i = topt->size[0] * topt->size[1];
  topt->size[0] = 1;
  topt->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, topt, i, &w_emlrtRTEI);
  topt_data = topt->data;
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    topt_data[i] = b_y_data[i];
  }
  emxFree_real_T(sp, &b_y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *a__output_of_transpose_,
                             const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_transpose_), &thisId, y);
  emlrtDestroyArray(&a__output_of_transpose_);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  const real_T *u_data;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  u_data = u->data;
  y = NULL;
  iv[0] = 1;
  iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[1]; b_i++) {
    pData[i] = u_data[b_i];
    i++;
  }
  emlrtAssign(&y, m);
  return y;
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims = -1;
  real_T *ret_data;
  int32_T i;
  int32_T i1;
  const boolean_T b = true;
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 1U, (void *)&dims, &b, &i);
  i1 = ret->size[0];
  ret->size[0] = i;
  emxEnsureCapacity_real_T(sp, ret, i1, (emlrtRTEInfo *)NULL);
  ret_data = ret->data;
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret_data[0], 8, false);
  emlrtDestroyArray(&src);
}

static const mxArray *makima(const emlrtStack *sp, const mxArray *m1,
                             const mxArray *m2, const mxArray *m3,
                             emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  return emlrtCallMATLABR2012b((emlrtCTX)sp, 1, &m, 3, &pArrays[0],
                               (const char_T *)"makima", true, location);
}

static void plus(const emlrtStack *sp, emxArray_real_T *y,
                 const emxArray_real_T *t)
{
  emxArray_real_T *b_y;
  const real_T *t_data;
  real_T *b_y_data;
  real_T *y_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  t_data = t->data;
  y_data = y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_y, 2, &k_emlrtRTEI);
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  if (t->size[1] == 1) {
    b_y->size[1] = y->size[1];
  } else {
    b_y->size[1] = t->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_y, i, &k_emlrtRTEI);
  b_y_data = b_y->data;
  stride_0_1 = (y->size[1] != 1);
  stride_1_1 = (t->size[1] != 1);
  if (t->size[1] == 1) {
    loop_ub = y->size[1];
  } else {
    loop_ub = t->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] = y_data[i * stride_0_1] + t_data[i * stride_1_1];
  }
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, y, i, &k_emlrtRTEI);
  y_data = y->data;
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    y_data[i] = b_y_data[i];
  }
  emxFree_real_T(sp, &b_y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *transpose(const emlrtStack *sp, const mxArray *m1,
                                emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtCTX)sp, 1, &m, 1, &pArray,
                               (const char_T *)"transpose", true, location);
}

void costFunUnc(const emlrtStack *sp, const emxArray_real_T *x, real_T Ts,
                real_T tmax, real_T b_y0[6], const real_T ybar[6], real_T ratio,
                real_T Tmax, real_T coeffT, real_T m0, real_T alpha, real_T *J,
                emxArray_real_T *y, real_T *tCost, real_T *m)
{
  emlrtStack b_st;
  emlrtStack c_st;
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
  real_T b_w_tmp;
  real_T c_x;
  real_T lu;
  real_T p_mu05;
  real_T w;
  real_T w_tmp;
  real_T y_idx_1;
  real_T *b_y_data;
  real_T *csi_data;
  real_T *t_data;
  real_T *topt_data;
  real_T *y_data;
  int32_T iv[2];
  int32_T b_loop_ub;
  int32_T b_x0_tmp;
  int32_T c_loop_ub;
  int32_T i;
  int32_T k;
  int32_T loop_ub;
  int32_T x0_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  lu = ((real_T)x->size[0] - 1.0) / 2.0;
  /*  Length of the input vector */
  if (1 > x->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, x->size[0], &l_emlrtBCI, (emlrtCTX)sp);
  }
  /*  True anomaly at the beginning of the transfer */
  if (2.0 > lu + 1.0) {
    i = 0;
    x0_tmp = 0;
  } else {
    if (2 > x->size[0]) {
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
    x0_tmp = (int32_T)(lu + 1.0);
  }
  iv[0] = 1;
  loop_ub = x0_tmp - i;
  iv[1] = loop_ub;
  st.site = &emlrtRSI;
  indexShapeCheck(&st, x->size[0], iv);
  /*  Throttle */
  if (lu + 2.0 > x->size[0]) {
    x0_tmp = 0;
    b_x0_tmp = 0;
  } else {
    if (lu + 2.0 != muDoubleScalarFloor(lu + 2.0)) {
      emlrtIntegerCheckR2012b(lu + 2.0, &emlrtDCI, (emlrtCTX)sp);
    }
    if ((int32_T)(lu + 2.0) > x->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lu + 2.0), 1, x->size[0],
                                    &i_emlrtBCI, (emlrtCTX)sp);
    }
    x0_tmp = (int32_T)(lu + 2.0) - 1;
    b_x0_tmp = x->size[0];
  }
  iv[0] = 1;
  b_loop_ub = b_x0_tmp - x0_tmp;
  iv[1] = b_loop_ub;
  st.site = &b_emlrtRSI;
  indexShapeCheck(&st, x->size[0], iv);
  /*  Angle of the thrust vector */
  st.site = &c_emlrtRSI;
  emxInit_real_T(&st, &t, 2, &f_emlrtRTEI);
  t_data = t->data;
  if (muDoubleScalarIsNaN(Ts) || muDoubleScalarIsNaN(tmax)) {
    b_x0_tmp = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity_real_T(&st, t, b_x0_tmp, &f_emlrtRTEI);
    t_data = t->data;
    t_data[0] = rtNaN;
  } else if ((Ts == 0.0) || ((0.0 < tmax) && (Ts < 0.0)) ||
             ((tmax < 0.0) && (Ts > 0.0))) {
    t->size[0] = 1;
    t->size[1] = 0;
  } else if (muDoubleScalarIsInf(tmax) &&
             (muDoubleScalarIsInf(Ts) || (0.0 == tmax))) {
    b_x0_tmp = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity_real_T(&st, t, b_x0_tmp, &f_emlrtRTEI);
    t_data = t->data;
    t_data[0] = rtNaN;
  } else if (muDoubleScalarIsInf(Ts)) {
    b_x0_tmp = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity_real_T(&st, t, b_x0_tmp, &f_emlrtRTEI);
    t_data = t->data;
    t_data[0] = 0.0;
  } else if (muDoubleScalarFloor(Ts) == Ts) {
    b_x0_tmp = t->size[0] * t->size[1];
    t->size[0] = 1;
    c_loop_ub = (int32_T)muDoubleScalarFloor(tmax / Ts);
    t->size[1] = c_loop_ub + 1;
    emxEnsureCapacity_real_T(&st, t, b_x0_tmp, &f_emlrtRTEI);
    t_data = t->data;
    for (b_x0_tmp = 0; b_x0_tmp <= c_loop_ub; b_x0_tmp++) {
      t_data[b_x0_tmp] = Ts * (real_T)b_x0_tmp;
    }
  } else {
    b_st.site = &m_emlrtRSI;
    eml_float_colon(&b_st, Ts, tmax, t);
    t_data = t->data;
  }
  /*  Time vector for the state variables */
  st.site = &d_emlrtRSI;
  lu = Ts * ratio;
  emxInit_real_T(&st, &topt, 2, &g_emlrtRTEI);
  if (muDoubleScalarIsNaN(lu) || muDoubleScalarIsNaN(tmax)) {
    b_x0_tmp = topt->size[0] * topt->size[1];
    topt->size[0] = 1;
    topt->size[1] = 1;
    emxEnsureCapacity_real_T(&st, topt, b_x0_tmp, &g_emlrtRTEI);
    topt_data = topt->data;
    topt_data[0] = rtNaN;
  } else if ((lu == 0.0) || ((0.0 < tmax) && (lu < 0.0)) ||
             ((tmax < 0.0) && (lu > 0.0))) {
    topt->size[0] = 1;
    topt->size[1] = 0;
  } else if (muDoubleScalarIsInf(tmax) &&
             (muDoubleScalarIsInf(lu) || (0.0 == tmax))) {
    b_x0_tmp = topt->size[0] * topt->size[1];
    topt->size[0] = 1;
    topt->size[1] = 1;
    emxEnsureCapacity_real_T(&st, topt, b_x0_tmp, &g_emlrtRTEI);
    topt_data = topt->data;
    topt_data[0] = rtNaN;
  } else if (muDoubleScalarIsInf(lu)) {
    b_x0_tmp = topt->size[0] * topt->size[1];
    topt->size[0] = 1;
    topt->size[1] = 1;
    emxEnsureCapacity_real_T(&st, topt, b_x0_tmp, &g_emlrtRTEI);
    topt_data = topt->data;
    topt_data[0] = 0.0;
  } else if (muDoubleScalarFloor(lu) == lu) {
    b_x0_tmp = topt->size[0] * topt->size[1];
    topt->size[0] = 1;
    c_loop_ub = (int32_T)muDoubleScalarFloor(tmax / lu);
    topt->size[1] = c_loop_ub + 1;
    emxEnsureCapacity_real_T(&st, topt, b_x0_tmp, &g_emlrtRTEI);
    topt_data = topt->data;
    for (b_x0_tmp = 0; b_x0_tmp <= c_loop_ub; b_x0_tmp++) {
      topt_data[b_x0_tmp] = lu * (real_T)b_x0_tmp;
    }
  } else {
    b_st.site = &m_emlrtRSI;
    eml_float_colon(&b_st, lu, tmax, topt);
  }
  emxInit_real_T(&st, &b_x, 1, &h_emlrtRTEI);
  /*  Time vector for the optimization variables */
  /*  Interpolation using time vector t */
  /*  csi = interp1(topt,csi,t,"pchip"); */
  /*  qAngle = interp1(topt,qAngle,t,"pchip"); */
  b_x0_tmp = b_x->size[0];
  b_x->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_x, b_x0_tmp, &h_emlrtRTEI);
  topt_data = b_x->data;
  for (b_x0_tmp = 0; b_x0_tmp < loop_ub; b_x0_tmp++) {
    topt_data[b_x0_tmp] = x_data[i + b_x0_tmp];
  }
  emxInit_real_T(sp, &csi, 1, &r_emlrtRTEI);
  st.site = &tb_emlrtRSI;
  emlrt_marshallIn(
      &st,
      transpose(&st,
                makima(&st, emlrt_marshallOut(topt), b_emlrt_marshallOut(b_x),
                       emlrt_marshallOut(t), &emlrtMCI),
                &b_emlrtMCI),
      "<output of transpose>", csi);
  csi_data = csi->data;
  i = b_x->size[0];
  b_x->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, b_x, i, &i_emlrtRTEI);
  topt_data = b_x->data;
  for (i = 0; i < b_loop_ub; i++) {
    topt_data[i] = x_data[x0_tmp + i];
  }
  emxInit_real_T(sp, &qAngle, 1, &s_emlrtRTEI);
  st.site = &sb_emlrtRSI;
  emlrt_marshallIn(
      &st,
      transpose(&st,
                makima(&st, emlrt_marshallOut(topt), b_emlrt_marshallOut(b_x),
                       emlrt_marshallOut(t), &c_emlrtMCI),
                &d_emlrtMCI),
      "<output of transpose>", qAngle);
  topt_data = qAngle->data;
  b_y0[5] += x_data[0];
  /*  Modify initial condition true longitude */
  st.site = &e_emlrtRSI;
  EOE2COE(&st, b_y0, x0);
  /*  Initial condition in COE */
  st.site = &f_emlrtRSI;
  EOE2COE(&st, ybar, xbar);
  /*  Desired orbti in COE */
  /*  Weight matrix construction */
  w_tmp = xbar[0] - x0[0];
  w_tmp += 0.1 * (real_T)(w_tmp == 0.0);
  lu = 1.0 / (w_tmp * w_tmp);
  w_tmp = xbar[1] - x0[1];
  w_tmp += 0.1 * (real_T)(w_tmp == 0.0);
  y_idx_1 = 1.0 / (w_tmp * w_tmp);
  w_tmp = xbar[4] - x0[4];
  w_tmp += 0.1 * (real_T)(w_tmp == 0.0);
  emxFree_real_T(sp, &b_x);
  memset(&Q[0], 0, 9U * sizeof(real_T));
  Q[0] = lu;
  Q[4] = y_idx_1;
  Q[8] = 1.0 / (w_tmp * w_tmp);
  /*  Intialization of variables */
  i = y->size[0] * y->size[1];
  y->size[0] = 6;
  y->size[1] = t->size[1];
  emxEnsureCapacity_real_T(sp, y, i, &j_emlrtRTEI);
  y_data = y->data;
  loop_ub = 6 * t->size[1];
  for (i = 0; i < loop_ub; i++) {
    y_data[i] = 0.0;
  }
  if (1 > t->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, t->size[1], &g_emlrtBCI, (emlrtCTX)sp);
  }
  for (i = 0; i < 6; i++) {
    y_data[i] = b_y0[i];
  }
  *m = m0;
  *tCost = 0.0;
  /*  Integration routine */
  i = t->size[1];
  for (k = 0; k <= i - 2; k++) {
    if (k + 1 > qAngle->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, qAngle->size[0], &h_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    /*  Thrust direction */
    if (k + 1 > csi->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, csi->size[0], &m_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    y_idx_1 = Tmax / *m * csi_data[k];
    Qdiag[0] = y_idx_1 * muDoubleScalarSin(topt_data[k]) / 1000.0;
    Qdiag[1] = y_idx_1 * muDoubleScalarCos(topt_data[k]) / 1000.0;
    Qdiag[2] = y_idx_1 * 0.0 / 1000.0;
    /*  Acceleration vector */
    if (k + 1 > t->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, t->size[1], &e_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &g_emlrtRSI;
    if (k + 1 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &d_emlrtBCI, &st);
    }
    /* EOEDerivatives Compute the derivative of the EOE state */
    /*  */
    /*    Inputs: */
    /*        - Time (Unused but necessary for built-in ode integration) */
    /*        - State vector */
    /*        - Acceleration vector */
    /*        - Planetary constant (for Earth use 398600) */
    /*  Equinoctial Orbital Elements */
    lu = y_data[6 * k];
    if (y_data[6 * k] < 0.0) {
      lu = -y_data[6 * k];
    }
    /*  Accelerations */
    /*  Definition of useful values */
    loop_ub = 6 * k + 5;
    w_tmp = muDoubleScalarSin(y_data[loop_ub]);
    b_w_tmp = muDoubleScalarCos(y_data[loop_ub]);
    b_loop_ub = 6 * k + 1;
    c_loop_ub = 6 * k + 2;
    w = (y_data[b_loop_ub] * b_w_tmp + 1.0) + y_data[c_loop_ub] * w_tmp;
    b_st.site = &v_emlrtRSI;
    b_st.site = &v_emlrtRSI;
    b_st.site = &w_emlrtRSI;
    p_mu05 = lu / 398600.0;
    if (p_mu05 < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    p_mu05 = muDoubleScalarSqrt(p_mu05);
    /*  State Derivative Calculation */
    b_st.site = &x_emlrtRSI;
    y_idx_1 = w / lu;
    b_st.site = &x_emlrtRSI;
    c_x = 398600.0 * lu;
    if (c_x < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    c_x = muDoubleScalarSqrt(c_x);
    if (k + 1 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &f_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    x0[0] = Ts * (2.0 * lu / w * p_mu05 * Qdiag[1]);
    b_x0_tmp = 6 * k + 3;
    x0_tmp = 6 * k + 4;
    x0[1] = Ts * (p_mu05 *
                  ((Qdiag[0] * w_tmp +
                    ((w + 1.0) * b_w_tmp + y_data[b_loop_ub]) * Qdiag[1] / w) -
                   (y_data[b_x0_tmp] * w_tmp - y_data[x0_tmp] * b_w_tmp) *
                       y_data[c_loop_ub] * Qdiag[2] / w));
    x0[2] = Ts * (p_mu05 *
                  ((-Qdiag[0] * b_w_tmp +
                    ((w + 1.0) * w_tmp + y_data[c_loop_ub]) * Qdiag[1] / w) +
                   (y_data[b_x0_tmp] * muDoubleScalarSin(y_data[loop_ub]) -
                    y_data[x0_tmp] * muDoubleScalarCos(y_data[loop_ub])) *
                       y_data[c_loop_ub] * Qdiag[2] / w));
    lu = p_mu05 *
         ((y_data[b_x0_tmp] * y_data[b_x0_tmp] + 1.0) +
          y_data[x0_tmp] * y_data[x0_tmp]) *
         Qdiag[2] / 2.0 / w;
    x0[3] = Ts * (lu * b_w_tmp);
    x0[4] = Ts * (lu * w_tmp);
    x0[5] = Ts * (c_x * (y_idx_1 * y_idx_1) +
                  p_mu05 / w *
                      (y_data[b_x0_tmp] * muDoubleScalarSin(y_data[loop_ub]) -
                       y_data[x0_tmp] * muDoubleScalarCos(y_data[loop_ub])) *
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
    /*  State vector update     */
    if (k + 1 > csi->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, csi->size[0], &n_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    *m -= Ts * coeffT * csi_data[k];
    /*  Mass update */
    if (k + 1 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &b_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &h_emlrtRSI;
    EOE2COE(&st, *(real_T(*)[6]) & y_data[6 * k], x0);
    /*  State vector in COE */
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
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, t->size[1], &o_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    *tCost += lu * t_data[k];
    /*  Time cost update */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  /*  Cost calculation */
  *tCost = *tCost / (real_T)t->size[1] / tmax;
  /*  Normalization of time cost */
  loop_ub = y->size[1];
  if (y->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(y->size[1], 1, y->size[1], &emlrtBCI,
                                  (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &b_y, 2, &p_emlrtRTEI);
  st.site = &i_emlrtRSI;
  EOE2COE(&st, *(real_T(*)[6]) & y_data[6 * (loop_ub - 1)], x0);
  /*  Final state in COE */
  Qdiag[0] = x0[0] - xbar[0];
  Qdiag[1] = x0[1] - xbar[1];
  Qdiag[2] = x0[4] - xbar[4];
  /*  Final State Error Cost */
  /*  Cost */
  /*  Constraints */
  /*  Equality constraints */
  st.site = &j_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  loop_ub = y->size[1];
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, b_y, i, &k_emlrtRTEI);
  b_y_data = b_y->data;
  for (i = 0; i < loop_ub; i++) {
    lu = y_data[6 * i + 1];
    b_y_data[i] = lu * lu;
  }
  st.site = &j_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  loop_ub = y->size[1];
  i = t->size[0] * t->size[1];
  t->size[0] = 1;
  t->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, t, i, &l_emlrtRTEI);
  t_data = t->data;
  for (i = 0; i < loop_ub; i++) {
    lu = y_data[6 * i + 2];
    t_data[i] = lu * lu;
  }
  if ((b_y->size[1] != t->size[1]) &&
      ((b_y->size[1] != 1) && (t->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_y->size[1], t->size[1], &c_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &j_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  loop_ub = y->size[1];
  i = topt->size[0] * topt->size[1];
  topt->size[0] = 1;
  topt->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&c_st, topt, i, &m_emlrtRTEI);
  topt_data = topt->data;
  for (i = 0; i < loop_ub; i++) {
    lu = y_data[6 * i + 2];
    y_idx_1 = y_data[6 * i + 1];
    topt_data[i] = muDoubleScalarAtan2(lu, y_idx_1);
  }
  if ((y->size[1] != topt->size[1]) &&
      ((y->size[1] != 1) && (topt->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(y->size[1], topt->size[1], &b_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (b_y->size[1] == t->size[1]) {
    loop_ub = b_y->size[1] - 1;
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    emxEnsureCapacity_real_T(sp, b_y, i, &n_emlrtRTEI);
    b_y_data = b_y->data;
    for (i = 0; i <= loop_ub; i++) {
      b_y_data[i] += t_data[i];
    }
  } else {
    plus(sp, b_y, t);
  }
  emxFree_real_T(sp, &t);
  st.site = &j_emlrtRSI;
  b_sqrt(&st, b_y);
  if (y->size[1] == topt->size[1]) {
    loop_ub = y->size[1];
    i = topt->size[0] * topt->size[1];
    topt->size[0] = 1;
    topt->size[1] = y->size[1];
    emxEnsureCapacity_real_T(sp, topt, i, &o_emlrtRTEI);
    topt_data = topt->data;
    for (i = 0; i < loop_ub; i++) {
      topt_data[i] = y_data[6 * i + 5] - topt_data[i];
    }
  } else {
    c_binary_expand_op(sp, topt, y);
  }
  st.site = &j_emlrtRSI;
  b_cos(&st, topt);
  topt_data = topt->data;
  if ((b_y->size[1] != topt->size[1]) &&
      ((b_y->size[1] != 1) && (topt->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_y->size[1], topt->size[1], &emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &j_emlrtRSI;
  if (b_y->size[1] == topt->size[1]) {
    loop_ub = b_y->size[1] - 1;
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    emxEnsureCapacity_real_T(&st, b_y, i, &p_emlrtRTEI);
    b_y_data = b_y->data;
    for (i = 0; i <= loop_ub; i++) {
      b_y_data[i] = b_y_data[i] * topt_data[i] + 1.0;
    }
  } else {
    b_st.site = &j_emlrtRSI;
    b_binary_expand_op(&b_st, b_y, topt);
    b_y_data = b_y->data;
  }
  emxFree_real_T(&st, &topt);
  b_st.site = &eb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  if ((y->size[1] != 1) && (b_y->size[1] != 1) &&
      (y->size[1] != b_y->size[1])) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  /*  Point-Earth distance */
  /*  Inequality constraints */
  /*  Output construction */
  if (y->size[1] == b_y->size[1]) {
    loop_ub = y->size[1] + 1;
    i = qAngle->size[0];
    qAngle->size[0] = ((csi->size[0] + y->size[1]) + csi->size[0]) + 1;
    emxEnsureCapacity_real_T(sp, qAngle, i, &q_emlrtRTEI);
    topt_data = qAngle->data;
    topt_data[0] = -20.0 * (*m - 400.0);
    for (i = 0; i <= loop_ub - 2; i++) {
      topt_data[i + 1] = -20.0 * (y_data[6 * i] / b_y_data[i] - 6380.0);
    }
    b_loop_ub = csi->size[0];
    for (i = 0; i < b_loop_ub; i++) {
      topt_data[i + loop_ub] = -20.0 * (1.0 - csi_data[i]);
    }
    b_loop_ub = csi->size[0];
    for (i = 0; i < b_loop_ub; i++) {
      topt_data[(i + loop_ub) + csi->size[0]] = -20.0 * csi_data[i];
    }
  } else {
    binary_expand_op(sp, qAngle, *m, y, b_y, csi);
  }
  emxFree_real_T(sp, &b_y);
  emxFree_real_T(sp, &csi);
  st.site = &k_emlrtRSI;
  b_exp(&st, qAngle);
  lu = 0.0;
  for (i = 0; i < 3; i++) {
    lu += ((Qdiag[0] * Q[3 * i] + Qdiag[1] * Q[3 * i + 1]) +
           Qdiag[2] * Q[3 * i + 2]) *
          Qdiag[i];
  }
  st.site = &k_emlrtRSI;
  *J = ((alpha * *tCost + (1.0 - alpha) * (1.0 - *m / m0)) + 10.0 * lu) +
       mean(&st, qAngle);
  emxFree_real_T(sp, &qAngle);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (costFunUnc.c) */
