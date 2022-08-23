/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_costFun_mex.c
 *
 * Code generation for function '_coder_costFun_mex'
 *
 */

/* Include files */
#include "_coder_costFun_mex.h"
#include "_coder_costFun_api.h"
#include "costFun_data.h"
#include "costFun_initialize.h"
#include "costFun_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void costFun_mexFunction(int32_T nlhs, mxArray *plhs[4], int32_T nrhs,
                         const mxArray *prhs[10])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[4];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 10) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 10, 4,
                        7, "costFun");
  }
  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 7,
                        "costFun");
  }
  /* Call the function. */
  costFun_api(prhs, nlhs, outputs);
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
  mexAtExit(&costFun_atexit);
  /* Module initialization. */
  costFun_initialize();
  /* Dispatch the entry-point. */
  costFun_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  costFun_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_costFun_mex.c) */
