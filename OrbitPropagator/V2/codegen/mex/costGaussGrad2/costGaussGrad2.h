/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * costGaussGrad2.h
 *
 * Code generation for function 'costGaussGrad2'
 *
 */

#pragma once

/* Include files */
#include "costGaussGrad2_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void costGaussGrad2(const emlrtStack *sp, const emxArray_real_T *x, real_T tmax,
                    real_T Ts, const real_T b_y0[6], const real_T ybar[6],
                    real_T m0, real_T coeffT, real_T Tmax, real_T ratio,
                    real_T alpha, boolean_T computeGrad,
                    const emxArray_real_T *A, const emxArray_real_T *b,
                    const emxArray_real_T *C, const emxArray_real_T *d,
                    emxArray_real_T *J, real_T *f, emxArray_real_T *gx,
                    emxArray_real_T *hx, emxArray_real_T *Jf,
                    emxArray_real_T *Jg, emxArray_real_T *Jh, real_T *p,
                    real_T *q);

void f_binary_expand_op(const emlrtStack *sp, emlrtRSInfo rc_emlrtRSI,
                        const emxArray_real_T *x, const emxArray_real_T *r1,
                        real_T fun_workspace_tmax, real_T fun_workspace_Ts,
                        const real_T fun_workspace_y0[6],
                        const real_T fun_workspace_ybar[6],
                        real_T fun_workspace_m0, real_T fun_workspace_coeffT,
                        real_T fun_workspace_Tmax, real_T fun_workspace_ratio,
                        real_T g[5], emxArray_real_T *h);

void fun(const emlrtStack *sp, const emxArray_real_T *x, real_T tmax, real_T Ts,
         real_T b_y0[6], const real_T ybar[6], real_T m0, real_T coeffT,
         real_T Tmax, real_T ratio, real_T g[5], emxArray_real_T *h);

/* End of code generation (costGaussGrad2.h) */
