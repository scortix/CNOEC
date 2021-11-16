/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cost.h
 *
 * Code generation for function 'cost'
 *
 */

#pragma once

/* Include files */
#include "cost_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
real_T cost(const emlrtStack *sp, real_T tmax, real_T Ts, const real_T b_y0[6],
            const emxArray_real_T *u, const real_T ybar[6], real_T umax);

/* End of code generation (cost.h) */
