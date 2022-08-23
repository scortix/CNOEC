/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * EOEDerivatives.c
 *
 * Code generation for function 'EOEDerivatives'
 *
 */

/* Include files */
#include "EOEDerivatives.h"
#include "NMPC_costDist_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo gb_emlrtRSI = {
    30,               /* lineNo */
    "EOEDerivatives", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/EOEDerivatives.m" /* pathName
                                                                          */
};

static emlrtRSInfo hb_emlrtRSI = {
    38,               /* lineNo */
    "EOEDerivatives", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/EOEDerivatives.m" /* pathName
                                                                          */
};

/* Function Definitions */
void EOEDerivatives(const emlrtStack *sp, const real_T x[6], const real_T u[3],
                    real_T xdot[6])
{
  emlrtStack st;
  real_T a;
  real_T b_w_tmp;
  real_T b_x;
  real_T p;
  real_T p_mu05;
  real_T w;
  real_T w_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  /* EOEDerivatives Compute the derivative of the EOE state */
  /*  */
  /*    Inputs: */
  /*        - Time (Unused but necessary for built-in ode integration) */
  /*        - State vector */
  /*        - Acceleration vector */
  /*        - Planetary constant (for Earth use 398600) */
  /*  Equinoctial Orbital Elements */
  p = x[0];
  if (x[0] < 0.0) {
    p = -x[0];
  }
  /*  Accelerations */
  /*  Definition of useful values */
  w_tmp = muDoubleScalarSin(x[5]);
  b_w_tmp = muDoubleScalarCos(x[5]);
  w = (x[1] * b_w_tmp + 1.0) + x[2] * w_tmp;
  st.site = &gb_emlrtRSI;
  p_mu05 = p / 398600.0;
  if (p_mu05 < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &e_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  p_mu05 = muDoubleScalarSqrt(p_mu05);
  /*  State Derivative Calculation */
  a = w / p;
  st.site = &hb_emlrtRSI;
  b_x = 398600.0 * p;
  if (b_x < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &e_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  b_x = muDoubleScalarSqrt(b_x);
  xdot[0] = 2.0 * p / w * p_mu05 * u[1];
  xdot[1] = p_mu05 * ((u[0] * w_tmp + ((w + 1.0) * b_w_tmp + x[1]) * u[1] / w) -
                      (x[3] * w_tmp - x[4] * b_w_tmp) * x[2] * u[2] / w);
  xdot[2] = p_mu05 *
            ((-u[0] * b_w_tmp + ((w + 1.0) * w_tmp + x[2]) * u[1] / w) +
             (x[3] * muDoubleScalarSin(x[5]) - x[4] * muDoubleScalarCos(x[5])) *
                 x[2] * u[2] / w);
  p = p_mu05 * ((x[3] * x[3] + 1.0) + x[4] * x[4]) * u[2] / 2.0 / w;
  xdot[3] = p * b_w_tmp;
  xdot[4] = p * w_tmp;
  xdot[5] = b_x * (a * a) + p_mu05 / w *
                                (x[3] * muDoubleScalarSin(x[5]) -
                                 x[4] * muDoubleScalarCos(x[5])) *
                                u[2];
}

/* End of code generation (EOEDerivatives.c) */
