/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cat.h
 *
 * Code generation for function 'cat'
 *
 */

#pragma once

/* Include files */
#include "costFun_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1, real_T in2,
                      real_T in3, real_T in4, real_T in5, const real_T in6[3],
                      const real_T in7[9], const emxArray_real_T *in8,
                      const emxArray_real_T *in9);

/* End of code generation (cat.h) */
