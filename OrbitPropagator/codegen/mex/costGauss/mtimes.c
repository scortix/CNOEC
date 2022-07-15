/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mtimes.c
 *
 * Code generation for function 'mtimes'
 *
 */

/* Include files */
#include "mtimes.h"
#include "costGauss_types.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include <stddef.h>

/* Function Definitions */
real_T mtimes(const emxArray_real_T *A, const emxArray_real_T *B)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  const real_T *A_data;
  const real_T *B_data;
  B_data = B->data;
  A_data = A->data;
  n_t = (ptrdiff_t)A->size[0];
  incx_t = (ptrdiff_t)1;
  incy_t = (ptrdiff_t)1;
  return ddot(&n_t, &A_data[0], &incx_t, &B_data[0], &incy_t);
}

/* End of code generation (mtimes.c) */
