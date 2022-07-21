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
#include "costGaussGrad2.h"
#include "costGaussGrad2_data.h"
#include "costGaussGrad2_emxutil.h"
#include "costGaussGrad2_types.h"
#include "eye.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "mwmathutil.h"
#include <math.h>
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo
    nc_emlrtRSI =
        {
            10,           /* lineNo */
            "mygradcalc", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pathName */
};

static emlrtRSInfo
    oc_emlrtRSI =
        {
            5,            /* lineNo */
            "mygradcalc", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pathName */
};

static emlrtRSInfo
    tc_emlrtRSI =
        {
            20,           /* lineNo */
            "mygradcalc", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pathName */
};

static emlrtRSInfo
    uc_emlrtRSI =
        {
            28,           /* lineNo */
            "mygradcalc", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pathName */
};

static emlrtRSInfo
    vc_emlrtRSI =
        {
            30,           /* lineNo */
            "mygradcalc", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pathName */
};

static emlrtRSInfo wc_emlrtRSI = {
    56,                                                           /* lineNo */
    "eps",                                                        /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\eps.m" /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = {
    63,                               /* lineNo */
    "function_handle/parenReference", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\function_handle."
    "m" /* pathName */
};

static emlrtRSInfo
    yc_emlrtRSI =
        {
            8,                        /* lineNo */
            "@(x)(fun(x)\'*pf(:,i))", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pathName */
};

static emlrtRSInfo ad_emlrtRSI =
    {
        22, /* lineNo */
        "@(x)costGaussGrad2(x,tmax,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha,false,"
        "[],[],[],[])", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGrad2.m" /* pathName */
};

