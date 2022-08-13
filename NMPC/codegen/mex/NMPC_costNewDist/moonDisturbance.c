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
#include "NMPC_costNewDist_data.h"
#include "paraorb2rv.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo eb_emlrtRSI = {
    12,                /* lineNo */
    "moonDisturbance", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/moonDisturbance.m" /* pathName
                                                                           */
};

static emlrtRSInfo fb_emlrtRSI = {
    35,                /* lineNo */
    "moonDisturbance", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/moonDisturbance.m" /* pathName
                                                                           */
};

static emlrtRSInfo gb_emlrtRSI = {
    39,                /* lineNo */
    "moonDisturbance", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/moonDisturbance.m" /* pathName
                                                                           */
};

static emlrtRSInfo hb_emlrtRSI = {
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
                     real_T *Dmoon_r, real_T *Dmoon_t, real_T *Dmoon_n)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T ir[9];
  real_T d[3];
  real_T r[3];
  real_T v[3];
  real_T a;
  real_T b_a;
  real_T b_y;
  real_T d_mod;
  real_T in_idx_0;
  real_T in_idx_1;
  real_T in_idx_2;
  real_T k;
  real_T s_idx_0;
  real_T s_idx_1;
  real_T s_idx_2;
  real_T t;
  real_T y;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &eb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  paraorb2rv(x[0], x[1], x[2], x[3], x[4], x[5], r, v);
  k = muDoubleScalarFloor(b_time / 100.0) * 100.0;
  /*  the 4 following lines for approximated moon position (fast) */
  s_idx_0 = xp[0] + xp[3] * muDoubleScalarSin(xp[2] * k + xp[1]);
  s_idx_1 = yp[0] + yp[3] * muDoubleScalarSin(yp[2] * k + yp[1]);
  s_idx_2 = zp[0] + zp[3] * muDoubleScalarSin(zp[2] * k + zp[1]);
  /*  the 3 following line for real moon position (slow) */
  /*  s = zeros(3,1); */
  /*  coder.extrinsic("myMoonpos") */
  /*  s = myMoonpos(k); */
  /*  r position vector of the spacecraft */
  /*  time is the value representing the Julian day in TDT scale */
  /*  moon standard gravitational coefficient */
  d[0] = r[0] - s_idx_0;
  d[1] = r[1] - s_idx_1;
  d[2] = r[2] - s_idx_2;
  /*  vector from moon to spacecraft */
  st.site = &fb_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  c_st.site = &p_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  c_st.site = &p_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  c_st.site = &p_emlrtRSI;
  st.site = &fb_emlrtRSI;
  d_mod = (d[0] * d[0] + d[1] * d[1]) + d[2] * d[2];
  if (d_mod < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &f_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  /*  modulus of d */
  k = ((r[0] * (r[0] - 2.0 * s_idx_0) + r[1] * (r[1] - 2.0 * s_idx_1)) +
       r[2] * (r[2] - 2.0 * s_idx_2)) /
      ((s_idx_0 * s_idx_0 + s_idx_1 * s_idx_1) + s_idx_2 * s_idx_2);
  st.site = &gb_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  c_st.site = &p_emlrtRSI;
  st.site = &gb_emlrtRSI;
  b_st.site = &hb_emlrtRSI;
  c_st.site = &o_emlrtRSI;
  b_st.site = &hb_emlrtRSI;
  c_st.site = &o_emlrtRSI;
  d_st.site = &p_emlrtRSI;
  if (k + 1.0 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  a = k * ((3.0 * k + 3.0) + k * k) / (muDoubleScalarPower(k + 1.0, 1.5) + 1.0);
  b_a = -490487.0 / muDoubleScalarPower(muDoubleScalarSqrt(d_mod), 3.0);
  k = 3.3121686421112381E-170;
  d_mod = muDoubleScalarAbs(r[0]);
  if (d_mod > 3.3121686421112381E-170) {
    y = 1.0;
    k = d_mod;
  } else {
    t = d_mod / 3.3121686421112381E-170;
    y = t * t;
  }
  d_mod = muDoubleScalarAbs(r[1]);
  if (d_mod > k) {
    t = k / d_mod;
    y = y * t * t + 1.0;
    k = d_mod;
  } else {
    t = d_mod / k;
    y += t * t;
  }
  d_mod = muDoubleScalarAbs(r[2]);
  if (d_mod > k) {
    t = k / d_mod;
    y = y * t * t + 1.0;
    k = d_mod;
  } else {
    t = d_mod / k;
    y += t * t;
  }
  y = k * muDoubleScalarSqrt(y);
  in_idx_0 = r[1] * v[2] - v[1] * r[2];
  in_idx_1 = v[0] * r[2] - r[0] * v[2];
  in_idx_2 = r[0] * v[1] - v[0] * r[1];
  k = 3.3121686421112381E-170;
  d[0] = r[0] / y;
  d_mod = muDoubleScalarAbs(in_idx_0);
  if (d_mod > 3.3121686421112381E-170) {
    b_y = 1.0;
    k = d_mod;
  } else {
    t = d_mod / 3.3121686421112381E-170;
    b_y = t * t;
  }
  d[1] = r[1] / y;
  d_mod = muDoubleScalarAbs(in_idx_1);
  if (d_mod > k) {
    t = k / d_mod;
    b_y = b_y * t * t + 1.0;
    k = d_mod;
  } else {
    t = d_mod / k;
    b_y += t * t;
  }
  d[2] = r[2] / y;
  d_mod = muDoubleScalarAbs(in_idx_2);
  if (d_mod > k) {
    t = k / d_mod;
    b_y = b_y * t * t + 1.0;
    k = d_mod;
  } else {
    t = d_mod / k;
    b_y += t * t;
  }
  b_y = k * muDoubleScalarSqrt(b_y);
  k = in_idx_0 / b_y;
  in_idx_0 = k;
  ir[0] = d[0];
  ir[6] = k;
  s_idx_0 = b_a * (r[0] + a * s_idx_0);
  k = in_idx_1 / b_y;
  in_idx_1 = k;
  ir[1] = d[1];
  ir[7] = k;
  s_idx_1 = b_a * (r[1] + a * s_idx_1);
  k = in_idx_2 / b_y;
  ir[2] = d[2];
  ir[8] = k;
  s_idx_2 = b_a * (r[2] + a * s_idx_2);
  ir[3] = in_idx_1 * d[2] - d[1] * k;
  ir[4] = d[0] * k - in_idx_0 * d[2];
  ir[5] = in_idx_0 * d[1] - d[0] * in_idx_1;
  for (i = 0; i < 3; i++) {
    d[i] = (ir[i] * s_idx_0 + ir[i + 3] * s_idx_1) + ir[i + 6] * s_idx_2;
  }
  *Dmoon_r = d[0];
  *Dmoon_t = d[1];
  *Dmoon_n = d[2];
}

/* End of code generation (moonDisturbance.c) */
