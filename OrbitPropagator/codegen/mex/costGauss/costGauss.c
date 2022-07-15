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
#include "diag.h"
#include "div.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    15,          /* lineNo */
    "costGauss", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pathName
                                                                        */
};

static emlrtRSInfo b_emlrtRSI = {
    16,          /* lineNo */
    "costGauss", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pathName
                                                                        */
};

static emlrtRSInfo c_emlrtRSI = {
    18,          /* lineNo */
    "costGauss", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pathName
                                                                        */
};

static emlrtRSInfo d_emlrtRSI = {
    30,          /* lineNo */
    "costGauss", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pathName
                                                                        */
};

static emlrtRSInfo e_emlrtRSI = {
    35,          /* lineNo */
    "costGauss", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pathName
                                                                        */
};

static emlrtRSInfo f_emlrtRSI = {
    38,          /* lineNo */
    "costGauss", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pathName
                                                                        */
};

static emlrtRSInfo g_emlrtRSI = {
    41,          /* lineNo */
    "costGauss", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pathName
                                                                        */
};

static emlrtRSInfo h_emlrtRSI = {
    42,          /* lineNo */
    "costGauss", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pathName
                                                                        */
};

static emlrtRSInfo i_emlrtRSI = {
    44,          /* lineNo */
    "costGauss", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pathName
                                                                        */
};

static emlrtRSInfo j_emlrtRSI = {
    45,          /* lineNo */
    "costGauss", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pathName
                                                                        */
};

static emlrtRSInfo k_emlrtRSI = {
    125,                                                          /* lineNo */
    "colon",                                                      /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                       */
};

static emlrtRSInfo s_emlrtRSI = {
    71,                                                           /* lineNo */
    "power",                                                      /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName */
};

static emlrtRSInfo t_emlrtRSI = {
    38,        /* lineNo */
    "COE2EOE", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\COE2EOE.m" /* pathName
                                                                      */
};

