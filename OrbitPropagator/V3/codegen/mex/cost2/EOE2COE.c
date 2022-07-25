/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * EOE2COE.c
 *
 * Code generation for function 'EOE2COE'
 *
 */

/* Include files */
#include "EOE2COE.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo eb_emlrtRSI = {
    25,        /* lineNo */
    "EOE2COE", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\EOE2COE.m" /* pathName
                                                                          */
};

static emlrtRSInfo fb_emlrtRSI = {
    26,        /* lineNo */
    "EOE2COE", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\EOE2COE.m" /* pathName
                                                                          */
};

static emlrtRTEInfo j_emlrtRTEI = {
    13,                                                            /* lineNo */
    9,                                                             /* colNo */
    "sqrt",                                                        /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" /* pName */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    17,        /* lineNo */
    7,         /* colNo */
    "x",       /* aName */
    "EOE2COE", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\EOE2COE.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    18,        /* lineNo */
    7,         /* colNo */
    "x",       /* aName */
    "EOE2COE", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\EOE2COE.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    19,        /* lineNo */
    7,         /* colNo */
    "x",       /* aName */
    "EOE2COE", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\EOE2COE.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    20,        /* lineNo */
    7,         /* colNo */
    "x",       /* aName */
    "EOE2COE", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\EOE2COE.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    21,        /* lineNo */
    7,         /* colNo */
    "x",       /* aName */
    "EOE2COE", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\EOE2COE.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    22,        /* lineNo */
    7,         /* colNo */
    "x",       /* aName */
    "EOE2COE", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\EOE2COE.m", /* pName
                                                                           */
    0 /* checkKind */
};

/* Function Definitions */
void EOE2COE(const emlrtStack *sp, const real_T x[6], real_T y[6])
{
  emlrtStack st;
  real_T OM;
  real_T b_e_tmp;
  real_T b_x;
  real_T b_x_tmp;
  real_T e;
  real_T e_tmp;
  real_T om;
  real_T x_tmp;
  st.prev = sp;
  st.tls = sp->tls;
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
  st.site = &eb_emlrtRSI;
  e_tmp = x[1] * x[1];
  b_e_tmp = x[2] * x[2];
  e = e_tmp + b_e_tmp;
  if (e < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &j_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  e = muDoubleScalarSqrt(e);
  st.site = &fb_emlrtRSI;
  x_tmp = x[3] * x[3];
  b_x_tmp = x[4] * x[4];
  b_x = x_tmp + b_x_tmp;
  if (b_x < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &j_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  b_x = muDoubleScalarSqrt(b_x);
  OM = muDoubleScalarAtan2(x[4], x[3]);
  om = muDoubleScalarAtan2(x[2], x[1]) - OM;
  /*  om = atan2(g*h-f*k, f*h+g*k); */
  y[0] = x[0] / ((1.0 - e_tmp) - b_e_tmp);
  y[1] = e;
  y[2] = muDoubleScalarAtan2(2.0 * b_x, (1.0 - x_tmp) - b_x_tmp);
  y[3] = OM;
  y[4] = om;
  y[5] = (x[5] - OM) - om;
  /*  u = om+theta Argument of latitude */
}

void b_EOE2COE(const emlrtStack *sp, const real_T x_data[],
               const int32_T x_size[2], real_T y[6])
{
  emlrtStack st;
  real_T OM;
  real_T b_e_tmp;
  real_T b_x_tmp;
  real_T e;
  real_T e_tmp;
  real_T om;
  real_T x;
  real_T x_tmp;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
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
  i = 6 * x_size[1];
  if (i < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i, &q_emlrtBCI, (emlrtCTX)sp);
  }
  if (i < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i, &r_emlrtBCI, (emlrtCTX)sp);
  }
  if (i < 3) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i, &s_emlrtBCI, (emlrtCTX)sp);
  }
  if (i < 4) {
    emlrtDynamicBoundsCheckR2012b(4, 1, i, &t_emlrtBCI, (emlrtCTX)sp);
  }
  if (i < 5) {
    emlrtDynamicBoundsCheckR2012b(5, 1, i, &u_emlrtBCI, (emlrtCTX)sp);
  }
  if (i < 6) {
    emlrtDynamicBoundsCheckR2012b(6, 1, i, &v_emlrtBCI, (emlrtCTX)sp);
  }
  st.site = &eb_emlrtRSI;
  e_tmp = x_data[1] * x_data[1];
  b_e_tmp = x_data[2] * x_data[2];
  e = e_tmp + b_e_tmp;
  if (e < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &j_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  e = muDoubleScalarSqrt(e);
  st.site = &fb_emlrtRSI;
  x_tmp = x_data[3] * x_data[3];
  b_x_tmp = x_data[4] * x_data[4];
  x = x_tmp + b_x_tmp;
  if (x < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &j_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  x = muDoubleScalarSqrt(x);
  OM = muDoubleScalarAtan2(x_data[4], x_data[3]);
  om = muDoubleScalarAtan2(x_data[2], x_data[1]) - OM;
  /*  om = atan2(g*h-f*k, f*h+g*k); */
  y[0] = x_data[0] / ((1.0 - e_tmp) - b_e_tmp);
  y[1] = e;
  y[2] = muDoubleScalarAtan2(2.0 * x, (1.0 - x_tmp) - b_x_tmp);
  y[3] = OM;
  y[4] = om;
  y[5] = (x_data[5] - OM) - om;
  /*  u = om+theta Argument of latitude */
}

/* End of code generation (EOE2COE.c) */
