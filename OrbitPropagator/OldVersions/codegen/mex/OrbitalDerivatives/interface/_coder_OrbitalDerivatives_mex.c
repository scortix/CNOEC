/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_OrbitalDerivatives_mex.c
 *
 * Code generation for function '_coder_OrbitalDerivatives_mex'
 *
 */

/* Include files */
#include "_coder_OrbitalDerivatives_mex.h"
#include "OrbitalDerivatives_data.h"
#include "OrbitalDerivatives_initialize.h"
#include "OrbitalDerivatives_terminate.h"
#include "_coder_OrbitalDerivatives_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void OrbitalDerivatives_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                    int32_T nrhs, const mxArray *prhs[5])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 5, 4,
                        18, "OrbitalDerivatives");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 18,
                        "OrbitalDerivatives");
  }
  /* Call the function. */
  OrbitalDerivatives_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&OrbitalDerivatives_atexit);
  /* Module initialization. */
  OrbitalDerivatives_initialize();
  /* Dispatch the entry-point. */
  OrbitalDerivatives_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  OrbitalDerivatives_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_OrbitalDerivatives_mex.c) */
