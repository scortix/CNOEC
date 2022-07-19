/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mygradcalc.c
 *
 * Code generation for function 'mygradcalc'
 *
 */

/* Include files */
#include "mygradcalc.h"
#include "costGaussGrad.h"
#include "costGaussGrad_data.h"
#include "costGaussGrad_emxutil.h"
#include "costGaussGrad_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <math.h>

/* Variable Definitions */
static emlrtRSInfo
    gc_emlrtRSI =
        {
            10,           /* lineNo */
            "mygradcalc", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pathName */
};

static emlrtRSInfo
    hc_emlrtRSI =
        {
            20,           /* lineNo */
            "mygradcalc", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pathName */
};

static emlrtRSInfo
    ic_emlrtRSI =
        {
            28,           /* lineNo */
            "mygradcalc", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pathName */
};

static emlrtRSInfo
    jc_emlrtRSI =
        {
            30,           /* lineNo */
            "mygradcalc", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pathName */
};

static emlrtRSInfo kc_emlrtRSI = {
    50,                                                           /* lineNo */
    "eye",                                                        /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m" /* pathName */
};

static emlrtRSInfo lc_emlrtRSI = {
    96,                                                           /* lineNo */
    "eye",                                                        /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m" /* pathName */
};

static emlrtRSInfo mc_emlrtRSI = {
    21,                           /* lineNo */
    "checkAndSaturateExpandSize", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\checkAndSaturateExpandSize.m" /* pathName */
};

static emlrtRSInfo nc_emlrtRSI = {
    56,                                                           /* lineNo */
    "eps",                                                        /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\eps.m" /* pathName */
};

static emlrtRSInfo oc_emlrtRSI = {
    63,                               /* lineNo */
    "function_handle/parenReference", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\function_handle."
    "m" /* pathName */
};

static emlrtRSInfo
    pc_emlrtRSI =
        {
            8,                        /* lineNo */
            "@(x)(fun(x)\'*pf(:,i))", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pathName */
};

static emlrtRSInfo qc_emlrtRSI =
    {
        22, /* lineNo */
        "@(x)costGaussGrad(x,tmax,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha,false,["
        "],[],[],[])", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad.m" /* pathName */
};

