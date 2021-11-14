/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_OrbitalDerivatives_api.c
 *
 * Code generation for function '_coder_OrbitalDerivatives_api'
 *
 */

/* Include files */
#include "_coder_OrbitalDerivatives_api.h"
#include "OrbitalDerivatives.h"
#include "OrbitalDerivatives_data.h"
#include "OrbitalDerivatives_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x,
                                   const char_T *identifier))[6];

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[6];

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const char_T *identifier))[3];

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *t,
                               const char_T *identifier);

static const mxArray *emlrt_marshallOut(const real_T u[6]);

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3];

static struct0_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *opt,
                                    const char_T *identifier);

static struct0_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[4]);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[6];

static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3];

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[4]);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x,
                                   const char_T *identifier))[6]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[6];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(x), &thisId);
  emlrtDestroyArray(&x);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[6]
{
  real_T(*y)[6];
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const char_T *identifier))[3]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[3];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *t,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(t), &thisId);
  emlrtDestroyArray(&t);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[6])
{
  static const int32_T i = 0;
  static const int32_T i1 = 6;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &i1, 1);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3]
{
  real_T(*y)[3];
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static struct0_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *opt,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct0_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(opt), &thisId);
  emlrtDestroyArray(&opt);
  return y;
}

static struct0_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[55] = {"Display",
                                         "MaxFunEvals",
                                         "MaxIter",
                                         "TolFun",
                                         "TolX",
                                         "FunValCheck",
                                         "OutputFcn",
                                         "PlotFcns",
                                         "ActiveConstrTol",
                                         "Algorithm",
                                         "AlwaysHonorConstraints",
                                         "DerivativeCheck",
                                         "Diagnostics",
                                         "DiffMaxChange",
                                         "DiffMinChange",
                                         "FinDiffRelStep",
                                         "FinDiffType",
                                         "GoalsExactAchieve",
                                         "GradConstr",
                                         "GradObj",
                                         "HessFcn",
                                         "Hessian",
                                         "HessMult",
                                         "HessPattern",
                                         "HessUpdate",
                                         "InitBarrierParam",
                                         "InitTrustRegionRadius",
                                         "Jacobian",
                                         "JacobMult",
                                         "JacobPattern",
                                         "LargeScale",
                                         "MaxNodes",
                                         "MaxPCGIter",
                                         "MaxProjCGIter",
                                         "MaxSQPIter",
                                         "MaxTime",
                                         "MeritFunction",
                                         "MinAbsMax",
                                         "NoStopIfFlatInfeas",
                                         "ObjectiveLimit",
                                         "PhaseOneTotalScaling",
                                         "Preconditioner",
                                         "PrecondBandWidth",
                                         "RelLineSrchBnd",
                                         "RelLineSrchBndDuration",
                                         "ScaleProblem",
                                         "SubproblemAlgorithm",
                                         "TolCon",
                                         "TolConSQP",
                                         "TolGradCon",
                                         "TolPCG",
                                         "TolProjCG",
                                         "TolProjCGAbs",
                                         "TypicalX",
                                         "UseParallel"};
  emlrtMsgIdentifier thisId;
  struct0_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtCTX)sp, parentId, u, 55,
                         (const char_T **)&fieldNames[0], 0U, (void *)&dims);
  thisId.fIdentifier = "Display";
  i_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 0,
                                                    (const char_T *)"Display")),
                     &thisId, y.Display);
  thisId.fIdentifier = "MaxFunEvals";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 1, (const char_T *)"MaxFunEvals")),
                     &thisId);
  thisId.fIdentifier = "MaxIter";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 2,
                                                    (const char_T *)"MaxIter")),
                     &thisId);
  thisId.fIdentifier = "TolFun";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 3,
                                                    (const char_T *)"TolFun")),
                     &thisId);
  thisId.fIdentifier = "TolX";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 4,
                                                    (const char_T *)"TolX")),
                     &thisId);
  thisId.fIdentifier = "FunValCheck";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 5, (const char_T *)"FunValCheck")),
                     &thisId);
  thisId.fIdentifier = "OutputFcn";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 6, (const char_T *)"OutputFcn")),
                     &thisId);
  thisId.fIdentifier = "PlotFcns";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 7, (const char_T *)"PlotFcns")),
                     &thisId);
  thisId.fIdentifier = "ActiveConstrTol";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 8,
                                     (const char_T *)"ActiveConstrTol")),
      &thisId);
  thisId.fIdentifier = "Algorithm";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 9, (const char_T *)"Algorithm")),
                     &thisId);
  thisId.fIdentifier = "AlwaysHonorConstraints";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 10,
                                     (const char_T *)"AlwaysHonorConstraints")),
      &thisId);
  thisId.fIdentifier = "DerivativeCheck";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 11,
                                     (const char_T *)"DerivativeCheck")),
      &thisId);
  thisId.fIdentifier = "Diagnostics";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 12,
                                     (const char_T *)"Diagnostics")),
      &thisId);
  thisId.fIdentifier = "DiffMaxChange";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 13,
                                     (const char_T *)"DiffMaxChange")),
      &thisId);
  thisId.fIdentifier = "DiffMinChange";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 14,
                                     (const char_T *)"DiffMinChange")),
      &thisId);
  thisId.fIdentifier = "FinDiffRelStep";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 15,
                                     (const char_T *)"FinDiffRelStep")),
      &thisId);
  thisId.fIdentifier = "FinDiffType";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 16,
                                     (const char_T *)"FinDiffType")),
      &thisId);
  thisId.fIdentifier = "GoalsExactAchieve";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 17,
                                     (const char_T *)"GoalsExactAchieve")),
      &thisId);
  thisId.fIdentifier = "GradConstr";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 18, (const char_T *)"GradConstr")),
                     &thisId);
  thisId.fIdentifier = "GradObj";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 19,
                                                    (const char_T *)"GradObj")),
                     &thisId);
  thisId.fIdentifier = "HessFcn";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 20,
                                                    (const char_T *)"HessFcn")),
                     &thisId);
  thisId.fIdentifier = "Hessian";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 21,
                                                    (const char_T *)"Hessian")),
                     &thisId);
  thisId.fIdentifier = "HessMult";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 22, (const char_T *)"HessMult")),
                     &thisId);
  thisId.fIdentifier = "HessPattern";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 23,
                                     (const char_T *)"HessPattern")),
      &thisId);
  thisId.fIdentifier = "HessUpdate";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 24, (const char_T *)"HessUpdate")),
                     &thisId);
  thisId.fIdentifier = "InitBarrierParam";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 25,
                                     (const char_T *)"InitBarrierParam")),
      &thisId);
  thisId.fIdentifier = "InitTrustRegionRadius";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 26,
                                     (const char_T *)"InitTrustRegionRadius")),
      &thisId);
  thisId.fIdentifier = "Jacobian";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 27, (const char_T *)"Jacobian")),
                     &thisId);
  thisId.fIdentifier = "JacobMult";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 28, (const char_T *)"JacobMult")),
                     &thisId);
  thisId.fIdentifier = "JacobPattern";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 29,
                                     (const char_T *)"JacobPattern")),
      &thisId);
  thisId.fIdentifier = "LargeScale";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 30, (const char_T *)"LargeScale")),
                     &thisId);
  thisId.fIdentifier = "MaxNodes";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 31, (const char_T *)"MaxNodes")),
                     &thisId);
  thisId.fIdentifier = "MaxPCGIter";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 32, (const char_T *)"MaxPCGIter")),
                     &thisId);
  thisId.fIdentifier = "MaxProjCGIter";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 33,
                                     (const char_T *)"MaxProjCGIter")),
      &thisId);
  thisId.fIdentifier = "MaxSQPIter";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 34, (const char_T *)"MaxSQPIter")),
                     &thisId);
  thisId.fIdentifier = "MaxTime";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 35,
                                                    (const char_T *)"MaxTime")),
                     &thisId);
  thisId.fIdentifier = "MeritFunction";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 36,
                                     (const char_T *)"MeritFunction")),
      &thisId);
  thisId.fIdentifier = "MinAbsMax";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 37, (const char_T *)"MinAbsMax")),
                     &thisId);
  thisId.fIdentifier = "NoStopIfFlatInfeas";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 38,
                                     (const char_T *)"NoStopIfFlatInfeas")),
      &thisId);
  thisId.fIdentifier = "ObjectiveLimit";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 39,
                                     (const char_T *)"ObjectiveLimit")),
      &thisId);
  thisId.fIdentifier = "PhaseOneTotalScaling";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 40,
                                     (const char_T *)"PhaseOneTotalScaling")),
      &thisId);
  thisId.fIdentifier = "Preconditioner";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 41,
                                     (const char_T *)"Preconditioner")),
      &thisId);
  thisId.fIdentifier = "PrecondBandWidth";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 42,
                                     (const char_T *)"PrecondBandWidth")),
      &thisId);
  thisId.fIdentifier = "RelLineSrchBnd";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 43,
                                     (const char_T *)"RelLineSrchBnd")),
      &thisId);
  thisId.fIdentifier = "RelLineSrchBndDuration";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 44,
                                     (const char_T *)"RelLineSrchBndDuration")),
      &thisId);
  thisId.fIdentifier = "ScaleProblem";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 45,
                                     (const char_T *)"ScaleProblem")),
      &thisId);
  thisId.fIdentifier = "SubproblemAlgorithm";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 46,
                                     (const char_T *)"SubproblemAlgorithm")),
      &thisId);
  thisId.fIdentifier = "TolCon";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 47,
                                                    (const char_T *)"TolCon")),
                     &thisId);
  thisId.fIdentifier = "TolConSQP";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 48, (const char_T *)"TolConSQP")),
                     &thisId);
  thisId.fIdentifier = "TolGradCon";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 49, (const char_T *)"TolGradCon")),
                     &thisId);
  thisId.fIdentifier = "TolPCG";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 50,
                                                    (const char_T *)"TolPCG")),
                     &thisId);
  thisId.fIdentifier = "TolProjCG";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 51, (const char_T *)"TolProjCG")),
                     &thisId);
  thisId.fIdentifier = "TolProjCGAbs";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 52,
                                     (const char_T *)"TolProjCGAbs")),
      &thisId);
  thisId.fIdentifier = "TypicalX";
  j_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 53, (const char_T *)"TypicalX")),
                     &thisId);
  thisId.fIdentifier = "UseParallel";
  j_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 54,
                                     (const char_T *)"UseParallel")),
      &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[4])
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
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

static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3]
{
  static const int32_T dims = 3;
  real_T(*ret)[3];
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 1U, (void *)&dims);
  ret = (real_T(*)[3])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[4])
{
  static const int32_T dims[2] = {1, 4};
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                          false, 2U, (void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtCTX)sp, src, &ret[0], 4);
  emlrtDestroyArray(&src);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims[2] = {0, 0};
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 2U, (void *)&dims[0]);
  emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

void OrbitalDerivatives_api(const mxArray *const prhs[5], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  struct0_T opt;
  real_T(*x)[6];
  real_T(*xdot)[6];
  real_T(*u)[3];
  real_T mu;
  real_T t;
  st.tls = emlrtRootTLSGlobal;
  xdot = (real_T(*)[6])mxMalloc(sizeof(real_T[6]));
  /* Marshall function inputs */
  t = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "t");
  x = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "x");
  u = e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "u");
  mu = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "mu");
  opt = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "opt");
  /* Invoke the target function */
  OrbitalDerivatives(&st, t, *x, *u, mu, &opt, *xdot);
  /* Marshall function outputs */
  *plhs = emlrt_marshallOut(*xdot);
}

/* End of code generation (_coder_OrbitalDerivatives_api.c) */