static emlrtRSInfo
    u_emlrtRSI =
        {
            23,               /* lineNo */
            "EOEDerivatives", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo
    v_emlrtRSI =
        {
            25,               /* lineNo */
            "EOEDerivatives", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo
    w_emlrtRSI =
        {
            33,               /* lineNo */
            "EOEDerivatives", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo hb_emlrtRSI =
    {
        34,               /* lineNo */
        "rdivide_helper", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
        "helper.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = {
    51,    /* lineNo */
    "div", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" /* pathName
                                                                       */
};

static emlrtRSInfo jb_emlrtRSI =
    {
        69,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper."
        "m" /* pathName */
};

static emlrtECInfo emlrtECI = {
    -1,          /* nDims */
    42,          /* lineNo */
    1,           /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pName
                                                                        */
};

static emlrtBCInfo emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    42,          /* lineNo */
    3,           /* colNo */
    "F",         /* aName */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    2,           /* nDims */
    44,          /* lineNo */
    17,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pName
                                                                        */
};

static emlrtECInfo c_emlrtECI = {
    2,           /* nDims */
    44,          /* lineNo */
    48,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pName
                                                                        */
};

static emlrtECInfo d_emlrtECI = {
    2,           /* nDims */
    44,          /* lineNo */
    22,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pName
                                                                        */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    42,          /* lineNo */
    44,          /* colNo */
    "y",         /* aName */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtECInfo e_emlrtECI = {
    -1,          /* nDims */
    38,          /* lineNo */
    5,           /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pName
                                                                        */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    38,          /* lineNo */
    18,          /* colNo */
    "F",         /* aName */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    38,          /* lineNo */
    7,           /* colNo */
    "F",         /* aName */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    38,          /* lineNo */
    57,          /* colNo */
    "y",         /* aName */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    38,          /* lineNo */
    39,          /* colNo */
    "u",         /* aName */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    35,          /* lineNo */
    9,           /* colNo */
    "y",         /* aName */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    35,          /* lineNo */
    59,          /* colNo */
    "u",         /* aName */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    35,          /* lineNo */
    59,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m", /* pName
                                                                         */
    1 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    35,          /* lineNo */
    52,          /* colNo */
    "y",         /* aName */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    35,          /* lineNo */
    45,          /* colNo */
    "t",         /* aName */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,          /* iFirst */
    -1,          /* iLast */
    35,          /* lineNo */
    20,          /* colNo */
    "y",         /* aName */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    20,          /* lineNo */
    13,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m", /* pName
                                                                         */
    1 /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    20,          /* lineNo */
    1,           /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m", /* pName
                                                                         */
    1 /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    31,          /* lineNo */
    1,           /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m", /* pName
                                                                         */
    1 /* checkKind */
};

static emlrtRTEInfo f_emlrtRTEI = {
    20,          /* lineNo */
    1,           /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pName
                                                                        */
};

static emlrtRTEInfo g_emlrtRTEI = {
    31,          /* lineNo */
    1,           /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pName
                                                                        */
};

static emlrtRTEInfo h_emlrtRTEI = {
    44,          /* lineNo */
    22,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pName
                                                                        */
};

static emlrtRTEInfo i_emlrtRTEI = {
    44,          /* lineNo */
    32,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pName
                                                                        */
};

static emlrtRTEInfo j_emlrtRTEI = {
    44,          /* lineNo */
    61,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pName
                                                                        */
};

static emlrtRTEInfo k_emlrtRTEI = {
    44,          /* lineNo */
    68,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pName
                                                                        */
};

static emlrtRTEInfo l_emlrtRTEI = {
    44,          /* lineNo */
    17,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pName
                                                                        */
};

static emlrtRTEInfo m_emlrtRTEI = {
    44,          /* lineNo */
    44,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pName
                                                                        */
};

static emlrtRTEInfo p_emlrtRTEI = {
    45,          /* lineNo */
    1,           /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pName
                                                                        */
};

static emlrtRTEInfo q_emlrtRTEI = {
    1,           /* lineNo */
    14,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pName
                                                                        */
};

static emlrtRTEInfo r_emlrtRTEI = {
    125,                                                          /* lineNo */
    9,                                                            /* colNo */
    "colon",                                                      /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI = {
    44,          /* lineNo */
    48,          /* colNo */
    "costGauss", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\costGauss.m" /* pName
                                                                        */
};

/* Function Declarations */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2);

static void plus(const emlrtStack *sp, emxArray_real_T *in1,
                 const emxArray_real_T *in2);

/* Function Definitions */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
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
  emxInit_real_T(sp, &b_in2, 2, &v_emlrtRTEI);
  i = in2->size[1];
  stride_0_1 = b_in2->size[0] * b_in2->size[1];
  b_in2->size[0] = 1;
  if (in1->size[1] == 1) {
    b_in2->size[1] = i;
  } else {
    b_in2->size[1] = in1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in2, stride_0_1, &v_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, in1, i, &v_emlrtRTEI);
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
  emxInit_real_T(sp, &b_in1, 2, &h_emlrtRTEI);
  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = 1;
  if (in2->size[1] == 1) {
    b_in1->size[1] = in1->size[1];
  } else {
    b_in1->size[1] = in2->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &h_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, in1, i, &h_emlrtRTEI);
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
               real_T theta0, real_T ratio, emxArray_real_T *J)
{
  static const int8_T iv[6] = {1, 1, 1, 1, 1, 0};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *F;
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r3;
  emxArray_real_T *y;
  real_T Q[36];
  real_T R[9];
  real_T dyinv[6];
  real_T x0[6];
  real_T a[3];
  const real_T *u_data;
  real_T p;
  real_T x;
  real_T y0_tmp;
  real_T *F_data;
  real_T *J_data;
  real_T *b_y_data;
  real_T *r2;
  real_T *r4;
  real_T *y_data;
  int32_T b_u;
  int32_T d_w_tmp;
  int32_T k;
  int32_T loop_ub;
  int32_T t_size_idx_1;
  int32_T w_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
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
  emxInit_real_T(&st, &r, 2, &r_emlrtRTEI);
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
    b_st.site = &k_emlrtRSI;
    eml_float_colon(&b_st, Ts, tmax, r);
    t_size_idx_1 = r->size[1];
  }
  emxInit_real_T(&st, &y, 2, &f_emlrtRTEI);
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
  b_st.site = &t_emlrtRSI;
  p = muDoubleScalarTan(x0[2] / 2.0);
  b_y0[0] = x0[0] * (1.0 - x0[1] * x0[1]);
  y0_tmp = x0[3] + x0[4];
  b_y0[1] = x0[1] * muDoubleScalarCos(y0_tmp);
  b_y0[2] = x0[1] * muDoubleScalarSin(y0_tmp);
  b_y0[3] = muDoubleScalarCos(x0[3]) * p;
  b_y0[4] = muDoubleScalarSin(x0[3]) * p;
  b_y0[5] = y0_tmp + theta0;
  /*  y0(6) = y0(6)+theta0; */
  w_tmp = y->size[0] * y->size[1];
  y->size[0] = 6;
  emxEnsureCapacity_real_T(sp, y, w_tmp, &f_emlrtRTEI);
  y0_tmp = t_size_idx_1 + 1;
  if ((real_T)t_size_idx_1 + 1.0 != y0_tmp) {
    emlrtIntegerCheckR2012b((real_T)t_size_idx_1 + 1.0, &b_emlrtDCI,
                            (emlrtCTX)sp);
  }
  w_tmp = y->size[0] * y->size[1];
  y->size[1] = t_size_idx_1 + 1;
  emxEnsureCapacity_real_T(sp, y, w_tmp, &f_emlrtRTEI);
  y_data = y->data;
  if ((real_T)t_size_idx_1 + 1.0 != y0_tmp) {
    emlrtIntegerCheckR2012b((real_T)t_size_idx_1 + 1.0, &c_emlrtDCI,
                            (emlrtCTX)sp);
  }
  loop_ub = 6 * (t_size_idx_1 + 1);
  for (w_tmp = 0; w_tmp < loop_ub; w_tmp++) {
    y_data[w_tmp] = 0.0;
  }
  /*  Initialization of vector state */
  /*  Set initial conditions */
  /*  J = 0; % Initialization of cost function */
  /*  Weights Definition */
  for (k = 0; k < 6; k++) {
    y0_tmp = b_y0[k];
    y_data[k] = y0_tmp;
    dyinv[k] = muDoubleScalarAbs(y0_tmp - ybar[k]);
  }
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    y0_tmp = dyinv[loop_ub];
    y0_tmp = (real_T)(y0_tmp != 0.0) / (y0_tmp + (real_T)(y0_tmp == 0.0));
    dyinv[loop_ub] = y0_tmp;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  for (k = 0; k < 6; k++) {
    y0_tmp = dyinv[k];
    x0[k] = (real_T)iv[k] * (y0_tmp * y0_tmp);
  }
  memset(&Q[0], 0, 36U * sizeof(real_T));
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    Q[loop_ub + 6 * loop_ub] = x0[loop_ub];
  }
  emxInit_real_T(sp, &F, 1, &g_emlrtRTEI);
  st.site = &d_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  p = umax * umax;
  a[0] = 1.0 / p;
  a[1] = 1.0 / p;
  a[2] = 1.0 / p;
  diag(a, R);
  if (u->size[1] == 0) {
    b_u = 0;
  } else if (u->size[1] < 3) {
    b_u = 3;
  } else {
    b_u = u->size[1];
  }
  y0_tmp = 9.0 * (real_T)b_u + 6.0;
  if (y0_tmp != (int32_T)y0_tmp) {
    emlrtIntegerCheckR2012b(y0_tmp, &d_emlrtDCI, (emlrtCTX)sp);
  }
  w_tmp = F->size[0];
  F->size[0] = (int32_T)y0_tmp;
  emxEnsureCapacity_real_T(sp, F, w_tmp, &g_emlrtRTEI);
  F_data = F->data;
  if (y0_tmp != (int32_T)y0_tmp) {
    emlrtIntegerCheckR2012b(y0_tmp, &d_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = (int32_T)y0_tmp;
  for (w_tmp = 0; w_tmp < loop_ub; w_tmp++) {
    F_data[w_tmp] = 0.0;
  }
  /*  Cost Function Calculation */
  for (k = 0; k < t_size_idx_1; k++) {
    real_T b_a;
    real_T b_w_tmp;
    real_T b_x0_tmp;
    real_T c_w_tmp;
    real_T c_x0_tmp;
    real_T ku;
    real_T p_mu05;
    real_T w;
    real_T x0_tmp;
    int32_T d_x0_tmp;
    int32_T e_x0_tmp;
    ku = muDoubleScalarCeil(((real_T)k + 1.0) / ratio);
    if ((k + 1 < 1) || (k + 1 > t_size_idx_1)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, t_size_idx_1, &j_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &e_emlrtRSI;
    if ((k + 1 < 1) || (k + 1 > y->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &i_emlrtBCI, &st);
    }
    if (ku != (int32_T)ku) {
      emlrtIntegerCheckR2012b(ku, &emlrtDCI, &st);
    }
    if (((int32_T)ku < 1) || ((int32_T)ku > u->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ku, 1, u->size[1], &h_emlrtBCI,
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
    loop_ub = 6 * k + 5;
    b_w_tmp = muDoubleScalarSin(y_data[loop_ub]);
    c_w_tmp = muDoubleScalarCos(y_data[loop_ub]);
    d_w_tmp = 6 * k + 1;
    w_tmp = 6 * k + 2;
    w = (y_data[d_w_tmp] * c_w_tmp + 1.0) + y_data[w_tmp] * b_w_tmp;
    /*  r = p/w; */
    b_st.site = &u_emlrtRSI;
    b_st.site = &u_emlrtRSI;
    /*  alpha2 = h^2-k^2; */
    b_st.site = &v_emlrtRSI;
    x = p / 398600.0;
    if (x < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    p_mu05 = muDoubleScalarSqrt(x);
    /*  State Derivative Calculation */
    b_st.site = &w_emlrtRSI;
    b_a = w / p;
    b_st.site = &w_emlrtRSI;
    x = 398600.0 * p;
    if (x < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    if ((k + 1 < 1) || (k + 1 > y->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &k_emlrtBCI,
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
                    ((w + 1.0) * c_w_tmp + y_data[d_w_tmp]) * x0_tmp / w) -
                   (y_data[d_x0_tmp] * b_w_tmp - y_data[e_x0_tmp] * c_w_tmp) *
                       y_data[w_tmp] * c_x0_tmp / w));
    x0[2] = Ts *
            (p_mu05 * ((-b_x0_tmp * c_w_tmp +
                        ((w + 1.0) * b_w_tmp + y_data[w_tmp]) * x0_tmp / w) +
                       (y_data[d_x0_tmp] * muDoubleScalarSin(y_data[loop_ub]) -
                        y_data[e_x0_tmp] * muDoubleScalarCos(y_data[loop_ub])) *
                           y_data[w_tmp] * u_data[b_u + 2] / w));
    y0_tmp = p_mu05 *
             ((y_data[d_x0_tmp] * y_data[d_x0_tmp] + 1.0) +
              y_data[e_x0_tmp] * y_data[e_x0_tmp]) *
             c_x0_tmp / 2.0 / w;
    x0[3] = Ts * (y0_tmp * c_w_tmp);
    x0[4] = Ts * (y0_tmp * b_w_tmp);
    x0[5] = Ts * (muDoubleScalarSqrt(x) * (b_a * b_a) +
                  p_mu05 / w *
                      (y_data[d_x0_tmp] * muDoubleScalarSin(y_data[loop_ub]) -
                       y_data[e_x0_tmp] * muDoubleScalarCos(y_data[loop_ub])) *
                      c_x0_tmp);
    if (((int32_T)(k + 2U) < 1) || ((int32_T)(k + 2U) > y->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 2U), 1, y->size[1],
                                    &g_emlrtBCI, (emlrtCTX)sp);
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
      real_T d_a[36];
      real_T c_a[9];
      boolean_T b_p;
      y0_tmp = 9.0 * (ku - 1.0) + 1.0;
      p = 9.0 * ku;
      if (y0_tmp > p) {
        w_tmp = 0;
        loop_ub = 0;
      } else {
        if (((int32_T)y0_tmp < 1) || ((int32_T)y0_tmp > F->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)y0_tmp, 1, F->size[0],
                                        &d_emlrtBCI, (emlrtCTX)sp);
        }
        w_tmp = (int32_T)y0_tmp - 1;
        if (((int32_T)p < 1) || ((int32_T)p > F->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)p, 1, F->size[0], &c_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        loop_ub = (int32_T)p;
      }
      loop_ub -= w_tmp;
      if (loop_ub != 9) {
        emlrtSubAssignSizeCheck1dR2017a(loop_ub, 9, &e_emlrtECI, (emlrtCTX)sp);
      }
      st.site = &f_emlrtRSI;
      b_p = false;
      for (loop_ub = 0; loop_ub < 9; loop_ub++) {
        y0_tmp = R[loop_ub];
        c_a[loop_ub] = y0_tmp;
        if (b_p || (y0_tmp < 0.0)) {
          b_p = true;
        }
      }
      if (b_p) {
        emlrtErrorWithMessageIdR2018a(
            &st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      for (loop_ub = 0; loop_ub < 9; loop_ub++) {
        c_a[loop_ub] = muDoubleScalarSqrt(c_a[loop_ub]);
      }
      if (((int32_T)ku < 1) || ((int32_T)ku > u->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)ku, 1, u->size[1], &f_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      st.site = &f_emlrtRSI;
      for (loop_ub = 0; loop_ub < 36; loop_ub++) {
        d_a[loop_ub] = muDoubleScalarSqrt(Q[loop_ub]);
      }
      if (((int32_T)(((real_T)k + 1.0) + 1.0) < 1) ||
          ((int32_T)(((real_T)k + 1.0) + 1.0) > y->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(((real_T)k + 1.0) + 1.0), 1,
                                      y->size[1], &e_emlrtBCI, (emlrtCTX)sp);
      }
      st.site = &f_emlrtRSI;
      p = muDoubleScalarSqrt(((real_T)k + 1.0) / 10.0);
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        a[loop_ub] = (c_a[loop_ub] * b_x0_tmp + c_a[loop_ub + 3] * x0_tmp) +
                     c_a[loop_ub + 6] * c_x0_tmp;
      }
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        dyinv[loop_ub] = y_data[loop_ub + 6 * (k + 1)] - ybar[loop_ub];
      }
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        y0_tmp = 0.0;
        for (d_w_tmp = 0; d_w_tmp < 6; d_w_tmp++) {
          y0_tmp += d_a[loop_ub + 6 * d_w_tmp] * dyinv[d_w_tmp];
        }
        x0[loop_ub] = y0_tmp;
      }
      F_data[w_tmp] = a[0];
      F_data[w_tmp + 1] = a[1];
      F_data[w_tmp + 2] = a[2];
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        F_data[(w_tmp + loop_ub) + 3] = x0[loop_ub] * p;
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  st.site = &g_emlrtRSI;
  x = muDoubleScalarSqrt(u->size[1]);
  loop_ub = F->size[0];
  for (w_tmp = 0; w_tmp < loop_ub; w_tmp++) {
    F_data[w_tmp] /= x;
  }
  if (u->size[1] == 0) {
    b_u = 0;
  } else if (u->size[1] < 3) {
    b_u = 3;
  } else {
    b_u = u->size[1];
  }
  y0_tmp = 9.0 * (real_T)b_u + 1.0;
  if (y0_tmp > F->size[0]) {
    w_tmp = -1;
    loop_ub = -1;
  } else {
    if ((int32_T)y0_tmp > F->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)y0_tmp, 1, F->size[0], &emlrtBCI,
                                    (emlrtCTX)sp);
    }
    w_tmp = (int32_T)y0_tmp - 2;
    loop_ub = F->size[0] - 1;
  }
  loop_ub -= w_tmp;
  if (loop_ub != 6) {
    emlrtSubAssignSizeCheck1dR2017a(loop_ub, 6, &emlrtECI, (emlrtCTX)sp);
  }
  st.site = &h_emlrtRSI;
  for (k = 0; k < 36; k++) {
    Q[k] = muDoubleScalarSqrt(Q[k]);
  }
  if (y->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(y->size[1], 1, y->size[1], &b_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  st.site = &h_emlrtRSI;
  p = muDoubleScalarSqrt((real_T)t_size_idx_1 / 10.0);
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    dyinv[loop_ub] = y_data[loop_ub + 6 * (y->size[1] - 1)] - ybar[loop_ub];
  }
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    y0_tmp = 0.0;
    for (d_w_tmp = 0; d_w_tmp < 6; d_w_tmp++) {
      y0_tmp += 31.622776601683793 * Q[loop_ub + 6 * d_w_tmp] * dyinv[d_w_tmp];
    }
    x0[loop_ub] = y0_tmp;
  }
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    F_data[(w_tmp + loop_ub) + 1] = x0[loop_ub] * p;
  }
  /*  J = J/size(u,2) + 1e3*length(t)/10*(y(:,end)-ybar)'*Q*(y(:,end)-ybar); */
  st.site = &i_emlrtRSI;
  b_st.site = &s_emlrtRSI;
  loop_ub = y->size[1];
  w_tmp = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, r, w_tmp, &h_emlrtRTEI);
  J_data = r->data;
  for (w_tmp = 0; w_tmp < loop_ub; w_tmp++) {
    p = y_data[6 * w_tmp + 1];
    J_data[w_tmp] = p * p;
  }
  emxInit_real_T(&b_st, &r1, 2, &o_emlrtRTEI);
  st.site = &i_emlrtRSI;
  b_st.site = &s_emlrtRSI;
  loop_ub = y->size[1];
  w_tmp = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = y->size[1];
  emxEnsureCapacity_real_T(&b_st, r1, w_tmp, &i_emlrtRTEI);
  r2 = r1->data;
  for (w_tmp = 0; w_tmp < loop_ub; w_tmp++) {
    p = y_data[6 * w_tmp + 2];
    r2[w_tmp] = p * p;
  }
  if ((r->size[1] != r1->size[1]) &&
      ((r->size[1] != 1) && (r1->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(r->size[1], r1->size[1], &d_emlrtECI,
                                (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &b_y, 2, &j_emlrtRTEI);
  loop_ub = y->size[1];
  w_tmp = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, b_y, w_tmp, &j_emlrtRTEI);
  b_y_data = b_y->data;
  for (w_tmp = 0; w_tmp < loop_ub; w_tmp++) {
    b_y_data[w_tmp] = y_data[6 * w_tmp + 2];
  }
  emxInit_real_T(sp, &c_y, 2, &k_emlrtRTEI);
  loop_ub = y->size[1];
  w_tmp = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = y->size[1];
  emxEnsureCapacity_real_T(sp, c_y, w_tmp, &k_emlrtRTEI);
  b_y_data = c_y->data;
  for (w_tmp = 0; w_tmp < loop_ub; w_tmp++) {
    b_y_data[w_tmp] = y_data[6 * w_tmp + 1];
  }
  emxInit_real_T(sp, &r3, 2, &q_emlrtRTEI);
  st.site = &i_emlrtRSI;
  b_atan2(&st, b_y, c_y, r3);
  emxFree_real_T(sp, &c_y);
  if ((y->size[1] != r3->size[1]) &&
      ((y->size[1] != 1) && (r3->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(y->size[1], r3->size[1], &c_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (r->size[1] == r1->size[1]) {
    loop_ub = r->size[1] - 1;
    w_tmp = r->size[0] * r->size[1];
    r->size[0] = 1;
    emxEnsureCapacity_real_T(sp, r, w_tmp, &l_emlrtRTEI);
    J_data = r->data;
    for (w_tmp = 0; w_tmp <= loop_ub; w_tmp++) {
      J_data[w_tmp] += r2[w_tmp];
    }
  } else {
    plus(sp, r, r1);
  }
  st.site = &i_emlrtRSI;
  b_sqrt(&st, r);
  J_data = r->data;
  if (y->size[1] == r3->size[1]) {
    loop_ub = y->size[1];
    w_tmp = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    r3->size[1] = y->size[1];
    emxEnsureCapacity_real_T(sp, r3, w_tmp, &m_emlrtRTEI);
    r4 = r3->data;
    for (w_tmp = 0; w_tmp < loop_ub; w_tmp++) {
      r4[w_tmp] = y_data[6 * w_tmp + 5] - r4[w_tmp];
    }
  } else {
    b_binary_expand_op(sp, r3, y);
  }
  st.site = &i_emlrtRSI;
  b_cos(&st, r3);
  r4 = r3->data;
  if ((r->size[1] != r3->size[1]) &&
      ((r->size[1] != 1) && (r3->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(r->size[1], r3->size[1], &b_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &i_emlrtRSI;
  b_st.site = &hb_emlrtRSI;
  if (r->size[1] == r3->size[1]) {
    loop_ub = y->size[1];
    w_tmp = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = y->size[1];
    emxEnsureCapacity_real_T(&b_st, b_y, w_tmp, &n_emlrtRTEI);
    b_y_data = b_y->data;
    for (w_tmp = 0; w_tmp < loop_ub; w_tmp++) {
      b_y_data[w_tmp] = y_data[6 * w_tmp];
    }
    w_tmp = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = r->size[1];
    emxEnsureCapacity_real_T(&b_st, r1, w_tmp, &o_emlrtRTEI);
    r2 = r1->data;
    loop_ub = r->size[1];
    for (w_tmp = 0; w_tmp < loop_ub; w_tmp++) {
      r2[w_tmp] = J_data[w_tmp] * r4[w_tmp] + 1.0;
    }
    c_st.site = &ib_emlrtRSI;
    assertCompatibleDims(&c_st, b_y, r1);
  } else {
    c_st.site = &ib_emlrtRSI;
    binary_expand_op(&c_st, ib_emlrtRSI, y, r, r3);
  }
  emxFree_real_T(&b_st, &b_y);
  emxFree_real_T(&b_st, &r);
  emxFree_real_T(&b_st, &r3);
  emxFree_real_T(&b_st, &r1);
  emxFree_real_T(&b_st, &y);
  st.site = &j_emlrtRSI;
  b_st.site = &jb_emlrtRSI;
  w_tmp = J->size[0];
  J->size[0] = F->size[0] + 1;
  emxEnsureCapacity_real_T(sp, J, w_tmp, &p_emlrtRTEI);
  J_data = J->data;
  J_data[0] = mtimes(F, F);
  loop_ub = F->size[0];
  for (w_tmp = 0; w_tmp < loop_ub; w_tmp++) {
    J_data[w_tmp + 1] = F_data[w_tmp];
  }
  emxFree_real_T(sp, &F);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (costGauss.c) */
