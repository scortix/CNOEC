/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cost2.c
 *
 * Code generation for function 'cost2'
 *
 */

/* Include files */
#include "cost2.h"
#include "EOE2COE.h"
#include "colon.h"
#include "cost2_data.h"
#include "cost2_emxutil.h"
#include "cost2_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "interp1.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "omp.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    6,       /* lineNo */
    "cost2", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pathName
                                                                        */
};

static emlrtRSInfo b_emlrtRSI = {
    7,       /* lineNo */
    "cost2", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pathName
                                                                        */
};

static emlrtRSInfo c_emlrtRSI = {
    9,       /* lineNo */
    "cost2", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pathName
                                                                        */
};

static emlrtRSInfo d_emlrtRSI = {
    11,      /* lineNo */
    "cost2", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pathName
                                                                        */
};

static emlrtRSInfo e_emlrtRSI = {
    13,      /* lineNo */
    "cost2", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pathName
                                                                        */
};

static emlrtRSInfo f_emlrtRSI = {
    14,      /* lineNo */
    "cost2", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pathName
                                                                        */
};

static emlrtRSInfo g_emlrtRSI = {
    16,      /* lineNo */
    "cost2", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pathName
                                                                        */
};

static emlrtRSInfo h_emlrtRSI = {
    22,      /* lineNo */
    "cost2", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pathName
                                                                        */
};

static emlrtRSInfo i_emlrtRSI = {
    23,      /* lineNo */
    "cost2", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pathName
                                                                        */
};

static emlrtRSInfo j_emlrtRSI = {
    36,      /* lineNo */
    "cost2", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pathName
                                                                        */
};

static emlrtRSInfo k_emlrtRSI = {
    37,      /* lineNo */
    "cost2", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pathName
                                                                        */
};

static emlrtRSInfo l_emlrtRSI = {
    44,      /* lineNo */
    "cost2", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pathName
                                                                        */
};

static emlrtRSInfo m_emlrtRSI = {
    45,      /* lineNo */
    "cost2", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pathName
                                                                        */
};

static emlrtRSInfo o_emlrtRSI = {
    125,                                                          /* lineNo */
    "colon",                                                      /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName */
};

static emlrtRSInfo ab_emlrtRSI = {
    39,                                                            /* lineNo */
    "find",                                                        /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                    */
};

static emlrtRSInfo bb_emlrtRSI = {
    144,                                                           /* lineNo */
    "eml_find",                                                    /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                    */
};

static emlrtRSInfo cb_emlrtRSI = {
    382,                                                           /* lineNo */
    "find_first_indices",                                          /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                    */
};

static emlrtRSInfo gb_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                       */
};

