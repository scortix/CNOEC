/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * EOEDerivatives.h
 *
 * Code generation for function 'EOEDerivatives'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void EOEDerivatives(const emlrtStack *sp, const real_T x[6], const real_T u[3],
                    real_T xdot[6]);

/* End of code generation (EOEDerivatives.h) */
