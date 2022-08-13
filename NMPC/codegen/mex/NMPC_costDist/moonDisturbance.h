/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * moonDisturbance.h
 *
 * Code generation for function 'moonDisturbance'
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
void moonDisturbance(const emlrtStack *sp, const real_T x[6], real_T b_time,
                     const real_T xp[4], const real_T yp[4], const real_T zp[4],
                     real_T *Dmoon_r, real_T *Dmoon_t, real_T *Dmoon_n);

/* End of code generation (moonDisturbance.h) */
