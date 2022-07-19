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
                    real_T J_data[], int32_T J_size[1], real_T *f,
                    emxArray_real_T *gx, emxArray_real_T *hx,
                    emxArray_real_T *Jf, emxArray_real_T *Jg,
                    emxArray_real_T *Jh, real_T *p, real_T *q);

void e_binary_expand_op(const emlrtStack *sp, emlrtRSInfo in1,
                        const emxArray_real_T *in2, const emxArray_real_T *in3,
                        real_T in4, real_T in5, const real_T in6[6],
                        const real_T in7[6], real_T in8, real_T in9,
                        real_T in10, real_T in11, real_T in12_data[],
                        int32_T *in12_size, real_T in13[2]);

void fun(const emlrtStack *sp, const emxArray_real_T *x, real_T tmax, real_T Ts,
         const real_T b_y0[6], const real_T ybar[6], real_T m0, real_T coeffT,
         real_T Tmax, real_T ratio, real_T g_data[], int32_T *g_size,
         real_T h[2]);

/* End of code generation (costGaussGrad2.h) */