static emlrtBCInfo
    q_emlrtBCI =
        {
            -1,                       /* iFirst */
            -1,                       /* iLast */
            8,                        /* lineNo */
            32,                       /* colNo */
            "pf",                     /* aName */
            "@(x)(fun(x)\'*pf(:,i))", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m", /* pName */
            0                                             /* checkKind */
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
    r_emlrtBCI =
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

static emlrtBCInfo
    s_emlrtBCI =
        {
            -1,           /* iFirst */
            -1,           /* iLast */
            10,           /* lineNo */
            49,           /* colNo */
            "pf",         /* aName */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m", /* pName */
            0                                             /* checkKind */
};

static emlrtBCInfo
    t_emlrtBCI =
        {
            -1,           /* iFirst */
            -1,           /* iLast */
            14,           /* lineNo */
            11,           /* colNo */
            "J",          /* aName */
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
    u_emlrtBCI =
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
    mc_emlrtRTEI =
        {
            6,            /* lineNo */
            5,            /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    nc_emlrtRTEI =
        {
            16,           /* lineNo */
            5,            /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    oc_emlrtRTEI =
        {
            10,           /* lineNo */
            44,           /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    pc_emlrtRTEI =
        {
            10,           /* lineNo */
            22,           /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    qc_emlrtRTEI =
        {
            30,           /* lineNo */
            32,           /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    sc_emlrtRTEI =
        {
            8,            /* lineNo */
            19,           /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    tc_emlrtRTEI =
        {
            8,            /* lineNo */
            27,           /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    uc_emlrtRTEI =
        {
            5,            /* lineNo */
            5,            /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    vc_emlrtRTEI =
        {
            1,            /* lineNo */
            11,           /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    wc_emlrtRTEI =
        {
            1,            /* lineNo */
            57,           /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

/* Function Definitions */
void mygradcalc(const emlrtStack *sp, real_T fun_workspace_tmax,
                real_T fun_workspace_Ts, const real_T fun_workspace_y0[6],
                const real_T fun_workspace_ybar[6], real_T fun_workspace_m0,
                real_T fun_workspace_coeffT, real_T fun_workspace_Tmax,
                real_T fun_workspace_ratio, const emxArray_real_T *x,
                const emxArray_real_T *fx, emxArray_real_T *gradfx)
{
  ptrdiff_t b_incx_t;
  ptrdiff_t b_incy_t;
  ptrdiff_t b_n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_real_T *J;
  emxArray_real_T *b;
  emxArray_real_T *b_gradfx;
  emxArray_real_T *b_x;
  emxArray_real_T *p;
  emxArray_real_T *pf;
  real_T g_data[10];
  const real_T *fx_data;
  const real_T *x_data;
  real_T *J_data;
  real_T *b_data;
  real_T *b_x_data;
  real_T *gradfx_data;
  real_T *p_data;
  real_T *pf_data;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T c_i;
  int32_T exponent;
  int32_T g_size;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
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
  fx_data = fx->data;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &pf, 2, &uc_emlrtRTEI);
  emxInit_real_T(sp, &J, 2, &mc_emlrtRTEI);
  st.site = &oc_emlrtRSI;
  eye(&st, fx->size[0], pf);
  pf_data = pf->data;
  i = J->size[0] * J->size[1];
  J->size[0] = fx->size[0];
  J->size[1] = x->size[0];
  emxEnsureCapacity_real_T(sp, J, i, &mc_emlrtRTEI);
  J_data = J->data;
  loop_ub = fx->size[0] * x->size[0];
  for (i = 0; i < loop_ub; i++) {
    J_data[i] = 0.0;
  }
  i = fx->size[0];
  loop_ub = pf->size[0];
  n_t = (ptrdiff_t)fx->size[0];
  incx_t = (ptrdiff_t)1;
  incy_t = (ptrdiff_t)1;
  iv[0] = 1;
  iv1[0] = 1;
  emxInit_real_T(sp, &b_gradfx, 1, &vc_emlrtRTEI);
  emxInit_real_T(sp, &b, 1, &oc_emlrtRTEI);
  emxInit_real_T(sp, &p, 2, &wc_emlrtRTEI);
  emxInit_real_T(sp, &b_x, 1, &rc_emlrtRTEI);
  for (b_i = 0; b_i < i; b_i++) {
    real_T b_fx;
    st.site = &nc_emlrtRSI;
    if (b_i + 1 > pf->size[1]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, pf->size[1], &s_emlrtBCI, &st);
    }
    i1 = b->size[0];
    b->size[0] = loop_ub;
    emxEnsureCapacity_real_T(&st, b, i1, &oc_emlrtRTEI);
    b_data = b->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_data[i1] = pf_data[i1 + pf->size[0] * b_i];
    }
    b_st.site = &sc_emlrtRSI;
    if (fx->size[0] != pf->size[0]) {
      emlrtErrorWithMessageIdR2018a(&b_st, &o_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
    b_fx = ddot(&n_t, &fx_data[0], &incx_t, &b_data[0], &incy_t);
    st.site = &nc_emlrtRSI;
    i1 = x->size[0];
    b_st.site = &tc_emlrtRSI;
    eye(&b_st, x->size[0], p);
    p_data = p->data;
    i2 = b_gradfx->size[0];
    b_gradfx->size[0] = x->size[0];
    emxEnsureCapacity_real_T(&st, b_gradfx, i2, &pc_emlrtRTEI);
    gradfx_data = b_gradfx->data;
    for (c_i = 0; c_i < i1; c_i++) {
      real_T absx;
      real_T varargout_1;
      if (c_i + 1 > p->size[1]) {
        emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, p->size[1], &r_emlrtBCI, &st);
      }
      b_st.site = &uc_emlrtRSI;
      c_st.site = &wc_emlrtRSI;
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
      b_st.site = &uc_emlrtRSI;
      absx = muDoubleScalarSqrt(absx);
      b_loop_ub = p->size[0];
      i2 = b_x->size[0];
      b_x->size[0] = p->size[0];
      emxEnsureCapacity_real_T(&st, b_x, i2, &qc_emlrtRTEI);
      b_x_data = b_x->data;
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        b_x_data[i2] = absx * p_data[i2 + p->size[0] * c_i];
      }
      b_loop_ub = x->size[0];
      if ((x->size[0] != b_x->size[0]) &&
          ((x->size[0] != 1) && (b_x->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(x->size[0], b_x->size[0], &h_emlrtECI, &st);
      }
      b_st.site = &vc_emlrtRSI;
      c_st.site = &xc_emlrtRSI;
      d_st.site = &yc_emlrtRSI;
      e_st.site = &xc_emlrtRSI;
      f_st.site = &ad_emlrtRSI;
      if (x->size[0] == b_x->size[0]) {
        i2 = b_x->size[0];
        b_x->size[0] = x->size[0];
        emxEnsureCapacity_real_T(&f_st, b_x, i2, &rc_emlrtRTEI);
        b_x_data = b_x->data;
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          b_x_data[i2] += x_data[i2];
        }
        g_st.site = &h_emlrtRSI;
        fun(&g_st, b_x, fun_workspace_tmax, fun_workspace_Ts, fun_workspace_y0,
            fun_workspace_ybar, fun_workspace_m0, fun_workspace_coeffT,
            fun_workspace_Tmax, fun_workspace_ratio, g_data, &g_size, b);
        b_data = b->data;
      } else {
        g_st.site = &h_emlrtRSI;
        e_binary_expand_op(&g_st, h_emlrtRSI, x, b_x, fun_workspace_tmax,
                           fun_workspace_Ts, fun_workspace_y0,
                           fun_workspace_ybar, fun_workspace_m0,
                           fun_workspace_coeffT, fun_workspace_Tmax,
                           fun_workspace_ratio, g_data, &g_size, b);
        b_data = b->data;
      }
      /*  lx = length(x); */
      /*  lf = 1; lg = size(A,1) + length(g); lh = size(C,1) + length(h); */
      i2 = b_x->size[0];
      b_x->size[0] = (g_size + b->size[0]) + 1;
      emxEnsureCapacity_real_T(&f_st, b_x, i2, &sc_emlrtRTEI);
      b_x_data = b_x->data;
      b_x_data[0] = 0.0;
      for (i2 = 0; i2 < g_size; i2++) {
        b_x_data[i2 + 1] = g_data[i2];
      }
      b_loop_ub = b->size[0];
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        b_x_data[(i2 + g_size) + 1] = b_data[i2];
      }
      /*      function f = funf(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha) */
      /*          [f,~,~] = fun(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha); */
      /*      end */
      /*      function f = fung(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha) */
      /*          [~,g,~] = fun(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha); */
      /*      end */
      /*      function f = funh(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha) */
      /*          [f,~,~] = fun(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha); */
      /*      end */
      d_st.site = &yc_emlrtRSI;
      if (b_i + 1 > pf->size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, pf->size[1], &q_emlrtBCI,
                                      &d_st);
      }
      b_loop_ub = pf->size[0];
      i2 = b->size[0];
      b->size[0] = pf->size[0];
      emxEnsureCapacity_real_T(&d_st, b, i2, &tc_emlrtRTEI);
      b_data = b->data;
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        b_data[i2] = pf_data[i2 + pf->size[0] * b_i];
      }
      e_st.site = &sc_emlrtRSI;
      if (b_x->size[0] != pf->size[0]) {
        emlrtErrorWithMessageIdR2018a(&e_st, &o_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
      b_n_t = (ptrdiff_t)b_x->size[0];
      b_incx_t = (ptrdiff_t)1;
      b_incy_t = (ptrdiff_t)1;
      varargout_1 =
          ddot(&b_n_t, &b_x_data[0], &b_incx_t, &b_data[0], &b_incy_t);
      if (c_i + 1 > b_gradfx->size[0]) {
        emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, b_gradfx->size[0],
                                      &u_emlrtBCI, &st);
      }
      gradfx_data[c_i] = (varargout_1 - b_fx) / absx;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    if (b_i + 1 > J->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, J->size[0], &t_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    iv[1] = J->size[1];
    b_loop_ub = b_gradfx->size[0];
    iv1[1] = b_gradfx->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &i_emlrtECI,
                                  (emlrtCTX)sp);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      J_data[b_i + J->size[0] * i1] = gradfx_data[i1];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &b_x);
  emxFree_real_T(sp, &p);
  emxFree_real_T(sp, &b);
  emxFree_real_T(sp, &b_gradfx);
  emxFree_real_T(sp, &pf);
  i = gradfx->size[0] * gradfx->size[1];
  gradfx->size[0] = J->size[1];
  gradfx->size[1] = J->size[0];
  emxEnsureCapacity_real_T(sp, gradfx, i, &nc_emlrtRTEI);
  gradfx_data = gradfx->data;
  loop_ub = J->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = J->size[1];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      gradfx_data[i1 + gradfx->size[0] * i] = J_data[i + J->size[0] * i1];
    }
  }
  emxFree_real_T(sp, &J);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (mygradcalc.c) */
