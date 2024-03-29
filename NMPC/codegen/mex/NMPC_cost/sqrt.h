/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sqrt.h
 *
 * Code generation for function 'sqrt'
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
void b_sqrt(const emlrtStack *sp, real_T x[36]);

void c_sqrt(const emlrtStack *sp, emxArray_real_T *x);

/* End of code generation (sqrt.h) */
