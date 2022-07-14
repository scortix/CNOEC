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
#include "colon.h"
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
    16,                                                           /* lineNo */
    "cost",                                                       /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    18,                                                           /* lineNo */
    "cost",                                                       /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    30,                                                           /* lineNo */
    "cost",                                                       /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    34,                                                           /* lineNo */
    "cost",                                                       /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    125,                                                          /* lineNo */
    "colon",                                                      /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    25,        /* lineNo */
    "EOE2COE", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\EOE2COE.m" /* pathName
                                                                      */
};

static emlrtRSInfo j_emlrtRSI = {
    26,        /* lineNo */
    "EOE2COE", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\EOE2COE.m" /* pathName
                                                                      */
};

static emlrtRSInfo
    o_emlrtRSI =
        {
            25,               /* lineNo */
            "EOEDerivatives", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\EOEDerivatives.m" /* pathName */
};

static emlrtRSInfo
    p_emlrtRSI =
        {
            33,               /* lineNo */
            "EOEDerivatives", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\EOEDerivatives.m" /* pathName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    34,                                                            /* lineNo */
    20,                                                            /* colNo */
    "y",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    34,                                                            /* lineNo */
    45,                                                            /* colNo */
    "t",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    34,                                                            /* lineNo */
    52,                                                            /* colNo */
    "y",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    34,                                                            /* lineNo */
    59,                                                            /* colNo */
    "u",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    34,                                                            /* lineNo */
    9,                                                             /* colNo */
    "y",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    35,                                                            /* lineNo */
    17,                                                            /* colNo */
    "u",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    35,                                                            /* lineNo */
    27,                                                            /* colNo */
    "u",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    35,                                                            /* lineNo */
    37,                                                            /* colNo */
    "y",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    35,                                                            /* lineNo */
    56,                                                            /* colNo */
    "y",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    37,                                                            /* lineNo */
    41,                                                            /* colNo */
    "y",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    37,                                                            /* lineNo */
    60,                                                            /* colNo */
    "y",                                                           /* aName */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    0 /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = {
    13,                                                            /* lineNo */
    9,                                                             /* colNo */
    "sqrt",                                                        /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    20,                                                            /* lineNo */
    13,                                                            /* colNo */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    20,                                                            /* lineNo */
    1,                                                             /* colNo */
    "cost",                                                        /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m", /* pName */
    1 /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = {
    20,                                                           /* lineNo */
    1,                                                            /* colNo */
    "cost",                                                       /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\cost.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    125,                                                          /* lineNo */
    9,                                                            /* colNo */
    "colon",                                                      /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName */
};

/* Function Definitions */
real_T cost(const emlrtStack *sp, real_T tmax, real_T Ts, real_T b_y0[6],
            const emxArray_real_T *u, const real_T ybar[6], real_T umax,
            real_T theta0)
{
  static const int8_T iv[6] = {1, 1, 1, 1, 1, 0};
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *r;
  emxArray_real_T *y;
  real_T Q[36];
  real_T R[9];
  real_T dyinv[6];
  real_T x0[6];
  const real_T *u_data;
  real_T J;
  real_T OM;
  real_T b_x;
  real_T b_x_tmp;
  real_T p;
  real_T w;
  real_T x;
  real_T x_tmp;
  real_T *y_data;
  int32_T k;
  int32_T loop_ub;
  int32_T t_size_idx_1;
  int32_T w_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
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
  emxInit_real_T(&st, &r, &d_emlrtRTEI);
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
    b_st.site = &f_emlrtRSI;
    eml_float_colon(&b_st, Ts, tmax, r);
    t_size_idx_1 = r->size[1];
  }
  emxFree_real_T(&st, &r);
  /*  Time vector */
  st.site = &b_emlrtRSI;
  /* EOE2COE  Function to convert Equinoctial Orbital Elements to Classical  */
  /*    Orbital Elements. */
  /*    COE = EOE2COE(EOE) receives as input a vector of the 6 equinoctial OE
   * and */
  /*    gives as output a column vector of the 6 classical OE. */
  /*    In particular, the input vector must be of the form EOE = [p f g h k L],
   */
  /*    where p is the semilatus rectum and L is the true longitude */
  /*    The output vector is in the form COE = [a e i om OM theta]', where */
  /*        a: semimajor axis */
  /*        e: eccentricity */
  /*        i: inclination */
  /*        om: argument of periapsis */
  /*        OM: longitude of the ascending node */
  /*        theta: true anomaly */
  b_st.site = &i_emlrtRSI;
  x_tmp = b_y0[1] * b_y0[1];
  w = b_y0[2] * b_y0[2];
  x = x_tmp + w;
  if (x < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  b_st.site = &j_emlrtRSI;
  p = b_y0[3] * b_y0[3];
  b_x_tmp = b_y0[4] * b_y0[4];
  b_x = p + b_x_tmp;
  if (b_x < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  emxInit_real_T(&b_st, &y, &c_emlrtRTEI);
  OM = muDoubleScalarAtan2(b_y0[4], b_y0[3]);
  x0[1] = muDoubleScalarSqrt(x);
  /*  u = om+theta Argument of latitude */
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
  b_x = muDoubleScalarTan(
      muDoubleScalarAtan2(2.0 * muDoubleScalarSqrt(b_x), (1.0 - p) - b_x_tmp) /
      2.0);
  b_y0[0] = b_y0[0] / ((1.0 - x_tmp) - w) * (1.0 - x0[1] * x0[1]);
  p = OM + muDoubleScalarAtan2(b_y0[2] * b_y0[3] - b_y0[1] * b_y0[4],
                               b_y0[1] * b_y0[3] + b_y0[2] * b_y0[4]);
  b_y0[1] = x0[1] * muDoubleScalarCos(p);
  b_y0[2] = x0[1] * muDoubleScalarSin(p);
  b_y0[3] = muDoubleScalarCos(OM) * b_x;
  b_y0[4] = muDoubleScalarSin(OM) * b_x;
  b_y0[5] = p + theta0;
  /*  y0(6) = y0(6)+theta0; */
  w_tmp = y->size[0] * y->size[1];
  y->size[0] = 6;
  emxEnsureCapacity_real_T(sp, y, w_tmp, &c_emlrtRTEI);
  p = t_size_idx_1 + 1;
  if ((real_T)t_size_idx_1 + 1.0 != p) {
    emlrtIntegerCheckR2012b((real_T)t_size_idx_1 + 1.0, &emlrtDCI,
                            (emlrtCTX)sp);
  }
  w_tmp = y->size[0] * y->size[1];
  y->size[1] = t_size_idx_1 + 1;
  emxEnsureCapacity_real_T(sp, y, w_tmp, &c_emlrtRTEI);
  y_data = y->data;
  if ((real_T)t_size_idx_1 + 1.0 != p) {
    emlrtIntegerCheckR2012b((real_T)t_size_idx_1 + 1.0, &b_emlrtDCI,
                            (emlrtCTX)sp);
  }
  loop_ub = 6 * (t_size_idx_1 + 1);
  for (w_tmp = 0; w_tmp < loop_ub; w_tmp++) {
    y_data[w_tmp] = 0.0;
  }
  /*  Initialization of vector state */
  /*  Set initial conditions */
  J = 0.0;
  /*  Initialization of cost function */
  /*  Weights Definition */
  for (k = 0; k < 6; k++) {
    p = b_y0[k];
    y_data[k] = p;
    dyinv[k] = muDoubleScalarAbs(p - ybar[k]);
  }
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    p = dyinv[loop_ub];
    p = (real_T)(p != 0.0) / (p + (real_T)(p == 0.0));
    dyinv[loop_ub] = p;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  for (k = 0; k < 6; k++) {
    p = dyinv[k];
    x0[k] = (real_T)iv[k] * (p * p);
  }
  memset(&Q[0], 0, 36U * sizeof(real_T));
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    Q[loop_ub + 6 * loop_ub] = x0[loop_ub];
  }
  st.site = &d_emlrtRSI;
  p = umax * umax;
  memset(&R[0], 0, 9U * sizeof(real_T));
  R[0] = 1.0 / p;
  R[4] = 1.0 / p;
  R[8] = 1.0 / p;
  /*  Cost Function Calculation */
  for (k = 0; k < t_size_idx_1; k++) {
    real_T a;
    int32_T b_w_tmp;
    int32_T b_x0_tmp;
    int32_T c_x0_tmp;
    int32_T d_x0_tmp;
    int32_T x0_tmp;
    if ((k + 1 < 1) || (k + 1 > t_size_idx_1)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, t_size_idx_1, &b_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    st.site = &e_emlrtRSI;
    if ((k + 1 < 1) || (k + 1 > y->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &c_emlrtBCI, &st);
    }
    if ((k + 1 < 1) || (k + 1 > u->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, u->size[1], &d_emlrtBCI, &st);
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
    b_x = muDoubleScalarSin(y_data[loop_ub]);
    x_tmp = muDoubleScalarCos(y_data[loop_ub]);
    w_tmp = 6 * k + 1;
    b_w_tmp = 6 * k + 2;
    w = (y_data[w_tmp] * x_tmp + 1.0) + y_data[b_w_tmp] * b_x;
    /*  r = p/w; */
    /*  alpha2 = h^2-k^2; */
    b_st.site = &o_emlrtRSI;
    x = p / 398600.0;
    if (x < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    OM = muDoubleScalarSqrt(x);
    /*  State Derivative Calculation */
    a = w / p;
    b_st.site = &p_emlrtRSI;
    x = 398600.0 * p;
    if (x < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    if ((k + 1 < 1) || (k + 1 > y->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, y->size[1], &emlrtBCI,
                                    (emlrtCTX)sp);
    }
    x0_tmp = 3 * k + 1;
    x0[0] = Ts * (2.0 * p / w * OM * u_data[x0_tmp]);
    b_x0_tmp = 6 * k + 3;
    c_x0_tmp = 6 * k + 4;
    d_x0_tmp = 3 * k + 2;
    x0[1] =
        Ts * (OM * ((u_data[3 * k] * b_x +
                     ((w + 1.0) * x_tmp + y_data[w_tmp]) * u_data[x0_tmp] / w) -
                    (y_data[b_x0_tmp] * b_x - y_data[c_x0_tmp] * x_tmp) *
                        y_data[b_w_tmp] * u_data[d_x0_tmp] / w));
    x0[2] =
        Ts * (OM * ((-u_data[3 * k] * x_tmp +
                     ((w + 1.0) * b_x + y_data[b_w_tmp]) * u_data[x0_tmp] / w) +
                    (y_data[b_x0_tmp] * muDoubleScalarSin(y_data[loop_ub]) -
                     y_data[c_x0_tmp] * muDoubleScalarCos(y_data[loop_ub])) *
                        y_data[b_w_tmp] * u_data[d_x0_tmp] / w));
    b_x_tmp = OM *
              ((y_data[b_x0_tmp] * y_data[b_x0_tmp] + 1.0) +
               y_data[c_x0_tmp] * y_data[c_x0_tmp]) *
              u_data[d_x0_tmp] / 2.0 / w;
    x0[3] = Ts * (b_x_tmp * x_tmp);
    x0[4] = Ts * (b_x_tmp * b_x);
    x0[5] = Ts * (muDoubleScalarSqrt(x) * (a * a) +
                  OM / w *
                      (y_data[b_x0_tmp] * muDoubleScalarSin(y_data[loop_ub]) -
                       y_data[c_x0_tmp] * muDoubleScalarCos(y_data[loop_ub])) *
                      u_data[d_x0_tmp]);
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
    if ((k + 1 < 1) || (k + 1 > u->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, u->size[1], &f_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (((int32_T)(((real_T)k + 1.0) + 1.0) < 1) ||
        ((int32_T)(((real_T)k + 1.0) + 1.0) > y->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(((real_T)k + 1.0) + 1.0), 1,
                                    y->size[1], &h_emlrtBCI, (emlrtCTX)sp);
    }
    if ((k + 1 < 1) || (k + 1 > u->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, u->size[1], &g_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (((int32_T)(((real_T)k + 1.0) + 1.0) < 1) ||
        ((int32_T)(((real_T)k + 1.0) + 1.0) > y->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(((real_T)k + 1.0) + 1.0), 1,
                                    y->size[1], &i_emlrtBCI, (emlrtCTX)sp);
    }
    b_x = 0.0;
    for (w_tmp = 0; w_tmp < 3; w_tmp++) {
      b_x +=
          ((u_data[3 * k] * R[3 * w_tmp] + u_data[x0_tmp] * R[3 * w_tmp + 1]) +
           u_data[d_x0_tmp] * R[3 * w_tmp + 2]) *
          u_data[w_tmp + 3 * k];
    }
    for (w_tmp = 0; w_tmp < 6; w_tmp++) {
      x0[w_tmp] = y_data[w_tmp + 6 * (k + 1)] - ybar[w_tmp];
    }
    b_x_tmp = 0.0;
    for (w_tmp = 0; w_tmp < 6; w_tmp++) {
      p = 0.0;
      for (loop_ub = 0; loop_ub < 6; loop_ub++) {
        p += x0[loop_ub] * Q[loop_ub + 6 * w_tmp];
      }
      b_x_tmp += p * (y_data[w_tmp + 6 * (k + 1)] - ybar[w_tmp]);
    }
    J = (J + b_x) + b_x_tmp * (((real_T)k + 1.0) / 10.0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  if (y->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(y->size[1], 1, y->size[1], &j_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  b_x_tmp = 1000.0 * (real_T)t_size_idx_1 / 10.0;
  if (y->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(y->size[1], 1, y->size[1], &k_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  for (w_tmp = 0; w_tmp < 6; w_tmp++) {
    x0[w_tmp] = b_x_tmp * (y_data[w_tmp + 6 * (y->size[1] - 1)] - ybar[w_tmp]);
  }
  b_x_tmp = 0.0;
  for (w_tmp = 0; w_tmp < 6; w_tmp++) {
    p = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      p += x0[loop_ub] * Q[loop_ub + 6 * w_tmp];
    }
    b_x_tmp += p * (y_data[w_tmp + 6 * (y->size[1] - 1)] - ybar[w_tmp]);
  }
  emxFree_real_T(sp, &y);
  J = J / (real_T)u->size[1] + b_x_tmp;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return J;
}

/* End of code generation (cost.c) */
