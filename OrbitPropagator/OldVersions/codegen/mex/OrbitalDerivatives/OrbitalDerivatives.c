/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * OrbitalDerivatives.c
 *
 * Code generation for function 'OrbitalDerivatives'
 *
 */

/* Include files */
#include "OrbitalDerivatives.h"
#include "OrbitalDerivatives_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    27,                   /* lineNo */
    "OrbitalDerivatives", /* fcnName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\OrbitalDerivatives.m" /* pathName
                                                                       */
};

static emlrtRSInfo c_emlrtRSI = {
    31,                   /* lineNo */
    "OrbitalDerivatives", /* fcnName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\OrbitalDerivatives.m" /* pathName
                                                                       */
};

static emlrtRSInfo d_emlrtRSI = {
    32,                   /* lineNo */
    "OrbitalDerivatives", /* fcnName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\OrbitalDerivatives.m" /* pathName
                                                                       */
};

static emlrtRSInfo e_emlrtRSI = {
    34,                   /* lineNo */
    "OrbitalDerivatives", /* fcnName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\OrbitalDerivatives.m" /* pathName
                                                                       */
};

static emlrtRSInfo g_emlrtRSI = {
    48,                   /* lineNo */
    "OrbitalDerivatives", /* fcnName */
    "D:\\CNOEC\\CNOEC_Project\\OrbitPropagator\\OrbitalDerivatives.m" /* pathName
                                                                       */
};

static emlrtRTEInfo emlrtRTEI = {
    13,                                                            /* lineNo */
    9,                                                             /* colNo */
    "sqrt",                                                        /* fName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    83,      /* lineNo */
    9,       /* colNo */
    "fzero", /* fName */
    "P:\\Matlab\\R2021b\\toolbox\\eml\\lib\\matlab\\optimfun\\fzero.m" /* pName
                                                                        */
};

