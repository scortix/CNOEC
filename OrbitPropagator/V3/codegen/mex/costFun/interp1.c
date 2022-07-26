/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * interp1.c
 *
 * Code generation for function 'interp1'
 *
 */

/* Include files */
#include "interp1.h"
#include "costFun_data.h"
#include "costFun_emxutil.h"
#include "costFun_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "omp.h"

/* Variable Definitions */
static emlrtRSInfo r_emlrtRSI = {
    49,        /* lineNo */
    "interp1", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m" /* pathName
                                                                         */
};

static emlrtRSInfo s_emlrtRSI = {
    162,            /* lineNo */
    "interp1_work", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m" /* pathName
                                                                         */
};

static emlrtRSInfo t_emlrtRSI = {
    192,            /* lineNo */
    "interp1_work", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m" /* pathName
                                                                         */
};

static emlrtRSInfo u_emlrtRSI = {
    200,            /* lineNo */
    "interp1_work", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m" /* pathName
                                                                         */
};

static emlrtRSInfo v_emlrtRSI = {
    265,            /* lineNo */
    "interp1_work", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m" /* pathName
                                                                         */
};

static emlrtRSInfo x_emlrtRSI = {
    333,                    /* lineNo */
    "interp1SplineOrPCHIP", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m" /* pathName
                                                                         */
};

static emlrtRSInfo y_emlrtRSI = {
    354,                    /* lineNo */
    "interp1SplineOrPCHIP", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m" /* pathName
                                                                         */
};

static emlrtRSInfo ab_emlrtRSI = {
    15,      /* lineNo */
    "pchip", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\pchip.m" /* pathName
                                                                       */
};

static emlrtRSInfo fb_emlrtRSI = {
    84,      /* lineNo */
    "pchip", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\pchip.m" /* pathName
                                                                       */
};

static emlrtRTEInfo e_emlrtRTEI = {
    206,            /* lineNo */
    13,             /* colNo */
    "interp1_work", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m" /* pName
                                                                         */
};

static emlrtRTEInfo f_emlrtRTEI = {
    164,            /* lineNo */
    13,             /* colNo */
    "interp1_work", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m" /* pName
                                                                         */
};

static emlrtRTEInfo g_emlrtRTEI = {
    153,            /* lineNo */
    15,             /* colNo */
    "interp1_work", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m" /* pName
                                                                         */
};

static emlrtRTEInfo h_emlrtRTEI = {
    137,            /* lineNo */
    23,             /* colNo */
    "interp1_work", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m" /* pName
                                                                         */
};

static emlrtRTEInfo l_emlrtRTEI =
    {
        33,       /* lineNo */
        15,       /* colNo */
        "chckxy", /* fName */
        "P:"
        "\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\private\\chckxy."
        "m" /* pName */
};

static emlrtRTEInfo m_emlrtRTEI =
    {
        37,       /* lineNo */
        15,       /* colNo */
        "chckxy", /* fName */
        "P:"
        "\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\private\\chckxy."
        "m" /* pName */
};

static emlrtRTEInfo n_emlrtRTEI =
    {
        39,       /* lineNo */
        1,        /* colNo */
        "chckxy", /* fName */
        "P:"
        "\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\private\\chckxy."
        "m" /* pName */
};

static emlrtRTEInfo o_emlrtRTEI =
    {
        43,       /* lineNo */
        19,       /* colNo */
        "chckxy", /* fName */
        "P:"
        "\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\private\\chckxy."
        "m" /* pName */
};

static emlrtDCInfo c_emlrtDCI = {
    32,         /* lineNo */
    37,         /* colNo */
    "pwchcore", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\private\\pwchcore."
    "m", /* pName */
    4    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    38,      /* lineNo */
    28,      /* colNo */
    "pchip", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\pchip.m", /* pName
                                                                        */
    4 /* checkKind */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    49,        /* lineNo */
    49,        /* colNo */
    "interp1", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m" /* pName
                                                                         */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    50,        /* lineNo */
    25,        /* colNo */
    "interp1", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m" /* pName
                                                                         */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    49,        /* lineNo */
    9,         /* colNo */
    "interp1", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m" /* pName
                                                                         */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    23,      /* lineNo */
    20,      /* colNo */
    "pchip", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\pchip.m" /* pName
                                                                       */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    38,      /* lineNo */
    22,      /* colNo */
    "pchip", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\pchip.m" /* pName
                                                                       */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    47,      /* lineNo */
    25,      /* colNo */
    "pchip", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\pchip.m" /* pName
                                                                       */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    84,      /* lineNo */
    1,       /* colNo */
    "pchip", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\pchip.m" /* pName
                                                                       */
};

