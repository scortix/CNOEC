/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NMPC_costDist_initialize.c
 *
 * Code generation for function 'NMPC_costDist_initialize'
 *
 */

/* Include files */
#include "NMPC_costDist_initialize.h"
#include "NMPC_costDist_data.h"
#include "_coder_NMPC_costDist_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void NMPC_costDist_initialize(void)
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

/* End of code generation (NMPC_costDist_initialize.c) */
