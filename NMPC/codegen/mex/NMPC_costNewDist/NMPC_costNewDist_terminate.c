/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NMPC_costNewDist_terminate.c
 *
 * Code generation for function 'NMPC_costNewDist_terminate'
 *
 */

/* Include files */
#include "NMPC_costNewDist_terminate.h"
#include "NMPC_costNewDist_data.h"
#include "_coder_NMPC_costNewDist_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void NMPC_costNewDist_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void NMPC_costNewDist_terminate(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (NMPC_costNewDist_terminate.c) */
