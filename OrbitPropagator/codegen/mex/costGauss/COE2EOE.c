/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * COE2EOE.c
 *
 * Code generation for function 'COE2EOE'
 *
 */

/* Include files */
#include "COE2EOE.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
void COE2EOE(const real_T x[6], real_T y[6])
{
  real_T h_tmp;
  real_T y_tmp;
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
  h_tmp = muDoubleScalarTan(x[2] / 2.0);
  y[0] = x[0] * (1.0 - x[1] * x[1]);
  y_tmp = x[3] + x[4];
  y[1] = x[1] * muDoubleScalarCos(y_tmp);
  y[2] = x[1] * muDoubleScalarSin(y_tmp);
  y[3] = muDoubleScalarCos(x[3]) * h_tmp;
  y[4] = muDoubleScalarSin(x[3]) * h_tmp;
  y[5] = y_tmp + x[5];
}

/* End of code generation (COE2EOE.c) */
