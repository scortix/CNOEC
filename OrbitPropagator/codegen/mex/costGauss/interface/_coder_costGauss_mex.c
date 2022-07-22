/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_costGauss_mex.c
 *
 * Code generation for function '_coder_costGauss_mex'
 *
 */

/* Include files */
#include "_coder_costGauss_mex.h"
#include "_coder_costGauss_api.h"
#include "costGauss_data.h"
#include "costGauss_initialize.h"
#include "costGauss_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void costGauss_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                           const mxArray *prhs[8])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 8) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 8, 4,
                        9, "costGauss");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 9,
                        "costGauss");
  }
  /* Call the function. */
  costGauss_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&costGauss_atexit);
  /* Module initialization. */
  costGauss_initialize();
  /* Dispatch the entry-point. */
  costGauss_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  costGauss_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_costGauss_mex.c) */
