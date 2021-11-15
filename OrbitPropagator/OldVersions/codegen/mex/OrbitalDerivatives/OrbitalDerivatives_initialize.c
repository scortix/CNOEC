/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * OrbitalDerivatives_initialize.c
 *
 * Code generation for function 'OrbitalDerivatives_initialize'
 *
 */

/* Include files */
#include "OrbitalDerivatives_initialize.h"
#include "OrbitalDerivatives_data.h"
#include "_coder_OrbitalDerivatives_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void OrbitalDerivatives_initialize(void)
{
  static const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
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

/* End of code generation (OrbitalDerivatives_initialize.c) */
