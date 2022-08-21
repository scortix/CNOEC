/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * moonDisturbance.c
 *
 * Code generation for function 'moonDisturbance'
 *
 */

/* Include files */
#include "moonDisturbance.h"
#include "NMPC_costDist_data.h"
#include "paraorb2rv.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo bb_emlrtRSI = {
    12,                /* lineNo */
    "moonDisturbance", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/moonDisturbance.m" /* pathName
                                                                           */
};

static emlrtRSInfo cb_emlrtRSI = {
    35,                /* lineNo */
    "moonDisturbance", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/moonDisturbance.m" /* pathName
                                                                           */
};

static emlrtRSInfo db_emlrtRSI = {
    39,                /* lineNo */
    "moonDisturbance", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/moonDisturbance.m" /* pathName
                                                                           */
};

static emlrtRSInfo eb_emlrtRSI = {
    37,                                  /* lineNo */
    "@(q)q*(3+3*q+q^2)/(1+(1+q)^(3/2))", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/moonDisturbance.m" /* pathName
                                                                           */
};

static emlrtRTEInfo g_emlrtRTEI = {
    82,         /* lineNo */
    5,          /* colNo */
    "fltpower", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/power.m" /* pName
                                                                          */
};

/* Function Definitions */
void moonDisturbance(const emlrtStack *sp, const real_T x[6], real_T b_time,
                     const real_T xp[4], const real_T yp[4], const real_T zp[4],
                     real_T Dm[3])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T d[9];
  real_T a_tb[3];
  real_T r[3];
  real_T a;
  real_T absxk;
  real_T b_a;
  real_T d_idx_0;
  real_T d_idx_1;
  real_T d_idx_2;
  real_T in_idx_0;
  real_T in_idx_1;
  real_T in_idx_2;
  real_T k;
  real_T s_idx_0;
  real_T s_idx_1;
  real_T s_idx_2;
  real_T scale;
  real_T t;
  real_T y;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  paraorb2rv(x[0], x[1], x[2], x[3], x[4], x[5], r, a_tb);
  k = muDoubleScalarFloor(b_time / 100.0) * 100.0;
  /*  the 4 following lines for approximated moon position (fast) */
  s_idx_0 =
      xp[0] + xp[3] * muDoubleScalarSin(6.2831853071795862 / xp[2] * k + xp[1]);
  s_idx_1 =
      yp[0] + yp[3] * muDoubleScalarSin(6.2831853071795862 / yp[2] * k + yp[1]);
  s_idx_2 =
      zp[0] + zp[3] * muDoubleScalarSin(6.2831853071795862 / zp[2] * k + zp[1]);
  /*  the 3 following line for real moon position (slow) */
  /*  s = zeros(3,1); */
  /*  coder.extrinsic("myMoonpos") */
  /*  s = myMoonpos(k); */
  /*  r position vector of the spacecraft */
  /*  time is the value representing the Julian day in TDT scale */
  /*  moon standard gravitational coefficient */
  d_idx_0 = r[0] - s_idx_0;
  d_idx_1 = r[1] - s_idx_1;
  d_idx_2 = r[2] - s_idx_2;
  /*  vector from moon to spacecraft */
  st.site = &cb_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  c_st.site = &q_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  c_st.site = &q_emlrtRSI;
  st.site = &cb_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  c_st.site = &q_emlrtRSI;
  st.site = &cb_emlrtRSI;
  d_idx_2 = (d_idx_0 * d_idx_0 + d_idx_1 * d_idx_1) + d_idx_2 * d_idx_2;
  if (d_idx_2 < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &e_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  /*  modulus of d */
  k = ((r[0] * (r[0] - 2.0 * s_idx_0) + r[1] * (r[1] - 2.0 * s_idx_1)) +
       r[2] * (r[2] - 2.0 * s_idx_2)) /
      ((s_idx_0 * s_idx_0 + s_idx_1 * s_idx_1) + s_idx_2 * s_idx_2);
  st.site = &db_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  c_st.site = &q_emlrtRSI;
  st.site = &db_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  c_st.site = &p_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  c_st.site = &p_emlrtRSI;
  d_st.site = &q_emlrtRSI;
  if (k + 1.0 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  a = k * ((3.0 * k + 3.0) + k * k) / (muDoubleScalarPower(k + 1.0, 1.5) + 1.0);
  b_a = -4904.87 / muDoubleScalarPower(muDoubleScalarSqrt(d_idx_2), 3.0);
  scale = 3.3121686421112381E-170;
  absxk = muDoubleScalarAbs(r[0]);
  if (absxk > 3.3121686421112381E-170) {
    k = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    k = t * t;
  }
  absxk = muDoubleScalarAbs(r[1]);
  if (absxk > scale) {
    t = scale / absxk;
    k = k * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    k += t * t;
  }
  absxk = muDoubleScalarAbs(r[2]);
  if (absxk > scale) {
    t = scale / absxk;
    k = k * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    k += t * t;
  }
  k = scale * muDoubleScalarSqrt(k);
  in_idx_0 = r[1] * a_tb[2] - a_tb[1] * r[2];
  in_idx_1 = a_tb[0] * r[2] - r[0] * a_tb[2];
  in_idx_2 = r[0] * a_tb[1] - a_tb[0] * r[1];
  scale = 3.3121686421112381E-170;
  d_idx_0 = r[0] / k;
  absxk = muDoubleScalarAbs(in_idx_0);
  if (absxk > 3.3121686421112381E-170) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y = t * t;
  }
  d_idx_1 = r[1] / k;
  absxk = muDoubleScalarAbs(in_idx_1);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }
  d_idx_2 = r[2] / k;
  absxk = muDoubleScalarAbs(in_idx_2);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }
  y = scale * muDoubleScalarSqrt(y);
  k = in_idx_0 / y;
  in_idx_0 = k;
  d[0] = d_idx_0;
  d[2] = k;
  s_idx_0 = b_a * (r[0] + a * s_idx_0);
  k = in_idx_1 / y;
  in_idx_1 = k;
  d[3] = d_idx_1;
  d[5] = k;
  s_idx_1 = b_a * (r[1] + a * s_idx_1);
  k = in_idx_2 / y;
  d[6] = d_idx_2;
  d[8] = k;
  s_idx_2 = b_a * (r[2] + a * s_idx_2);
  d[1] = in_idx_1 * d_idx_2 - d_idx_1 * k;
  d[4] = d_idx_0 * k - in_idx_0 * d_idx_2;
  d[7] = in_idx_0 * d_idx_1 - d_idx_0 * in_idx_1;
  for (i = 0; i < 3; i++) {
    a_tb[i] = (d[i] * s_idx_0 + d[i + 3] * s_idx_1) + d[i + 6] * s_idx_2;
  }
  Dm[0] = a_tb[0];
  Dm[1] = a_tb[1];
  Dm[2] = a_tb[2];
}

/* End of code generation (moonDisturbance.c) */
