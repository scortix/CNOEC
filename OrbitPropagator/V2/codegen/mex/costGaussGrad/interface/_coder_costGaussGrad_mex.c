/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_costGaussGrad_mex.c
 *
 * Code generation for function '_coder_costGaussGrad_mex'
 *
 */

/* Include files */
#include "_coder_costGaussGrad_mex.h"
#include "_coder_costGaussGrad_api.h"
#include "costGaussGrad_data.h"
#include "costGaussGrad_initialize.h"
#include "costGaussGrad_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void costGaussGrad_mexFunction(int32_T nlhs, mxArray *plhs[11], int32_T nrhs,
                               const mxArray *prhs[15])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[11];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 15) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 15, 4,
                        13, "costGaussGrad");
  }
  if (nlhs > 11) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 13,
                        "costGaussGrad");
  }
  /* Call the function. */
  costGaussGrad_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&costGaussGrad_atexit);
  /* Module initialization. */
  costGaussGrad_initialize();
  /* Dispatch the entry-point. */
  costGaussGrad_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  costGaussGrad_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, (const char_T *)"windows-1252", true);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_costGaussGrad_mex.c) */
