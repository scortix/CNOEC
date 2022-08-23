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
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
void EOEDerivatives(const real_T x[6], const real_T u[3], real_T xdot[6])
{
  real_T a;
  real_T b_w_tmp;
  real_T p;
  real_T p_mu05;
  real_T w;
  real_T w_tmp;
  real_T xdot_tmp;
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
  p_mu05 = muDoubleScalarSqrt(p / 398600.0);
  /*  State Derivative Calculation */
  a = w / p;
  xdot[0] = 2.0 * p / w * p_mu05 * u[1];
  xdot[1] = p_mu05 * ((u[0] * w_tmp + ((w + 1.0) * b_w_tmp + x[1]) * u[1] / w) -
                      (x[3] * w_tmp - x[4] * b_w_tmp) * x[2] * u[2] / w);
  xdot[2] = p_mu05 *
            ((-u[0] * b_w_tmp + ((w + 1.0) * w_tmp + x[2]) * u[1] / w) +
             (x[3] * muDoubleScalarSin(x[5]) - x[4] * muDoubleScalarCos(x[5])) *
                 x[2] * u[2] / w);
  xdot_tmp = p_mu05 * ((x[3] * x[3] + 1.0) + x[4] * x[4]) * u[2] / 2.0 / w;
  xdot[3] = xdot_tmp * b_w_tmp;
  xdot[4] = xdot_tmp * w_tmp;
  xdot[5] =
      muDoubleScalarSqrt(398600.0 * p) * (a * a) +
      p_mu05 / w *
          (x[3] * muDoubleScalarSin(x[5]) - x[4] * muDoubleScalarCos(x[5])) *
          u[2];
}

/* End of code generation (EOEDerivatives.c) */
