/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NMPC_cost.h
 *
 * Code generation for function 'NMPC_cost'
 *
 */

#pragma once

/* Include files */
#include "NMPC_cost_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void NMPC_cost(const emlrtStack *sp, real_T M, real_T Ts,
               const emxArray_real_T *x, const real_T b_y0[6],
               const emxArray_real_T *yref, const real_T Q[36], real_T R,
               real_T coeffT, real_T m0, real_T Tmax, emxArray_real_T *J);

/* End of code generation (NMPC_cost.h) */
