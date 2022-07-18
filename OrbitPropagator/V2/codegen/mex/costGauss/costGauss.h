/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * costGauss.h
 *
 * Code generation for function 'costGauss'
 *
 */

#pragma once

/* Include files */
#include "costGauss_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void costGauss(const emlrtStack *sp, real_T tmax, real_T Ts, real_T b_y0[6],
               const emxArray_real_T *u, const real_T ybar[6], real_T umax,
               real_T theta0, real_T ratio, real_T J[8]);

/* End of code generation (costGauss.h) */
