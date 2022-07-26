/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cost_data.c
 *
 * Code generation for function 'cost_data'
 *
 */

/* Include files */
#include "cost_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131611U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "cost",                                               /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

emlrtRSInfo r_emlrtRSI = {
    21,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" /* pathName */
};

omp_lock_t emlrtLockGlobal;

omp_nest_lock_t cost_nestLockGlobal;

emlrtRTEInfo emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" /* pName
                                                                           */
};

/* End of code generation (cost_data.c) */