/* Function Definitions */
void OrbitalDerivatives(const emlrtStack *sp, real_T t, const real_T x[6],
                        const real_T u[3], real_T mu, const struct0_T *opt,
                        real_T xdot[6])
{
  emlrtStack st;
  real_T E;
  real_T a;
  real_T c;
  real_T d;
  real_T dx;
  real_T e;
  real_T fb;
  real_T fc;
  real_T fx;
  real_T m;
  real_T q;
  real_T r;
  real_T s;
  real_T this_workspace_M;
  real_T this_workspace_e;
  real_T toler;
  int32_T exitg2;
  boolean_T exitg1;
  (void)t;
  (void)opt;
  st.prev = sp;
  st.tls = sp->tls;
  /*  x = [a e i om OM M]' */
  /*  u = [ar atheta ah]' */
  this_workspace_M = x[5];
  /*  if e >= 0.99 */
  /*      e = 0.99; */
  /*  end */
  /*  if e <= 0 */
  /*      e = 0; */
  /*  end */
  /* if e < 1 && e >= 0 */
  /*      if isinf(M) */
  /*          xdot = [0 0 0 0 0 0]'; */
  /*          return */
  /*      end */
  this_workspace_e = x[1];
  st.site = &emlrtRSI;
  fx = (0.78539816339744828 - x[1] * 0.70710678118654746) - x[5];
  if (fx == 0.0) {
    E = 0.78539816339744828;
  } else {
    if (muDoubleScalarIsInf(fx) || muDoubleScalarIsNaN(fx)) {
      emlrtErrorWithMessageIdR2018a(
          &st, &b_emlrtRTEI,
          "MATLAB:optimfun:fzero:ValueAtInitGuessComplexOrNotFinite",
          "MATLAB:optimfun:fzero:ValueAtInitGuessComplexOrNotFinite", 0);
    }
    dx = 0.015707963267948967;
    a = 0.78539816339744828;
    E = 0.78539816339744828;
    fb = fx;
    do {
      exitg2 = 0;
      if ((fx > 0.0) == (fb > 0.0)) {
        dx *= 1.4142135623730951;
        a = 0.78539816339744828 - dx;
        fx = ((0.78539816339744828 - dx) -
              this_workspace_e * muDoubleScalarSin(0.78539816339744828 - dx)) -
             this_workspace_M;
        if (muDoubleScalarIsInf(fx) || muDoubleScalarIsNaN(fx)) {
          E = rtNaN;
          exitg2 = 1;
        } else if (muDoubleScalarIsInf(0.78539816339744828 - dx)) {
          E = rtNaN;
          exitg2 = 1;
        } else if ((fx > 0.0) != (fb > 0.0)) {
          exitg2 = 2;
        } else {
          E = dx + 0.78539816339744828;
          fb =
              ((dx + 0.78539816339744828) -
               this_workspace_e * muDoubleScalarSin(dx + 0.78539816339744828)) -
              this_workspace_M;
          if (muDoubleScalarIsInf(fb) || muDoubleScalarIsNaN(fb)) {
            E = rtNaN;
            exitg2 = 1;
          } else if (muDoubleScalarIsInf(dx + 0.78539816339744828)) {
            E = rtNaN;
            exitg2 = 1;
          }
        }
      } else {
        exitg2 = 2;
      }
    } while (exitg2 == 0);
    if (exitg2 != 1) {
      fc = fb;
      c = E;
      e = 0.0;
      d = 0.0;
      exitg1 = false;
      while ((!exitg1) && ((fb != 0.0) && (a != E))) {
        if ((fb > 0.0) == (fc > 0.0)) {
          c = a;
          fc = fx;
          d = E - a;
          e = d;
        }
        if (muDoubleScalarAbs(fc) < muDoubleScalarAbs(fb)) {
          a = E;
          E = c;
          c = a;
          fx = fb;
          fb = fc;
          fc = fx;
        }
        m = 0.5 * (c - E);
        toler = 4.4408920985006262E-16 *
                muDoubleScalarMax(muDoubleScalarAbs(E), 1.0);
        if ((muDoubleScalarAbs(m) <= toler) || (fb == 0.0)) {
          exitg1 = true;
        } else {
          if ((muDoubleScalarAbs(e) < toler) ||
              (muDoubleScalarAbs(fx) <= muDoubleScalarAbs(fb))) {
            d = m;
            e = m;
          } else {
            s = fb / fx;
            if (a == c) {
              dx = 2.0 * m * s;
              q = 1.0 - s;
            } else {
              q = fx / fc;
              r = fb / fc;
              dx = s * (2.0 * m * q * (q - r) - (E - a) * (r - 1.0));
              q = (q - 1.0) * (r - 1.0) * (s - 1.0);
            }
            if (dx > 0.0) {
              q = -q;
            } else {
              dx = -dx;
            }
            if ((2.0 * dx < 3.0 * m * q - muDoubleScalarAbs(toler * q)) &&
                (dx < muDoubleScalarAbs(0.5 * e * q))) {
              e = d;
              d = dx / q;
            } else {
              d = m;
              e = m;
            }
          }
          a = E;
          fx = fb;
          if (muDoubleScalarAbs(d) > toler) {
            E += d;
          } else if (E > c) {
            E -= toler;
          } else {
            E += toler;
          }
          fb = (E - this_workspace_e * muDoubleScalarSin(E)) - this_workspace_M;
        }
      }
    }
  }
  dx = muDoubleScalarCos(E);
  dx = (x[1] - dx) / (x[1] * dx - 1.0);
  d = x[1] * x[1];
  r = x[0] * (1.0 - d) / (x[1] * dx + 1.0);
  st.site = &c_emlrtRSI;
  m = mu / muDoubleScalarPower(x[0], 3.0);
  if (m < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  m = muDoubleScalarSqrt(m);
  st.site = &d_emlrtRSI;
  toler = mu * x[0] * (1.0 - d);
  if (toler < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  toler = muDoubleScalarSqrt(toler);
  st.site = &e_emlrtRSI;
  if (1.0 - d < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  s = muDoubleScalarSqrt(1.0 - d);
  a = muDoubleScalarAtan2(muDoubleScalarSin(E) / r * x[0] * s, dx);
  /*  else */
  /*      xdot = [0 0 0 0 0 0]'; */
  /*      return */
  /*  %     H = fzero(@(H) e*sinh(H)-H-M, pi/4, opt) */
  /*  %     n = sqrt(mu/a^3); */
  /*  %     error('e') */
  /*  end */
  fc = muDoubleScalarSin(a);
  c = muDoubleScalarCos(a);
  dx = x[1] * c;
  e = a + x[3];
  fx = r * muDoubleScalarSin(e) * u[2] / toler;
  q = toler / x[1] / mu * ((dx + 2.0) / (dx + 1.0) * fc * u[1] - u[0] * c) -
      fx / muDoubleScalarTan(x[2]);
  dx = fx / muDoubleScalarSin(x[2]);
  st.site = &g_emlrtRSI;
  if (1.0 - d < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  xdot[0] = 2.0 * (x[0] * x[0]) / toler *
            (x[1] * fc * u[0] + (x[1] * c + 1.0) * u[1]);
  xdot[1] = toler / mu *
            (fc * u[0] +
             ((x[1] + c) / (x[1] * muDoubleScalarCos(a) + 1.0) + c) * u[1]);
  xdot[2] = r * muDoubleScalarCos(e) * u[2] / toler;
  xdot[3] = q;
  xdot[4] = dx;
  xdot[5] =
      m - s * ((2.0 * r * u[0] / toler + q) + dx * muDoubleScalarCos(x[2]));
}

/* End of code generation (OrbitalDerivatives.c) */
