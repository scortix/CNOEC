/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NMPC_costNewDist_initialize.c
 *
 * Code generation for function 'NMPC_costNewDist_initialize'
 *
 */

/* Include files */
#include "NMPC_costNewDist_initialize.h"
#include "NMPC_costNewDist_data.h"
#include "_coder_NMPC_costNewDist_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void NMPC_costNewDist_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mex_InitInfAndNan();
  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (NMPC_costNewDist_initialize.c) */
