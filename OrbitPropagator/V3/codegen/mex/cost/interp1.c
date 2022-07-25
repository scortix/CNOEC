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
#include "cost_data.h"
#include "cost_emxutil.h"
#include "cost_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo s_emlrtRSI =
    {
        38,        /* lineNo */
        "interp1", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/polyfun/"
        "interp1.m" /* pathName */
};

static emlrtRSInfo t_emlrtRSI =
    {
        162,            /* lineNo */
        "interp1_work", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/polyfun/"
        "interp1.m" /* pathName */
};

static emlrtRSInfo u_emlrtRSI =
    {
        192,            /* lineNo */
        "interp1_work", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/polyfun/"
        "interp1.m" /* pathName */
};

static emlrtRSInfo v_emlrtRSI =
    {
        200,            /* lineNo */
        "interp1_work", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/polyfun/"
        "interp1.m" /* pathName */
};

static emlrtRSInfo w_emlrtRSI =
    {
        302,            /* lineNo */
        "interp1_work", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/polyfun/"
        "interp1.m" /* pathName */
};

static emlrtRSInfo y_emlrtRSI =
    {
        666,             /* lineNo */
        "interp1Linear", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/polyfun/"
        "interp1.m" /* pathName */
};

static emlrtRTEInfo f_emlrtRTEI =
    {
        206,            /* lineNo */
        13,             /* colNo */
        "interp1_work", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/polyfun/"
        "interp1.m" /* pName */
};

static emlrtRTEInfo g_emlrtRTEI =
    {
        164,            /* lineNo */
        13,             /* colNo */
        "interp1_work", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/polyfun/"
        "interp1.m" /* pName */
};

static emlrtRTEInfo h_emlrtRTEI =
    {
        153,            /* lineNo */
        15,             /* colNo */
        "interp1_work", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/polyfun/"
        "interp1.m" /* pName */
};

