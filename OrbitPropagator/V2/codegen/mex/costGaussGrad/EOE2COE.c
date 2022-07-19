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
#include "costGaussGrad_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo fb_emlrtRSI = {
    25,        /* lineNo */
    "EOE2COE", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\EOE2COE.m" /* pathName
                                                                          */
};

static emlrtRSInfo gb_emlrtRSI = {
    26,        /* lineNo */
    "EOE2COE", /* fcnName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V2\\EOE2COE.m" /* pathName
                                                                          */
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
  st.site = &fb_emlrtRSI;
  e_tmp = x[1] * x[1];
  b_e_tmp = x[2] * x[2];
  e = e_tmp + b_e_tmp;
  if (e < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &l_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  e = muDoubleScalarSqrt(e);
  st.site = &gb_emlrtRSI;
  x_tmp = x[3] * x[3];
  b_x_tmp = x[4] * x[4];
  b_x = x_tmp + b_x_tmp;
  if (b_x < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &l_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  b_x = muDoubleScalarSqrt(b_x);
  OM = muDoubleScalarAtan2(x[4], x[3]);
  om =
      muDoubleScalarAtan2(x[2] * x[3] - x[1] * x[4], x[1] * x[3] + x[2] * x[4]);
  y[0] = x[0] / ((1.0 - e_tmp) - b_e_tmp);
  y[1] = e;
  y[2] = muDoubleScalarAtan2(2.0 * b_x, (1.0 - x_tmp) - b_x_tmp);
  y[3] = OM;
  y[4] = om;
  y[5] = (x[5] - OM) - om;
  /*  u = om+theta Argument of latitude */
}

/* End of code generation (EOE2COE.c) */
