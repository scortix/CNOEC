/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_cost_mex.c
 *
 * Code generation for function '_coder_cost_mex'
 *
 */

/* Include files */
#include "_coder_cost_mex.h"
#include "_coder_cost_api.h"
#include "cost_data.h"
#include "cost_initialize.h"
#include "cost_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void cost_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                      const mxArray *prhs[7])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 7) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 7, 4,
                        4, "cost");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 4,
                        "cost");
  }
  /* Call the function. */
  cost_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&cost_atexit);
  /* Module initialization. */
  cost_initialize();
  /* Dispatch the entry-point. */
  cost_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  cost_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, (const char_T *)"windows-1252", true);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_cost_mex.c) */
