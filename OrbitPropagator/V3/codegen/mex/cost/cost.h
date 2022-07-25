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
void cost(const emlrtStack *sp, const emxArray_real_T *x, real_T Ts,
          real_T tmax, real_T b_y0[6], const real_T ybar[6], real_T ratio,
          real_T Tmax, real_T coeffT, real_T m0, real_T alpha, real_T J[3],
          emxArray_real_T *y, real_T *tCost, real_T *m);

emlrtCTX emlrtGetRootTLSGlobal(void);

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData);

/* End of code generation (cost.h) */