static emlrtRTEInfo i_emlrtRTEI =
    {
        137,            /* lineNo */
        23,             /* colNo */
        "interp1_work", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/polyfun/"
        "interp1.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI =
    {
        38,        /* lineNo */
        46,        /* colNo */
        "interp1", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/polyfun/"
        "interp1.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI =
    {
        39,        /* lineNo */
        13,        /* colNo */
        "interp1", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/polyfun/"
        "interp1.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI =
    {
        38,        /* lineNo */
        9,         /* colNo */
        "interp1", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/polyfun/"
        "interp1.m" /* pName */
};

/* Function Declarations */
static void interp1Linear(const emlrtStack *sp, const emxArray_real_T *y,
                          const emxArray_real_T *xi, emxArray_real_T *yi,
                          const emxArray_real_T *varargin_1);

/* Function Definitions */
static void interp1Linear(const emlrtStack *sp, const emxArray_real_T *y,
                          const emxArray_real_T *xi, emxArray_real_T *yi,
                          const emxArray_real_T *varargin_1)
{
  jmp_buf *volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack st;
  const real_T *varargin_1_data;
  const real_T *xi_data;
  const real_T *y_data;
  real_T maxx;
  real_T minx;
  real_T r;
  real_T r_tmp;
  real_T *yi_data;
  int32_T high_i;
  int32_T k;
  int32_T low_i;
  int32_T low_ip1;
  int32_T mid_i;
  int32_T ub_loop;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  varargin_1_data = varargin_1->data;
  yi_data = yi->data;
  xi_data = xi->data;
  y_data = y->data;
  minx = varargin_1_data[0];
  maxx = varargin_1_data[varargin_1->size[1] - 1];
  st.site = &y_emlrtRSI;
  if ((1 <= xi->size[1]) && (xi->size[1] > 2147483646)) {
    b_st.site = &r_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  ub_loop = xi->size[1] - 1;
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
#pragma omp parallel for num_threads(emlrtAllocRegionTLSs(                     \
    sp->tls, omp_in_parallel(), omp_get_max_threads(),                         \
    omp_get_num_procs())) private(r_tmp, high_i, low_i, low_ip1, mid_i, r)

  for (k = 0; k <= ub_loop; k++) {
    r_tmp = xi_data[k];
    if (muDoubleScalarIsNaN(r_tmp)) {
      yi_data[k] = rtNaN;
    } else if ((!(r_tmp > maxx)) && (!(r_tmp < minx))) {
      high_i = varargin_1->size[1];
      low_i = 1;
      low_ip1 = 2;
      while (high_i > low_ip1) {
        mid_i = (low_i >> 1) + (high_i >> 1);
        if (((low_i & 1) == 1) && ((high_i & 1) == 1)) {
          mid_i++;
        }
        if (xi_data[k] >= varargin_1_data[mid_i - 1]) {
          low_i = mid_i;
          low_ip1 = mid_i + 1;
        } else {
          high_i = mid_i;
        }
      }
      r_tmp = varargin_1_data[low_i - 1];
      r = (xi_data[k] - r_tmp) / (varargin_1_data[low_i] - r_tmp);
      if (r == 0.0) {
        yi_data[k] = y_data[low_i - 1];
      } else if (r == 1.0) {
        yi_data[k] = y_data[low_i];
      } else {
        r_tmp = y_data[low_i - 1];
        if (r_tmp == y_data[low_i]) {
          yi_data[k] = r_tmp;
        } else {
          yi_data[k] = (1.0 - r) * r_tmp + r * y_data[low_i];
        }
      }
    }
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
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
  real_T xtmp;
  real_T *Vq_data;
  real_T *x_data;
  real_T *y_data;
  int32_T b_j1;
  int32_T exitg1;
  int32_T k;
  int32_T n;
  int32_T nd2;
  int32_T nx;
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
  emxInit_real_T(sp, &y, 1, &u_emlrtRTEI);
  st.site = &s_emlrtRSI;
  nd2 = y->size[0];
  y->size[0] = varargin_2->size[0];
  emxEnsureCapacity_real_T(&st, y, nd2, &u_emlrtRTEI);
  y_data = y->data;
  n = varargin_2->size[0];
  for (nd2 = 0; nd2 < n; nd2++) {
    y_data[nd2] = varargin_2_data[nd2];
  }
  emxInit_real_T(&st, &x, 2, &v_emlrtRTEI);
  nd2 = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = varargin_1->size[1];
  emxEnsureCapacity_real_T(&st, x, nd2, &v_emlrtRTEI);
  x_data = x->data;
  n = varargin_1->size[1];
  for (nd2 = 0; nd2 < n; nd2++) {
    x_data[nd2] = varargin_1_data[nd2];
  }
  nx = varargin_1->size[1];
  if (varargin_2->size[0] != varargin_1->size[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &i_emlrtRTEI,
                                  "Coder:MATLAB:interp1_YInvalidNumRows",
                                  "Coder:MATLAB:interp1_YInvalidNumRows", 0);
  }
  if (varargin_1->size[1] <= 1) {
    emlrtErrorWithMessageIdR2018a(&st, &h_emlrtRTEI,
                                  "MATLAB:interp1:NotEnoughPts",
                                  "MATLAB:interp1:NotEnoughPts", 0);
  }
  nd2 = Vq->size[0] * Vq->size[1];
  Vq->size[0] = 1;
  Vq->size[1] = varargin_3->size[1];
  emxEnsureCapacity_real_T(&st, Vq, nd2, &w_emlrtRTEI);
  Vq_data = Vq->data;
  n = varargin_3->size[1];
  for (nd2 = 0; nd2 < n; nd2++) {
    Vq_data[nd2] = rtNaN;
  }
  b = (varargin_3->size[1] == 0);
  if (!b) {
    b_st.site = &t_emlrtRSI;
    if ((1 <= nx) && (nx > 2147483646)) {
      c_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    k = 0;
    do {
      exitg1 = 0;
      if (k <= nx - 1) {
        if (muDoubleScalarIsNaN(varargin_1_data[k])) {
          emlrtErrorWithMessageIdR2018a(&st, &g_emlrtRTEI,
                                        "MATLAB:interp1:NaNinX",
                                        "MATLAB:interp1:NaNinX", 0);
        } else {
          k++;
        }
      } else {
        if (varargin_1_data[1] < varargin_1_data[0]) {
          n = nx >> 1;
          b_st.site = &u_emlrtRSI;
          for (b_j1 = 0; b_j1 < n; b_j1++) {
            xtmp = x_data[b_j1];
            nd2 = (nx - b_j1) - 1;
            x_data[b_j1] = x_data[nd2];
            x_data[nd2] = xtmp;
          }
          b_st.site = &v_emlrtRSI;
          if ((varargin_2->size[0] != 0) && (varargin_2->size[0] > 1)) {
            n = varargin_2->size[0] - 1;
            nd2 = varargin_2->size[0] >> 1;
            for (k = 0; k < nd2; k++) {
              xtmp = y_data[k];
              b_j1 = n - k;
              y_data[k] = y_data[b_j1];
              y_data[b_j1] = xtmp;
            }
          }
        }
        for (k = 2; k <= nx; k++) {
          if (x_data[k - 1] <= x_data[k - 2]) {
            emlrtErrorWithMessageIdR2018a(
                &st, &f_emlrtRTEI, "Coder:toolbox:interp1_nonMonotonicX",
                "Coder:toolbox:interp1_nonMonotonicX", 0);
          }
        }
        b_st.site = &w_emlrtRSI;
        interp1Linear(&b_st, y, varargin_3, Vq, x);
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  emxFree_real_T(&st, &x);
  emxFree_real_T(&st, &y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (interp1.c) */
