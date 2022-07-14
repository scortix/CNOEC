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
    15,                                                           /* lineNo */
    "cost",                                                       /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    27,                                                           /* lineNo */
    "cost",                                                       /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    31,                                                           /* lineNo */
    "cost",                                                       /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    117,                                                          /* lineNo */
    "colon",                                                      /* fcnName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    311,                                                          /* lineNo */
    "eml_float_colon",                                            /* fcnName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                       */
};

static emlrtRSInfo
    h_emlrtRSI =
        {
            23,               /* lineNo */
            "EOEDerivatives", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo
    i_emlrtRSI =
        {
            25,               /* lineNo */
            "EOEDerivatives", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo
    j_emlrtRSI =
        {
            33,               /* lineNo */
            "EOEDerivatives", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\EOEDerivatives.m" /* pathName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    31,                                                            /* lineNo */
    20,                                                            /* colNo */
    "y",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    31,                                                            /* lineNo */
    45,                                                            /* colNo */
    "t",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    31,                                                            /* lineNo */
    52,                                                            /* colNo */
    "y",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    31,                                                            /* lineNo */
    59,                                                            /* colNo */
    "u",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    31,                                                            /* lineNo */
    9,                                                             /* colNo */
    "y",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    32,                                                            /* lineNo */
    19,                                                            /* colNo */
    "u",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    32,                                                            /* lineNo */
    29,                                                            /* colNo */
    "u",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    32,                                                            /* lineNo */
    39,                                                            /* colNo */
    "y",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    32,                                                            /* lineNo */
    58,                                                            /* colNo */
    "y",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    34,                                                            /* lineNo */
    28,                                                            /* colNo */
    "y",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = {
    411,                                                          /* lineNo */
    15,                                                           /* colNo */
    "assert_pmaxsize",                                            /* fName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    17,                                                            /* lineNo */
    13,                                                            /* colNo */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    17,                                                            /* lineNo */
    1,                                                             /* colNo */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    1 /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = {
    84,                                                           /* lineNo */
    5,                                                            /* colNo */
    "colon",                                                      /* fName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName */
};

static emlrtRTEInfo c_emlrtRTEI = {
    17,                                                           /* lineNo */
    1,                                                            /* colNo */
    "cost",                                                       /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    90,                                                           /* lineNo */
    5,                                                            /* colNo */
    "colon",                                                      /* fName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName */
};

static emlrtRTEInfo e_emlrtRTEI = {
    88,                                                           /* lineNo */
    5,                                                            /* colNo */
    "colon",                                                      /* fName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName */
};

static emlrtRTEInfo f_emlrtRTEI = {
    105,                                                          /* lineNo */
    9,                                                            /* colNo */
    "colon",                                                      /* fName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName */
};

static emlrtRTEInfo g_emlrtRTEI = {
    312,                                                          /* lineNo */
    20,                                                           /* colNo */
    "colon",                                                      /* fName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName */
};

static emlrtRTEInfo h_emlrtRTEI = {
    15,                                                           /* lineNo */
    5,                                                            /* colNo */
    "cost",                                                       /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pName */
};

/* Function Definitions */
real_T cost(const emlrtStack *sp, real_T tmax, real_T Ts, real_T b_y0[6],
            const emxArray_real_T *u, const real_T ybar[6], real_T umax,
            real_T theta0)
{
  static const int8_T iv[6] = {1, 1, 1, 1, 1, 0};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *b_y;
  emxArray_real_T *y;
  real_T Q[36];
  real_T R[9];
  real_T c_y[6];
  real_T dyinv[6];
  const real_T *u_data;
  real_T J;
  real_T a;
  real_T apnd;
  real_T cdiff;
  real_T e_dyinv_tmp;
  real_T ndbl;
  real_T p_mu05;
  real_T w;
  real_T *y_data;
  int32_T b_dyinv_tmp;
  int32_T c_dyinv_tmp;
  int32_T d_dyinv_tmp;
  int32_T dyinv_tmp;
  int32_T i;
  int32_T k;
  int32_T n;
  int32_T nm1d2;
  int32_T w_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  u_data = u->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &y, &h_emlrtRTEI);
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
    emxEnsureCapacity_real_T(&st, y, i, &b_emlrtRTEI);
  } else if ((Ts == 0.0) || ((0.0 < tmax) && (Ts < 0.0)) ||
             ((tmax < 0.0) && (Ts > 0.0))) {
    y->size[1] = 0;
  } else if (muDoubleScalarIsInf(tmax) &&
             (muDoubleScalarIsInf(Ts) || (0.0 == tmax))) {
    i = y->size[0] * y->size[1];
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&st, y, i, &e_emlrtRTEI);
  } else if (muDoubleScalarIsInf(Ts)) {
    i = y->size[0] * y->size[1];
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&st, y, i, &d_emlrtRTEI);
  } else if (muDoubleScalarFloor(Ts) == Ts) {
    i = y->size[0] * y->size[1];
    y->size[1] = (int32_T)muDoubleScalarFloor(tmax / Ts) + 1;
    emxEnsureCapacity_real_T(&st, y, i, &f_emlrtRTEI);
  } else {
    b_st.site = &d_emlrtRSI;
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
    c_st.site = &e_emlrtRSI;
    if (ndbl > 2.147483647E+9) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI, "Coder:MATLAB:pmaxsize",
                                    "Coder:MATLAB:pmaxsize", 0);
    }
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = n;
    emxEnsureCapacity_real_T(&b_st, y, i, &g_emlrtRTEI);
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
  emxInit_real_T(&st, &b_y, &c_emlrtRTEI);
  /*  Time vector */
  b_y0[5] += theta0;
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 6;
  emxEnsureCapacity_real_T(sp, b_y, i, &c_emlrtRTEI);
  if ((real_T)y->size[1] + 1.0 != y->size[1] + 1) {
    emlrtIntegerCheckR2012b((real_T)y->size[1] + 1.0, &emlrtDCI, (emlrtCTX)sp);
  }
  i = b_y->size[0] * b_y->size[1];
  b_y->size[1] = y->size[1] + 1;
  emxEnsureCapacity_real_T(sp, b_y, i, &c_emlrtRTEI);
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
  /*  Weights Definition */
  for (k = 0; k < 6; k++) {
    y_data[k] = b_y0[k];
    dyinv[k] = muDoubleScalarAbs(ybar[k]);
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
    c_y[k] = (real_T)iv[k] * (ndbl * ndbl);
  }
  memset(&Q[0], 0, 36U * sizeof(real_T));
  for (nm1d2 = 0; nm1d2 < 6; nm1d2++) {
    Q[nm1d2 + 6 * nm1d2] = c_y[nm1d2];
  }
  st.site = &b_emlrtRSI;
  b_st.site = &f_emlrtRSI;
  ndbl = umax * umax;
  memset(&R[0], 0, 9U * sizeof(real_T));
  R[0] = 1.0 / ndbl;
  R[4] = 1.0 / ndbl;
  R[8] = 1.0 / ndbl;
  /*  Cost Function Calculation */
  i = y->size[1];
  for (k = 0; k < i; k++) {
    if (k + 1 > y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &b_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &c_emlrtRSI;
    if (k + 1 > b_y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, b_y->size[1], &c_emlrtBCI, &st);
    }
    if (k + 1 > u->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, u->size[1], &d_emlrtBCI, &st);
    }
    /*  Equinoctial Orbital Elements */
    ndbl = y_data[6 * k];
    if (y_data[6 * k] < 0.0) {
      ndbl = -y_data[6 * k];
      /*      warning('p became negative. Switched to absolute value for
       * calculations'); */
    }
    /*  Accelerations */
    /*  Definition of useful values */
    nm1d2 = 6 * k + 5;
    cdiff = muDoubleScalarSin(y_data[nm1d2]);
    apnd = muDoubleScalarCos(y_data[nm1d2]);
    n = 6 * k + 1;
    w_tmp = 6 * k + 2;
    w = (y_data[n] * apnd + 1.0) + y_data[w_tmp] * cdiff;
    /*  r = p/w; */
    b_st.site = &h_emlrtRSI;
    b_st.site = &h_emlrtRSI;
    /*  alpha2 = h^2-k^2; */
    b_st.site = &i_emlrtRSI;
    p_mu05 = muDoubleScalarSqrt(ndbl / 398600.0);
    /*  State Derivative Calculation */
    b_st.site = &j_emlrtRSI;
    a = w / ndbl;
    b_st.site = &j_emlrtRSI;
    if (k + 1 > b_y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, b_y->size[1], &emlrtBCI,
                                    (emlrtCTX)sp);
    }
    dyinv_tmp = 3 * k + 1;
    dyinv[0] = Ts * (2.0 * ndbl / w * p_mu05 * u_data[dyinv_tmp]);
    b_dyinv_tmp = 6 * k + 3;
    c_dyinv_tmp = 6 * k + 4;
    d_dyinv_tmp = 3 * k + 2;
    dyinv[1] =
        Ts *
        (p_mu05 * ((u_data[3 * k] * cdiff +
                    ((w + 1.0) * apnd + y_data[n]) * u_data[dyinv_tmp] / w) -
                   (y_data[b_dyinv_tmp] * cdiff - y_data[c_dyinv_tmp] * apnd) *
                       y_data[w_tmp] * u_data[d_dyinv_tmp] / w));
    dyinv[2] =
        Ts * (p_mu05 *
              ((-u_data[3 * k] * apnd +
                ((w + 1.0) * cdiff + y_data[w_tmp]) * u_data[dyinv_tmp] / w) +
               (y_data[b_dyinv_tmp] * muDoubleScalarSin(y_data[nm1d2]) -
                y_data[c_dyinv_tmp] * muDoubleScalarCos(y_data[nm1d2])) *
                   y_data[w_tmp] * u_data[d_dyinv_tmp] / w));
    e_dyinv_tmp = p_mu05 *
                  ((y_data[b_dyinv_tmp] * y_data[b_dyinv_tmp] + 1.0) +
                   y_data[c_dyinv_tmp] * y_data[c_dyinv_tmp]) *
                  u_data[d_dyinv_tmp] / 2.0 / w;
    dyinv[3] = Ts * (e_dyinv_tmp * apnd);
    dyinv[4] = Ts * (e_dyinv_tmp * cdiff);
    dyinv[5] =
        Ts * (muDoubleScalarSqrt(398600.0 * ndbl) * (a * a) +
              p_mu05 / w *
                  (y_data[b_dyinv_tmp] * muDoubleScalarSin(y_data[nm1d2]) -
                   y_data[c_dyinv_tmp] * muDoubleScalarCos(y_data[nm1d2])) *
                  u_data[d_dyinv_tmp]);
    if (((int32_T)(k + 2U) < 1) || ((int32_T)(k + 2U) > b_y->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 2U), 1, b_y->size[1],
                                    &e_emlrtBCI, (emlrtCTX)sp);
    }
    for (n = 0; n < 6; n++) {
      dyinv[n] += y_data[n + 6 * k];
    }
    for (n = 0; n < 6; n++) {
      y_data[n + 6 * (k + 1)] = dyinv[n];
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
    ndbl = 0.0;
    for (n = 0; n < 3; n++) {
      ndbl += ((0.0 * u_data[3 * k] * R[3 * n] +
                0.0 * u_data[dyinv_tmp] * R[3 * n + 1]) +
               0.0 * u_data[d_dyinv_tmp] * R[3 * n + 2]) *
              u_data[n + 3 * k];
    }
    for (n = 0; n < 6; n++) {
      c_y[n] = y_data[n + 6 * (k + 1)] - ybar[n];
    }
    cdiff = 0.0;
    for (n = 0; n < 6; n++) {
      apnd = 0.0;
      for (nm1d2 = 0; nm1d2 < 6; nm1d2++) {
        apnd += c_y[nm1d2] * Q[nm1d2 + 6 * n];
      }
      cdiff += apnd * (y_data[n + 6 * (k + 1)] - ybar[n]);
    }
    J = (J + ndbl) + cdiff;
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
    c_y[i] = 100.0 * (y_data[i + 6 * (b_y->size[1] - 1)] - ybar[i]);
  }
  cdiff = 0.0;
  for (i = 0; i < 6; i++) {
    ndbl = 0.0;
    for (n = 0; n < 6; n++) {
      ndbl += c_y[n] * Q[n + 6 * i];
    }
    cdiff += ndbl * (y_data[i + 6 * (b_y->size[1] - 1)] - ybar[i]);
  }
  emxFree_real_T(sp, &b_y);
  J = J / (real_T)u->size[1] + cdiff;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return J;
}

/* End of code generation (cost.c) */
