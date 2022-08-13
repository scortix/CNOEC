/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * NMPC_costNewDist.c
 *
 * Code generation for function 'NMPC_costNewDist'
 *
 */

/* Include files */
#include "NMPC_costNewDist.h"
#include "EOE2COE.h"
#include "NMPC_costNewDist_data.h"
#include "NMPC_costNewDist_emxutil.h"
#include "NMPC_costNewDist_types.h"
#include "assertCompatibleDims.h"
#include "cos.h"
#include "drag.h"
#include "earthNonSphericity.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "indexShapeCheck.h"
#include "moonDisturbance.h"
#include "power.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    29,                 /* lineNo */
    "NMPC_costNewDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pathName
                                                                            */
};

static emlrtRSInfo b_emlrtRSI = {
    36,                 /* lineNo */
    "NMPC_costNewDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pathName
                                                                            */
};

static emlrtRSInfo c_emlrtRSI = {
    37,                 /* lineNo */
    "NMPC_costNewDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pathName
                                                                            */
};

static emlrtRSInfo d_emlrtRSI = {
    38,                 /* lineNo */
    "NMPC_costNewDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pathName
                                                                            */
};

static emlrtRSInfo e_emlrtRSI = {
    39,                 /* lineNo */
    "NMPC_costNewDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pathName
                                                                            */
};

static emlrtRSInfo f_emlrtRSI = {
    43,                 /* lineNo */
    "NMPC_costNewDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pathName
                                                                            */
};

static emlrtRSInfo g_emlrtRSI = {
    44,                 /* lineNo */
    "NMPC_costNewDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pathName
                                                                            */
};

static emlrtRSInfo h_emlrtRSI = {
    45,                 /* lineNo */
    "NMPC_costNewDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pathName
                                                                            */
};

static emlrtRSInfo i_emlrtRSI = {
    51,                 /* lineNo */
    "NMPC_costNewDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pathName
                                                                            */
};

static emlrtRSInfo j_emlrtRSI = {
    52,                 /* lineNo */
    "NMPC_costNewDist", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pathName
                                                                            */
};

static emlrtRSInfo ib_emlrtRSI = {
    29,               /* lineNo */
    "EOEDerivatives", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/EOEDerivatives.m" /* pathName
                                                                          */
};

static emlrtRSInfo jb_emlrtRSI = {
    30,               /* lineNo */
    "EOEDerivatives", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/EOEDerivatives.m" /* pathName
                                                                          */
};

static emlrtRSInfo kb_emlrtRSI = {
    38,               /* lineNo */
    "EOEDerivatives", /* fcnName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/EOEDerivatives.m" /* pathName
                                                                          */
};

static emlrtRSInfo ob_emlrtRSI = {
    13,      /* lineNo */
    "atan2", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/atan2.m" /* pathName
                                                                            */
};

static emlrtRSInfo pb_emlrtRSI =
    {
        57,      /* lineNo */
        "ixfun", /* fcnName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "ixfun.m" /* pathName */
};

static emlrtRSInfo rb_emlrtRSI = {
    34,               /* lineNo */
    "rdivide_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "rdivide_helper.m" /* pathName */
};

static emlrtRSInfo
    sb_emlrtRSI =
        {
            51,    /* lineNo */
            "div", /* fcnName */
            "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
            "div.m" /* pathName */
};

static emlrtRSInfo tb_emlrtRSI = {
    15,    /* lineNo */
    "min", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/datafun/min.m" /* pathName
                                                                            */
};

static emlrtRSInfo ub_emlrtRSI = {
    46,         /* lineNo */
    "minOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo vb_emlrtRSI = {
    92,        /* lineNo */
    "minimum", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" /* pathName */
};

