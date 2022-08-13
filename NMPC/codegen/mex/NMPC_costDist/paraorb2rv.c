/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * paraorb2rv.c
 *
 * Code generation for function 'paraorb2rv'
 *
 */

/* Include files */
#include "paraorb2rv.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
void paraorb2rv(real_T a, real_T e, real_T i, real_T Omega, real_T w,
                real_T theta, real_T rr[3], real_T vv[3])
{
  real_T TGEPF[9];
  real_T c_Rw_tmp[9];
  real_T d_Rw_tmp[9];
  real_T RO_tmp;
  real_T Ri_tmp;
  real_T Rw_tmp;
  real_T b_RO_tmp;
  real_T b_Rw_tmp;
  real_T p_ORB;
  int32_T b_i;
  int32_T i1;
  int32_T i2;
  /* paraorb2rv Convert classical orbital parameters to position-velocity */
  /*    parametrization */
  /*  */
  /*    The function needs as input the 6 classical orbital parameters, as well
   */
  /*    as the planetary gravitational constant mu (for Earth use 398600) */
  /*  Rotation Matrices */
  RO_tmp = muDoubleScalarSin(Omega);
  b_RO_tmp = muDoubleScalarCos(Omega);
  p_ORB = muDoubleScalarSin(i);
  Ri_tmp = muDoubleScalarCos(i);
  Rw_tmp = muDoubleScalarSin(w);
  b_Rw_tmp = muDoubleScalarCos(w);
  c_Rw_tmp[0] = b_Rw_tmp;
  c_Rw_tmp[3] = Rw_tmp;
  c_Rw_tmp[6] = 0.0;
  c_Rw_tmp[1] = -Rw_tmp;
  c_Rw_tmp[4] = b_Rw_tmp;
  c_Rw_tmp[7] = 0.0;
  c_Rw_tmp[2] = 0.0;
  TGEPF[0] = 1.0;
  c_Rw_tmp[5] = 0.0;
  TGEPF[3] = 0.0;
  c_Rw_tmp[8] = 1.0;
  TGEPF[6] = 0.0;
  TGEPF[1] = 0.0;
  TGEPF[4] = Ri_tmp;
  TGEPF[7] = p_ORB;
  TGEPF[2] = 0.0;
  TGEPF[5] = -p_ORB;
  TGEPF[8] = Ri_tmp;
  for (b_i = 0; b_i < 3; b_i++) {
    Ri_tmp = c_Rw_tmp[b_i];
    Rw_tmp = c_Rw_tmp[b_i + 3];
    i1 = (int32_T)c_Rw_tmp[b_i + 6];
    for (i2 = 0; i2 < 3; i2++) {
      d_Rw_tmp[b_i + 3 * i2] =
          (Ri_tmp * TGEPF[3 * i2] + Rw_tmp * TGEPF[3 * i2 + 1]) +
          (real_T)i1 * TGEPF[3 * i2 + 2];
    }
  }
  c_Rw_tmp[0] = b_RO_tmp;
  c_Rw_tmp[3] = RO_tmp;
  c_Rw_tmp[6] = 0.0;
  c_Rw_tmp[1] = -RO_tmp;
  c_Rw_tmp[4] = b_RO_tmp;
  c_Rw_tmp[7] = 0.0;
  c_Rw_tmp[2] = 0.0;
  c_Rw_tmp[5] = 0.0;
  c_Rw_tmp[8] = 1.0;
  for (b_i = 0; b_i < 3; b_i++) {
    Ri_tmp = d_Rw_tmp[b_i];
    Rw_tmp = d_Rw_tmp[b_i + 3];
    p_ORB = d_Rw_tmp[b_i + 6];
    for (i1 = 0; i1 < 3; i1++) {
      TGEPF[b_i + 3 * i1] =
          (Ri_tmp * c_Rw_tmp[3 * i1] + Rw_tmp * c_Rw_tmp[3 * i1 + 1]) +
          p_ORB * c_Rw_tmp[3 * i1 + 2];
    }
  }
  /*  I and J versors in the new reference frame */
  /*  Computation of position and velocity vectors */
  p_ORB = a * (1.0 - e * e);
  if (p_ORB < 0.0) {
    p_ORB = -p_ORB;
  }
  p_ORB = muDoubleScalarSqrt(398600.0 * p_ORB);
  Ri_tmp = muDoubleScalarCos(theta);
  Rw_tmp = muDoubleScalarSin(theta);
  b_Rw_tmp = p_ORB * p_ORB / 398600.0 / (e * Ri_tmp + 1.0);
  RO_tmp = e + Ri_tmp;
  p_ORB = 398600.0 / p_ORB;
  rr[0] = b_Rw_tmp * (Ri_tmp * TGEPF[0] + Rw_tmp * TGEPF[1]);
  vv[0] = p_ORB * (-Rw_tmp * TGEPF[0] + RO_tmp * TGEPF[1]);
  rr[1] = b_Rw_tmp * (Ri_tmp * TGEPF[3] + Rw_tmp * TGEPF[4]);
  vv[1] = p_ORB * (-Rw_tmp * TGEPF[3] + RO_tmp * TGEPF[4]);
  rr[2] = b_Rw_tmp * (Ri_tmp * TGEPF[6] + Rw_tmp * TGEPF[7]);
  vv[2] = p_ORB * (-Rw_tmp * TGEPF[6] + RO_tmp * TGEPF[7]);
}

/* End of code generation (paraorb2rv.c) */
