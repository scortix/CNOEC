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
#include "costGaussGradtf.h"
#include "costGaussGradtf_data.h"
#include "costGaussGradtf_emxutil.h"
#include "costGaussGradtf_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo
    ec_emlrtRSI =
        {
            6,            /* lineNo */
            "mygradcalc", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pathName */
};

static emlrtRSInfo
    fc_emlrtRSI =
        {
            15,           /* lineNo */
            "mygradcalc", /* fcnName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pathName */
};

static emlrtRSInfo gc_emlrtRSI = {
    50,                                                           /* lineNo */
    "eye",                                                        /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m" /* pathName */
};

static emlrtRSInfo hc_emlrtRSI = {
    96,                                                           /* lineNo */
    "eye",                                                        /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m" /* pathName */
};

static emlrtRSInfo ic_emlrtRSI = {
    21,                           /* lineNo */
    "checkAndSaturateExpandSize", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\checkAndSaturateExpandSize.m" /* pathName */
};

static emlrtRSInfo jc_emlrtRSI = {
    63,                               /* lineNo */
    "function_handle/parenReference", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\function_handle."
    "m" /* pathName */
};

static emlrtRSInfo kc_emlrtRSI =
    {
        22, /* lineNo */
        "@(x)costGaussGradtf(x,tmax,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha,"
        "false,[],[],[],[])", /* fcnName */
        "P:\\Projects\\CNOEC\\CNOEC_"
        "Project\\OrbitPropagator\\V2\\costGaussGradtf.m" /* pathName */
};

