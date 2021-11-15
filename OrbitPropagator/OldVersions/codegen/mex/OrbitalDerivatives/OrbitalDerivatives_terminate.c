/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * OrbitalDerivatives_terminate.c
 *
 * Code generation for function 'OrbitalDerivatives_terminate'
 *
 */

/* Include files */
#include "OrbitalDerivatives_terminate.h"
#include "OrbitalDerivatives_data.h"
#include "_coder_OrbitalDerivatives_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void OrbitalDerivatives_atexit(void)
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

void OrbitalDerivatives_terminate(void)
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

/* End of code generation (OrbitalDerivatives_terminate.c) */
