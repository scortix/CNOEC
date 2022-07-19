/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_costGaussGrad_api.c
 *
 * Code generation for function '_coder_costGaussGrad_api'
 *
 */

/* Include files */
#include "_coder_costGaussGrad_api.h"
#include "costGaussGrad.h"
#include "costGaussGrad_data.h"
#include "costGaussGrad_emxutil.h"
#include "costGaussGrad_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo dd_emlrtRTEI = {
    1,                          /* lineNo */
    1,                          /* colNo */
    "_coder_costGaussGrad_api", /* fName */
    ""                          /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *tmax,
                                 const char_T *identifier);

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static const mxArray *d_emlrt_marshallOut(const real_T u[2]);

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_y0,
                                   const char_T *identifier))[6];

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *x,
                             const char_T *identifier, emxArray_real_T *y);

static const mxArray *emlrt_marshallOut(const real_T u);

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[6];

static boolean_T g_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *computeGrad,
                                    const char_T *identifier);

static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *A,
                               const char_T *identifier, emxArray_real_T *y);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b,
                               const char_T *identifier, emxArray_real_T *y);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[6];

static boolean_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId);

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  m_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  static const int32_T i = 0;
  const mxArray *m;
  const mxArray *y;
  const real_T *u_data;
  u_data = u->data;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m, &u->size[0], 1);
  emlrtAssign(&y, m);
  return y;
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *tmax,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(tmax), &thisId);
  emlrtDestroyArray(&tmax);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
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

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const real_T u[2])
{
  static const int32_T i = 0;
  static const int32_T i1 = 2;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &i1, 1);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_y0,
                                   const char_T *identifier))[6]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[6];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(b_y0), &thisId);
  emlrtDestroyArray(&b_y0);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *x,
                             const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(x), &thisId, y);
  emlrtDestroyArray(&x);
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[6]
{
  real_T(*y)[6];
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T g_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *computeGrad,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(computeGrad), &thisId);
  emlrtDestroyArray(&computeGrad);
  return y;
}

static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = p_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *A,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(A), &thisId, y);
  emlrtDestroyArray(&A);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(b), &thisId, y);
  emlrtDestroyArray(&b);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  r_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static boolean_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  boolean_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"logical",
                          false, 0U, (void *)&dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims[2] = {-1, -1};
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims[2] = {-1, 1};
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void costGaussGrad_api(const mxArray *const prhs[15], int32_T nlhs,
                       const mxArray *plhs[11])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *A;
  emxArray_real_T *C;
  emxArray_real_T *J;
  emxArray_real_T *JF;
  emxArray_real_T *Jf;
  emxArray_real_T *Jg;
  emxArray_real_T *Jh;
  emxArray_real_T *b;
  emxArray_real_T *d;
  emxArray_real_T *gx;
  emxArray_real_T *hx;
  emxArray_real_T *x;
  real_T(*b_y0)[6];
  real_T(*ybar)[6];
  real_T(*F)[2];
  real_T Tmax;
  real_T Ts;
  real_T alpha;
  real_T coeffT;
  real_T f;
  real_T m0;
  real_T p;
  real_T q;
  real_T ratio;
  real_T tmax;
  boolean_T computeGrad;
  st.tls = emlrtRootTLSGlobal;
  F = (real_T(*)[2])mxMalloc(sizeof(real_T[2]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &x, 1, &dd_emlrtRTEI);
  emxInit_real_T(&st, &A, 2, &dd_emlrtRTEI);
  emxInit_real_T(&st, &b, 2, &dd_emlrtRTEI);
  emxInit_real_T(&st, &C, 2, &dd_emlrtRTEI);
  emxInit_real_T(&st, &d, 2, &dd_emlrtRTEI);
  emxInit_real_T(&st, &J, 1, &dd_emlrtRTEI);
  emxInit_real_T(&st, &gx, 2, &dd_emlrtRTEI);
  emxInit_real_T(&st, &hx, 2, &dd_emlrtRTEI);
  emxInit_real_T(&st, &Jf, 1, &dd_emlrtRTEI);
  emxInit_real_T(&st, &Jg, 2, &dd_emlrtRTEI);
  emxInit_real_T(&st, &Jh, 2, &dd_emlrtRTEI);
  emxInit_real_T(&st, &JF, 2, &dd_emlrtRTEI);
  /* Marshall function inputs */
  x->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "x", x);
  tmax = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "tmax");
  Ts = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "Ts");
  b_y0 = e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "y0");
  ybar = e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "ybar");
  m0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "m0");
  coeffT = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "coeffT");
  Tmax = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "Tmax");
  ratio = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "ratio");
  alpha = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "alpha");
  computeGrad = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "computeGrad");
  A->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "A", A);
  b->canFreeData = false;
  k_emlrt_marshallIn(&st, emlrtAlias(prhs[12]), "b", b);
  C->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[13]), "C", C);
  d->canFreeData = false;
  k_emlrt_marshallIn(&st, emlrtAlias(prhs[14]), "d", d);
  /* Invoke the target function */
  costGaussGrad(&st, x, tmax, Ts, *b_y0, *ybar, m0, coeffT, Tmax, ratio, alpha,
                computeGrad, A, b, C, d, J, &f, gx, hx, Jf, Jg, Jh, &p, &q, *F,
                JF);
  /* Marshall function outputs */
  J->canFreeData = false;
  plhs[0] = b_emlrt_marshallOut(J);
  emxFree_real_T(&st, &J);
  emxFree_real_T(&st, &d);
  emxFree_real_T(&st, &C);
  emxFree_real_T(&st, &b);
  emxFree_real_T(&st, &A);
  emxFree_real_T(&st, &x);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(f);
  }
  if (nlhs > 2) {
    gx->canFreeData = false;
    plhs[2] = c_emlrt_marshallOut(gx);
  }
  emxFree_real_T(&st, &gx);
  if (nlhs > 3) {
    hx->canFreeData = false;
    plhs[3] = c_emlrt_marshallOut(hx);
  }
  emxFree_real_T(&st, &hx);
  if (nlhs > 4) {
    Jf->canFreeData = false;
    plhs[4] = b_emlrt_marshallOut(Jf);
  }
  emxFree_real_T(&st, &Jf);
  if (nlhs > 5) {
    Jg->canFreeData = false;
    plhs[5] = c_emlrt_marshallOut(Jg);
  }
  emxFree_real_T(&st, &Jg);
  if (nlhs > 6) {
    Jh->canFreeData = false;
    plhs[6] = c_emlrt_marshallOut(Jh);
  }
  emxFree_real_T(&st, &Jh);
  if (nlhs > 7) {
    plhs[7] = emlrt_marshallOut(p);
  }
  if (nlhs > 8) {
    plhs[8] = emlrt_marshallOut(q);
  }
  if (nlhs > 9) {
    plhs[9] = d_emlrt_marshallOut(*F);
  }
  if (nlhs > 10) {
    JF->canFreeData = false;
    plhs[10] = c_emlrt_marshallOut(JF);
  }
  emxFree_real_T(&st, &JF);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_costGaussGrad_api.c) */
