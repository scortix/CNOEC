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
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    15,                                                 /* lineNo */
    "cost",                                             /* fcnName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    26,                                                 /* lineNo */
    "cost",                                             /* fcnName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    30,                                                 /* lineNo */
    "cost",                                             /* fcnName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    31,                                                 /* lineNo */
    "cost",                                             /* fcnName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    32,                                                 /* lineNo */
    "cost",                                             /* fcnName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    117,                                                          /* lineNo */
    "colon",                                                      /* fcnName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    311,                                                          /* lineNo */
    "eml_float_colon",                                            /* fcnName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                       */
};

static emlrtRSInfo k_emlrtRSI = {
    23,                                                           /* lineNo */
    "EOEDerivatives",                                             /* fcnName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI = {
    25,                                                           /* lineNo */
    "EOEDerivatives",                                             /* fcnName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    33,                                                           /* lineNo */
    "EOEDerivatives",                                             /* fcnName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\EOEDerivatives.m" /* pathName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    17,                                                  /* lineNo */
    26,                                                  /* colNo */
    "u",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    31,                                                  /* lineNo */
    20,                                                  /* colNo */
    "y",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    31,                                                  /* lineNo */
    45,                                                  /* colNo */
    "t",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    31,                                                  /* lineNo */
    52,                                                  /* colNo */
    "y",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    31,                                                  /* lineNo */
    9,                                                   /* colNo */
    "y",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    32,                                                  /* lineNo */
    53,                                                  /* colNo */
    "y",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    34,                                                  /* lineNo */
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

static emlrtDCInfo emlrtDCI = {
    16,                                                  /* lineNo */
    13,                                                  /* colNo */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    16,                                                  /* lineNo */
    1,                                                   /* colNo */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    32,                                                  /* lineNo */
    33,                                                  /* colNo */
    "u",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    32,                                                  /* lineNo */
    15,                                                  /* colNo */
    "u",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    30,                                                  /* lineNo */
    35,                                                  /* colNo */
    "u",                                                 /* aName */
    "cost",                                              /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = {
    84,                                                           /* lineNo */
    5,                                                            /* colNo */
    "colon",                                                      /* fName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    16,                                                 /* lineNo */
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
    15,                                                 /* lineNo */
    5,                                                  /* colNo */
    "cost",                                             /* fName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pName */
};

/* Function Definitions */
real_T cost(const emlrtStack *sp, real_T tmax, real_T Ts, const real_T b_y0[6],
            const real_T ybar[6], real_T umax, const emxArray_real_T *u)
{
  static const int8_T iv[6] = {1, 1, 1, 1, 1, 0};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *b_y;
  emxArray_real_T *y;
  real_T Q[36];
  real_T R[9];
  real_T dyinv[6];
  real_T x[6];
  real_T usat_tmp[3];
  const real_T *u_data;
  real_T J;
  real_T a;
  real_T apnd;
  real_T b_w_tmp;
  real_T cdiff;
  real_T d;
  real_T ndbl;
  real_T p;
  real_T p_mu05;
  real_T usat_idx_0_tmp;
  real_T usat_idx_1_tmp;
  real_T usat_idx_2_tmp;
  real_T w;
  real_T w_tmp;
  real_T *y_data;
  int32_T b_x_tmp;
  int32_T c_w_tmp;
  int32_T i;
  int32_T k;
  int32_T n;
  int32_T nm1d2;
  int32_T x_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  u_data = u->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &y, 2, &i_emlrtRTEI);
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
    b_st.site = &f_emlrtRSI;
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
    c_st.site = &g_emlrtRSI;
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
  emxInit_real_T(&st, &b_y, 2, &d_emlrtRTEI);
  /*  Time vector */
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
  if (1 > u->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, u->size[0], &emlrtBCI, (emlrtCTX)sp);
  }
  y_data[0] = b_y0[0];
  y_data[1] = b_y0[1];
  y_data[2] = b_y0[2];
  y_data[3] = b_y0[3];
  y_data[4] = b_y0[4];
  y_data[5] = u_data[0] + b_y0[5];
  /*  Set initial conditions */
  J = 0.0;
  /*  Initialization of cost function */
  /*  Weights Definition */
  for (k = 0; k < 6; k++) {
    dyinv[k] = muDoubleScalarAbs(b_y0[k] - ybar[k]);
  }
  for (nm1d2 = 0; nm1d2 < 6; nm1d2++) {
    d = dyinv[nm1d2];
    d = (real_T)(d != 0.0) / (d + (real_T)(d == 0.0));
    dyinv[nm1d2] = d;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  for (k = 0; k < 6; k++) {
    d = dyinv[k];
    x[k] = (real_T)iv[k] * (d * d);
  }
  memset(&Q[0], 0, 36U * sizeof(real_T));
  for (nm1d2 = 0; nm1d2 < 6; nm1d2++) {
    Q[nm1d2 + 6 * nm1d2] = x[nm1d2];
  }
  st.site = &b_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  ndbl = umax * umax;
  memset(&R[0], 0, 9U * sizeof(real_T));
  R[0] = 1.0 / ndbl;
  R[4] = 1.0 / ndbl;
  R[8] = 1.0 / ndbl;
  /*  Cost Function Calculation */
  i = y->size[1];
  for (k = 0; k < i; k++) {
    st.site = &c_emlrtRSI;
    indexShapeCheck(&st, u->size[0]);
    d = 3.0 * ((real_T)k + 1.0);
    usat_tmp[0] = d + -1.0;
    usat_tmp[1] = d;
    usat_tmp[2] = d + 1.0;
    if (((int32_T)(d + -1.0) < 1) || ((int32_T)(d + -1.0) > u->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(d + -1.0), 1, u->size[0],
                                    &j_emlrtBCI, (emlrtCTX)sp);
    }
    if (((int32_T)d < 1) || ((int32_T)d > u->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, u->size[0], &j_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (((int32_T)(d + 1.0) < 1) || ((int32_T)(d + 1.0) > u->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(d + 1.0), 1, u->size[0],
                                    &j_emlrtBCI, (emlrtCTX)sp);
    }
    usat_idx_0_tmp = u_data[(int32_T)(d + -1.0) - 1];
    ndbl = muDoubleScalarMin(umax, muDoubleScalarMax(-umax, usat_idx_0_tmp));
    usat_idx_1_tmp = u_data[(int32_T)d - 1];
    cdiff = muDoubleScalarMin(umax, muDoubleScalarMax(-umax, usat_idx_1_tmp));
    usat_idx_2_tmp = u_data[(int32_T)(d + 1.0) - 1];
    apnd = muDoubleScalarMin(umax, muDoubleScalarMax(-umax, usat_idx_2_tmp));
    if (k + 1 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &c_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &d_emlrtRSI;
    if (k + 1 > b_y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, b_y->size[1], &d_emlrtBCI, &st);
    }
    /*  Equinoctial Orbital Elements */
    p = y_data[6 * k];
    if (y_data[6 * k] < 0.0) {
      p = -y_data[6 * k];
      /* warning('p became negative. Switched to absolute value for
       * calculations'); */
    }
    /*  Accelerations */
    /*  Definition of useful values */
    nm1d2 = 6 * k + 5;
    w_tmp = muDoubleScalarSin(y_data[nm1d2]);
    b_w_tmp = muDoubleScalarCos(y_data[nm1d2]);
    n = 6 * k + 1;
    c_w_tmp = 6 * k + 2;
    w = (y_data[n] * b_w_tmp + 1.0) + y_data[c_w_tmp] * w_tmp;
    /*  r = p/w; */
    b_st.site = &k_emlrtRSI;
    b_st.site = &k_emlrtRSI;
    /*  alpha2 = h^2-k^2; */
    b_st.site = &l_emlrtRSI;
    p_mu05 = muDoubleScalarSqrt(p / 398600.0);
    /*  State Derivative Calculation */
    b_st.site = &m_emlrtRSI;
    a = w / p;
    b_st.site = &m_emlrtRSI;
    if (k + 1 > b_y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, b_y->size[1], &b_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    x[0] = Ts * (2.0 * p / w * p_mu05 * cdiff);
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
    x[5] = Ts * (muDoubleScalarSqrt(398600.0 * p) * (a * a) +
                 p_mu05 / w *
                     (y_data[x_tmp] * muDoubleScalarSin(y_data[nm1d2]) -
                      y_data[b_x_tmp] * muDoubleScalarCos(y_data[nm1d2])) *
                     apnd);
    if (((int32_T)(k + 2U) < 1) || ((int32_T)(k + 2U) > b_y->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 2U), 1, b_y->size[1],
                                    &e_emlrtBCI, (emlrtCTX)sp);
    }
    for (nm1d2 = 0; nm1d2 < 6; nm1d2++) {
      x[nm1d2] += y_data[nm1d2 + 6 * k];
    }
    for (nm1d2 = 0; nm1d2 < 6; nm1d2++) {
      y_data[nm1d2 + 6 * (k + 1)] = x[nm1d2];
    }
    st.site = &e_emlrtRSI;
    indexShapeCheck(&st, u->size[0]);
    if (((int32_T)(d + -1.0) < 1) || ((int32_T)(d + -1.0) > u->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(d + -1.0), 1, u->size[0],
                                    &i_emlrtBCI, (emlrtCTX)sp);
    }
    if (((int32_T)d < 1) || ((int32_T)d > u->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, u->size[0], &i_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (((int32_T)(d + 1.0) < 1) || ((int32_T)(d + 1.0) > u->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(d + 1.0), 1, u->size[0],
                                    &i_emlrtBCI, (emlrtCTX)sp);
    }
    st.site = &e_emlrtRSI;
    indexShapeCheck(&st, u->size[0]);
    if (((int32_T)(d + -1.0) < 1) || ((int32_T)(d + -1.0) > u->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(d + -1.0), 1, u->size[0],
                                    &h_emlrtBCI, (emlrtCTX)sp);
    }
    if (((int32_T)d < 1) || ((int32_T)d > u->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, u->size[0], &h_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (((int32_T)(d + 1.0) < 1) || ((int32_T)(d + 1.0) > u->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(d + 1.0), 1, u->size[0],
                                    &h_emlrtBCI, (emlrtCTX)sp);
    }
    if ((k + 2 < 1) || (k + 2 > b_y->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 2, 1, b_y->size[1], &f_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    cdiff = 0.0;
    for (nm1d2 = 0; nm1d2 < 3; nm1d2++) {
      cdiff +=
          ((usat_idx_0_tmp * R[3 * nm1d2] + usat_idx_1_tmp * R[3 * nm1d2 + 1]) +
           usat_idx_2_tmp * R[3 * nm1d2 + 2]) *
          u_data[(int32_T)usat_tmp[nm1d2] - 1];
    }
    for (nm1d2 = 0; nm1d2 < 6; nm1d2++) {
      dyinv[nm1d2] = y_data[nm1d2 + 6 * (k + 1)] - ybar[nm1d2];
    }
    ndbl = 0.0;
    for (nm1d2 = 0; nm1d2 < 6; nm1d2++) {
      d = 0.0;
      for (n = 0; n < 6; n++) {
        d += dyinv[n] * Q[n + 6 * nm1d2];
      }
      ndbl += d * (y_data[nm1d2 + 6 * (k + 1)] - ybar[nm1d2]);
    }
    J = (J + cdiff) + ndbl;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &y);
  if (b_y->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(b_y->size[1], 1, b_y->size[1], &g_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  for (i = 0; i < 6; i++) {
    dyinv[i] = 1000.0 * (y_data[i + 6 * (b_y->size[1] - 1)] - ybar[i]);
  }
  ndbl = 0.0;
  for (i = 0; i < 6; i++) {
    d = 0.0;
    for (nm1d2 = 0; nm1d2 < 6; nm1d2++) {
      d += dyinv[nm1d2] * Q[nm1d2 + 6 * i];
    }
    ndbl += d * (y_data[i + 6 * (b_y->size[1] - 1)] - ybar[i]);
  }
  emxFree_real_T(sp, &b_y);
  J += ndbl;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return J;
}

/* End of code generation (cost.c) */
