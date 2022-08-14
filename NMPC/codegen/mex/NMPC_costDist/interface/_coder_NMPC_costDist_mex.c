/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_NMPC_costDist_mex.c
 *
 * Code generation for function '_coder_NMPC_costDist_mex'
 *
 */

/* Include files */
#include "_coder_NMPC_costDist_mex.h"
#include "NMPC_costDist_data.h"
#include "NMPC_costDist_initialize.h"
#include "NMPC_costDist_terminate.h"
#include "_coder_NMPC_costDist_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void NMPC_costDist_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                               const mxArray *prhs[16])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 16) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 16, 4,
                        13, "NMPC_costDist");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 13,
                        "NMPC_costDist");
  }
  /* Call the function. */
  NMPC_costDist_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&NMPC_costDist_atexit);
  /* Module initialization. */
  NMPC_costDist_initialize();
  /* Dispatch the entry-point. */
  NMPC_costDist_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  NMPC_costDist_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_NMPC_costDist_mex.c) */
