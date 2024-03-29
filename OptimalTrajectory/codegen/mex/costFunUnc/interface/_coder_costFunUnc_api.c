/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_costFunUnc_api.c
 *
 * Code generation for function '_coder_costFunUnc_api'
 *
 */

/* Include files */
#include "_coder_costFunUnc_api.h"
#include "costFunUnc.h"
#include "costFunUnc_data.h"
#include "costFunUnc_emxutil.h"
#include "costFunUnc_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo u_emlrtRTEI = {
    1,                       /* lineNo */
    1,                       /* colNo */
    "_coder_costFunUnc_api", /* fName */
    ""                       /* pName */
};

/* Function Declarations */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x,
                               const char_T *identifier, emxArray_real_T *y);

static const mxArray *c_emlrt_marshallOut(const real_T u);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Ts,
                                 const char_T *identifier);

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_y0,
                                   const char_T *identifier))[6];

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[6];

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[6];

/* Function Definitions */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(x), &thisId, y);
  emlrtDestroyArray(&x);
}

static const mxArray *c_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  j_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u)
{
  static const int32_T iv[2] = {0, 0};
  const mxArray *m;
  const mxArray *y;
  const real_T *u_data;
  u_data = u->data;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m, &u->size[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Ts,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(Ts), &thisId);
  emlrtDestroyArray(&Ts);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_y0,
                                   const char_T *identifier))[6]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[6];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(b_y0), &thisId);
  emlrtDestroyArray(&b_y0);
  return y;
}

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[6]
{
  real_T(*y)[6];
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims = -1;
  int32_T i;
  int32_T i1;
  const boolean_T b = true;
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 1U, (void *)&dims, &b, &i);
  ret->allocatedSize = i;
  i1 = ret->size[0];
  ret->size[0] = i;
  emxEnsureCapacity_real_T(sp, ret, i1, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 0U, (void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[6]
{
  static const int32_T dims = 6;
  real_T(*ret)[6];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 1U, (void *)&dims);
  ret = (real_T(*)[6])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void costFunUnc_api(const mxArray *const prhs[10], int32_T nlhs,
                    const mxArray *plhs[4])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *x;
  emxArray_real_T *y;
  const mxArray *prhs_copy_idx_3;
  real_T(*b_y0)[6];
  real_T(*ybar)[6];
  real_T J;
  real_T Tmax;
  real_T Ts;
  real_T alpha;
  real_T coeffT;
  real_T m;
  real_T m0;
  real_T ratio;
  real_T tCost;
  real_T tmax;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &x, 1, &u_emlrtRTEI);
  emxInit_real_T(&st, &y, 2, &u_emlrtRTEI);
  prhs_copy_idx_3 = emlrtProtectR2012b(prhs[3], 3, false, -1);
  /* Marshall function inputs */
  x->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "x", x);
  Ts = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "Ts");
  tmax = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "tmax");
  b_y0 = g_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_3), "y0");
  ybar = g_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "ybar");
  ratio = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "ratio");
  Tmax = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "Tmax");
  coeffT = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "coeffT");
  m0 = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "m0");
  alpha = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "alpha");
  /* Invoke the target function */
  costFunUnc(&st, x, Ts, tmax, *b_y0, *ybar, ratio, Tmax, coeffT, m0, alpha, &J,
             y, &tCost, &m);
  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(J);
  emxFree_real_T(&st, &x);
  if (nlhs > 1) {
    y->canFreeData = false;
    plhs[1] = d_emlrt_marshallOut(y);
  }
  emxFree_real_T(&st, &y);
  if (nlhs > 2) {
    plhs[2] = c_emlrt_marshallOut(tCost);
  }
  if (nlhs > 3) {
    plhs[3] = c_emlrt_marshallOut(m);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_costFunUnc_api.c) */
