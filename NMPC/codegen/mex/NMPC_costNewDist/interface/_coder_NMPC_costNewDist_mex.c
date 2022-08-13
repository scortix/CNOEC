/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_NMPC_costNewDist_mex.c
 *
 * Code generation for function '_coder_NMPC_costNewDist_mex'
 *
 */

/* Include files */
#include "_coder_NMPC_costNewDist_mex.h"
#include "NMPC_costNewDist_data.h"
#include "NMPC_costNewDist_initialize.h"
#include "NMPC_costNewDist_terminate.h"
#include "_coder_NMPC_costNewDist_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void NMPC_costNewDist_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                                  const mxArray *prhs[13])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 13) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 13, 4,
                        16, "NMPC_costNewDist");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 16,
                        "NMPC_costNewDist");
  }
  /* Call the function. */
  NMPC_costNewDist_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&NMPC_costNewDist_atexit);
  /* Module initialization. */
  NMPC_costNewDist_initialize();
  /* Dispatch the entry-point. */
  NMPC_costNewDist_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  NMPC_costNewDist_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_NMPC_costNewDist_mex.c) */