static emlrtRTEInfo ob_emlrtRTEI = {
    32,         /* lineNo */
    31,         /* colNo */
    "pwchcore", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\private\\pwchcore."
    "m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    23,      /* lineNo */
    1,       /* colNo */
    "pchip", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\pchip.m" /* pName
                                                                       */
};

static emlrtRTEInfo qb_emlrtRTEI = {
    38,      /* lineNo */
    1,       /* colNo */
    "pchip", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\pchip.m" /* pName
                                                                       */
};

static emlrtRTEInfo rb_emlrtRTEI = {
    47,      /* lineNo */
    1,       /* colNo */
    "pchip", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\polyfun\\pchip.m" /* pName
                                                                       */
};

/* Function Declarations */
static void interp1SplineOrPCHIP(const emlrtStack *sp, const emxArray_real_T *y,
                                 const emxArray_real_T *xi, emxArray_real_T *yi,
                                 const emxArray_real_T *x);

/* Function Definitions */
static void interp1SplineOrPCHIP(const emlrtStack *sp, const emxArray_real_T *y,
                                 const emxArray_real_T *xi, emxArray_real_T *yi,
                                 const emxArray_real_T *x)
{
  jmp_buf *volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *del;
  emxArray_real_T *h;
  emxArray_real_T *slopes;
  struct_T pp;
  const real_T *x_data;
  const real_T *xi_data;
  const real_T *y_data;
  real_T d;
  real_T d1;
  real_T dzzdx;
  real_T hs;
  real_T hs3;
  real_T xloc;
  real_T *del_data;
  real_T *h_data;
  real_T *slopes_data;
  real_T *yi_data;
  int32_T b_k;
  int32_T high_i;
  int32_T k;
  int32_T low_i;
  int32_T low_ip1;
  int32_T mid_i;
  int32_T nxm1;
  int32_T nxm2;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  x_data = x->data;
  yi_data = yi->data;
  xi_data = xi->data;
  y_data = y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &x_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  if (x->size[1] < 2) {
    emlrtErrorWithMessageIdR2018a(&b_st, &l_emlrtRTEI,
                                  "MATLAB:chckxy:NotEnoughPts",
                                  "MATLAB:chckxy:NotEnoughPts", 0);
  }
  p = ((!muDoubleScalarIsInf(x_data[0])) && (!muDoubleScalarIsNaN(x_data[0])));
  if (p) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= x->size[1] - 2)) {
      if (!(x_data[k] < x_data[k + 1])) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if ((!p) || muDoubleScalarIsInf(x_data[x->size[1] - 1])) {
    p = false;
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &m_emlrtRTEI, "Coder:toolbox:MustBeFiniteAndStrictlyIncreasing",
        "Coder:toolbox:MustBeFiniteAndStrictlyIncreasing", 0);
  }
  p = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= y->size[0] - 1)) {
    if (muDoubleScalarIsNaN(y_data[k])) {
      p = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &n_emlrtRTEI,
                                  "Coder:toolbox:UnsupportedNaN",
                                  "Coder:toolbox:UnsupportedNaN", 0);
  }
  if ((y->size[0] != x->size[1]) && (y->size[0] != x->size[1] + 2)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &o_emlrtRTEI,
                                  "MATLAB:chckxy:NumSitesMismatchValues",
                                  "MATLAB:chckxy:NumSitesMismatchValues", 4, 12,
                                  x->size[1], 12, y->size[0]);
  }
  emxInit_real_T(&b_st, &h, 2, &pb_emlrtRTEI);
  nxm1 = x->size[1] - 2;
  k = h->size[0] * h->size[1];
  h->size[0] = 1;
  h->size[1] = x->size[1] - 1;
  emxEnsureCapacity_real_T(&st, h, k, &kb_emlrtRTEI);
  h_data = h->data;
  for (k = 0; k <= nxm1; k++) {
    h_data[k] = x_data[k + 1] - x_data[k];
  }
  if (y->size[0] - 1 < 0) {
    emlrtNonNegativeCheckR2012b(-1.0, &d_emlrtDCI, &st);
  }
  emxInit_real_T(&st, &del, 2, &qb_emlrtRTEI);
  k = del->size[0] * del->size[1];
  del->size[0] = 1;
  del->size[1] = y->size[0] - 1;
  emxEnsureCapacity_real_T(&st, del, k, &lb_emlrtRTEI);
  del_data = del->data;
  for (k = 0; k <= nxm1; k++) {
    del_data[k] = (y_data[k + 1] - y_data[k]) / h_data[k];
  }
  emxInit_real_T(&st, &slopes, 2, &rb_emlrtRTEI);
  k = slopes->size[0] * slopes->size[1];
  slopes->size[0] = 1;
  slopes->size[1] = y->size[0];
  emxEnsureCapacity_real_T(&st, slopes, k, &mb_emlrtRTEI);
  slopes_data = slopes->data;
  if (x->size[1] == 2) {
    slopes_data[0] = del_data[0];
    slopes_data[1] = del_data[0];
  } else {
    nxm2 = x->size[1];
    for (k = 0; k <= nxm2 - 3; k++) {
      d = h_data[k];
      d1 = h_data[k + 1];
      hs = d + d1;
      hs3 = 3.0 * hs;
      dzzdx = (d + hs) / hs3;
      hs3 = (d1 + hs) / hs3;
      slopes_data[k + 1] = 0.0;
      d = del_data[k];
      if (d < 0.0) {
        d1 = del_data[k + 1];
        if (d1 <= d) {
          slopes_data[k + 1] = d / (dzzdx * (d / d1) + hs3);
        } else if (d1 < 0.0) {
          slopes_data[k + 1] = d1 / (dzzdx + hs3 * (d1 / d));
        }
      } else if (d > 0.0) {
        d1 = del_data[k + 1];
        if (d1 >= d) {
          slopes_data[k + 1] = d / (dzzdx * (d / del_data[k + 1]) + hs3);
        } else if (d1 > 0.0) {
          slopes_data[k + 1] =
              del_data[k + 1] / (dzzdx + hs3 * (del_data[k + 1] / d));
        }
      }
    }
    hs3 = ((2.0 * h_data[0] + h_data[1]) * del_data[0] -
           h_data[0] * del_data[1]) /
          (h_data[0] + h_data[1]);
    hs = muDoubleScalarSign(del_data[0]);
    if (muDoubleScalarSign(hs3) != hs) {
      hs3 = 0.0;
    } else if ((hs != muDoubleScalarSign(del_data[1])) &&
               (muDoubleScalarAbs(hs3) >
                muDoubleScalarAbs(3.0 * del_data[0]))) {
      hs3 = 3.0 * del_data[0];
    }
    slopes_data[0] = hs3;
    hs3 = ((2.0 * h_data[x->size[1] - 2] + h_data[x->size[1] - 3]) *
               del_data[x->size[1] - 2] -
           h_data[x->size[1] - 2] * del_data[x->size[1] - 3]) /
          (h_data[x->size[1] - 2] + h_data[x->size[1] - 3]);
    hs = muDoubleScalarSign(del_data[x->size[1] - 2]);
    if (muDoubleScalarSign(hs3) != hs) {
      hs3 = 0.0;
    } else if ((hs != muDoubleScalarSign(del_data[x->size[1] - 3])) &&
               (muDoubleScalarAbs(hs3) >
                muDoubleScalarAbs(3.0 * del_data[x->size[1] - 2]))) {
      hs3 = 3.0 * del_data[x->size[1] - 2];
    }
    slopes_data[x->size[1] - 1] = hs3;
  }
  emxInitStruct_struct_T(&st, &pp, &nb_emlrtRTEI);
  b_st.site = &fb_emlrtRSI;
  nxm1 = x->size[1];
  k = pp.breaks->size[0] * pp.breaks->size[1];
  pp.breaks->size[0] = 1;
  pp.breaks->size[1] = x->size[1];
  emxEnsureCapacity_real_T(&b_st, pp.breaks, k, &nb_emlrtRTEI);
  nxm2 = x->size[1];
  for (k = 0; k < nxm2; k++) {
    pp.breaks->data[k] = x_data[k];
  }
  nxm2 = slopes->size[1] - 1;
  if (slopes->size[1] - 1 < 0) {
    emlrtNonNegativeCheckR2012b(-1.0, &c_emlrtDCI, &b_st);
  }
  k = pp.coefs->size[0] * pp.coefs->size[1];
  pp.coefs->size[0] = slopes->size[1] - 1;
  pp.coefs->size[1] = 4;
  emxEnsureCapacity_real_T(&b_st, pp.coefs, k, &ob_emlrtRTEI);
  for (k = 0; k <= nxm1 - 2; k++) {
    d = del_data[k];
    d1 = slopes_data[k];
    hs3 = h_data[k];
    dzzdx = (d - d1) / hs3;
    hs = (slopes_data[k + 1] - d) / hs3;
    pp.coefs->data[k] = (hs - dzzdx) / hs3;
    pp.coefs->data[nxm2 + k] = 2.0 * dzzdx - hs;
    pp.coefs->data[(nxm2 << 1) + k] = d1;
    pp.coefs->data[3 * nxm2 + k] = y_data[k];
  }
  emxFree_real_T(&b_st, &slopes);
  emxFree_real_T(&b_st, &del);
  emxFree_real_T(&b_st, &h);
  st.site = &y_emlrtRSI;
  if (xi->size[1] > 2147483646) {
    b_st.site = &q_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  nxm2 = xi->size[1] - 1;
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
#pragma omp parallel for num_threads(emlrtAllocRegionTLSs(                     \
    sp->tls, omp_in_parallel(), omp_get_max_threads(),                         \
    omp_get_num_procs())) private(xloc, high_i, low_i, low_ip1, mid_i)

  for (b_k = 0; b_k <= nxm2; b_k++) {
    xloc = xi_data[b_k];
    if (muDoubleScalarIsNaN(xloc)) {
      yi_data[b_k] = rtNaN;
    } else {
      if (!muDoubleScalarIsNaN(xloc)) {
        high_i = pp.breaks->size[1];
        low_i = 1;
        low_ip1 = 2;
        while (high_i > low_ip1) {
          mid_i = (low_i >> 1) + (high_i >> 1);
          if (((low_i & 1) == 1) && ((high_i & 1) == 1)) {
            mid_i++;
          }
          if (xi_data[b_k] >= pp.breaks->data[mid_i - 1]) {
            low_i = mid_i;
            low_ip1 = mid_i + 1;
          } else {
            high_i = mid_i;
          }
        }
        xloc = xi_data[b_k] - pp.breaks->data[low_i - 1];
        xloc =
            xloc * (xloc * (xloc * pp.coefs->data[low_i - 1] +
                            pp.coefs->data[(low_i + pp.breaks->size[1]) - 2]) +
                    pp.coefs
                        ->data[(low_i + ((pp.breaks->size[1] - 1) << 1)) - 1]) +
            pp.coefs->data[(low_i + 3 * (pp.breaks->size[1] - 1)) - 1];
      }
      yi_data[b_k] = xloc;
    }
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emxFreeStruct_struct_T(sp, &pp);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void interp1(const emlrtStack *sp, const emxArray_real_T *varargin_1,
             const emxArray_real_T *varargin_2,
             const emxArray_real_T *varargin_3, emxArray_real_T *Vq)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *x;
  emxArray_real_T *y;
  const real_T *varargin_1_data;
  const real_T *varargin_2_data;
  real_T *Vq_data;
  real_T *x_data;
  real_T *y_data;
  int32_T k;
  int32_T n;
  int32_T nd2;
  int32_T nx;
  int32_T y_tmp;
  boolean_T b;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  varargin_2_data = varargin_2->data;
  varargin_1_data = varargin_1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &y, 1, &fb_emlrtRTEI);
  st.site = &r_emlrtRSI;
  y_tmp = y->size[0];
  y->size[0] = varargin_2->size[0];
  emxEnsureCapacity_real_T(&st, y, y_tmp, &fb_emlrtRTEI);
  y_data = y->data;
  n = varargin_2->size[0];
  for (y_tmp = 0; y_tmp < n; y_tmp++) {
    y_data[y_tmp] = varargin_2_data[y_tmp];
  }
  emxInit_real_T(&st, &x, 2, &gb_emlrtRTEI);
  y_tmp = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = varargin_1->size[1];
  emxEnsureCapacity_real_T(&st, x, y_tmp, &gb_emlrtRTEI);
  x_data = x->data;
  n = varargin_1->size[1];
  for (y_tmp = 0; y_tmp < n; y_tmp++) {
    x_data[y_tmp] = varargin_1_data[y_tmp];
  }
  nx = varargin_1->size[1];
  if (varargin_2->size[0] != varargin_1->size[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &h_emlrtRTEI,
                                  "Coder:MATLAB:interp1_YInvalidNumRows",
                                  "Coder:MATLAB:interp1_YInvalidNumRows", 0);
  }
  if (varargin_1->size[1] <= 1) {
    emlrtErrorWithMessageIdR2018a(&st, &g_emlrtRTEI,
                                  "MATLAB:interp1:NotEnoughPts",
                                  "MATLAB:interp1:NotEnoughPts", 0);
  }
  y_tmp = Vq->size[0] * Vq->size[1];
  Vq->size[0] = 1;
  Vq->size[1] = varargin_3->size[1];
  emxEnsureCapacity_real_T(&st, Vq, y_tmp, &hb_emlrtRTEI);
  Vq_data = Vq->data;
  n = varargin_3->size[1];
  for (y_tmp = 0; y_tmp < n; y_tmp++) {
    Vq_data[y_tmp] = 0.0;
  }
  b = (varargin_3->size[1] == 0);
  if (!b) {
    b_st.site = &s_emlrtRSI;
    if (nx > 2147483646) {
      c_st.site = &q_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    k = 0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (k <= nx - 1) {
        if (muDoubleScalarIsNaN(varargin_1_data[k])) {
          emlrtErrorWithMessageIdR2018a(&st, &f_emlrtRTEI,
                                        "MATLAB:interp1:NaNinX",
                                        "MATLAB:interp1:NaNinX", 0);
        } else {
          k++;
        }
      } else {
        if (varargin_1_data[1] < varargin_1_data[0]) {
          real_T xtmp;
          y_tmp = nx >> 1;
          b_st.site = &t_emlrtRSI;
          for (nd2 = 0; nd2 < y_tmp; nd2++) {
            xtmp = x_data[nd2];
            n = (nx - nd2) - 1;
            x_data[nd2] = x_data[n];
            x_data[n] = xtmp;
          }
          b_st.site = &u_emlrtRSI;
          if (varargin_2->size[0] > 1) {
            n = varargin_2->size[0] - 1;
            nd2 = varargin_2->size[0] >> 1;
            for (k = 0; k < nd2; k++) {
              xtmp = y_data[k];
              y_tmp = n - k;
              y_data[k] = y_data[y_tmp];
              y_data[y_tmp] = xtmp;
            }
          }
        }
        for (k = 2; k <= nx; k++) {
          if (x_data[k - 1] <= x_data[k - 2]) {
            emlrtErrorWithMessageIdR2018a(
                &st, &e_emlrtRTEI, "Coder:toolbox:interp1_nonMonotonicX",
                "Coder:toolbox:interp1_nonMonotonicX", 0);
          }
        }
        b_st.site = &v_emlrtRSI;
        interp1SplineOrPCHIP(&b_st, y, varargin_3, Vq, x);
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  emxFree_real_T(&st, &x);
  emxFree_real_T(&st, &y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (interp1.c) */