static emlrtRSInfo hb_emlrtRSI = {
    71,                                                           /* lineNo */
    "power",                                                      /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI =
    {
        23,               /* lineNo */
        "EOEDerivatives", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V3\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo jb_emlrtRSI =
    {
        25,               /* lineNo */
        "EOEDerivatives", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V3\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI =
    {
        33,               /* lineNo */
        "EOEDerivatives", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V3\\EOEDerivatives.m" /* pathName */
};

static emlrtBCInfo emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    44,      /* lineNo */
    20,      /* colNo */
    "y",     /* aName */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    37,      /* lineNo */
    24,      /* colNo */
    "y",     /* aName */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    36,      /* lineNo */
    9,       /* colNo */
    "y",     /* aName */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    36,      /* lineNo */
    52,      /* colNo */
    "y",     /* aName */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    36,      /* lineNo */
    45,      /* colNo */
    "t",     /* aName */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    36,      /* lineNo */
    20,      /* colNo */
    "y",     /* aName */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    29,      /* lineNo */
    5,       /* colNo */
    "y",     /* aName */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    33,       /* lineNo */
    24,       /* colNo */
    "qAngle", /* aName */
    "cost2",  /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    7,       /* lineNo */
    17,      /* colNo */
    "x",     /* aName */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    7,       /* lineNo */
    12,      /* colNo */
    "x",     /* aName */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    7,       /* lineNo */
    12,      /* colNo */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m", /* pName
                                                                         */
    1 /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    6,       /* lineNo */
    11,      /* colNo */
    "x",     /* aName */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    6,       /* lineNo */
    11,      /* colNo */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m", /* pName
                                                                         */
    1 /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    6,       /* lineNo */
    9,       /* colNo */
    "x",     /* aName */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    4,       /* lineNo */
    12,      /* colNo */
    "x",     /* aName */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = {
    81,                                                            /* lineNo */
    1,                                                             /* colNo */
    "eml_find",                                                    /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    392,                                                           /* lineNo */
    1,                                                             /* colNo */
    "find_first_indices",                                          /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    34,      /* lineNo */
    20,      /* colNo */
    "csi",   /* aName */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    45,      /* lineNo */
    22,      /* colNo */
    "y",     /* aName */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,      /* iFirst */
    -1,      /* iLast */
    38,      /* lineNo */
    27,      /* colNo */
    "csi",   /* aName */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtRTEInfo l_emlrtRTEI = {
    9,       /* lineNo */
    1,       /* colNo */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pName
                                                                        */
};

static emlrtRTEInfo m_emlrtRTEI = {
    11,      /* lineNo */
    1,       /* colNo */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pName
                                                                        */
};

static emlrtRTEInfo n_emlrtRTEI = {
    6,       /* lineNo */
    7,       /* colNo */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pName
                                                                        */
};

static emlrtRTEInfo o_emlrtRTEI = {
    7,       /* lineNo */
    10,      /* colNo */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pName
                                                                        */
};

static emlrtRTEInfo p_emlrtRTEI = {
    16,      /* lineNo */
    14,      /* colNo */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pName
                                                                        */
};

static emlrtRTEInfo q_emlrtRTEI = {
    28,      /* lineNo */
    1,       /* colNo */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pName
                                                                        */
};

static emlrtRTEInfo r_emlrtRTEI = {
    6,       /* lineNo */
    1,       /* colNo */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pName
                                                                        */
};

static emlrtRTEInfo s_emlrtRTEI = {
    7,       /* lineNo */
    1,       /* colNo */
    "cost2", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\cost2.m" /* pName
                                                                        */
};

/* Function Definitions */
void cost2(const emlrtStack *sp, const emxArray_real_T *x, real_T Ts,
           real_T tmax, real_T b_y0[6], const real_T ybar[6], real_T ratio,
           real_T Tmax, real_T coeffT, real_T m0, real_T alpha, real_T J[4])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_boolean_T *c_x;
  emxArray_real_T *b_x;
  emxArray_real_T *b_y;
  emxArray_real_T *csi;
  emxArray_real_T *qAngle;
  emxArray_real_T *t;
  emxArray_real_T *topt;
  real_T Q[9];
  real_T x0[6];
  real_T xbar[6];
  real_T y_data[6];
  real_T dv[3];
  real_T y[3];
  const real_T *x_data;
  real_T Qdiag_idx_1;
  real_T Qdiag_idx_2;
  real_T a;
  real_T lu;
  real_T m;
  real_T p;
  real_T *csi_data;
  real_T *qAngle_data;
  real_T *t_data;
  real_T *topt_data;
  int32_T iv[2];
  int32_T y_size[2];
  int32_T b_x0_tmp;
  int32_T i;
  int32_T idx;
  int32_T ii_data;
  int32_T k;
  int32_T loop_ub;
  int32_T x0_tmp;
  uint32_T indtf_data;
  boolean_T exitg1;
  boolean_T *b_x_data;
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
  idx = x0_tmp - i;
  iv[1] = idx;
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
  emxInit_real_T(&st, &topt, 2, &l_emlrtRTEI);
  if (muDoubleScalarIsNaN(lu) || muDoubleScalarIsNaN(tmax)) {
    b_x0_tmp = topt->size[0] * topt->size[1];
    topt->size[0] = 1;
    topt->size[1] = 1;
    emxEnsureCapacity_real_T(&st, topt, b_x0_tmp, &l_emlrtRTEI);
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
    emxEnsureCapacity_real_T(&st, topt, b_x0_tmp, &l_emlrtRTEI);
    topt_data = topt->data;
    topt_data[0] = rtNaN;
  } else if (muDoubleScalarIsInf(lu)) {
    b_x0_tmp = topt->size[0] * topt->size[1];
    topt->size[0] = 1;
    topt->size[1] = 1;
    emxEnsureCapacity_real_T(&st, topt, b_x0_tmp, &l_emlrtRTEI);
    topt_data = topt->data;
    topt_data[0] = 0.0;
  } else if (muDoubleScalarFloor(lu) == lu) {
    b_x0_tmp = topt->size[0] * topt->size[1];
    topt->size[0] = 1;
    ii_data = (int32_T)(tmax / lu);
    topt->size[1] = ii_data + 1;
    emxEnsureCapacity_real_T(&st, topt, b_x0_tmp, &l_emlrtRTEI);
    topt_data = topt->data;
    for (b_x0_tmp = 0; b_x0_tmp <= ii_data; b_x0_tmp++) {
      topt_data[b_x0_tmp] = lu * (real_T)b_x0_tmp;
    }
  } else {
    b_st.site = &o_emlrtRSI;
    eml_float_colon(&b_st, lu, tmax, topt);
  }
  st.site = &d_emlrtRSI;
  emxInit_real_T(&st, &t, 2, &m_emlrtRTEI);
  t_data = t->data;
  if (muDoubleScalarIsNaN(Ts) || muDoubleScalarIsNaN(tmax)) {
    b_x0_tmp = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity_real_T(&st, t, b_x0_tmp, &m_emlrtRTEI);
    t_data = t->data;
    t_data[0] = rtNaN;
  } else if ((Ts == 0.0) || ((tmax > 0.0) && (Ts < 0.0)) ||
             ((tmax < 0.0) && (Ts > 0.0))) {
    t->size[0] = 1;
    t->size[1] = 0;
  } else if (muDoubleScalarIsInf(tmax) && muDoubleScalarIsInf(Ts)) {
    b_x0_tmp = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity_real_T(&st, t, b_x0_tmp, &m_emlrtRTEI);
    t_data = t->data;
    t_data[0] = rtNaN;
  } else if (muDoubleScalarIsInf(Ts)) {
    b_x0_tmp = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = 1;
    emxEnsureCapacity_real_T(&st, t, b_x0_tmp, &m_emlrtRTEI);
    t_data = t->data;
    t_data[0] = 0.0;
  } else if (muDoubleScalarFloor(Ts) == Ts) {
    b_x0_tmp = t->size[0] * t->size[1];
    t->size[0] = 1;
    ii_data = (int32_T)(tmax / Ts);
    t->size[1] = ii_data + 1;
    emxEnsureCapacity_real_T(&st, t, b_x0_tmp, &m_emlrtRTEI);
    t_data = t->data;
    for (b_x0_tmp = 0; b_x0_tmp <= ii_data; b_x0_tmp++) {
      t_data[b_x0_tmp] = Ts * (real_T)b_x0_tmp;
    }
  } else {
    b_st.site = &o_emlrtRSI;
    eml_float_colon(&b_st, Ts, tmax, t);
    t_data = t->data;
  }
  emxInit_real_T(&st, &b_x, 1, &n_emlrtRTEI);
  b_x0_tmp = b_x->size[0];
  b_x->size[0] = idx;
  emxEnsureCapacity_real_T(sp, b_x, b_x0_tmp, &n_emlrtRTEI);
  topt_data = b_x->data;
  for (b_x0_tmp = 0; b_x0_tmp < idx; b_x0_tmp++) {
    topt_data[b_x0_tmp] = x_data[i + b_x0_tmp];
  }
  emxInit_real_T(sp, &csi, 2, &r_emlrtRTEI);
  st.site = &e_emlrtRSI;
  interp1(&st, topt, b_x, t, csi);
  csi_data = csi->data;
  i = b_x->size[0];
  b_x->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_x, i, &o_emlrtRTEI);
  topt_data = b_x->data;
  for (i = 0; i < loop_ub; i++) {
    topt_data[i] = x_data[x0_tmp + i];
  }
  emxInit_real_T(sp, &qAngle, 2, &s_emlrtRTEI);
  emxInit_boolean_T(sp, &c_x, &p_emlrtRTEI);
  st.site = &f_emlrtRSI;
  interp1(&st, topt, b_x, t, qAngle);
  qAngle_data = qAngle->data;
  st.site = &g_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  i = c_x->size[0] * c_x->size[1];
  c_x->size[0] = 1;
  c_x->size[1] = t->size[1];
  emxEnsureCapacity_boolean_T(&b_st, c_x, i, &p_emlrtRTEI);
  b_x_data = c_x->data;
  idx = t->size[1];
  emxFree_real_T(&b_st, &b_x);
  emxFree_real_T(&b_st, &topt);
  for (i = 0; i < idx; i++) {
    b_x_data[i] = (t_data[i] >= x_data[x->size[0] - 1]);
  }
  k = (c_x->size[1] >= 1);
  if (k > c_x->size[1]) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  c_st.site = &bb_emlrtRSI;
  idx = 0;
  d_st.site = &cb_emlrtRSI;
  if (c_x->size[1] > 2147483646) {
    e_st.site = &r_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub <= c_x->size[1] - 1)) {
    if (b_x_data[loop_ub]) {
      idx = 1;
      ii_data = loop_ub + 1;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  emxFree_boolean_T(&c_st, &c_x);
  if (idx > k) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (k == 1) {
    if (idx == 0) {
      k = 0;
    }
  } else {
    k = (idx >= 1);
  }
  for (i = 0; i < k; i++) {
    indtf_data = (uint32_T)ii_data;
  }
  if (k == 0) {
    indtf_data = (uint32_T)t->size[1];
  }
  b_y0[5] += x_data[0];
  st.site = &h_emlrtRSI;
  EOE2COE(&st, b_y0, x0);
  st.site = &i_emlrtRSI;
  EOE2COE(&st, ybar, xbar);
  lu = xbar[0] - 0.0 * x0[0];
  lu += 0.1 * (real_T)(lu == 0.0);
  y[0] = 1.0 / (lu * lu);
  lu = xbar[1] - 0.0 * x0[1];
  lu += 0.1 * (real_T)(lu == 0.0);
  y[1] = 1.0 / (lu * lu);
  lu = xbar[4] - 0.0 * x0[4];
  lu += 0.1 * (real_T)(lu == 0.0);
  memset(&Q[0], 0, 9U * sizeof(real_T));
  emxInit_real_T(sp, &b_y, 2, &q_emlrtRTEI);
  Q[0] = y[0];
  Q[4] = y[1];
  Q[8] = 1.0 / (lu * lu);
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 6;
  b_y->size[1] = t->size[1];
  emxEnsureCapacity_real_T(sp, b_y, i, &q_emlrtRTEI);
  topt_data = b_y->data;
  idx = 6 * t->size[1];
  for (i = 0; i < idx; i++) {
    topt_data[i] = 0.0;
  }
  if (t->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, t->size[1], &g_emlrtBCI, (emlrtCTX)sp);
  }
  for (i = 0; i < 6; i++) {
    topt_data[i] = b_y0[i];
  }
  m = m0;
  i = t->size[1];
  for (k = 0; k <= i - 2; k++) {
    real_T b_w_tmp;
    real_T p_mu05;
    real_T w;
    real_T w_tmp;
    if (k + 1 > qAngle->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, qAngle->size[1], &h_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (k + 1 > csi->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, csi->size[1], &n_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    a = Tmax / m * csi_data[k];
    lu = a * muDoubleScalarSin(qAngle_data[k]) / 1000.0;
    Qdiag_idx_1 = a * muDoubleScalarCos(qAngle_data[k]) / 1000.0;
    Qdiag_idx_2 = a * 0.0 / 1000.0;
    if (k + 1 > t->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, t->size[1], &e_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &j_emlrtRSI;
    if (k + 1 > b_y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, b_y->size[1], &d_emlrtBCI, &st);
    }
    /*  Equinoctial Orbital Elements */
    p = topt_data[6 * k];
    if (topt_data[6 * k] < 0.0) {
      p = -topt_data[6 * k];
      /*      warning('p became negative. Switched to absolute value for
       * calculations'); */
    }
    /*  Accelerations */
    /*  Definition of useful values */
    idx = 6 * k + 5;
    w_tmp = muDoubleScalarSin(topt_data[idx]);
    b_w_tmp = muDoubleScalarCos(topt_data[idx]);
    ii_data = 6 * k + 1;
    loop_ub = 6 * k + 2;
    w = (topt_data[ii_data] * b_w_tmp + 1.0) + topt_data[loop_ub] * w_tmp;
    /*  r = p/w; */
    b_st.site = &ib_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &hb_emlrtRSI;
    b_st.site = &ib_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &hb_emlrtRSI;
    /*  alpha2 = h^2-k^2; */
    b_st.site = &jb_emlrtRSI;
    p_mu05 = muDoubleScalarSqrt(p / 398600.0);
    /*  State Derivative Calculation */
    b_st.site = &kb_emlrtRSI;
    a = w / p;
    c_st.site = &gb_emlrtRSI;
    d_st.site = &hb_emlrtRSI;
    b_st.site = &kb_emlrtRSI;
    if (k + 1 > b_y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, b_y->size[1], &f_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    x0[0] = Ts * (2.0 * p / w * p_mu05 * Qdiag_idx_1);
    b_x0_tmp = 6 * k + 3;
    x0_tmp = 6 * k + 4;
    x0[1] = Ts * (p_mu05 *
                  ((lu * w_tmp + ((w + 1.0) * b_w_tmp + topt_data[ii_data]) *
                                     Qdiag_idx_1 / w) -
                   (topt_data[b_x0_tmp] * w_tmp - topt_data[x0_tmp] * b_w_tmp) *
                       topt_data[loop_ub] * Qdiag_idx_2 / w));
    x0[2] = Ts * (p_mu05 *
                  ((-lu * b_w_tmp + ((w + 1.0) * w_tmp + topt_data[loop_ub]) *
                                        Qdiag_idx_1 / w) +
                   (topt_data[b_x0_tmp] * muDoubleScalarSin(topt_data[idx]) -
                    topt_data[x0_tmp] * muDoubleScalarCos(topt_data[idx])) *
                       topt_data[loop_ub] * Qdiag_idx_2 / w));
    lu = p_mu05 *
         ((topt_data[b_x0_tmp] * topt_data[b_x0_tmp] + 1.0) +
          topt_data[x0_tmp] * topt_data[x0_tmp]) *
         Qdiag_idx_2 / 2.0 / w;
    x0[3] = Ts * (lu * b_w_tmp);
    x0[4] = Ts * (lu * w_tmp);
    x0[5] = Ts * (muDoubleScalarSqrt(398600.0 * p) * (a * a) +
                  p_mu05 / w *
                      (topt_data[b_x0_tmp] * muDoubleScalarSin(topt_data[idx]) -
                       topt_data[x0_tmp] * muDoubleScalarCos(topt_data[idx])) *
                      Qdiag_idx_2);
    if (k + 2 > b_y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 2, 1, b_y->size[1], &c_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (x0_tmp = 0; x0_tmp < 6; x0_tmp++) {
      lu = topt_data[x0_tmp + 6 * k] + x0[x0_tmp];
      x0[x0_tmp] = lu;
      topt_data[x0_tmp + 6 * (k + 1)] = lu;
    }
    if (k + 1 > b_y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, b_y->size[1], &b_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &k_emlrtRSI;
    EOE2COE(&st, *(real_T(*)[6]) & topt_data[6 * k], x0);
    if (k + 1 > csi->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, csi->size[1], &p_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    m -= Ts * coeffT * csi_data[k];
    /*      f = f+(xCOE([1:2 5])-xbar([1:2 5]))'*Q*(xCOE([1:2 5])-xbar([1:2
     * 5]))*t(k); */
    /*      f = f+(xCOE([1:2 5])-xbar([1:2 5]))'*Q*(xCOE([1:2 5])-xbar([1:2
     * 5]))*1.0001^t(k); */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &qAngle);
  emxFree_real_T(sp, &csi);
  emxFree_real_T(sp, &t);
  /*  f = f/length(t)/tmax*1e3; */
  if (b_y->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(b_y->size[1], 1, b_y->size[1], &emlrtBCI,
                                  (emlrtCTX)sp);
  }
  st.site = &l_emlrtRSI;
  EOE2COE(&st, *(real_T(*)[6]) & topt_data[6 * (b_y->size[1] - 1)], x0);
  y_size[0] = 6;
  y_size[1] = 1;
  for (i = 0; i < 6; i++) {
    if (((int32_T)indtf_data < 1) || ((int32_T)indtf_data > b_y->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)indtf_data, 1, b_y->size[1],
                                    &o_emlrtBCI, (emlrtCTX)sp);
    }
    y_data[i] = topt_data[i + 6 * ((int32_T)indtf_data - 1)];
  }
  real_T xCOEtf[6];
  emxFree_real_T(sp, &b_y);
  st.site = &m_emlrtRSI;
  b_EOE2COE(&st, y_data, y_size, xCOEtf);
  y[0] = x0[0] - xbar[0];
  dv[0] = xCOEtf[0] - xbar[0];
  y[1] = x0[1] - xbar[1];
  dv[1] = xCOEtf[1] - xbar[1];
  y[2] = x0[4] - xbar[4];
  dv[2] = xCOEtf[4] - xbar[4];
  /*  g = []; */
  Qdiag_idx_1 = 0.0;
  a = 0.0;
  for (i = 0; i < 3; i++) {
    lu = Q[3 * i];
    Qdiag_idx_2 = Q[3 * i + 1];
    p = Q[3 * i + 2];
    Qdiag_idx_1 += ((y[0] * lu + y[1] * Qdiag_idx_2) + y[2] * p) * y[i];
    a += ((dv[0] * lu + dv[1] * Qdiag_idx_2) + dv[2] * p) * dv[i];
  }
  J[0] =
      alpha * x_data[x->size[0] - 1] / 100.0 + (1.0 - alpha) * (m0 - m) * 10.0;
  J[1] = Qdiag_idx_1;
  J[2] = a;
  J[3] = m - 500.0;
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

/* End of code generation (cost2.c) */