static emlrtECInfo
    h_emlrtECI =
        {
            -1,           /* nDims */
            15,           /* lineNo */
            13,           /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtBCInfo
    t_emlrtBCI =
        {
            -1,           /* iFirst */
            -1,           /* iLast */
            15,           /* lineNo */
            17,           /* colNo */
            "J",          /* aName */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m", /* pName */
            0                                             /* checkKind */
};

static emlrtECInfo
    i_emlrtECI =
        {
            1,            /* nDims */
            15,           /* lineNo */
            23,           /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtECInfo
    j_emlrtECI =
        {
            1,            /* nDims */
            15,           /* lineNo */
            27,           /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtBCInfo
    u_emlrtBCI =
        {
            -1,           /* iFirst */
            -1,           /* iLast */
            9,            /* lineNo */
            15,           /* colNo */
            "p",          /* aName */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m", /* pName */
            0                                             /* checkKind */
};

static emlrtRTEInfo
    lc_emlrtRTEI =
        {
            4,            /* lineNo */
            1,            /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
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
            33,           /* lineNo */
            1,            /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    oc_emlrtRTEI =
        {
            15,           /* lineNo */
            29,           /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    qc_emlrtRTEI =
        {
            15,           /* lineNo */
            23,           /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    rc_emlrtRTEI =
        {
            1,            /* lineNo */
            57,           /* colNo */
            "mygradcalc", /* fName */
            "P:\\Projects\\CNOEC\\CNOEC_"
            "Project\\OrbitPropagator\\V2\\mygradcalc.m" /* pName */
};

static emlrtRTEInfo
    sc_emlrtRTEI =
        {
            1,            /* lineNo */
            21,           /* colNo */
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
                const emxArray_real_T *x, const emxArray_real_T *fx,
                emxArray_real_T *gradfx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int8_T *p;
  emxArray_real_T *J;
  emxArray_real_T *b_x;
  emxArray_real_T *h;
  real_T g[5];
  real_T F[2];
  const real_T *fx_data;
  const real_T *x_data;
  real_T f;
  real_T *J_data;
  real_T *gradfx_data;
  real_T *h_data;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  int32_T m;
  int8_T *p_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  fx_data = fx->data;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &J, 2, &lc_emlrtRTEI);
  i = J->size[0] * J->size[1];
  J->size[0] = fx->size[0];
  J->size[1] = x->size[0];
  emxEnsureCapacity_real_T(sp, J, i, &lc_emlrtRTEI);
  J_data = J->data;
  loop_ub = fx->size[0] * x->size[0];
  for (i = 0; i < loop_ub; i++) {
    J_data[i] = 0.0;
  }
  emxInit_int8_T(sp, &p, &rc_emlrtRTEI);
  st.site = &ec_emlrtRSI;
  b_st.site = &gc_emlrtRSI;
  c_st.site = &ic_emlrtRSI;
  m = x->size[0];
  i = p->size[0] * p->size[1];
  p->size[0] = x->size[0];
  p->size[1] = x->size[0];
  emxEnsureCapacity_int8_T(&st, p, i, &mc_emlrtRTEI);
  p_data = p->data;
  loop_ub = x->size[0] * x->size[0];
  for (i = 0; i < loop_ub; i++) {
    p_data[i] = 0;
  }
  if (x->size[0] > 0) {
    b_st.site = &hc_emlrtRSI;
    if (x->size[0] > 2147483646) {
      c_st.site = &x_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (loop_ub = 0; loop_ub < m; loop_ub++) {
      p_data[loop_ub + p->size[0] * loop_ub] = 1;
    }
  }
  i = x->size[0];
  emxInit_real_T(sp, &h, 1, &sc_emlrtRTEI);
  emxInit_real_T(sp, &b_x, 1, &pc_emlrtRTEI);
  for (m = 0; m < i; m++) {
    if (m + 1 > p->size[1]) {
      emlrtDynamicBoundsCheckR2012b(m + 1, 1, p->size[1], &u_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = p->size[0];
    i1 = b_x->size[0];
    b_x->size[0] = p->size[0];
    emxEnsureCapacity_real_T(sp, b_x, i1, &oc_emlrtRTEI);
    gradfx_data = b_x->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      gradfx_data[i1] =
          1.4901161193847656E-8 * (real_T)p_data[i1 + p->size[0] * m];
    }
    loop_ub = x->size[0];
    if ((x->size[0] != b_x->size[0]) &&
        ((x->size[0] != 1) && (b_x->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(x->size[0], b_x->size[0], &j_emlrtECI,
                                  (emlrtCTX)sp);
    }
    st.site = &fc_emlrtRSI;
    b_st.site = &jc_emlrtRSI;
    c_st.site = &kc_emlrtRSI;
    if (x->size[0] == b_x->size[0]) {
      real_T b_fun_workspace_y0[6];
      i1 = b_x->size[0];
      b_x->size[0] = x->size[0];
      emxEnsureCapacity_real_T(&c_st, b_x, i1, &pc_emlrtRTEI);
      gradfx_data = b_x->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        gradfx_data[i1] += x_data[i1];
      }
      for (i2 = 0; i2 < 6; i2++) {
        b_fun_workspace_y0[i2] = fun_workspace_y0[i2];
      }
      d_st.site = &h_emlrtRSI;
      fun(&d_st, b_x, fun_workspace_Ts, b_fun_workspace_y0, fun_workspace_ybar,
          fun_workspace_m0, fun_workspace_coeffT, fun_workspace_Tmax,
          fun_workspace_ratio, fun_workspace_alpha, &f, g, h, F);
      h_data = h->data;
    } else {
      d_st.site = &h_emlrtRSI;
      f = e_binary_expand_op(&d_st, h_emlrtRSI, x, b_x, fun_workspace_Ts,
                             fun_workspace_y0, fun_workspace_ybar,
                             fun_workspace_m0, fun_workspace_coeffT,
                             fun_workspace_Tmax, fun_workspace_ratio,
                             fun_workspace_alpha, g, h, F);
      h_data = h->data;
    }
    /*  lx = length(x); */
    /*  lf = 1; lg = size(A,1) + length(g); lh = size(C,1) + length(h); */
    loop_ub = h->size[0];
    i1 = b_x->size[0];
    b_x->size[0] = h->size[0] + 8;
    emxEnsureCapacity_real_T(&c_st, b_x, i1, &qc_emlrtRTEI);
    gradfx_data = b_x->data;
    gradfx_data[0] = f;
    for (i1 = 0; i1 < 5; i1++) {
      gradfx_data[i1 + 1] = g[i1];
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      gradfx_data[i1 + 6] = h_data[i1];
    }
    gradfx_data[h->size[0] + 6] = F[0];
    gradfx_data[h->size[0] + 7] = F[1];
    /*      function f = funf(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha) */
    /*          [f,~,~] = fun(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha); */
    /*      end */
    /*      function f = fung(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha) */
    /*          [~,g,~] = fun(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha); */
    /*      end */
    /*      function f = funh(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha) */
    /*          [f,~,~] = fun(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha); */
    /*      end */
    if ((b_x->size[0] != fx->size[0]) &&
        ((b_x->size[0] != 1) && (fx->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_x->size[0], fx->size[0], &i_emlrtECI,
                                  (emlrtCTX)sp);
    }
    if (m + 1 > J->size[1]) {
      emlrtDynamicBoundsCheckR2012b(m + 1, 1, J->size[1], &t_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = b_x->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      gradfx_data[i1] = (gradfx_data[i1] - fx_data[i1]) / 1.4901161193847656E-8;
    }
    emlrtSubAssignSizeCheckR2012b(&J->size[0], 1, &b_x->size[0], 1, &h_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = b_x->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      J_data[i1 + J->size[0] * m] = gradfx_data[i1];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &b_x);
  emxFree_real_T(sp, &h);
  emxFree_int8_T(sp, &p);
  i = gradfx->size[0] * gradfx->size[1];
  gradfx->size[0] = J->size[1];
  gradfx->size[1] = J->size[0];
  emxEnsureCapacity_real_T(sp, gradfx, i, &nc_emlrtRTEI);
  gradfx_data = gradfx->data;
  loop_ub = J->size[0];
  for (i = 0; i < loop_ub; i++) {
    m = J->size[1];
    for (i1 = 0; i1 < m; i1++) {
      gradfx_data[i1 + gradfx->size[0] * i] = J_data[i + J->size[0] * i1];
    }
  }
  emxFree_real_T(sp, &J);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (mygradcalc.c) */