static emlrtRSInfo wb_emlrtRSI = {
    204,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo xb_emlrtRSI = {
    893,                    /* lineNo */
    "minRealVectorOmitNaN", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo yb_emlrtRSI = {
    62,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo ac_emlrtRSI = {
    54,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = {
    103,         /* lineNo */
    "findFirst", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo cc_emlrtRSI = {
    120,                        /* lineNo */
    "minOrMaxRealVectorKernel", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo dc_emlrtRSI = {
    69,                  /* lineNo */
    "eml_mtimes_helper", /* fcnName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" /* pathName */
};

static emlrtBCInfo
    emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            42,                 /* lineNo */
            9,                  /* colNo */
            "u",                /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = {
    28,                 /* lineNo */
    9,                  /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtBCInfo
    b_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            29,                 /* lineNo */
            18,                 /* colNo */
            "x",                /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    c_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            29,                 /* lineNo */
            28,                 /* colNo */
            "x",                /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    d_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            29,                 /* lineNo */
            11,                 /* colNo */
            "dir",              /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,                 /* nDims */
    29,                 /* lineNo */
    5,                  /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtBCInfo
    e_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            30,                 /* lineNo */
            26,                 /* colNo */
            "dir",              /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = {
    35,                 /* lineNo */
    9,                  /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtBCInfo
    f_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            22,                 /* lineNo */
            8,                  /* colNo */
            "yhat",             /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    g_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            36,                 /* lineNo */
            27,                 /* colNo */
            "yhat",             /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    h_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            26,                 /* lineNo */
            19,                 /* colNo */
            "m",                /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    i_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            40,                 /* lineNo */
            73,                 /* colNo */
            "m",                /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    j_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            42,                 /* lineNo */
            34,                 /* colNo */
            "dir",              /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    k_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            43,                 /* lineNo */
            26,                 /* colNo */
            "yhat",             /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    l_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            43,                 /* lineNo */
            56,                 /* colNo */
            "yhat",             /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    m_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            43,                 /* lineNo */
            63,                 /* colNo */
            "u",                /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    n_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            43,                 /* lineNo */
            12,                 /* colNo */
            "yhat",             /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    o_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            45,                 /* lineNo */
            46,                 /* colNo */
            "yref",             /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    p_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            45,                 /* lineNo */
            56,                 /* colNo */
            "yhat",             /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    2,                  /* nDims */
    51,                 /* lineNo */
    29,                 /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtECInfo c_emlrtECI = {
    2,                  /* nDims */
    51,                 /* lineNo */
    61,                 /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtECInfo d_emlrtECI = {
    2,                  /* nDims */
    51,                 /* lineNo */
    24,                 /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtBCInfo
    q_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            45,                 /* lineNo */
            7,                  /* colNo */
            "F",                /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    r_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            45,                 /* lineNo */
            19,                 /* colNo */
            "F",                /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtECInfo e_emlrtECI = {
    -1,                 /* nDims */
    45,                 /* lineNo */
    5,                  /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtRTEInfo d_emlrtRTEI = {
    130,             /* lineNo */
    27,              /* colNo */
    "unaryMinOrMax", /* fName */
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" /* pName */
};

static emlrtDCInfo
    emlrtDCI =
        {
            21,                 /* lineNo */
            16,                 /* colNo */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            1                              /* checkKind */
};

static emlrtDCInfo
    b_emlrtDCI =
        {
            21,                 /* lineNo */
            16,                 /* colNo */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            4                              /* checkKind */
};

static emlrtDCInfo
    c_emlrtDCI =
        {
            23,                 /* lineNo */
            13,                 /* colNo */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            1                              /* checkKind */
};

static emlrtDCInfo
    d_emlrtDCI =
        {
            23,                 /* lineNo */
            13,                 /* colNo */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            4                              /* checkKind */
};

static emlrtDCInfo
    e_emlrtDCI =
        {
            24,                 /* lineNo */
            15,                 /* colNo */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            1                              /* checkKind */
};

static emlrtDCInfo
    f_emlrtDCI =
        {
            26,                 /* lineNo */
            13,                 /* colNo */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            1                              /* checkKind */
};

static emlrtDCInfo
    g_emlrtDCI =
        {
            21,                 /* lineNo */
            1,                  /* colNo */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            1                              /* checkKind */
};

static emlrtDCInfo
    h_emlrtDCI =
        {
            21,                 /* lineNo */
            1,                  /* colNo */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            4                              /* checkKind */
};

static emlrtDCInfo
    i_emlrtDCI =
        {
            23,                 /* lineNo */
            1,                  /* colNo */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            1                              /* checkKind */
};

static emlrtDCInfo
    j_emlrtDCI =
        {
            24,                 /* lineNo */
            1,                  /* colNo */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            1                              /* checkKind */
};

static emlrtDCInfo
    k_emlrtDCI =
        {
            25,                 /* lineNo */
            14,                 /* colNo */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            1                              /* checkKind */
};

static emlrtDCInfo
    l_emlrtDCI =
        {
            26,                 /* lineNo */
            1,                  /* colNo */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            1                              /* checkKind */
};

static emlrtDCInfo
    m_emlrtDCI =
        {
            33,                 /* lineNo */
            1,                  /* colNo */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            1                              /* checkKind */
};

static emlrtBCInfo
    s_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            42,                 /* lineNo */
            21,                 /* colNo */
            "m",                /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    t_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            30,                 /* lineNo */
            10,                 /* colNo */
            "cons",             /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    u_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            44,                 /* lineNo */
            27,                 /* colNo */
            "cons",             /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    v_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            44,                 /* lineNo */
            7,                  /* colNo */
            "F",                /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    w_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            47,                 /* lineNo */
            20,                 /* colNo */
            "m",                /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    x_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            47,                 /* lineNo */
            33,                 /* colNo */
            "cons",             /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtBCInfo
    y_emlrtBCI =
        {
            -1,                 /* iFirst */
            -1,                 /* iLast */
            47,                 /* lineNo */
            11,                 /* colNo */
            "m",                /* aName */
            "NMPC_costNewDist", /* fName */
            "/Users/matteodepaola/Documents/git/CNOEC "
            "git/NMPC/NMPC_costNewDist.m", /* pName */
            0                              /* checkKind */
};

static emlrtRTEInfo l_emlrtRTEI = {
    21,                 /* lineNo */
    1,                  /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtRTEInfo m_emlrtRTEI = {
    23,                 /* lineNo */
    1,                  /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtRTEInfo n_emlrtRTEI = {
    24,                 /* lineNo */
    1,                  /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtRTEInfo o_emlrtRTEI = {
    25,                 /* lineNo */
    8,                  /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtRTEInfo p_emlrtRTEI = {
    26,                 /* lineNo */
    1,                  /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtRTEInfo q_emlrtRTEI = {
    33,                 /* lineNo */
    1,                  /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtRTEInfo r_emlrtRTEI = {
    51,                 /* lineNo */
    29,                 /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtRTEInfo s_emlrtRTEI = {
    51,                 /* lineNo */
    42,                 /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtRTEInfo t_emlrtRTEI = {
    51,                 /* lineNo */
    71,                 /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtRTEInfo u_emlrtRTEI = {
    51,                 /* lineNo */
    24,                 /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtRTEInfo v_emlrtRTEI = {
    51,                 /* lineNo */
    57,                 /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtRTEInfo w_emlrtRTEI = {
    51,                 /* lineNo */
    22,                 /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtRTEInfo x_emlrtRTEI = {
    51,                 /* lineNo */
    10,                 /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtRTEInfo y_emlrtRTEI = {
    51,                 /* lineNo */
    9,                  /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    52,                 /* lineNo */
    1,                  /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    25,                 /* lineNo */
    1,                  /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    51,                 /* lineNo */
    61,                 /* colNo */
    "NMPC_costNewDist", /* fName */
    "/Users/matteodepaola/Documents/git/CNOEC git/NMPC/NMPC_costNewDist.m" /* pName
                                                                            */
};

/* Function Declarations */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *y,
                               const emxArray_real_T *r1);

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *varargin_1,
                             const emxArray_real_T *yhat,
                             const emxArray_real_T *y);

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *r1,
                               const emxArray_real_T *yhat);

static void plus(const emlrtStack *sp, emxArray_real_T *y,
                 const emxArray_real_T *m);

/* Function Definitions */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *y,
                               const emxArray_real_T *r1)
{
  emxArray_real_T *b_y;
  const real_T *r;
  real_T *b_y_data;
  real_T *y_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  r = r1->data;
  y_data = y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_y, 2, &w_emlrtRTEI);
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  if (r1->size[1] == 1) {
    b_y->size[1] = y->size[1];
  } else {
    b_y->size[1] = r1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_y, i, &w_emlrtRTEI);
  b_y_data = b_y->data;
  stride_0_1 = (y->size[1] != 1);
  stride_1_1 = (r1->size[1] != 1);
  if (r1->size[1] == 1) {
    loop_ub = y->size[1];
  } else {
    loop_ub = r1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] = y_data[i * stride_0_1] * r[i * stride_1_1] + 1.0;
  }
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, y, i, &w_emlrtRTEI);
  y_data = y->data;
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    y_data[i] = b_y_data[i];
  }
  emxFree_real_T(sp, &b_y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *varargin_1,
                             const emxArray_real_T *yhat,
                             const emxArray_real_T *y)
{
  const real_T *y_data;
  const real_T *yhat_data;
  real_T *varargin_1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  y_data = y->data;
  yhat_data = yhat->data;
  i = yhat->size[1];
  stride_0_0 = varargin_1->size[0];
  if (y->size[1] == 1) {
    varargin_1->size[0] = i;
  } else {
    varargin_1->size[0] = y->size[1];
  }
  emxEnsureCapacity_real_T(sp, varargin_1, stride_0_0, &y_emlrtRTEI);
  varargin_1_data = varargin_1->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (y->size[1] != 1);
  if (y->size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = y->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    varargin_1_data[i] =
        yhat_data[6 * (i * stride_0_0)] / y_data[i * stride_1_0];
  }
}

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *r1,
                               const emxArray_real_T *yhat)
{
  emxArray_real_T *b_yhat;
  const real_T *yhat_data;
  real_T *b_yhat_data;
  real_T *r;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  yhat_data = yhat->data;
  r = r1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_yhat, 2, &eb_emlrtRTEI);
  i = yhat->size[1];
  stride_0_1 = b_yhat->size[0] * b_yhat->size[1];
  b_yhat->size[0] = 1;
  if (r1->size[1] == 1) {
    b_yhat->size[1] = i;
  } else {
    b_yhat->size[1] = r1->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_yhat, stride_0_1, &eb_emlrtRTEI);
  b_yhat_data = b_yhat->data;
  stride_0_1 = (i != 1);
  stride_1_1 = (r1->size[1] != 1);
  if (r1->size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = r1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_yhat_data[i] = yhat_data[6 * (i * stride_0_1) + 5] - r[i * stride_1_1];
  }
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = b_yhat->size[1];
  emxEnsureCapacity_real_T(sp, r1, i, &eb_emlrtRTEI);
  r = r1->data;
  loop_ub = b_yhat->size[1];
  for (i = 0; i < loop_ub; i++) {
    r[i] = b_yhat_data[i];
  }
  emxFree_real_T(sp, &b_yhat);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void plus(const emlrtStack *sp, emxArray_real_T *y,
                 const emxArray_real_T *m)
{
  emxArray_real_T *b_y;
  const real_T *m_data;
  real_T *b_y_data;
  real_T *y_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  m_data = m->data;
  y_data = y->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_y, 2, &r_emlrtRTEI);
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  if (m->size[1] == 1) {
    b_y->size[1] = y->size[1];
  } else {
    b_y->size[1] = m->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_y, i, &r_emlrtRTEI);
  b_y_data = b_y->data;
  stride_0_1 = (y->size[1] != 1);
  stride_1_1 = (m->size[1] != 1);
  if (m->size[1] == 1) {
    loop_ub = y->size[1];
  } else {
    loop_ub = m->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] = y_data[i * stride_0_1] + m_data[i * stride_1_1];
  }
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, y, i, &r_emlrtRTEI);
  y_data = y->data;
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    y_data[i] = b_y_data[i];
  }
  emxFree_real_T(sp, &b_y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void NMPC_costNewDist(const emlrtStack *sp, real_T M, real_T Ts,
                      const emxArray_real_T *x, const real_T b_y0[6],
                      const emxArray_real_T *yref, const real_T Q[36], real_T R,
                      real_T coeffT, real_T m0, real_T Tmax, const real_T xp[4],
                      const real_T yp[4], const real_T zp[4],
                      emxArray_real_T *J)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_real_T *b_F;
  emxArray_real_T *b_m;
  emxArray_real_T *b_y;
  emxArray_real_T *b_yhat;
  emxArray_real_T *cons;
  emxArray_real_T *dir;
  emxArray_real_T *u;
  emxArray_real_T *varargin_1;
  emxArray_real_T *yhat;
  real_T b_a[36];
  real_T c_a[6];
  real_T yCOE[6];
  const real_T *x_data;
  const real_T *yref_data;
  real_T DJ2n;
  real_T DJ2r_idx_0;
  real_T DJ2r_idx_1;
  real_T Dmoon_n;
  real_T a;
  real_T absxk;
  real_T m;
  real_T p_mu05;
  real_T scale;
  real_T t;
  real_T w;
  real_T y;
  real_T *F_data;
  real_T *cons_data;
  real_T *dir_data;
  real_T *m_data;
  real_T *u_data;
  real_T *yhat_data;
  int32_T F[2];
  int32_T F_tmp;
  int32_T b_yCOE_tmp;
  int32_T idx;
  int32_T k;
  int32_T last;
  int32_T loop_ub_tmp;
  int32_T w_tmp;
  int32_T yCOE_tmp;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  yref_data = yref->data;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &yhat, 2, &l_emlrtRTEI);
  /* COST Function calculates the cost of the orbital maneuvre considering */
  /*    arbitrary defined weigthed sums. The cost takes into account both the */
  /*    state error and the input magnitude. In addition, an hard constraint on
   */
  /*    the maximum value of the input has been considered. */
  /*    As inputs, the function needs: */
  /*        M: prediction horizon */
  /*        Ts: time step of the discrete system */
  /*        y0: initial condition vector */
  /*        u0: input vector from trajectory */
  /*        ybar: desired state vector */
  /*        umax: maximum value for inputs */
  /*        x: optimization variables 3*M inputs,  6*M states (current state
   * given) */
  /*        variables in this order */
  /*        Q: state trajectory weights 6x6 */
  /*        R: fuel consumption weight */
  /*  t = 0:Ts:Ts*M; % Time vector */
  yCOE_tmp = yhat->size[0] * yhat->size[1];
  yhat->size[0] = 6;
  emxEnsureCapacity_real_T(sp, yhat, yCOE_tmp, &l_emlrtRTEI);
  if (!(M + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(M + 1.0, &b_emlrtDCI, (emlrtCTX)sp);
  }
  m = (int32_T)muDoubleScalarFloor(M + 1.0);
  if (M + 1.0 != m) {
    emlrtIntegerCheckR2012b(M + 1.0, &emlrtDCI, (emlrtCTX)sp);
  }
  yCOE_tmp = yhat->size[0] * yhat->size[1];
  yhat->size[1] = (int32_T)(M + 1.0);
  emxEnsureCapacity_real_T(sp, yhat, yCOE_tmp, &l_emlrtRTEI);
  yhat_data = yhat->data;
  if (!(M + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(M + 1.0, &h_emlrtDCI, (emlrtCTX)sp);
  }
  if (M + 1.0 != m) {
    emlrtIntegerCheckR2012b(M + 1.0, &g_emlrtDCI, (emlrtCTX)sp);
  }
  last = 6 * (int32_T)(M + 1.0);
  for (yCOE_tmp = 0; yCOE_tmp < last; yCOE_tmp++) {
    yhat_data[yCOE_tmp] = 0.0;
  }
  /*  Initialization of state vectors */
  if (1 > (int32_T)(M + 1.0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)(M + 1.0), &f_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  for (yCOE_tmp = 0; yCOE_tmp < 6; yCOE_tmp++) {
    yhat_data[yCOE_tmp] = b_y0[yCOE_tmp];
  }
  emxInit_real_T(sp, &u, 2, &m_emlrtRTEI);
  /*  Set initial conditions */
  yCOE_tmp = u->size[0] * u->size[1];
  u->size[0] = 3;
  emxEnsureCapacity_real_T(sp, u, yCOE_tmp, &m_emlrtRTEI);
  if (!(M >= 0.0)) {
    emlrtNonNegativeCheckR2012b(M, &d_emlrtDCI, (emlrtCTX)sp);
  }
  yCOE_tmp = (int32_T)muDoubleScalarFloor(M);
  if (M != yCOE_tmp) {
    emlrtIntegerCheckR2012b(M, &c_emlrtDCI, (emlrtCTX)sp);
  }
  b_yCOE_tmp = u->size[0] * u->size[1];
  u->size[1] = (int32_T)M;
  emxEnsureCapacity_real_T(sp, u, b_yCOE_tmp, &m_emlrtRTEI);
  u_data = u->data;
  if (M != yCOE_tmp) {
    emlrtIntegerCheckR2012b(M, &i_emlrtDCI, (emlrtCTX)sp);
  }
  last = 3 * (int32_T)M;
  for (b_yCOE_tmp = 0; b_yCOE_tmp < last; b_yCOE_tmp++) {
    u_data[b_yCOE_tmp] = 0.0;
  }
  emxInit_real_T(sp, &dir, 2, &n_emlrtRTEI);
  /*  Initialization of input vectors */
  b_yCOE_tmp = dir->size[0] * dir->size[1];
  dir->size[0] = 3;
  emxEnsureCapacity_real_T(sp, dir, b_yCOE_tmp, &n_emlrtRTEI);
  if (M != yCOE_tmp) {
    emlrtIntegerCheckR2012b(M, &e_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub_tmp = (int32_T)M;
  b_yCOE_tmp = dir->size[0] * dir->size[1];
  dir->size[1] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, dir, b_yCOE_tmp, &n_emlrtRTEI);
  dir_data = dir->data;
  if (loop_ub_tmp != yCOE_tmp) {
    emlrtIntegerCheckR2012b(M, &j_emlrtDCI, (emlrtCTX)sp);
  }
  last = 3 * (int32_T)M;
  for (b_yCOE_tmp = 0; b_yCOE_tmp < last; b_yCOE_tmp++) {
    dir_data[b_yCOE_tmp] = 0.0;
  }
  /*  Initialization of direction vector */
  if (loop_ub_tmp != yCOE_tmp) {
    emlrtIntegerCheckR2012b(M, &k_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &cons, 1, &bb_emlrtRTEI);
  emxInit_real_T(sp, &b_m, 2, &p_emlrtRTEI);
  b_yCOE_tmp = cons->size[0];
  cons->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, cons, b_yCOE_tmp, &o_emlrtRTEI);
  cons_data = cons->data;
  /*  Initialization of consumption vector */
  b_yCOE_tmp = b_m->size[0] * b_m->size[1];
  b_m->size[0] = 1;
  emxEnsureCapacity_real_T(sp, b_m, b_yCOE_tmp, &p_emlrtRTEI);
  if (loop_ub_tmp != yCOE_tmp) {
    emlrtIntegerCheckR2012b(M, &f_emlrtDCI, (emlrtCTX)sp);
  }
  b_yCOE_tmp = b_m->size[0] * b_m->size[1];
  b_m->size[1] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, b_m, b_yCOE_tmp, &p_emlrtRTEI);
  m_data = b_m->data;
  if (loop_ub_tmp != yCOE_tmp) {
    emlrtIntegerCheckR2012b(M, &l_emlrtDCI, (emlrtCTX)sp);
  }
  for (yCOE_tmp = 0; yCOE_tmp < loop_ub_tmp; yCOE_tmp++) {
    m_data[yCOE_tmp] = 0.0;
  }
  if (1.0 > M) {
    emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)M, &h_emlrtBCI, (emlrtCTX)sp);
  }
  m_data[0] = m0;
  /*  Initialization of mass */
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, M, mxDOUBLE_CLASS, (int32_T)M,
                                &emlrtRTEI, (emlrtCTX)sp);
  if (0.0 <= M - 1.0) {
    F[0] = 1;
    idx = 3;
  }
  for (k = 0; k < loop_ub_tmp; k++) {
    m = 3.0 * (((real_T)k + 1.0) - 1.0) + 1.0;
    scale = 3.0 * ((real_T)k + 1.0);
    if (m > scale) {
      yCOE_tmp = 0;
      b_yCOE_tmp = 0;
    } else {
      if (((int32_T)m < 1) || ((int32_T)m > x->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)m, 1, x->size[0], &b_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      yCOE_tmp = (int32_T)m - 1;
      if (((int32_T)scale < 1) || ((int32_T)scale > x->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)scale, 1, x->size[0],
                                      &c_emlrtBCI, (emlrtCTX)sp);
      }
      b_yCOE_tmp = (int32_T)scale;
    }
    F_tmp = b_yCOE_tmp - yCOE_tmp;
    F[1] = F_tmp;
    st.site = &emlrtRSI;
    indexShapeCheck(&st, x->size[0], F);
    if (k + 1 > dir->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, dir->size[1], &d_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    emlrtSubAssignSizeCheckR2012b(&idx, 1, &F_tmp, 1, &emlrtECI, (emlrtCTX)sp);
    dir_data[3 * k] = x_data[yCOE_tmp];
    b_yCOE_tmp = 3 * k + 1;
    dir_data[b_yCOE_tmp] = x_data[yCOE_tmp + 1];
    w_tmp = 3 * k + 2;
    dir_data[w_tmp] = x_data[yCOE_tmp + 2];
    if (k + 1 > dir->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, dir->size[1], &e_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    scale = 3.3121686421112381E-170;
    absxk = muDoubleScalarAbs(dir_data[3 * k]);
    if (absxk > 3.3121686421112381E-170) {
      y = 1.0;
      scale = absxk;
    } else {
      t = absxk / 3.3121686421112381E-170;
      y = t * t;
    }
    absxk = muDoubleScalarAbs(dir_data[b_yCOE_tmp]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
    absxk = muDoubleScalarAbs(dir_data[w_tmp]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
    if ((int32_T)(k + 1U) > cons->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, cons->size[0],
                                    &t_emlrtBCI, (emlrtCTX)sp);
    }
    cons_data[k] = scale * muDoubleScalarSqrt(y);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxInit_real_T(sp, &b_F, 1, &q_emlrtRTEI);
  m = 7.0 * M;
  if (m != (int32_T)m) {
    emlrtIntegerCheckR2012b(m, &m_emlrtDCI, (emlrtCTX)sp);
  }
  yCOE_tmp = b_F->size[0];
  b_F->size[0] = (int32_T)m;
  emxEnsureCapacity_real_T(sp, b_F, yCOE_tmp, &q_emlrtRTEI);
  F_data = b_F->data;
  if (m != (int32_T)m) {
    emlrtIntegerCheckR2012b(m, &m_emlrtDCI, (emlrtCTX)sp);
  }
  last = (int32_T)m;
  for (yCOE_tmp = 0; yCOE_tmp < last; yCOE_tmp++) {
    F_data[yCOE_tmp] = 0.0;
  }
  /*  Cost Function Calculation */
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, M, mxDOUBLE_CLASS, (int32_T)M,
                                &b_emlrtRTEI, (emlrtCTX)sp);
  if (0.0 <= M - 1.0) {
    F_tmp = 6;
  }
  for (k = 0; k < loop_ub_tmp; k++) {
    if ((int32_T)(k + 1U) > yhat->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, yhat->size[1],
                                    &g_emlrtBCI, (emlrtCTX)sp);
    }
    st.site = &b_emlrtRSI;
    EOE2COE(&st, *(real_T(*)[6]) & yhat_data[6 * k], yCOE);
    st.site = &c_emlrtRSI;
    earthNonSphericity(yCOE, &scale, &y, &DJ2n);
    st.site = &d_emlrtRSI;
    drag(&st, yCOE, &absxk, &w);
    st.site = &e_emlrtRSI;
    moonDisturbance(&st, yCOE, ((real_T)k + 1.0) * Ts, xp, yp, zp, &t, &p_mu05,
                    &Dmoon_n);
    if (k + 1 > b_m->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, b_m->size[1], &i_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((int32_T)(k + 1U) > b_m->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, b_m->size[1],
                                    &s_emlrtBCI, (emlrtCTX)sp);
    }
    a = Tmax / m_data[k] / 1000.0;
    if (k + 1 > dir->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, dir->size[1], &j_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((int32_T)(k + 1U) > u->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, u->size[1], &emlrtBCI,
                                    (emlrtCTX)sp);
    }
    u_data[3 * k] = a * dir_data[3 * k];
    yCOE_tmp = 3 * k + 1;
    u_data[yCOE_tmp] = a * dir_data[yCOE_tmp];
    b_yCOE_tmp = 3 * k + 2;
    u_data[b_yCOE_tmp] = a * dir_data[b_yCOE_tmp];
    st.site = &f_emlrtRSI;
    if (k + 1 > yhat->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, yhat->size[1], &l_emlrtBCI, &st);
    }
    if ((int32_T)(k + 1U) > u->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, u->size[1],
                                    &m_emlrtBCI, &st);
    }
    m = m_data[k];
    DJ2r_idx_0 = u_data[3 * k] + ((scale + absxk) + t) / m;
    DJ2r_idx_1 = u_data[yCOE_tmp] + ((y + w) + p_mu05) / m;
    absxk = u_data[b_yCOE_tmp] + (DJ2n + Dmoon_n) / m;
    /* EOEDerivatives Compute the derivative of the EOE state */
    /*  */
    /*    Inputs: */
    /*        - Time (Unused but necessary for built-in ode integration) */
    /*        - State vector */
    /*        - Acceleration vector */
    /*        - Planetary constant (for Earth use 398600) */
    /*  Equinoctial Orbital Elements */
    scale = yhat_data[6 * k];
    if (yhat_data[6 * k] < 0.0) {
      scale = -yhat_data[6 * k];
    }
    /*  Accelerations */
    /*  Definition of useful values */
    last = 6 * k + 5;
    t = muDoubleScalarSin(yhat_data[last]);
    y = muDoubleScalarCos(yhat_data[last]);
    idx = 6 * k + 1;
    w_tmp = 6 * k + 2;
    w = (yhat_data[idx] * y + 1.0) + yhat_data[w_tmp] * t;
    b_st.site = &ib_emlrtRSI;
    c_st.site = &o_emlrtRSI;
    d_st.site = &p_emlrtRSI;
    b_st.site = &ib_emlrtRSI;
    c_st.site = &o_emlrtRSI;
    d_st.site = &p_emlrtRSI;
    p_mu05 = scale / 398600.0;
    b_st.site = &jb_emlrtRSI;
    if (p_mu05 < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &f_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    p_mu05 = muDoubleScalarSqrt(p_mu05);
    /*  State Derivative Calculation */
    b_st.site = &kb_emlrtRSI;
    a = w / scale;
    c_st.site = &o_emlrtRSI;
    d_st.site = &p_emlrtRSI;
    m = 398600.0 * scale;
    b_st.site = &kb_emlrtRSI;
    if (m < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &f_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    m = muDoubleScalarSqrt(m);
    if ((int32_T)(k + 1U) > yhat->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, yhat->size[1],
                                    &k_emlrtBCI, (emlrtCTX)sp);
    }
    yCOE[0] = Ts * (2.0 * scale / w * p_mu05 * DJ2r_idx_1);
    yCOE_tmp = 6 * k + 3;
    b_yCOE_tmp = 6 * k + 4;
    yCOE[1] =
        Ts * (p_mu05 * ((DJ2r_idx_0 * t +
                         ((w + 1.0) * y + yhat_data[idx]) * DJ2r_idx_1 / w) -
                        (yhat_data[yCOE_tmp] * t - yhat_data[b_yCOE_tmp] * y) *
                            yhat_data[w_tmp] * absxk / w));
    yCOE[2] =
        Ts * (p_mu05 *
              ((-DJ2r_idx_0 * y +
                ((w + 1.0) * t + yhat_data[w_tmp]) * DJ2r_idx_1 / w) +
               (yhat_data[yCOE_tmp] * muDoubleScalarSin(yhat_data[last]) -
                yhat_data[b_yCOE_tmp] * muDoubleScalarCos(yhat_data[last])) *
                   yhat_data[w_tmp] * absxk / w));
    scale = p_mu05 *
            ((yhat_data[yCOE_tmp] * yhat_data[yCOE_tmp] + 1.0) +
             yhat_data[b_yCOE_tmp] * yhat_data[b_yCOE_tmp]) *
            absxk / 2.0 / w;
    yCOE[3] = Ts * (scale * y);
    yCOE[4] = Ts * (scale * t);
    yCOE[5] =
        Ts * (m * (a * a) +
              p_mu05 / w *
                  (yhat_data[yCOE_tmp] * muDoubleScalarSin(yhat_data[last]) -
                   yhat_data[b_yCOE_tmp] * muDoubleScalarCos(yhat_data[last])) *
                  absxk);
    if (((int32_T)(k + 2U) < 1) || ((int32_T)(k + 2U) > yhat->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 2U), 1, yhat->size[1],
                                    &n_emlrtBCI, (emlrtCTX)sp);
    }
    for (yCOE_tmp = 0; yCOE_tmp < 6; yCOE_tmp++) {
      yCOE[yCOE_tmp] += yhat_data[yCOE_tmp + 6 * k];
    }
    for (yCOE_tmp = 0; yCOE_tmp < 6; yCOE_tmp++) {
      yhat_data[yCOE_tmp + 6 * (k + 1)] = yCOE[yCOE_tmp];
    }
    st.site = &g_emlrtRSI;
    if (R < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &f_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    if ((int32_T)(k + 1U) > cons->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, cons->size[0],
                                    &u_emlrtBCI, (emlrtCTX)sp);
    }
    if ((int32_T)(k + 1U) > b_F->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, b_F->size[0],
                                    &v_emlrtBCI, (emlrtCTX)sp);
    }
    F_data[k] = muDoubleScalarSqrt(R) * cons_data[k];
    m = (M + 6.0 * (((real_T)k + 1.0) - 1.0)) + 1.0;
    scale = M + 6.0 * ((real_T)k + 1.0);
    if (m > scale) {
      yCOE_tmp = 0;
      b_yCOE_tmp = 0;
    } else {
      if (((int32_T)m < 1) || ((int32_T)m > b_F->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)m, 1, b_F->size[0], &q_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      yCOE_tmp = (int32_T)m - 1;
      if (((int32_T)scale < 1) || ((int32_T)scale > b_F->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)scale, 1, b_F->size[0],
                                      &r_emlrtBCI, (emlrtCTX)sp);
      }
      b_yCOE_tmp = (int32_T)scale;
    }
    last = b_yCOE_tmp - yCOE_tmp;
    emlrtSubAssignSizeCheckR2012b(&last, 1, &F_tmp, 1, &e_emlrtECI,
                                  (emlrtCTX)sp);
    memcpy(&b_a[0], &Q[0], 36U * sizeof(real_T));
    st.site = &h_emlrtRSI;
    b_sqrt(&st, b_a);
    if (k + 1 > yref->size[1]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, yref->size[1], &o_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((k + 2 < 1) || (k + 2 > yhat->size[1])) {
      emlrtDynamicBoundsCheckR2012b(k + 2, 1, yhat->size[1], &p_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (b_yCOE_tmp = 0; b_yCOE_tmp < 6; b_yCOE_tmp++) {
      yCOE[b_yCOE_tmp] =
          yref_data[b_yCOE_tmp + 6 * k] - yhat_data[b_yCOE_tmp + 6 * (k + 1)];
    }
    for (b_yCOE_tmp = 0; b_yCOE_tmp < 6; b_yCOE_tmp++) {
      m = 0.0;
      for (w_tmp = 0; w_tmp < 6; w_tmp++) {
        m += b_a[b_yCOE_tmp + 6 * w_tmp] * yCOE[w_tmp];
      }
      c_a[b_yCOE_tmp] = m;
    }
    for (b_yCOE_tmp = 0; b_yCOE_tmp < last; b_yCOE_tmp++) {
      F_data[yCOE_tmp + b_yCOE_tmp] = c_a[b_yCOE_tmp];
    }
    if (k + 1 < loop_ub_tmp) {
      if ((int32_T)(k + 1U) > b_m->size[1]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, b_m->size[1],
                                      &w_emlrtBCI, (emlrtCTX)sp);
      }
      if ((int32_T)(k + 1U) > cons->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, cons->size[0],
                                      &x_emlrtBCI, (emlrtCTX)sp);
      }
      if (((int32_T)(k + 2U) < 1) || ((int32_T)(k + 2U) > b_m->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 2U), 1, b_m->size[1],
                                      &y_emlrtBCI, (emlrtCTX)sp);
      }
      m_data[k + 1] = m_data[k] - Ts * cons_data[k] * coeffT;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(sp, &dir);
  emxFree_real_T(sp, &u);
  emxInit_real_T(sp, &b_yhat, 2, &r_emlrtRTEI);
  last = yhat->size[1];
  yCOE_tmp = b_yhat->size[0] * b_yhat->size[1];
  b_yhat->size[0] = 1;
  b_yhat->size[1] = yhat->size[1];
  emxEnsureCapacity_real_T(sp, b_yhat, yCOE_tmp, &r_emlrtRTEI);
  u_data = b_yhat->data;
  for (yCOE_tmp = 0; yCOE_tmp < last; yCOE_tmp++) {
    u_data[yCOE_tmp] = yhat_data[6 * yCOE_tmp + 1];
  }
  emxInit_real_T(sp, &b_y, 2, &w_emlrtRTEI);
  st.site = &i_emlrtRSI;
  power(&st, b_yhat, b_y);
  last = yhat->size[1];
  yCOE_tmp = b_yhat->size[0] * b_yhat->size[1];
  b_yhat->size[0] = 1;
  b_yhat->size[1] = yhat->size[1];
  emxEnsureCapacity_real_T(sp, b_yhat, yCOE_tmp, &s_emlrtRTEI);
  u_data = b_yhat->data;
  for (yCOE_tmp = 0; yCOE_tmp < last; yCOE_tmp++) {
    u_data[yCOE_tmp] = yhat_data[6 * yCOE_tmp + 2];
  }
  st.site = &i_emlrtRSI;
  power(&st, b_yhat, b_m);
  m_data = b_m->data;
  if ((b_y->size[1] != b_m->size[1]) &&
      ((b_y->size[1] != 1) && (b_m->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_y->size[1], b_m->size[1], &b_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &i_emlrtRSI;
  b_st.site = &ob_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  last = yhat->size[1];
  yCOE_tmp = b_yhat->size[0] * b_yhat->size[1];
  b_yhat->size[0] = 1;
  b_yhat->size[1] = yhat->size[1];
  emxEnsureCapacity_real_T(&c_st, b_yhat, yCOE_tmp, &t_emlrtRTEI);
  u_data = b_yhat->data;
  for (yCOE_tmp = 0; yCOE_tmp < last; yCOE_tmp++) {
    scale = yhat_data[6 * yCOE_tmp + 2];
    absxk = yhat_data[6 * yCOE_tmp + 1];
    u_data[yCOE_tmp] = muDoubleScalarAtan2(scale, absxk);
  }
  if ((yhat->size[1] != b_yhat->size[1]) &&
      ((yhat->size[1] != 1) && (b_yhat->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(yhat->size[1], b_yhat->size[1], &c_emlrtECI,
                                (emlrtCTX)sp);
  }
  if (b_y->size[1] == b_m->size[1]) {
    last = b_y->size[1] - 1;
    yCOE_tmp = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    emxEnsureCapacity_real_T(sp, b_y, yCOE_tmp, &u_emlrtRTEI);
    dir_data = b_y->data;
    for (yCOE_tmp = 0; yCOE_tmp <= last; yCOE_tmp++) {
      dir_data[yCOE_tmp] += m_data[yCOE_tmp];
    }
  } else {
    plus(sp, b_y, b_m);
  }
  emxFree_real_T(sp, &b_m);
  st.site = &i_emlrtRSI;
  c_sqrt(&st, b_y);
  if (yhat->size[1] == b_yhat->size[1]) {
    last = yhat->size[1];
    yCOE_tmp = b_yhat->size[0] * b_yhat->size[1];
    b_yhat->size[0] = 1;
    b_yhat->size[1] = yhat->size[1];
    emxEnsureCapacity_real_T(sp, b_yhat, yCOE_tmp, &v_emlrtRTEI);
    u_data = b_yhat->data;
    for (yCOE_tmp = 0; yCOE_tmp < last; yCOE_tmp++) {
      u_data[yCOE_tmp] = yhat_data[6 * yCOE_tmp + 5] - u_data[yCOE_tmp];
    }
  } else {
    c_binary_expand_op(sp, b_yhat, yhat);
  }
  st.site = &i_emlrtRSI;
  b_cos(&st, b_yhat);
  u_data = b_yhat->data;
  if ((b_y->size[1] != b_yhat->size[1]) &&
      ((b_y->size[1] != 1) && (b_yhat->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_y->size[1], b_yhat->size[1], &d_emlrtECI,
                                (emlrtCTX)sp);
  }
  st.site = &i_emlrtRSI;
  if (b_y->size[1] == b_yhat->size[1]) {
    last = b_y->size[1] - 1;
    yCOE_tmp = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    emxEnsureCapacity_real_T(&st, b_y, yCOE_tmp, &w_emlrtRTEI);
    dir_data = b_y->data;
    for (yCOE_tmp = 0; yCOE_tmp <= last; yCOE_tmp++) {
      dir_data[yCOE_tmp] = dir_data[yCOE_tmp] * u_data[yCOE_tmp] + 1.0;
    }
  } else {
    b_st.site = &i_emlrtRSI;
    b_binary_expand_op(&b_st, b_y, b_yhat);
    dir_data = b_y->data;
  }
  b_st.site = &rb_emlrtRSI;
  last = yhat->size[1];
  yCOE_tmp = b_yhat->size[0] * b_yhat->size[1];
  b_yhat->size[0] = 1;
  b_yhat->size[1] = yhat->size[1];
  emxEnsureCapacity_real_T(&b_st, b_yhat, yCOE_tmp, &x_emlrtRTEI);
  u_data = b_yhat->data;
  for (yCOE_tmp = 0; yCOE_tmp < last; yCOE_tmp++) {
    u_data[yCOE_tmp] = yhat_data[6 * yCOE_tmp];
  }
  c_st.site = &sb_emlrtRSI;
  assertCompatibleDims(&c_st, b_yhat, b_y);
  st.site = &i_emlrtRSI;
  emxFree_real_T(&st, &b_yhat);
  emxInit_real_T(&st, &varargin_1, 1, &y_emlrtRTEI);
  if (yhat->size[1] == b_y->size[1]) {
    last = yhat->size[1];
    yCOE_tmp = varargin_1->size[0];
    varargin_1->size[0] = yhat->size[1];
    emxEnsureCapacity_real_T(&st, varargin_1, yCOE_tmp, &y_emlrtRTEI);
    u_data = varargin_1->data;
    for (yCOE_tmp = 0; yCOE_tmp < last; yCOE_tmp++) {
      u_data[yCOE_tmp] = yhat_data[6 * yCOE_tmp] / dir_data[yCOE_tmp];
    }
  } else {
    b_st.site = &i_emlrtRSI;
    binary_expand_op(&b_st, varargin_1, yhat, b_y);
    u_data = varargin_1->data;
  }
  emxFree_real_T(&st, &b_y);
  emxFree_real_T(&st, &yhat);
  b_st.site = &tb_emlrtRSI;
  c_st.site = &ub_emlrtRSI;
  d_st.site = &vb_emlrtRSI;
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &d_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &wb_emlrtRSI;
  f_st.site = &xb_emlrtRSI;
  last = varargin_1->size[0];
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      absxk = u_data[0];
    } else if ((u_data[0] > u_data[1]) || (muDoubleScalarIsNaN(u_data[0]) &&
                                           (!muDoubleScalarIsNaN(u_data[1])))) {
      absxk = u_data[1];
    } else {
      absxk = u_data[0];
    }
  } else {
    g_st.site = &ac_emlrtRSI;
    if (!muDoubleScalarIsNaN(u_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &bc_emlrtRSI;
      if (varargin_1->size[0] > 2147483646) {
        i_st.site = &nb_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(u_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      absxk = u_data[0];
    } else {
      g_st.site = &yb_emlrtRSI;
      absxk = u_data[idx - 1];
      w_tmp = idx + 1;
      h_st.site = &cc_emlrtRSI;
      if ((idx + 1 <= varargin_1->size[0]) &&
          (varargin_1->size[0] > 2147483646)) {
        i_st.site = &nb_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = w_tmp; k <= last; k++) {
        m = u_data[k - 1];
        if (absxk > m) {
          absxk = m;
        }
      }
    }
  }
  emxFree_real_T(&f_st, &varargin_1);
  st.site = &j_emlrtRSI;
  b_st.site = &dc_emlrtRSI;
  dynamic_size_checks(&b_st, b_F, b_F, b_F->size[0], b_F->size[0]);
  if (b_F->size[0] < 1) {
    scale = 0.0;
  } else {
    n_t = (ptrdiff_t)b_F->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    scale = ddot(&n_t, &F_data[0], &incx_t, &F_data[0], &incy_t);
  }
  yCOE_tmp = J->size[0];
  J->size[0] = (cons->size[0] + b_F->size[0]) + 2;
  emxEnsureCapacity_real_T(sp, J, yCOE_tmp, &ab_emlrtRTEI);
  u_data = J->data;
  u_data[0] = scale;
  u_data[1] = absxk - 6378.1;
  last = cons->size[0];
  for (yCOE_tmp = 0; yCOE_tmp < last; yCOE_tmp++) {
    u_data[yCOE_tmp + 2] = 1.0 - cons_data[yCOE_tmp];
  }
  last = b_F->size[0];
  for (yCOE_tmp = 0; yCOE_tmp < last; yCOE_tmp++) {
    u_data[(yCOE_tmp + cons->size[0]) + 2] = F_data[yCOE_tmp];
  }
  emxFree_real_T(sp, &b_F);
  emxFree_real_T(sp, &cons);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (NMPC_costNewDist.c) */
