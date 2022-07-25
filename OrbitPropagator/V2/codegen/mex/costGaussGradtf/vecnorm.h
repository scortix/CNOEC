/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * vecnorm.h
 *
 * Code generation for function 'vecnorm'
 *
 */

#pragma once

/* Include files */
#include "costGaussGradtf_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void vecnorm(const emlrtStack *sp, const emxArray_real_T *x,
             emxArray_real_T *y);

/* End of code generation (vecnorm.h) */