static emlrtECInfo
    h_emlrtECI =
        {
            1,            /* nDims */
            30,           /* lineNo */
            30,           /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtBCInfo
    n_emlrtBCI =
        {
            -1,           /* iFirst */
            -1,           /* iLast */
            24,           /* lineNo */
            15,           /* colNo */
            "p",          /* aName */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m", /* pName */
            0                                             /* checkKind */
};

static emlrtECInfo
    i_emlrtECI =
        {
            -1,           /* nDims */
            14,           /* lineNo */
            9,            /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtBCInfo
    o_emlrtBCI =
        {
            -1,           /* iFirst */
            -1,           /* iLast */
            30,           /* lineNo */
            20,           /* colNo */
            "gradfx",     /* aName */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m", /* pName */
            0                                             /* checkKind */
};

static emlrtRTEInfo
    ic_emlrtRTEI =
        {
            6,            /* lineNo */
            9,            /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    jc_emlrtRTEI =
        {
            16,           /* lineNo */
            5,            /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    kc_emlrtRTEI =
        {
            20,           /* lineNo */
            5,            /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    lc_emlrtRTEI =
        {
            10,           /* lineNo */
            22,           /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    mc_emlrtRTEI =
        {
            30,           /* lineNo */
            32,           /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    oc_emlrtRTEI =
        {
            6,            /* lineNo */
            5,            /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    pc_emlrtRTEI =
        {
            1,            /* lineNo */
            11,           /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    qc_emlrtRTEI =
        {
            1,            /* lineNo */
            57,           /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

/* Function Definitions */
void mygradcalc(const emlrtStack *sp, real_T fun_workspace_Ts,
                const real_T fun_workspace_y0[6],
                const real_T fun_workspace_ybar[6], real_T fun_workspace_m0,
                real_T fun_workspace_coeffT, real_T fun_workspace_Tmax,
                real_T fun_workspace_ratio, real_T fun_workspace_alpha,
                const emxArray_real_T *x, const real_T fx[8],
                emxArray_real_T *gradfx)
{
  static const int8_T pf[64] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
                                0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
                                0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
                                0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_int8_T *p;
  emxArray_real_T *J;
  emxArray_real_T *b_gradfx;
  emxArray_real_T *b_x;
  real_T g[5];
  real_T h[2];
  const real_T *x_data;
  real_T f;
  real_T *J_data;
  real_T *b_x_data;
  real_T *gradfx_data;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T b_i;
  int32_T c_i;
  int32_T exponent;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int8_T *p_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &J, 2, &oc_emlrtRTEI);
  i = J->size[0] * J->size[1];
  J->size[0] = 8;
  J->size[1] = x->size[0];
  emxEnsureCapacity_real_T(sp, J, i, &ic_emlrtRTEI);
  J_data = J->data;
  iv[0] = 1;
  iv1[0] = 1;
  emxInit_real_T(sp, &b_gradfx, 1, &pc_emlrtRTEI);
  emxInit_int8_T(sp, &p, &qc_emlrtRTEI);
  emxInit_real_T(sp, &b_x, 1, &nc_emlrtRTEI);
  for (b_i = 0; b_i < 8; b_i++) {
    real_T b_fx;
    b_fx = 0.0;
    for (i = 0; i < 8; i++) {
      b_fx += fx[i] * (real_T)pf[i + (b_i << 3)];
    }
    st.site = &gc_emlrtRSI;
    b_st.site = &hc_emlrtRSI;
    c_st.site = &kc_emlrtRSI;
    i = x->size[0];
    d_st.site = &mc_emlrtRSI;
    i1 = p->size[0] * p->size[1];
    p->size[0] = x->size[0];
    p->size[1] = x->size[0];
    emxEnsureCapacity_int8_T(&b_st, p, i1, &kc_emlrtRTEI);
    p_data = p->data;
    loop_ub = x->size[0] * x->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      p_data[i1] = 0;
    }
    if (x->size[0] > 0) {
      c_st.site = &lc_emlrtRSI;
      if (x->size[0] > 2147483646) {
        d_st.site = &x_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (loop_ub = 0; loop_ub < i; loop_ub++) {
        p_data[loop_ub + p->size[0] * loop_ub] = 1;
      }
    }
    i = x->size[0];
    i1 = b_gradfx->size[0];
    b_gradfx->size[0] = x->size[0];
    emxEnsureCapacity_real_T(&st, b_gradfx, i1, &lc_emlrtRTEI);
    gradfx_data = b_gradfx->data;
    for (c_i = 0; c_i < i; c_i++) {
      real_T b_f[8];
      real_T absx;
      if (c_i + 1 > p->size[1]) {
        emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, p->size[1], &n_emlrtBCI, &st);
      }
      b_st.site = &ic_emlrtRSI;
      c_st.site = &nc_emlrtRSI;
      absx = muDoubleScalarAbs(b_fx);
      if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
        if (absx <= 2.2250738585072014E-308) {
          absx = 4.94065645841247E-324;
        } else {
          frexp(absx, &exponent);
          absx = ldexp(1.0, exponent - 53);
        }
      } else {
        absx = rtNaN;
      }
      b_st.site = &ic_emlrtRSI;
      absx = muDoubleScalarSqrt(absx);
      loop_ub = p->size[0];
      i1 = b_x->size[0];
      b_x->size[0] = p->size[0];
      emxEnsureCapacity_real_T(&st, b_x, i1, &mc_emlrtRTEI);
      b_x_data = b_x->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_x_data[i1] = absx * (real_T)p_data[i1 + p->size[0] * c_i];
      }
      loop_ub = x->size[0];
      if ((x->size[0] != b_x->size[0]) &&
          ((x->size[0] != 1) && (b_x->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(x->size[0], b_x->size[0], &h_emlrtECI, &st);
      }
      b_st.site = &jc_emlrtRSI;
      c_st.site = &oc_emlrtRSI;
      d_st.site = &pc_emlrtRSI;
      e_st.site = &oc_emlrtRSI;
      f_st.site = &qc_emlrtRSI;
      if (x->size[0] == b_x->size[0]) {
        i1 = b_x->size[0];
        b_x->size[0] = x->size[0];
        emxEnsureCapacity_real_T(&f_st, b_x, i1, &nc_emlrtRTEI);
        b_x_data = b_x->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_x_data[i1] += x_data[i1];
        }
        g_st.site = &emlrtRSI;
        fun(&g_st, b_x, fun_workspace_Ts, fun_workspace_y0, fun_workspace_ybar,
            fun_workspace_m0, fun_workspace_coeffT, fun_workspace_Tmax,
            fun_workspace_ratio, fun_workspace_alpha, &f, g, h);
      } else {
        g_st.site = &emlrtRSI;
        f = e_binary_expand_op(
            &g_st, emlrtRSI, x, b_x, fun_workspace_Ts, fun_workspace_y0,
            fun_workspace_ybar, fun_workspace_m0, fun_workspace_coeffT,
            fun_workspace_Tmax, fun_workspace_ratio, fun_workspace_alpha, g, h);
      }
      /*  lx = length(x); */
      /*  lf = 1; lg = size(A,1) + length(g); lh = size(C,1) + length(h); */
      /*      function f = funf(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha) */
      /*          [f,~,~] = fun(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha); */
      /*      end */
      /*      function f = fung(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha) */
      /*          [~,g,~] = fun(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha); */
      /*      end */
      /*      function f = funh(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha) */
      /*          [f,~,~] = fun(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha); */
      /*      end */
      b_f[0] = f;
      for (i1 = 0; i1 < 5; i1++) {
        b_f[i1 + 1] = g[i1];
      }
      b_f[6] = h[0];
      b_f[7] = h[1];
      f = 0.0;
      for (i1 = 0; i1 < 8; i1++) {
        f += b_f[i1] * (real_T)pf[i1 + (b_i << 3)];
      }
      if (c_i + 1 > b_gradfx->size[0]) {
        emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, b_gradfx->size[0],
                                      &o_emlrtBCI, &st);
      }
      gradfx_data[c_i] = (f - b_fx) / absx;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    iv[1] = J->size[1];
    loop_ub = b_gradfx->size[0];
    iv1[1] = b_gradfx->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &i_emlrtECI,
                                  (emlrtCTX)sp);
    for (i = 0; i < loop_ub; i++) {
      J_data[b_i + 8 * i] = gradfx_data[i];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &b_x);
  emxFree_int8_T(sp, &p);
  emxFree_real_T(sp, &b_gradfx);
  i = gradfx->size[0] * gradfx->size[1];
  gradfx->size[0] = J->size[1];
  gradfx->size[1] = 8;
  emxEnsureCapacity_real_T(sp, gradfx, i, &jc_emlrtRTEI);
  gradfx_data = gradfx->data;
  loop_ub = J->size[1];
  for (i = 0; i < 8; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      gradfx_data[i1 + gradfx->size[0] * i] = J_data[i + 8 * i1];
    }
  }
  emxFree_real_T(sp, &J);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (mygradcalc.c) */
