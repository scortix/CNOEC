/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cost.c
 *
 * Code generation for function 'cost'
 *
 */

/* Include files */
#include "cost.h"
#include "cost_data.h"
#include "cost_emxutil.h"
#include "cost_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    2,                                                  /* lineNo */
    "cost",                                             /* fcnName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    16,                                                 /* lineNo */
    "cost",                                             /* fcnName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    117,                                                          /* lineNo */
    "colon",                                                      /* fcnName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    311,                                                          /* lineNo */
    "eml_float_colon",                                            /* fcnName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    16,                                                           /* lineNo */
    "EOEDerivatives",                                             /* fcnName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    18,                                                           /* lineNo */
    "EOEDerivatives",                                             /* fcnName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    25,                                                           /* lineNo */
    "EOEDerivatives",                                             /* fcnName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\EOEDerivatives.m" /* pathName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    15,                                                  /* lineNo */
    37,                                                  /* colNo */
    "u",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    16,                                                  /* lineNo */
    20,                                                  /* colNo */
    "y",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    16,                                                  /* lineNo */
    45,                                                  /* colNo */
    "t",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    16,                                                  /* lineNo */
    52,                                                  /* colNo */
    "y",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    16,                                                  /* lineNo */
    9,                                                   /* colNo */
    "y",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    17,                                                  /* lineNo */
    17,                                                  /* colNo */
    "u",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    17,                                                  /* lineNo */
    27,                                                  /* colNo */
    "u",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    17,                                                  /* lineNo */
    37,                                                  /* colNo */
    "y",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    17,                                                  /* lineNo */
    56,                                                  /* colNo */
    "y",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    19,                                                  /* lineNo */
    18,                                                  /* colNo */
    "y",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = {
    411,                                                          /* lineNo */
    15,                                                           /* colNo */
    "assert_pmaxsize",                                            /* fName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    13,                                                            /* lineNo */
    9,                                                             /* colNo */
    "sqrt",                                                        /* fName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    3,                                                   /* lineNo */
    13,                                                  /* colNo */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    3,                                                   /* lineNo */
    1,                                                   /* colNo */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = {
    84,                                                           /* lineNo */
    5,                                                            /* colNo */
    "colon",                                                      /* fName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    3,                                                  /* lineNo */
    1,                                                  /* colNo */
    "cost",                                             /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pName */
};

static emlrtRTEInfo e_emlrtRTEI = {
    90,                                                           /* lineNo */
    5,                                                            /* colNo */
    "colon",                                                      /* fName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName */
};

static emlrtRTEInfo f_emlrtRTEI = {
    88,                                                           /* lineNo */
    5,                                                            /* colNo */
    "colon",                                                      /* fName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName */
};

static emlrtRTEInfo g_emlrtRTEI = {
    105,                                                          /* lineNo */
    9,                                                            /* colNo */
    "colon",                                                      /* fName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName */
};

static emlrtRTEInfo h_emlrtRTEI = {
    312,                                                          /* lineNo */
    20,                                                           /* colNo */
    "colon",                                                      /* fName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName */
};

static emlrtRTEInfo i_emlrtRTEI = {
    2,                                                  /* lineNo */
    5,                                                  /* colNo */
    "cost",                                             /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pName */
};

/* Function Definitions */
real_T cost(const emlrtStack *sp, real_T tmax, real_T Ts, const real_T b_y0[6],
            const emxArray_real_T *u, const real_T ybar[6])
{
  static const int32_T b[9] = {1000000, 0, 0, 0, 1000000, 0, 0, 0, 1000000};
  static const int8_T iv[6] = {1, 1, 1, 1, 1, 0};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *b_y;
  emxArray_real_T *y;
  real_T Q[36];
  real_T dyinv[6];
  real_T x[6];
  const real_T *u_data;
  real_T J;
  real_T a;
  real_T apnd;
  real_T b_w_tmp;
  real_T b_x;
  real_T cdiff;
  real_T ndbl;
  real_T p_mu05;
  real_T w;
  real_T w_tmp;
  real_T *y_data;
  int32_T b_x_tmp;
  int32_T c_w_tmp;
  int32_T i;
  int32_T k;
  int32_T n;
  int32_T nm1d2;
  int32_T usat_idx_1_tmp;
  int32_T usat_idx_2_tmp;
  int32_T x_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  u_data = u->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &y, &i_emlrtRTEI);
  st.site = &emlrtRSI;
  if (muDoubleScalarIsNaN(Ts) || muDoubleScalarIsNaN(tmax)) {
    i = y->size[0] * y->size[1];
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&st, y, i, &c_emlrtRTEI);
  } else if ((Ts == 0.0) || ((0.0 < tmax) && (Ts < 0.0)) ||
             ((tmax < 0.0) && (Ts > 0.0))) {
    y->size[1] = 0;
  } else if (muDoubleScalarIsInf(tmax) &&
             (muDoubleScalarIsInf(Ts) || (0.0 == tmax))) {
    i = y->size[0] * y->size[1];
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&st, y, i, &f_emlrtRTEI);
  } else if (muDoubleScalarIsInf(Ts)) {
    i = y->size[0] * y->size[1];
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&st, y, i, &e_emlrtRTEI);
  } else if (muDoubleScalarFloor(Ts) == Ts) {
    i = y->size[0] * y->size[1];
    y->size[1] = (int32_T)muDoubleScalarFloor(tmax / Ts) + 1;
    emxEnsureCapacity_real_T(&st, y, i, &g_emlrtRTEI);
  } else {
    b_st.site = &c_emlrtRSI;
    ndbl = muDoubleScalarFloor(tmax / Ts + 0.5);
    apnd = ndbl * Ts;
    if (Ts > 0.0) {
      cdiff = apnd - tmax;
    } else {
      cdiff = tmax - apnd;
    }
    if (muDoubleScalarAbs(cdiff) <
        4.4408920985006262E-16 *
            muDoubleScalarMax(0.0, muDoubleScalarAbs(tmax))) {
      ndbl++;
      apnd = tmax;
    } else if (cdiff > 0.0) {
      apnd = (ndbl - 1.0) * Ts;
    } else {
      ndbl++;
    }
    if (ndbl >= 0.0) {
      n = (int32_T)ndbl;
    } else {
      n = 0;
    }
    c_st.site = &d_emlrtRSI;
    if (ndbl > 2.147483647E+9) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI, "Coder:MATLAB:pmaxsize",
                                    "Coder:MATLAB:pmaxsize", 0);
    }
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = n;
    emxEnsureCapacity_real_T(&b_st, y, i, &h_emlrtRTEI);
    y_data = y->data;
    if ((n > 0) && (n > 1)) {
      y_data[n - 1] = apnd;
      nm1d2 = (n - 1) / 2;
      for (k = 0; k <= nm1d2 - 2; k++) {
        ndbl = ((real_T)k + 1.0) * Ts;
        y_data[k + 1] = ndbl;
        y_data[(n - k) - 2] = apnd - ndbl;
      }
      if (nm1d2 << 1 == n - 1) {
        y_data[nm1d2] = apnd / 2.0;
      } else {
        ndbl = (real_T)nm1d2 * Ts;
        y_data[nm1d2] = ndbl;
        y_data[nm1d2 + 1] = apnd - ndbl;
      }
    }
  }
  emxInit_real_T(&st, &b_y, &d_emlrtRTEI);
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 6;
  emxEnsureCapacity_real_T(sp, b_y, i, &d_emlrtRTEI);
  if ((real_T)y->size[1] + 1.0 != y->size[1] + 1) {
    emlrtIntegerCheckR2012b((real_T)y->size[1] + 1.0, &emlrtDCI, (emlrtCTX)sp);
  }
  i = b_y->size[0] * b_y->size[1];
  b_y->size[1] = y->size[1] + 1;
  emxEnsureCapacity_real_T(sp, b_y, i, &d_emlrtRTEI);
  y_data = b_y->data;
  if ((real_T)y->size[1] + 1.0 != y->size[1] + 1) {
    emlrtIntegerCheckR2012b((real_T)y->size[1] + 1.0, &b_emlrtDCI,
                            (emlrtCTX)sp);
  }
  nm1d2 = 6 * (y->size[1] + 1);
  for (i = 0; i < nm1d2; i++) {
    y_data[i] = 0.0;
  }
  /*  Initialization of vector state */
  /*  Set initial conditions */
  J = 0.0;
  /*  Initialization of cost function */
  /*  Definition of maximum acceleration */
  /*  Weights Definition */
  for (k = 0; k < 6; k++) {
    ndbl = b_y0[k];
    y_data[k] = ndbl;
    dyinv[k] = muDoubleScalarAbs(ndbl - ybar[k]);
  }
  for (nm1d2 = 0; nm1d2 < 6; nm1d2++) {
    ndbl = dyinv[nm1d2];
    ndbl = (real_T)(ndbl != 0.0) / (ndbl + (real_T)(ndbl == 0.0));
    dyinv[nm1d2] = ndbl;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  for (k = 0; k < 6; k++) {
    ndbl = dyinv[k];
    x[k] = (real_T)iv[k] * (ndbl * ndbl);
  }
  memset(&Q[0], 0, 36U * sizeof(real_T));
  for (nm1d2 = 0; nm1d2 < 6; nm1d2++) {
    Q[nm1d2 + 6 * nm1d2] = x[nm1d2];
  }
  /*  Cost Function Calculation */
  i = y->size[1];
  for (k = 0; k < i; k++) {
    if (k + 1 > u->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, u->size[1], &emlrtBCI,
                                    (emlrtCTX)sp);
    }
    ndbl = muDoubleScalarMin(0.001, muDoubleScalarMax(-0.001, u_data[3 * k]));
    usat_idx_1_tmp = 3 * k + 1;
    cdiff = muDoubleScalarMin(
        0.001, muDoubleScalarMax(-0.001, u_data[usat_idx_1_tmp]));
    usat_idx_2_tmp = 3 * k + 2;
    apnd = muDoubleScalarMin(0.001,
                             muDoubleScalarMax(-0.001, u_data[usat_idx_2_tmp]));
    if (k + 1 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &c_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &b_emlrtRSI;
    if (k + 1 > b_y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, b_y->size[1], &d_emlrtBCI, &st);
    }
    nm1d2 = 6 * k + 5;
    w_tmp = muDoubleScalarSin(y_data[nm1d2]);
    b_w_tmp = muDoubleScalarCos(y_data[nm1d2]);
    n = 6 * k + 1;
    c_w_tmp = 6 * k + 2;
    w = (y_data[n] * b_w_tmp + 1.0) + y_data[c_w_tmp] * w_tmp;
    /* r = p/w; */
    b_st.site = &g_emlrtRSI;
    b_st.site = &g_emlrtRSI;
    /* alpha2 = h^2-k^2; */
    b_st.site = &h_emlrtRSI;
    p_mu05 = y_data[6 * k] / 398600.0;
    if (p_mu05 < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &b_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    p_mu05 = muDoubleScalarSqrt(p_mu05);
    b_st.site = &i_emlrtRSI;
    a = w / y_data[6 * k];
    b_st.site = &i_emlrtRSI;
    b_x = 398600.0 * y_data[6 * k];
    if (b_x < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &b_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    b_x = muDoubleScalarSqrt(b_x);
    if (k + 1 > b_y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, b_y->size[1], &b_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    x[0] = Ts * (2.0 * y_data[6 * k] / w * p_mu05 * cdiff);
    x_tmp = 6 * k + 3;
    b_x_tmp = 6 * k + 4;
    x[1] =
        Ts * (p_mu05 *
              ((ndbl * w_tmp + ((w + 1.0) * b_w_tmp + y_data[n]) * cdiff / w) -
               (y_data[x_tmp] * w_tmp - y_data[b_x_tmp] * b_w_tmp) *
                   y_data[c_w_tmp] * apnd / w));
    x[2] =
        Ts * (p_mu05 * ((-ndbl * b_w_tmp +
                         ((w + 1.0) * w_tmp + y_data[c_w_tmp]) * cdiff / w) +
                        (y_data[x_tmp] * muDoubleScalarSin(y_data[nm1d2]) -
                         y_data[b_x_tmp] * muDoubleScalarCos(y_data[nm1d2])) *
                            y_data[c_w_tmp] * apnd / w));
    ndbl = p_mu05 *
           ((y_data[x_tmp] * y_data[x_tmp] + 1.0) +
            y_data[b_x_tmp] * y_data[b_x_tmp]) *
           apnd / 2.0 / w;
    x[3] = Ts * (ndbl * b_w_tmp);
    x[4] = Ts * (ndbl * w_tmp);
    x[5] = Ts * (b_x * (a * a) +
                 p_mu05 / w *
                     (y_data[x_tmp] * muDoubleScalarSin(y_data[nm1d2]) -
                      y_data[b_x_tmp] * muDoubleScalarCos(y_data[nm1d2])) *
                     apnd);
    if (((int32_T)(k + 2U) < 1) || ((int32_T)(k + 2U) > b_y->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 2U), 1, b_y->size[1],
                                    &e_emlrtBCI, (emlrtCTX)sp);
    }
    for (n = 0; n < 6; n++) {
      x[n] += y_data[n + 6 * k];
    }
    for (n = 0; n < 6; n++) {
      y_data[n + 6 * (k + 1)] = x[n];
    }
    if (k + 1 > u->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, u->size[1], &f_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((k + 2 < 1) || (k + 2 > b_y->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 2, 1, b_y->size[1], &h_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (k + 1 > u->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, u->size[1], &g_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((k + 2 < 1) || (k + 2 > b_y->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 2, 1, b_y->size[1], &i_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    cdiff = 0.0;
    for (n = 0; n < 3; n++) {
      cdiff += ((u_data[3 * k] * (real_T)b[3 * n] +
                 u_data[usat_idx_1_tmp] * (real_T)b[3 * n + 1]) +
                u_data[usat_idx_2_tmp] * (real_T)b[3 * n + 2]) *
               u_data[n + 3 * k];
    }
    for (n = 0; n < 6; n++) {
      dyinv[n] = y_data[n + 6 * (k + 1)] - ybar[n];
    }
    apnd = 0.0;
    for (n = 0; n < 6; n++) {
      ndbl = 0.0;
      for (nm1d2 = 0; nm1d2 < 6; nm1d2++) {
        ndbl += dyinv[nm1d2] * Q[nm1d2 + 6 * n];
      }
      apnd += ndbl * (y_data[n + 6 * (k + 1)] - ybar[n]);
    }
    J = (J + cdiff) + apnd;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &y);
  if (b_y->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(b_y->size[1], 1, b_y->size[1], &j_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  for (i = 0; i < 6; i++) {
    dyinv[i] = 1.0E+6 * (y_data[i + 6 * (b_y->size[1] - 1)] - ybar[i]);
  }
  apnd = 0.0;
  for (i = 0; i < 6; i++) {
    ndbl = 0.0;
    for (n = 0; n < 6; n++) {
      ndbl += dyinv[n] * Q[n + 6 * i];
    }
    apnd += ndbl * (y_data[i + 6 * (b_y->size[1] - 1)] - ybar[i]);
  }
  emxFree_real_T(sp, &b_y);
  J += apnd;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return J;
}

/* End of code generation (cost.c) */
