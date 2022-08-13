/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * earthNonSphericity.c
 *
 * Code generation for function 'earthNonSphericity'
 *
 */

/* Include files */
#include "earthNonSphericity.h"
#include "paraorb2rv.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
void earthNonSphericity(const real_T x[6], real_T *DJ2r, real_T *DJ2t,
                        real_T *DJ2n)
{
  real_T a__1[3];
  real_T rr[3];
  real_T L;
  real_T a_tmp;
  real_T a_tmp_tmp;
  real_T absxk;
  real_T b_a_tmp_tmp;
  real_T h;
  real_T k;
  real_T r;
  real_T scale;
  real_T t;
  /*  x classical orbit vector */
  /*  geopotential coefficient of earth's oblateness */
  /*  [km^3*s^-3] standard gravitational parameter of earh (mu = G*M) */
  /*  [km] earth equatorial radius */
  scale = muDoubleScalarTan(x[2] / 2.0);
  h = muDoubleScalarCos(x[3]) * scale;
  k = muDoubleScalarSin(x[3]) * scale;
  L = (x[3] + x[4]) + x[5];
  paraorb2rv(x[0], x[1], x[2], x[3], x[4], x[5], rr, a__1);
  scale = 3.3121686421112381E-170;
  absxk = muDoubleScalarAbs(rr[0]);
  if (absxk > 3.3121686421112381E-170) {
    r = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    r = t * t;
  }
  absxk = muDoubleScalarAbs(rr[1]);
  if (absxk > scale) {
    t = scale / absxk;
    r = r * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    r += t * t;
  }
  absxk = muDoubleScalarAbs(rr[2]);
  if (absxk > scale) {
    t = scale / absxk;
    r = r * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    r += t * t;
  }
  r = scale * muDoubleScalarSqrt(r);
  t = muDoubleScalarSin(L);
  a_tmp = muDoubleScalarCos(L);
  a_tmp_tmp = h * h;
  b_a_tmp_tmp = k * k;
  scale = (a_tmp_tmp + 1.0) + b_a_tmp_tmp;
  r = muDoubleScalarPower(r, 4.0);
  absxk = scale * scale;
  *DJ2r = -5.2517134309839607E+10 / (2.0 * r) *
          (1.0 - 12.0 * (h * t - k * (a_tmp * a_tmp)) / absxk);
  scale = h * muDoubleScalarSin(L) - k * a_tmp;
  *DJ2t = -2.1006853723935843E+11 / r * scale * (h * a_tmp + k * t) / absxk;
  *DJ2n = -1.0503426861967921E+11 / r * ((1.0 - a_tmp_tmp) - b_a_tmp_tmp) *
          scale / absxk;
}

/* End of code generation (earthNonSphericity.c) */
