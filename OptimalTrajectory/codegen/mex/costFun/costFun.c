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
#include "EOEDerivatives.h"
#include "colon.h"
#include "costFun_data.h"
#include "costFun_emxutil.h"
#include "costFun_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "power.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI =
    {
        5,         /* lineNo */
        "costFun", /* fcnName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI =
    {
        6,         /* lineNo */
        "costFun", /* fcnName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI =
    {
        8,         /* lineNo */
        "costFun", /* fcnName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI =
    {
        9,         /* lineNo */
        "costFun", /* fcnName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI =
    {
        17,        /* lineNo */
        "costFun", /* fcnName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI =
    {
        18,        /* lineNo */
        "costFun", /* fcnName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI =
    {
        35,        /* lineNo */
        "costFun", /* fcnName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI =
    {
        37,        /* lineNo */
        "costFun", /* fcnName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI =
    {
        44,        /* lineNo */
        "costFun", /* fcnName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI =
    {
        50,        /* lineNo */
        "costFun", /* fcnName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI =
    {
        51,        /* lineNo */
        "costFun", /* fcnName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    117,     /* lineNo */
    "colon", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/colon.m" /* pathName
                                                                          */
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

static emlrtRSInfo db_emlrtRSI = {
    11,    /* lineNo */
    "cos", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/cos.m" /* pathName
                                                                          */
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

static emlrtMCInfo emlrtMCI =
    {
        13,        /* lineNo */
        8,         /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtMCInfo b_emlrtMCI =
    {
        13,        /* lineNo */
        7,         /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtMCInfo c_emlrtMCI =
    {
        14,        /* lineNo */
        11,        /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtMCInfo d_emlrtMCI =
    {
        14,        /* lineNo */
        10,        /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtRTEInfo emlrtRTEI = {
    13,                     /* lineNo */
    27,                     /* colNo */
    "assertCompatibleDims", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/assertCompatibleDims.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    130,             /* lineNo */
    27,              /* colNo */
    "unaryMinOrMax", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pName */
};

static emlrtECInfo emlrtECI =
    {
        2,         /* nDims */
        50,        /* lineNo */
        18,        /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtECInfo b_emlrtECI =
    {
        2,         /* nDims */
        50,        /* lineNo */
        49,        /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtECInfo c_emlrtECI =
    {
        2,         /* nDims */
        50,        /* lineNo */
        23,        /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtBCInfo emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        44,        /* lineNo */
        20,        /* colNo */
        "y",       /* aName */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo b_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        37,        /* lineNo */
        24,        /* colNo */
        "y",       /* aName */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo c_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        35,        /* lineNo */
        9,         /* colNo */
        "y",       /* aName */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo d_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        35,        /* lineNo */
        52,        /* colNo */
        "y",       /* aName */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo e_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        35,        /* lineNo */
        45,        /* colNo */
        "t",       /* aName */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo f_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        35,        /* lineNo */
        20,        /* colNo */
        "y",       /* aName */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo g_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        27,        /* lineNo */
        5,         /* colNo */
        "y",       /* aName */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo h_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        33,        /* lineNo */
        24,        /* colNo */
        "qAngle",  /* aName */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo i_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        6,         /* lineNo */
        12,        /* colNo */
        "x",       /* aName */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m", /* pName */
        0                                  /* checkKind */
};

static emlrtDCInfo emlrtDCI =
    {
        6,         /* lineNo */
        12,        /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m", /* pName */
        1                                  /* checkKind */
};

static emlrtBCInfo j_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        5,         /* lineNo */
        11,        /* colNo */
        "x",       /* aName */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m", /* pName */
        0                                  /* checkKind */
};

static emlrtDCInfo b_emlrtDCI =
    {
        5,         /* lineNo */
        11,        /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m", /* pName */
        1                                  /* checkKind */
};

static emlrtBCInfo k_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        5,         /* lineNo */
        9,         /* colNo */
        "x",       /* aName */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo l_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        4,         /* lineNo */
        12,        /* colNo */
        "x",       /* aName */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo m_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        34,        /* lineNo */
        20,        /* colNo */
        "csi",     /* aName */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo n_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        36,        /* lineNo */
        27,        /* colNo */
        "csi",     /* aName */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m", /* pName */
        0                                  /* checkKind */
};

static emlrtBCInfo o_emlrtBCI =
    {
        -1,        /* iFirst */
        -1,        /* iLast */
        38,        /* lineNo */
        84,        /* colNo */
        "t",       /* aName */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m", /* pName */
        0                                  /* checkKind */
};

static emlrtRTEInfo h_emlrtRTEI =
    {
        8,         /* lineNo */
        1,         /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtRTEInfo i_emlrtRTEI =
    {
        9,         /* lineNo */
        1,         /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtRTEInfo j_emlrtRTEI =
    {
        5,         /* lineNo */
        7,         /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtRTEInfo k_emlrtRTEI =
    {
        6,         /* lineNo */
        10,        /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtRTEInfo l_emlrtRTEI =
    {
        26,        /* lineNo */
        1,         /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtRTEInfo m_emlrtRTEI =
    {
        50,        /* lineNo */
        23,        /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtRTEInfo n_emlrtRTEI =
    {
        50,        /* lineNo */
        33,        /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtRTEInfo o_emlrtRTEI =
    {
        50,        /* lineNo */
        56,        /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtRTEInfo p_emlrtRTEI =
    {
        50,        /* lineNo */
        18,        /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI =
    {
        50,        /* lineNo */
        49,        /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtRTEInfo r_emlrtRTEI =
    {
        50,        /* lineNo */
        16,        /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtRTEInfo s_emlrtRTEI =
    {
        50,        /* lineNo */
        1,         /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtRTEInfo t_emlrtRTEI =
    {
        5,         /* lineNo */
        1,         /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI =
    {
        6,         /* lineNo */
        1,         /* colNo */
        "costFun", /* fName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pName */
};

static emlrtRSInfo pb_emlrtRSI =
    {
        13,        /* lineNo */
        "costFun", /* fcnName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pathName */
};

static emlrtRSInfo qb_emlrtRSI =
    {
        14,        /* lineNo */
        "costFun", /* fcnName */
        "/Users/matteodepaola/Documents/git/CNOEC "
        "git/OptimalTrajectory/costFun.m" /* pathName */
};

/* Function Declarations */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *y,
                               const emxArray_real_T *topt);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *csi,
                             const emxArray_real_T *y,
                             const emxArray_real_T *b_y);

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
  emxInit_real_T(sp, &b_y, 2, &r_emlrtRTEI);
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  if (topt->size[1] == 1) {
    b_y->size[1] = y->size[1];
  } else {
    b_y->size[1] = topt->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_y, i, &r_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, y, i, &r_emlrtRTEI);
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

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *csi,
                             const emxArray_real_T *y,
                             const emxArray_real_T *b_y)
{
  const real_T *b_y_data;
  const real_T *y_data;
  real_T *csi_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  y_data = b_y->data;
  b_y_data = y->data;
  i = y->size[1];
  stride_0_0 = csi->size[0];
  if (b_y->size[1] == 1) {
    csi->size[0] = i;
  } else {
    csi->size[0] = b_y->size[1];
  }
  emxEnsureCapacity_real_T(sp, csi, stride_0_0, &s_emlrtRTEI);
  csi_data = csi->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (b_y->size[1] != 1);
  if (b_y->size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = b_y->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    csi_data[i] = b_y_data[6 * (i * stride_0_0)] / y_data[i * stride_1_0];
  }
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
  emxInit_real_T(sp, &b_y, 2, &q_emlrtRTEI);
  i = y->size[1];
  stride_0_1 = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  if (topt->size[1] == 1) {
    b_y->size[1] = i;
  } else {
    b_y->size[1] = topt->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_y, stride_0_1, &q_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, topt, i, &q_emlrtRTEI);
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
  emxInit_real_T(sp, &b_y, 2, &m_emlrtRTEI);
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  if (t->size[1] == 1) {
    b_y->size[1] = y->size[1];
  } else {
    b_y->size[1] = t->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_y, i, &m_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, y, i, &m_emlrtRTEI);
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

void costFun(const emlrtStack *sp, const emxArray_real_T *x, real_T Ts,
             real_T tmax, real_T b_y0[6], const real_T ybar[6], real_T ratio,
             real_T Tmax, real_T coeffT, real_T m0, real_T alpha, real_T J[3],
             emxArray_real_T *y, real_T *tCost, real_T *m)
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
  real_T d;
  real_T lu;
  real_T y_idx_1;
  real_T *b_y_data;
  real_T *csi_data;
  real_T *t_data;
  real_T *topt_data;
  real_T *y_data;
  int32_T iv[2];
  int32_T i;
  int32_T i1;
  int32_T idx;
  int32_T k;
  int32_T loop_ub;
  int32_T nx;
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
    i1 = 0;
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
    i1 = (int32_T)(lu + 1.0);
  }
  iv[0] = 1;
  nx = i1 - i;
  iv[1] = nx;
  st.site = &emlrtRSI;
  indexShapeCheck(&st, x->size[0], iv);
  /*  Throttle */
  if (lu + 2.0 > x->size[0]) {
    i1 = 0;
    k = 0;
  } else {
    if (lu + 2.0 != muDoubleScalarFloor(lu + 2.0)) {
      emlrtIntegerCheckR2012b(lu + 2.0, &emlrtDCI, (emlrtCTX)sp);
    }
    if ((int32_T)(lu + 2.0) > x->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lu + 2.0), 1, x->size[0],
                                    &i_emlrtBCI, (emlrtCTX)sp);
    }
    i1 = (int32_T)(lu + 2.0) - 1;
    k = x->size[0];
  }
  iv[0] = 1;
  idx = k - i1;
  iv[1] = idx;
  st.site = &b_emlrtRSI;
  indexShapeCheck(&st, x->size[0], iv);
  /*  Angle of the thrust vector */
  st.site = &c_emlrtRSI;
  emxInit_real_T(&st, &t, 2, &h_emlrtRTEI);
  t_data = t->data;
  if (muDoubleScalarIsNaN(Ts) || muDoubleScalarIsNaN(tmax)) {
    k = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity_real_T(&st, t, k, &h_emlrtRTEI);
    t_data = t->data;
    t_data[0] = rtNaN;
  } else if ((Ts == 0.0) || ((0.0 < tmax) && (Ts < 0.0)) ||
             ((tmax < 0.0) && (Ts > 0.0))) {
    t->size[0] = 1;
    t->size[1] = 0;
  } else if (muDoubleScalarIsInf(tmax) &&
             (muDoubleScalarIsInf(Ts) || (0.0 == tmax))) {
    k = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity_real_T(&st, t, k, &h_emlrtRTEI);
    t_data = t->data;
    t_data[0] = rtNaN;
  } else if (muDoubleScalarIsInf(Ts)) {
    k = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity_real_T(&st, t, k, &h_emlrtRTEI);
    t_data = t->data;
    t_data[0] = 0.0;
  } else if (muDoubleScalarFloor(Ts) == Ts) {
    k = t->size[0] * t->size[1];
    t->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor(tmax / Ts);
    t->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&st, t, k, &h_emlrtRTEI);
    t_data = t->data;
    for (k = 0; k <= loop_ub; k++) {
      t_data[k] = Ts * (real_T)k;
    }
  } else {
    b_st.site = &m_emlrtRSI;
    eml_float_colon(&b_st, Ts, tmax, t);
    t_data = t->data;
  }
  /*  Time vector for the state variables */
  st.site = &d_emlrtRSI;
  lu = Ts * ratio;
  emxInit_real_T(&st, &topt, 2, &i_emlrtRTEI);
  if (muDoubleScalarIsNaN(lu) || muDoubleScalarIsNaN(tmax)) {
    k = topt->size[0] * topt->size[1];
    topt->size[0] = 1;
    topt->size[1] = 1;
    emxEnsureCapacity_real_T(&st, topt, k, &i_emlrtRTEI);
    topt_data = topt->data;
    topt_data[0] = rtNaN;
  } else if ((lu == 0.0) || ((0.0 < tmax) && (lu < 0.0)) ||
             ((tmax < 0.0) && (lu > 0.0))) {
    topt->size[0] = 1;
    topt->size[1] = 0;
  } else if (muDoubleScalarIsInf(tmax) &&
             (muDoubleScalarIsInf(lu) || (0.0 == tmax))) {
    k = topt->size[0] * topt->size[1];
    topt->size[0] = 1;
    topt->size[1] = 1;
    emxEnsureCapacity_real_T(&st, topt, k, &i_emlrtRTEI);
    topt_data = topt->data;
    topt_data[0] = rtNaN;
  } else if (muDoubleScalarIsInf(lu)) {
    k = topt->size[0] * topt->size[1];
    topt->size[0] = 1;
    topt->size[1] = 1;
    emxEnsureCapacity_real_T(&st, topt, k, &i_emlrtRTEI);
    topt_data = topt->data;
    topt_data[0] = 0.0;
  } else if (muDoubleScalarFloor(lu) == lu) {
    k = topt->size[0] * topt->size[1];
    topt->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor(tmax / lu);
    topt->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&st, topt, k, &i_emlrtRTEI);
    topt_data = topt->data;
    for (k = 0; k <= loop_ub; k++) {
      topt_data[k] = lu * (real_T)k;
    }
  } else {
    b_st.site = &m_emlrtRSI;
    eml_float_colon(&b_st, lu, tmax, topt);
  }
  emxInit_real_T(&st, &b_x, 1, &j_emlrtRTEI);
  /*  Time vector for the optimization variables */
  /*  Interpolation using time vector t */
  k = b_x->size[0];
  b_x->size[0] = nx;
  emxEnsureCapacity_real_T(sp, b_x, k, &j_emlrtRTEI);
  topt_data = b_x->data;
  for (k = 0; k < nx; k++) {
    topt_data[k] = x_data[i + k];
  }
  emxInit_real_T(sp, &csi, 1, &t_emlrtRTEI);
  st.site = &pb_emlrtRSI;
  emlrt_marshallIn(
      &st,
      transpose(&st,
                makima(&st, emlrt_marshallOut(topt), b_emlrt_marshallOut(b_x),
                       emlrt_marshallOut(t), &emlrtMCI),
                &b_emlrtMCI),
      "<output of transpose>", csi);
  csi_data = csi->data;
  i = b_x->size[0];
  b_x->size[0] = idx;
  emxEnsureCapacity_real_T(sp, b_x, i, &k_emlrtRTEI);
  topt_data = b_x->data;
  for (i = 0; i < idx; i++) {
    topt_data[i] = x_data[i1 + i];
  }
  emxInit_real_T(sp, &qAngle, 1, &u_emlrtRTEI);
  st.site = &qb_emlrtRSI;
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
  d = xbar[0] - x0[0];
  d += 0.1 * (real_T)(d == 0.0);
  lu = 1.0 / (d * d);
  d = xbar[1] - x0[1];
  d += 0.1 * (real_T)(d == 0.0);
  y_idx_1 = 1.0 / (d * d);
  d = xbar[4] - x0[4];
  d += 0.1 * (real_T)(d == 0.0);
  emxFree_real_T(sp, &b_x);
  memset(&Q[0], 0, 9U * sizeof(real_T));
  Q[0] = lu;
  Q[4] = y_idx_1;
  Q[8] = 1.0 / (d * d);
  /*  Intialization of variables */
  i = y->size[0] * y->size[1];
  y->size[0] = 6;
  y->size[1] = t->size[1];
  emxEnsureCapacity_real_T(sp, y, i, &l_emlrtRTEI);
  y_data = y->data;
  nx = 6 * t->size[1];
  for (i = 0; i < nx; i++) {
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
    lu = Tmax / *m * csi_data[k];
    /*  Acceleration vector */
    if (k + 1 > t->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, t->size[1], &e_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (k + 1 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &d_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    Qdiag[0] = lu * muDoubleScalarSin(topt_data[k]) / 1000.0;
    Qdiag[1] = lu * muDoubleScalarCos(topt_data[k]) / 1000.0;
    Qdiag[2] = lu * 0.0 / 1000.0;
    st.site = &g_emlrtRSI;
    EOEDerivatives(&st, *(real_T(*)[6]) & y_data[6 * k], Qdiag, x0);
    if (k + 1 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &f_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (k + 2 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 2, 1, y->size[1], &c_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (i1 = 0; i1 < 6; i1++) {
      d = y_data[i1 + 6 * k] + Ts * x0[i1];
      x0[i1] = d;
      y_data[i1 + 6 * (k + 1)] = d;
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
    for (i1 = 0; i1 < 3; i1++) {
      lu += ((Qdiag[0] * Q[3 * i1] + Qdiag[1] * Q[3 * i1 + 1]) +
             Qdiag[2] * Q[3 * i1 + 2]) *
            Qdiag[i1];
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
  emxFree_real_T(sp, &qAngle);
  /*  Cost calculation */
  *tCost = *tCost / (real_T)t->size[1] / tmax;
  /*  Normalization of time cost */
  nx = y->size[1];
  if (y->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(y->size[1], 1, y->size[1], &emlrtBCI,
                                  (emlrtCTX)sp);
  }
  st.site = &i_emlrtRSI;
  EOE2COE(&st, *(real_T(*)[6]) & y_data[6 * (nx - 1)], x0);
  /*  Final state in COE */
  Qdiag[0] = x0[0] - xbar[0];
  Qdiag[1] = x0[1] - xbar[1];
  Qdiag[2] = x0[4] - xbar[4];
  /*  Final State Error Cost */
  /*  Cost */
  /*  Constraints */
  /*  Equality constraints */
  nx = y->size[1];
  i = topt->size[0] * topt->size[1];
  topt->size[0] = 1;
  topt->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, topt, i, &m_emlrtRTEI);
  topt_data = topt->data;
  for (i = 0; i < nx; i++) {
    topt_data[i] = y_data[6 * i + 1];
  }
  emxInit_real_T(sp, &b_y, 2, &r_emlrtRTEI);
  st.site = &j_emlrtRSI;
  power(&st, topt, b_y);
  nx = y->size[1];
  i = topt->size[0] * topt->size[1];
  topt->size[0] = 1;
  topt->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, topt, i, &n_emlrtRTEI);
  topt_data = topt->data;
  for (i = 0; i < nx; i++) {
    topt_data[i] = y_data[6 * i + 2];
  }
  st.site = &j_emlrtRSI;
  power(&st, topt, t);
  t_data = t->data;
  if ((b_y->size[1] != t->size[1]) &&
      ((b_y->size[1] != 1) && (t->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_y->size[1], t->size[1], &c_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &j_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  nx = y->size[1];
  i = topt->size[0] * topt->size[1];
  topt->size[0] = 1;
  topt->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&c_st, topt, i, &o_emlrtRTEI);
  topt_data = topt->data;
  for (i = 0; i < nx; i++) {
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
    nx = b_y->size[1] - 1;
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    emxEnsureCapacity_real_T(sp, b_y, i, &p_emlrtRTEI);
    b_y_data = b_y->data;
    for (i = 0; i <= nx; i++) {
      b_y_data[i] += t_data[i];
    }
  } else {
    plus(sp, b_y, t);
  }
  emxFree_real_T(sp, &t);
  st.site = &j_emlrtRSI;
  b_sqrt(&st, b_y);
  st.site = &j_emlrtRSI;
  if (y->size[1] == topt->size[1]) {
    nx = y->size[1];
    i = topt->size[0] * topt->size[1];
    topt->size[0] = 1;
    topt->size[1] = y->size[1];
    emxEnsureCapacity_real_T(&st, topt, i, &q_emlrtRTEI);
    topt_data = topt->data;
    for (i = 0; i < nx; i++) {
      topt_data[i] = y_data[6 * i + 5] - topt_data[i];
    }
  } else {
    b_st.site = &j_emlrtRSI;
    c_binary_expand_op(&b_st, topt, y);
    topt_data = topt->data;
  }
  b_st.site = &db_emlrtRSI;
  nx = topt->size[1];
  c_st.site = &ab_emlrtRSI;
  if ((1 <= topt->size[1]) && (topt->size[1] > 2147483646)) {
    d_st.site = &p_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  for (k = 0; k < nx; k++) {
    topt_data[k] = muDoubleScalarCos(topt_data[k]);
  }
  if ((b_y->size[1] != topt->size[1]) &&
      ((b_y->size[1] != 1) && (topt->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_y->size[1], topt->size[1], &emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &j_emlrtRSI;
  if (b_y->size[1] == topt->size[1]) {
    nx = b_y->size[1] - 1;
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    emxEnsureCapacity_real_T(&st, b_y, i, &r_emlrtRTEI);
    b_y_data = b_y->data;
    for (i = 0; i <= nx; i++) {
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
    emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  if (y->size[1] == b_y->size[1]) {
    nx = y->size[1];
    i = csi->size[0];
    csi->size[0] = y->size[1];
    emxEnsureCapacity_real_T(sp, csi, i, &s_emlrtRTEI);
    csi_data = csi->data;
    for (i = 0; i < nx; i++) {
      csi_data[i] = y_data[6 * i] / b_y_data[i];
    }
  } else {
    st.site = &j_emlrtRSI;
    binary_expand_op(&st, csi, y, b_y);
    csi_data = csi->data;
  }
  emxFree_real_T(sp, &b_y);
  /*  Point-Earth distance */
  st.site = &k_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  d_st.site = &ib_emlrtRSI;
  if (csi->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &jb_emlrtRSI;
  f_st.site = &kb_emlrtRSI;
  nx = csi->size[0];
  if (csi->size[0] <= 2) {
    if (csi->size[0] == 1) {
      y_idx_1 = csi_data[0];
    } else if ((csi_data[0] > csi_data[1]) ||
               (muDoubleScalarIsNaN(csi_data[0]) &&
                (!muDoubleScalarIsNaN(csi_data[1])))) {
      y_idx_1 = csi_data[1];
    } else {
      y_idx_1 = csi_data[0];
    }
  } else {
    g_st.site = &mb_emlrtRSI;
    if (!muDoubleScalarIsNaN(csi_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &nb_emlrtRSI;
      if (csi->size[0] > 2147483646) {
        i_st.site = &p_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= nx)) {
        if (!muDoubleScalarIsNaN(csi_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      y_idx_1 = csi_data[0];
    } else {
      g_st.site = &lb_emlrtRSI;
      y_idx_1 = csi_data[idx - 1];
      loop_ub = idx + 1;
      h_st.site = &ob_emlrtRSI;
      if ((idx + 1 <= csi->size[0]) && (csi->size[0] > 2147483646)) {
        i_st.site = &p_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = loop_ub; k <= nx; k++) {
        d = csi_data[k - 1];
        if (y_idx_1 > d) {
          y_idx_1 = d;
        }
      }
    }
  }
  emxFree_real_T(&f_st, &csi);
  /*  Inequality constraints */
  /*  Output construction */
  lu = 0.0;
  for (i = 0; i < 3; i++) {
    lu += ((Qdiag[0] * Q[3 * i] + Qdiag[1] * Q[3 * i + 1]) +
           Qdiag[2] * Q[3 * i + 2]) *
          Qdiag[i];
  }
  J[0] = (alpha * *tCost + (1.0 - alpha) * (1.0 - *m / m0)) + 10.0 * lu;
  J[1] = *m - 400.0;
  J[2] = y_idx_1 - 6380.0;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (costFun.c) */
