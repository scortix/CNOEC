/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * drag.c
 *
 * Code generation for function 'drag'
 *
 */

/* Include files */
#include "drag.h"
#include "NMPC_costDist_data.h"
#include "paraorb2rv.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo x_emlrtRSI = {
    3,                                                         /* lineNo */
    "drag",                                                    /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/drag.m" /* pathName */
};

static emlrtRSInfo bb_emlrtRSI = {
    29,                                                        /* lineNo */
    "drag",                                                    /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/drag.m" /* pathName */
};

/* Function Definitions */
void drag(const emlrtStack *sp, const real_T x[6], real_T *Ddrag_r,
          real_T *Ddrag_t)
{
  static const real_T rho_table[84] = {
      0.0,       25.0,      30.0,      40.0,      50.0,      60.0,
      70.0,      80.0,      90.0,      100.0,     110.0,     120.0,
      130.0,     140.0,     150.0,     180.0,     200.0,     250.0,
      300.0,     350.0,     400.0,     450.0,     500.0,     600.0,
      700.0,     800.0,     900.0,     1000.0,    1.225,     0.03899,
      0.01774,   0.003972,  0.001057,  0.0003206, 8.77E-5,   1.905E-5,
      3.396E-6,  5.297E-7,  9.661E-8,  2.438E-8,  8.484E-9,  3.845E-9,
      2.07E-9,   5.464E-10, 2.789E-10, 7.248E-11, 2.418E-11, 9.158E-12,
      3.725E-12, 1.585E-12, 6.967E-13, 1.454E-13, 3.614E-14, 1.17E-14,
      5.245E-15, 3.019E-15, 7.249,     6.349,     6.682,     7.554,
      8.382,     7.714,     6.549,     5.779,     5.382,     5.877,
      7.263,     9.473,     12.636,    16.149,    22.523,    29.74,
      37.105,    45.548,    53.628,    53.298,    58.515,    60.828,
      63.822,    71.835,    88.667,    124.64,    181.05,    268.0};
  emlrtStack st;
  real_T a__1[3];
  real_T vv[3];
  real_T L;
  real_T absxk;
  real_T f;
  real_T g;
  real_T p;
  real_T r;
  real_T scale;
  real_T t;
  real_T v_mod;
  real_T v_r_tmp;
  int32_T b_select;
  int32_T ind;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &x_emlrtRSI;
  /*  [km kg/m^3 km] % check Bernelli slides for references */
  /*  semilatum rectum [km] */
  p = x[0] * (1.0 - x[1] * x[1]);
  r = p / (x[1] * muDoubleScalarCos(x[5]) + 1.0);
  /*  distance from focus in km */
  /* [km] %correction, before it was e+6 */
  /* [km] */
  /*  R = sqrt(r^2+(e*a)^2+2*r*e*a*cos(theta)) % distance from earth */
  /* selection of rho_ */
  b_select = -1;
  ind = 0;
  exitg1 = false;
  while ((!exitg1) && (ind < 27)) {
    if (r - 6378.1 < rho_table[ind + 1]) {
      b_select = ind;
      exitg1 = true;
    } else {
      ind++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
  }
  if (b_select + 1 == 0) {
    b_select = 27;
  }
  paraorb2rv(x[0], x[1], x[2], x[3], x[4], x[5], a__1, vv);
  scale = x[3] + x[4];
  f = x[1] * muDoubleScalarCos(scale);
  g = x[1] * muDoubleScalarSin(scale);
  /*  h = cos(Omega)*tan(i/2); */
  /*  k = sin(Omega)*tan(i/2); */
  L = scale + x[5];
  if (p < 0.0) {
    p = -p;
  }
  scale = 3.3121686421112381E-170;
  absxk = muDoubleScalarAbs(vv[0]);
  if (absxk > 3.3121686421112381E-170) {
    v_mod = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    v_mod = t * t;
  }
  absxk = muDoubleScalarAbs(vv[1]);
  if (absxk > scale) {
    t = scale / absxk;
    v_mod = v_mod * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    v_mod += t * t;
  }
  absxk = muDoubleScalarAbs(vv[2]);
  if (absxk > scale) {
    t = scale / absxk;
    v_mod = v_mod * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    v_mod += t * t;
  }
  v_mod = scale * muDoubleScalarSqrt(v_mod);
  v_r_tmp = muDoubleScalarCos(L);
  t = muDoubleScalarSin(L);
  st.site = &bb_emlrtRSI;
  scale = 398600.0 / p;
  if (scale < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &f_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  absxk = -0.5 *
          (rho_table[b_select + 28] *
           muDoubleScalarExp(-((r - 6378.1) - rho_table[b_select]) /
                             rho_table[b_select + 56])) *
          v_mod;
  scale = muDoubleScalarSqrt(scale);
  *Ddrag_r = absxk * (scale * (f * t - g * v_r_tmp));
  *Ddrag_t = absxk * (scale * ((f * v_r_tmp + 1.0) + g * t));
}

/* End of code generation (drag.c) */
