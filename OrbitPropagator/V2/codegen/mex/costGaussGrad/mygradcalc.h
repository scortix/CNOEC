/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mygradcalc.h
 *
 * Code generation for function 'mygradcalc'
 *
 */

#pragma once

/* Include files */
#include "costGaussGrad_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void mygradcalc(const emlrtStack *sp, real_T fun_workspace_tmax,
                real_T fun_workspace_Ts, const real_T fun_workspace_y0[6],
                const real_T fun_workspace_ybar[6], real_T fun_workspace_m0,
                real_T fun_workspace_coeffT, real_T fun_workspace_Tmax,
                real_T fun_workspace_ratio, real_T fun_workspace_alpha,
                const emxArray_real_T *x, const emxArray_real_T *fx,
                emxArray_real_T *gradfx);

/* End of code generation (mygradcalc.h) */
