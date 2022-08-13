/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * drag.h
 *
 * Code generation for function 'drag'
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
void drag(const emlrtStack *sp, const real_T x[6], real_T *Ddrag_r,
          real_T *Ddrag_t);

/* End of code generation (drag.h) */
