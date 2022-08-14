/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NMPC_costDist.h
 *
 * Code generation for function 'NMPC_costDist'
 *
 */

#pragma once

/* Include files */
#include "NMPC_costDist_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void NMPC_costDist(const emlrtStack *sp, real_T M, real_T Ts,
                   const emxArray_real_T *x, const real_T b_y0[6],
                   const emxArray_real_T *yref, const real_T Q[36], real_T R,
                   real_T coeffT, real_T m0, real_T Tmax, const real_T xp[4],
                   const real_T yp[4], const real_T zp[4], real_T S, real_T Cd,
                   const real_T rho_table[84], emxArray_real_T *J);

/* End of code generation (NMPC_costDist.h) */
