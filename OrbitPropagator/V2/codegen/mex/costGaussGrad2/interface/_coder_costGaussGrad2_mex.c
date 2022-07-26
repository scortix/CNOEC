/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_costGaussGrad2_mex.c
 *
 * Code generation for function '_coder_costGaussGrad2_mex'
 *
 */

/* Include files */
#include "_coder_costGaussGrad2_mex.h"
#include "_coder_costGaussGrad2_api.h"
#include "costGaussGrad2_data.h"
#include "costGaussGrad2_initialize.h"
#include "costGaussGrad2_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void costGaussGrad2_mexFunction(int32_T nlhs, mxArray *plhs[9], int32_T nrhs,
                                const mxArray *prhs[15])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[9];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 15) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 15, 4,
                        14, "costGaussGrad2");
  }
  if (nlhs > 9) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "costGaussGrad2");
  }
  /* Call the function. */
  costGaussGrad2_api(prhs, nlhs, outputs);
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
  mexAtExit(&costGaussGrad2_atexit);
  /* Module initialization. */
  costGaussGrad2_initialize();
  /* Dispatch the entry-point. */
  costGaussGrad2_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  costGaussGrad2_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_costGaussGrad2_mex.c) */
