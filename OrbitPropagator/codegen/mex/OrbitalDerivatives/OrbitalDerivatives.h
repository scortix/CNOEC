/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * OrbitalDerivatives.h
 *
 * Code generation for function 'OrbitalDerivatives'
 *
 */

#pragma once

/* Include files */
#include "OrbitalDerivatives_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void OrbitalDerivatives(const emlrtStack *sp, real_T t, const real_T x[6],
                        const real_T u[3], real_T mu, const struct0_T *opt,
                        real_T xdot[6]);

/* End of code generation (OrbitalDerivatives.h) */
