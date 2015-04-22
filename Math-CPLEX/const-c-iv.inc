#define PERL_constant_NOTFOUND	1
#define PERL_constant_NOTDEF	2
#define PERL_constant_ISIV	3
#define PERL_constant_ISNO	4
#define PERL_constant_ISNV	5
#define PERL_constant_ISPV	6
#define PERL_constant_ISPVN	7
#define PERL_constant_ISSV	8
#define PERL_constant_ISUNDEF	9
#define PERL_constant_ISUV	10
#define PERL_constant_ISYES	11

#ifndef NVTYPE
typedef double NV; /* 5.6 and later define NVTYPE, and typedef NV to it.  */
#endif
#ifndef aTHX_
#define aTHX_ /* 5.6 or later define this for threading support.  */
#endif
#ifndef pTHX_
#define pTHX_ /* 5.6 or later define this for threading support.  */
#endif

static int
iv_constant_7 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPX_MAX CPX_MIN CPX_OFF */
  /* Offset 5 gives the best switch position.  */
  switch (name[5]) {
  case 'A':
    if (memEQ(name, "CPX_MAX", 7)) {
    /*                    ^       */
#ifdef CPX_MAX
      *nv_return = CPX_MAX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "CPX_OFF", 7)) {
    /*                    ^       */
#ifdef CPX_OFF
      *nv_return = CPX_OFF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPX_MIN", 7)) {
    /*                    ^       */
#ifdef CPX_MIN
      *nv_return = CPX_MIN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_9 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPX_BASIC CPX_KAPPA CPX_MAX_X CPX_SUM_X */
  /* Offset 6 gives the best switch position.  */
  switch (name[6]) {
  case 'M':
    if (memEQ(name, "CPX_SUM_X", 9)) {
    /*                     ^        */
#ifdef CPX_SUM_X
      *nv_return = CPX_SUM_X;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPX_KAPPA", 9)) {
    /*                     ^        */
#ifdef CPX_KAPPA
      *nv_return = CPX_KAPPA;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPX_BASIC", 9)) {
    /*                     ^        */
#ifdef CPX_BASIC
      *nv_return = CPX_BASIC;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'X':
    if (memEQ(name, "CPX_MAX_X", 9)) {
    /*                     ^        */
#ifdef CPX_MAX_X
      *nv_return = CPX_MAX_X;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_10 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_NAN CPXPROB_LP CPXPROB_QP CPX_BIGINT CPX_BINARY CPX_MAX_PI
     CPX_SUM_PI */
  /* Offset 8 gives the best switch position.  */
  switch (name[8]) {
  case 'A':
    if (memEQ(name, "CPXERR_NAN", 10)) {
    /*                       ^        */
#ifdef CPXERR_NAN
      *nv_return = CPXERR_NAN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPXPROB_LP", 10)) {
    /*                       ^        */
#ifdef CPXPROB_LP
      *nv_return = CPXPROB_LP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPX_BIGINT", 10)) {
    /*                       ^        */
#ifdef CPX_BIGINT
      *nv_return = CPX_BIGINT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPX_MAX_PI", 10)) {
    /*                       ^        */
#ifdef CPX_MAX_PI
      *nv_return = CPX_MAX_PI;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_PI", 10)) {
    /*                       ^        */
#ifdef CPX_SUM_PI
      *nv_return = CPX_SUM_PI;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Q':
    if (memEQ(name, "CPXPROB_QP", 10)) {
    /*                       ^        */
#ifdef CPXPROB_QP
      *nv_return = CPXPROB_QP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPX_BINARY", 10)) {
    /*                       ^        */
#ifdef CPX_BINARY
      *nv_return = CPX_BINARY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_11 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXPROB_QCP CPX_ALG_MIP CPX_ALG_NET CPX_BIGLONG CPX_CON_ABS CPX_CON_PWL
     CPX_CON_SOS CPX_CUT_MCF CPX_CUT_MIR CPX_INTEGER CPX_NO_SOLN CPX_OBJ_GAP
     CPX_SEMIINT CPX_VERSION */
  /* Offset 9 gives the best switch position.  */
  switch (name[9]) {
  case 'A':
    if (memEQ(name, "CPX_OBJ_GAP", 11)) {
    /*                        ^        */
#ifdef CPX_OBJ_GAP
      *nv_return = CPX_OBJ_GAP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "CPX_CON_ABS", 11)) {
    /*                        ^        */
#ifdef CPX_CON_ABS
      *nv_return = CPX_CON_ABS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "CPXPROB_QCP", 11)) {
    /*                        ^        */
#ifdef CPXPROB_QCP
      *nv_return = CPXPROB_QCP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CUT_MCF", 11)) {
    /*                        ^        */
#ifdef CPX_CUT_MCF
      *nv_return = CPX_CUT_MCF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPX_ALG_NET", 11)) {
    /*                        ^        */
#ifdef CPX_ALG_NET
      *nv_return = CPX_ALG_NET;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_INTEGER", 11)) {
    /*                        ^        */
#ifdef CPX_INTEGER
      *nv_return = CPX_INTEGER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPX_ALG_MIP", 11)) {
    /*                        ^        */
#ifdef CPX_ALG_MIP
      *nv_return = CPX_ALG_MIP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CUT_MIR", 11)) {
    /*                        ^        */
#ifdef CPX_CUT_MIR
      *nv_return = CPX_CUT_MIR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPX_NO_SOLN", 11)) {
    /*                        ^        */
#ifdef CPX_NO_SOLN
      *nv_return = CPX_NO_SOLN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPX_BIGLONG", 11)) {
    /*                        ^        */
#ifdef CPX_BIGLONG
      *nv_return = CPX_BIGLONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SEMIINT", 11)) {
    /*                        ^        */
#ifdef CPX_SEMIINT
      *nv_return = CPX_SEMIINT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPX_CON_SOS", 11)) {
    /*                        ^        */
#ifdef CPX_CON_SOS
      *nv_return = CPX_CON_SOS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_VERSION", 11)) {
    /*                        ^        */
#ifdef CPX_VERSION
      *nv_return = CPX_VERSION;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "CPX_CON_PWL", 11)) {
    /*                        ^        */
#ifdef CPX_CON_PWL
      *nv_return = CPX_CON_PWL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_12 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_NO_ID CPXIIS_FIXED CPXPROB_MILP CPXPROB_MIQP CPX_ALG_DUAL
     CPX_ALG_NONE CPX_AT_LOWER CPX_AT_UPPER CPX_BRDIR_UP CPX_CUT_DISJ
     CPX_CUT_FRAC CPX_CUT_USER CPX_DUAL_OBJ CPX_SEMICONT CPX_TYPE_ANY
     CPX_TYPE_VAR */
  /* Offset 8 gives the best switch position.  */
  switch (name[8]) {
  case 'C':
    if (memEQ(name, "CPX_SEMICONT", 12)) {
    /*                       ^          */
#ifdef CPX_SEMICONT
      *nv_return = CPX_SEMICONT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "CPX_ALG_DUAL", 12)) {
    /*                       ^          */
#ifdef CPX_ALG_DUAL
      *nv_return = CPX_ALG_DUAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CUT_DISJ", 12)) {
    /*                       ^          */
#ifdef CPX_CUT_DISJ
      *nv_return = CPX_CUT_DISJ;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "CPX_CUT_FRAC", 12)) {
    /*                       ^          */
#ifdef CPX_CUT_FRAC
      *nv_return = CPX_CUT_FRAC;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPXIIS_FIXED", 12)) {
    /*                       ^          */
#ifdef CPXIIS_FIXED
      *nv_return = CPXIIS_FIXED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "CPXPROB_MILP", 12)) {
    /*                       ^          */
#ifdef CPXPROB_MILP
      *nv_return = CPXPROB_MILP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXPROB_MIQP", 12)) {
    /*                       ^          */
#ifdef CPXPROB_MIQP
      *nv_return = CPXPROB_MIQP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPX_ALG_NONE", 12)) {
    /*                       ^          */
#ifdef CPX_ALG_NONE
      *nv_return = CPX_ALG_NONE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPXERR_NO_ID", 12)) {
    /*                       ^          */
#ifdef CPXERR_NO_ID
      *nv_return = CPXERR_NO_ID;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_AT_LOWER", 12)) {
    /*                       ^          */
#ifdef CPX_AT_LOWER
      *nv_return = CPX_AT_LOWER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPX_AT_UPPER", 12)) {
    /*                       ^          */
#ifdef CPX_AT_UPPER
      *nv_return = CPX_AT_UPPER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPX_BRDIR_UP", 12)) {
    /*                       ^          */
#ifdef CPX_BRDIR_UP
      *nv_return = CPX_BRDIR_UP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "CPX_CUT_USER", 12)) {
    /*                       ^          */
#ifdef CPX_CUT_USER
      *nv_return = CPX_CUT_USER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "CPX_DUAL_OBJ", 12)) {
    /*                       ^          */
#ifdef CPX_DUAL_OBJ
      *nv_return = CPX_DUAL_OBJ;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_TYPE_ANY", 12)) {
    /*                       ^          */
#ifdef CPX_TYPE_ANY
      *nv_return = CPX_TYPE_ANY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_TYPE_VAR", 12)) {
    /*                       ^          */
#ifdef CPX_TYPE_VAR
      *nv_return = CPX_TYPE_VAR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_13 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_BAD_ID CPXERR_NOT_QP CPXERR_NO_SOS CPXERR_PRIIND CPXPROB_MIQCP
     CPX_ALG_PIVOT CPX_BRANCH_UP CPX_CUT_COVER CPX_CUT_TABLE CPX_KAPPA_MAX
     CPX_MAX_SLACK CPX_PRECOL_UP CPX_SUM_SLACK CPX_TYPE_SOS1 CPX_TYPE_SOS2
     CPX_TYPE_USER */
  /* Offset 11 gives the best switch position.  */
  switch (name[11]) {
  case 'A':
    if (memEQ(name, "CPX_KAPPA_MAX", 13)) {
    /*                          ^        */
#ifdef CPX_KAPPA_MAX
      *nv_return = CPX_KAPPA_MAX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "CPXPROB_MIQCP", 13)) {
    /*                          ^        */
#ifdef CPXPROB_MIQCP
      *nv_return = CPXPROB_MIQCP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MAX_SLACK", 13)) {
    /*                          ^        */
#ifdef CPX_MAX_SLACK
      *nv_return = CPX_MAX_SLACK;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_SLACK", 13)) {
    /*                          ^        */
#ifdef CPX_SUM_SLACK
      *nv_return = CPX_SUM_SLACK;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPX_CUT_COVER", 13)) {
    /*                          ^        */
#ifdef CPX_CUT_COVER
      *nv_return = CPX_CUT_COVER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_TYPE_USER", 13)) {
    /*                          ^        */
#ifdef CPX_TYPE_USER
      *nv_return = CPX_TYPE_USER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPXERR_BAD_ID", 13)) {
    /*                          ^        */
#ifdef CPXERR_BAD_ID
      *nv_return = CPXERR_BAD_ID;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPX_CUT_TABLE", 13)) {
    /*                          ^        */
#ifdef CPX_CUT_TABLE
      *nv_return = CPX_CUT_TABLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPXERR_PRIIND", 13)) {
    /*                          ^        */
#ifdef CPXERR_PRIIND
      *nv_return = CPXERR_PRIIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPXERR_NO_SOS", 13)) {
    /*                          ^        */
#ifdef CPXERR_NO_SOS
      *nv_return = CPXERR_NO_SOS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_ALG_PIVOT", 13)) {
    /*                          ^        */
#ifdef CPX_ALG_PIVOT
      *nv_return = CPX_ALG_PIVOT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Q':
    if (memEQ(name, "CPXERR_NOT_QP", 13)) {
    /*                          ^        */
#ifdef CPXERR_NOT_QP
      *nv_return = CPXERR_NOT_QP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPX_TYPE_SOS1", 13)) {
    /*                          ^        */
#ifdef CPX_TYPE_SOS1
      *nv_return = CPX_TYPE_SOS1;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_TYPE_SOS2", 13)) {
    /*                          ^        */
#ifdef CPX_TYPE_SOS2
      *nv_return = CPX_TYPE_SOS2;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "CPX_BRANCH_UP", 13)) {
    /*                          ^        */
#ifdef CPX_BRANCH_UP
      *nv_return = CPX_BRANCH_UP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PRECOL_UP", 13)) {
    /*                          ^        */
#ifdef CPX_PRECOL_UP
      *nv_return = CPX_PRECOL_UP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_14 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_BAD_LUB CPXERR_DBL_MAX CPXERR_DYNFUNC CPXERR_DYNLOAD CPXERR_FILE_IO
     CPXERR_NOT_MIP CPXERR_NO_SOLN CPXERR_NO_TREE CPXERR_SYSCALL CPXIIS_PARTIAL
     CPXMIP_OPTIMAL CPXMIP_SOL_LIM CPXPROB_NODELP CPXPROB_NODEQP CPX_ALG_BAROPT
     CPX_ALG_PRIMAL CPX_ALG_ROBUST CPX_BASIC_SOLN CPX_BRDIR_AUTO CPX_BRDIR_DOWN
     CPX_CONTINUOUS CPX_CON_LINEAR CPX_CON_SETVAR CPX_CUT_CLIQUE CPX_CUT_IMPLBD
     CPX_FREE_SUPER CPX_PRECOL_AGG CPX_PRECOL_FIX CPX_PRECOL_LOW CPX_PREROW_AGG
     CPX_PREROW_RED CPX_PRIMAL_OBJ CPX_TUNE_ABORT CPX_TUNE_TILIM */
  /* Offset 13 gives the best switch position.  */
  switch (name[13]) {
  case 'B':
    if (memEQ(name, "CPXERR_BAD_LU", 13)) {
    /*                            B      */
#ifdef CPXERR_BAD_LUB
      *nv_return = CPXERR_BAD_LUB;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "CPXERR_DYNFUN", 13)) {
    /*                            C      */
#ifdef CPXERR_DYNFUNC
      *nv_return = CPXERR_DYNFUNC;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "CPXERR_DYNLOA", 13)) {
    /*                            D      */
#ifdef CPXERR_DYNLOAD
      *nv_return = CPXERR_DYNLOAD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CUT_IMPLB", 13)) {
    /*                            D      */
#ifdef CPX_CUT_IMPLBD
      *nv_return = CPX_CUT_IMPLBD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PREROW_RE", 13)) {
    /*                            D      */
#ifdef CPX_PREROW_RED
      *nv_return = CPX_PREROW_RED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPXERR_NO_TRE", 13)) {
    /*                            E      */
#ifdef CPXERR_NO_TREE
      *nv_return = CPXERR_NO_TREE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CUT_CLIQU", 13)) {
    /*                            E      */
#ifdef CPX_CUT_CLIQUE
      *nv_return = CPX_CUT_CLIQUE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "CPX_PRECOL_AG", 13)) {
    /*                            G      */
#ifdef CPX_PRECOL_AGG
      *nv_return = CPX_PRECOL_AGG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PREROW_AG", 13)) {
    /*                            G      */
#ifdef CPX_PREROW_AGG
      *nv_return = CPX_PREROW_AGG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'J':
    if (memEQ(name, "CPX_PRIMAL_OB", 13)) {
    /*                            J      */
#ifdef CPX_PRIMAL_OBJ
      *nv_return = CPX_PRIMAL_OBJ;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPXERR_SYSCAL", 13)) {
    /*                            L      */
#ifdef CPXERR_SYSCALL
      *nv_return = CPXERR_SYSCALL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXIIS_PARTIA", 13)) {
    /*                            L      */
#ifdef CPXIIS_PARTIAL
      *nv_return = CPXIIS_PARTIAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXMIP_OPTIMA", 13)) {
    /*                            L      */
#ifdef CPXMIP_OPTIMAL
      *nv_return = CPXMIP_OPTIMAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_ALG_PRIMA", 13)) {
    /*                            L      */
#ifdef CPX_ALG_PRIMAL
      *nv_return = CPX_ALG_PRIMAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "CPXMIP_SOL_LI", 13)) {
    /*                            M      */
#ifdef CPXMIP_SOL_LIM
      *nv_return = CPXMIP_SOL_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_TUNE_TILI", 13)) {
    /*                            M      */
#ifdef CPX_TUNE_TILIM
      *nv_return = CPX_TUNE_TILIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPXERR_NO_SOL", 13)) {
    /*                            N      */
#ifdef CPXERR_NO_SOLN
      *nv_return = CPXERR_NO_SOLN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_BASIC_SOL", 13)) {
    /*                            N      */
#ifdef CPX_BASIC_SOLN
      *nv_return = CPX_BASIC_SOLN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_BRDIR_DOW", 13)) {
    /*                            N      */
#ifdef CPX_BRDIR_DOWN
      *nv_return = CPX_BRDIR_DOWN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPXERR_FILE_I", 13)) {
    /*                            O      */
#ifdef CPXERR_FILE_IO
      *nv_return = CPXERR_FILE_IO;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_BRDIR_AUT", 13)) {
    /*                            O      */
#ifdef CPX_BRDIR_AUTO
      *nv_return = CPX_BRDIR_AUTO;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPXERR_NOT_MI", 13)) {
    /*                            P      */
#ifdef CPXERR_NOT_MIP
      *nv_return = CPXERR_NOT_MIP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXPROB_NODEL", 13)) {
    /*                            P      */
#ifdef CPXPROB_NODELP
      *nv_return = CPXPROB_NODELP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXPROB_NODEQ", 13)) {
    /*                            P      */
#ifdef CPXPROB_NODEQP
      *nv_return = CPXPROB_NODEQP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPX_CON_LINEA", 13)) {
    /*                            R      */
#ifdef CPX_CON_LINEAR
      *nv_return = CPX_CON_LINEAR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CON_SETVA", 13)) {
    /*                            R      */
#ifdef CPX_CON_SETVAR
      *nv_return = CPX_CON_SETVAR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_FREE_SUPE", 13)) {
    /*                            R      */
#ifdef CPX_FREE_SUPER
      *nv_return = CPX_FREE_SUPER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPX_CONTINUOU", 13)) {
    /*                            S      */
#ifdef CPX_CONTINUOUS
      *nv_return = CPX_CONTINUOUS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "CPX_ALG_BAROP", 13)) {
    /*                            T      */
#ifdef CPX_ALG_BAROPT
      *nv_return = CPX_ALG_BAROPT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_ALG_ROBUS", 13)) {
    /*                            T      */
#ifdef CPX_ALG_ROBUST
      *nv_return = CPX_ALG_ROBUST;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_TUNE_ABOR", 13)) {
    /*                            T      */
#ifdef CPX_TUNE_ABORT
      *nv_return = CPX_TUNE_ABORT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "CPX_PRECOL_LO", 13)) {
    /*                            W      */
#ifdef CPX_PRECOL_LOW
      *nv_return = CPX_PRECOL_LOW;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'X':
    if (memEQ(name, "CPXERR_DBL_MA", 13)) {
    /*                            X      */
#ifdef CPXERR_DBL_MAX
      *nv_return = CPXERR_DBL_MAX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PRECOL_FI", 13)) {
    /*                            X      */
#ifdef CPX_PRECOL_FIX
      *nv_return = CPX_PRECOL_FIX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_15 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_BADLDWID CPXERR_BAD_CHAR CPXERR_CALLBACK CPXERR_IIS_FEAS
     CPXERR_NET_DATA CPXERR_NO_BASIS CPXERR_NO_INT_X CPXERR_NO_NAMES
     CPXERR_NO_NORMS CPXERR_NO_ORDER CPXERR_OVERFLOW CPXERR_PRM_DATA
     CPXERR_PROTOCOL CPXERR_SINGULAR CPXERR_XMLPARSE CPXIIS_AT_LOWER
     CPXIIS_AT_UPPER CPXIIS_COMPLETE CPXMIP_FEASIBLE CPXPROB_NODEQCP
     CPX_ALG_BARRIER CPX_ALG_FEASOPT CPX_ALG_PIVOTIN CPX_ALG_SIFTING
     CPX_BARORDER_ND CPX_BRANCH_DOWN CPX_CONFLICT_LB CPX_CONFLICT_UB
     CPX_CON_DISJCST CPX_CON_MAXEXPR CPX_CON_MINEXPR CPX_CUT_OBJDISJ
     CPX_CUT_TIGHTEN CPX_EXACT_KAPPA CPX_MAX_QCSLACK CPX_NODESEL_DFS
     CPX_NO_VARIABLE CPX_PARAM_BRDIR CPX_PARAM_BTTOL CPX_PARAM_CUTLO
     CPX_PARAM_CUTUP CPX_PARAM_EPGAP CPX_PARAM_EPINT CPX_PARAM_EPLIN
     CPX_PARAM_EPMRK CPX_PARAM_EPOPT CPX_PARAM_EPPER CPX_PARAM_EPRHS
     CPX_PARAM_ITLIM CPX_PARAM_PROBE CPX_PARAM_REINV CPX_PARAM_TILIM
     CPX_PRIMAL_SOLN CPX_SUM_QCSLACK CPX_TUNE_MINMAX CPX_VERSION_FIX */
  /* Offset 12 gives the best switch position.  */
  switch (name[12]) {
  case 'A':
    if (memEQ(name, "CPXERR_CALLBACK", 15)) {
    /*                           ^         */
#ifdef CPXERR_CALLBACK
      *nv_return = CPXERR_CALLBACK;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NET_DATA", 15)) {
    /*                           ^         */
#ifdef CPXERR_NET_DATA
      *nv_return = CPXERR_NET_DATA;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_PRM_DATA", 15)) {
    /*                           ^         */
#ifdef CPXERR_PRM_DATA
      *nv_return = CPXERR_PRM_DATA;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MAX_QCSLACK", 15)) {
    /*                           ^         */
#ifdef CPX_MAX_QCSLACK
      *nv_return = CPX_MAX_QCSLACK;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_QCSLACK", 15)) {
    /*                           ^         */
#ifdef CPX_SUM_QCSLACK
      *nv_return = CPX_SUM_QCSLACK;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "CPXMIP_FEASIBLE", 15)) {
    /*                           ^         */
#ifdef CPXMIP_FEASIBLE
      *nv_return = CPXMIP_FEASIBLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_NO_VARIABLE", 15)) {
    /*                           ^         */
#ifdef CPX_NO_VARIABLE
      *nv_return = CPX_NO_VARIABLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "CPXERR_PROTOCOL", 15)) {
    /*                           ^         */
#ifdef CPXERR_PROTOCOL
      *nv_return = CPXERR_PROTOCOL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CON_DISJCST", 15)) {
    /*                           ^         */
#ifdef CPX_CON_DISJCST
      *nv_return = CPX_CON_DISJCST;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "CPXERR_NO_ORDER", 15)) {
    /*                           ^         */
#ifdef CPXERR_NO_ORDER
      *nv_return = CPXERR_NO_ORDER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_NODESEL_DFS", 15)) {
    /*                           ^         */
#ifdef CPX_NODESEL_DFS
      *nv_return = CPX_NODESEL_DFS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_BRDIR", 15)) {
    /*                           ^         */
#ifdef CPX_PARAM_BRDIR
      *nv_return = CPX_PARAM_BRDIR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPXERR_IIS_FEAS", 15)) {
    /*                           ^         */
#ifdef CPXERR_IIS_FEAS
      *nv_return = CPXERR_IIS_FEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXIIS_COMPLETE", 15)) {
    /*                           ^         */
#ifdef CPXIIS_COMPLETE
      *nv_return = CPXIIS_COMPLETE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "CPX_VERSION_FIX", 15)) {
    /*                           ^         */
#ifdef CPX_VERSION_FIX
      *nv_return = CPX_VERSION_FIX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "CPX_PARAM_EPGAP", 15)) {
    /*                           ^         */
#ifdef CPX_PARAM_EPGAP
      *nv_return = CPX_PARAM_EPGAP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "CPXERR_BAD_CHAR", 15)) {
    /*                           ^         */
#ifdef CPXERR_BAD_CHAR
      *nv_return = CPXERR_BAD_CHAR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPX_ALG_BARRIER", 15)) {
    /*                           ^         */
#ifdef CPX_ALG_BARRIER
      *nv_return = CPX_ALG_BARRIER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_ALG_SIFTING", 15)) {
    /*                           ^         */
#ifdef CPX_ALG_SIFTING
      *nv_return = CPX_ALG_SIFTING;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CUT_OBJDISJ", 15)) {
    /*                           ^         */
#ifdef CPX_CUT_OBJDISJ
      *nv_return = CPX_CUT_OBJDISJ;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_EPINT", 15)) {
    /*                           ^         */
#ifdef CPX_PARAM_EPINT
      *nv_return = CPX_PARAM_EPINT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_REINV", 15)) {
    /*                           ^         */
#ifdef CPX_PARAM_REINV
      *nv_return = CPX_PARAM_REINV;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPXERR_OVERFLOW", 15)) {
    /*                           ^         */
#ifdef CPXERR_OVERFLOW
      *nv_return = CPXERR_OVERFLOW;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_SINGULAR", 15)) {
    /*                           ^         */
#ifdef CPXERR_SINGULAR
      *nv_return = CPXERR_SINGULAR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_EPLIN", 15)) {
    /*                           ^         */
#ifdef CPX_PARAM_EPLIN
      *nv_return = CPX_PARAM_EPLIN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_ITLIM", 15)) {
    /*                           ^         */
#ifdef CPX_PARAM_ITLIM
      *nv_return = CPX_PARAM_ITLIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_TILIM", 15)) {
    /*                           ^         */
#ifdef CPX_PARAM_TILIM
      *nv_return = CPX_PARAM_TILIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "CPXERR_NO_NAMES", 15)) {
    /*                           ^         */
#ifdef CPXERR_NO_NAMES
      *nv_return = CPXERR_NO_NAMES;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_EPMRK", 15)) {
    /*                           ^         */
#ifdef CPX_PARAM_EPMRK
      *nv_return = CPX_PARAM_EPMRK;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_TUNE_MINMAX", 15)) {
    /*                           ^         */
#ifdef CPX_TUNE_MINMAX
      *nv_return = CPX_TUNE_MINMAX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPX_ALG_FEASOPT", 15)) {
    /*                           ^         */
#ifdef CPX_ALG_FEASOPT
      *nv_return = CPX_ALG_FEASOPT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_BRANCH_DOWN", 15)) {
    /*                           ^         */
#ifdef CPX_BRANCH_DOWN
      *nv_return = CPX_BRANCH_DOWN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_EPOPT", 15)) {
    /*                           ^         */
#ifdef CPX_PARAM_EPOPT
      *nv_return = CPX_PARAM_EPOPT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_PROBE", 15)) {
    /*                           ^         */
#ifdef CPX_PARAM_PROBE
      *nv_return = CPX_PARAM_PROBE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PRIMAL_SOLN", 15)) {
    /*                           ^         */
#ifdef CPX_PRIMAL_SOLN
      *nv_return = CPX_PRIMAL_SOLN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPXIIS_AT_UPPER", 15)) {
    /*                           ^         */
#ifdef CPXIIS_AT_UPPER
      *nv_return = CPXIIS_AT_UPPER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_EXACT_KAPPA", 15)) {
    /*                           ^         */
#ifdef CPX_EXACT_KAPPA
      *nv_return = CPX_EXACT_KAPPA;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_EPPER", 15)) {
    /*                           ^         */
#ifdef CPX_PARAM_EPPER
      *nv_return = CPX_PARAM_EPPER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Q':
    if (memEQ(name, "CPXPROB_NODEQCP", 15)) {
    /*                           ^         */
#ifdef CPXPROB_NODEQCP
      *nv_return = CPXPROB_NODEQCP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPXERR_NO_NORMS", 15)) {
    /*                           ^         */
#ifdef CPXERR_NO_NORMS
      *nv_return = CPXERR_NO_NORMS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_XMLPARSE", 15)) {
    /*                           ^         */
#ifdef CPXERR_XMLPARSE
      *nv_return = CPXERR_XMLPARSE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_EPRHS", 15)) {
    /*                           ^         */
#ifdef CPX_PARAM_EPRHS
      *nv_return = CPX_PARAM_EPRHS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPXERR_NO_BASIS", 15)) {
    /*                           ^         */
#ifdef CPXERR_NO_BASIS
      *nv_return = CPXERR_NO_BASIS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "CPXERR_NO_INT_X", 15)) {
    /*                           ^         */
#ifdef CPXERR_NO_INT_X
      *nv_return = CPXERR_NO_INT_X;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_ALG_PIVOTIN", 15)) {
    /*                           ^         */
#ifdef CPX_ALG_PIVOTIN
      *nv_return = CPX_ALG_PIVOTIN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CUT_TIGHTEN", 15)) {
    /*                           ^         */
#ifdef CPX_CUT_TIGHTEN
      *nv_return = CPX_CUT_TIGHTEN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_BTTOL", 15)) {
    /*                           ^         */
#ifdef CPX_PARAM_BTTOL
      *nv_return = CPX_PARAM_BTTOL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_CUTLO", 15)) {
    /*                           ^         */
#ifdef CPX_PARAM_CUTLO
      *nv_return = CPX_PARAM_CUTLO;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_CUTUP", 15)) {
    /*                           ^         */
#ifdef CPX_PARAM_CUTUP
      *nv_return = CPX_PARAM_CUTUP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "CPXERR_BADLDWID", 15)) {
    /*                           ^         */
#ifdef CPXERR_BADLDWID
      *nv_return = CPXERR_BADLDWID;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXIIS_AT_LOWER", 15)) {
    /*                           ^         */
#ifdef CPXIIS_AT_LOWER
      *nv_return = CPXIIS_AT_LOWER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'X':
    if (memEQ(name, "CPX_CON_MAXEXPR", 15)) {
    /*                           ^         */
#ifdef CPX_CON_MAXEXPR
      *nv_return = CPX_CON_MAXEXPR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CON_MINEXPR", 15)) {
    /*                           ^         */
#ifdef CPX_CON_MINEXPR
      *nv_return = CPX_CON_MINEXPR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "CPX_BARORDER_ND", 15)) {
    /*                           ^         */
#ifdef CPX_BARORDER_ND
      *nv_return = CPX_BARORDER_ND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CONFLICT_LB", 15)) {
    /*                           ^         */
#ifdef CPX_CONFLICT_LB
      *nv_return = CPX_CONFLICT_LB;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CONFLICT_UB", 15)) {
    /*                           ^         */
#ifdef CPX_CONFLICT_UB
      *nv_return = CPX_CONFLICT_UB;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_16 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_ADJ_SIGNS CPXERR_BAD_CTYPE CPXERR_BAD_PIVOT CPXERR_BAD_SENSE
     CPXERR_DUP_ENTRY CPXERR_NOT_FIXED CPXERR_NO_ENDATA CPXERR_NO_MEMORY
     CPXERR_NO_NUMBER CPXERR_NO_RNGVAL CPXERR_NO_SENSIT CPXERR_NULL_NAME
     CPXERR_QCP_SENSE CPXERR_Q_DIVISOR CPXMIP_FAIL_FEAS CPXMIP_INForUNBD
     CPXMIP_UNBOUNDED CPX_ALG_PIVOTOUT CPX_BARORDER_AMD CPX_BARORDER_AMF
     CPX_CALLBACK_MIP CPX_CALLBACK_SET CPX_CON_SETVAREQ CPX_CUT_FLOWPATH
     CPX_CUT_GUBCOVER CPX_CUT_SOLNPOOL CPX_CUT_ZEROHALF CPX_DPRIIND_AUTO
     CPX_DPRIIND_FULL CPX_INCUMBENT_ID CPX_INDICATOR_IF CPX_KAPPA_STABLE
     CPX_MAX_RED_COST CPX_MAX_SCALED_X CPX_MIPKAPPA_OFF CPX_PARAM_ADVIND
     CPX_PARAM_AGGIND CPX_PARAM_BARALG CPX_PARAM_COVERS CPX_PARAM_CRAIND
     CPX_PARAM_DEPIND CPX_PARAM_EPAGAP CPX_PARAM_FPHEUR CPX_PARAM_IMPLBD
     CPX_PARAM_LBHEUR CPX_PARAM_OBJDIF CPX_PARAM_PERIND CPX_PARAM_PERLIM
     CPX_PARAM_PREIND CPX_PARAM_REDUCE CPX_PARAM_SCAIND CPX_PARAM_SCRIND
     CPX_PARAM_SUBALG CPX_PARAM_TRELIM CPX_PARAM_VARSEL CPX_PARAM_XXXIND
     CPX_PPRIIND_AUTO CPX_PPRIIND_FULL CPX_PRECOL_OTHER CPX_PREROW_OTHER
     CPX_SOLNPOOL_DIV CPX_SOLNPOOL_OBJ CPX_STAT_OPTIMAL CPX_SUM_RED_COST
     CPX_SUM_SCALED_X CPX_TUNE_AVERAGE CPX_USECUT_FORCE CPX_USECUT_PURGE */
  /* Offset 11 gives the best switch position.  */
  switch (name[11]) {
  case 'A':
    if (memEQ(name, "CPX_MIPKAPPA_OFF", 16)) {
    /*                          ^           */
#ifdef CPX_MIPKAPPA_OFF
      *nv_return = CPX_MIPKAPPA_OFF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_BARALG", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_BARALG
      *nv_return = CPX_PARAM_BARALG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_VARSEL", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_VARSEL
      *nv_return = CPX_PARAM_VARSEL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "CPX_PARAM_LBHEUR", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_LBHEUR
      *nv_return = CPX_PARAM_LBHEUR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_OBJDIF", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_OBJDIF
      *nv_return = CPX_PARAM_OBJDIF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "CPXERR_BAD_CTYPE", 16)) {
    /*                          ^           */
#ifdef CPXERR_BAD_CTYPE
      *nv_return = CPXERR_BAD_CTYPE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CUT_GUBCOVER", 16)) {
    /*                          ^           */
#ifdef CPX_CUT_GUBCOVER
      *nv_return = CPX_CUT_GUBCOVER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_SCAIND", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_SCAIND
      *nv_return = CPX_PARAM_SCAIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_SCRIND", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_SCRIND
      *nv_return = CPX_PARAM_SCRIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "CPX_PARAM_ADVIND", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_ADVIND
      *nv_return = CPX_PARAM_ADVIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPXERR_DUP_ENTRY", 16)) {
    /*                          ^           */
#ifdef CPXERR_DUP_ENTRY
      *nv_return = CPXERR_DUP_ENTRY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_MEMORY", 16)) {
    /*                          ^           */
#ifdef CPXERR_NO_MEMORY
      *nv_return = CPXERR_NO_MEMORY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_SENSIT", 16)) {
    /*                          ^           */
#ifdef CPXERR_NO_SENSIT
      *nv_return = CPXERR_NO_SENSIT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_DEPIND", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_DEPIND
      *nv_return = CPX_PARAM_DEPIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_PERIND", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_PERIND
      *nv_return = CPX_PARAM_PERIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_PERLIM", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_PERLIM
      *nv_return = CPX_PARAM_PERLIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_REDUCE", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_REDUCE
      *nv_return = CPX_PARAM_REDUCE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_TUNE_AVERAGE", 16)) {
    /*                          ^           */
#ifdef CPX_TUNE_AVERAGE
      *nv_return = CPX_TUNE_AVERAGE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "CPXERR_NOT_FIXED", 16)) {
    /*                          ^           */
#ifdef CPXERR_NOT_FIXED
      *nv_return = CPXERR_NOT_FIXED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_USECUT_FORCE", 16)) {
    /*                          ^           */
#ifdef CPX_USECUT_FORCE
      *nv_return = CPX_USECUT_FORCE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "CPX_PARAM_AGGIND", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_AGGIND
      *nv_return = CPX_PARAM_AGGIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "CPX_CALLBACK_MIP", 16)) {
    /*                          ^           */
#ifdef CPX_CALLBACK_MIP
      *nv_return = CPX_CALLBACK_MIP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_SET", 16)) {
    /*                          ^           */
#ifdef CPX_CALLBACK_SET
      *nv_return = CPX_CALLBACK_SET;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPX_MAX_SCALED_X", 16)) {
    /*                          ^           */
#ifdef CPX_MAX_SCALED_X
      *nv_return = CPX_MAX_SCALED_X;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SOLNPOOL_DIV", 16)) {
    /*                          ^           */
#ifdef CPX_SOLNPOOL_DIV
      *nv_return = CPX_SOLNPOOL_DIV;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SOLNPOOL_OBJ", 16)) {
    /*                          ^           */
#ifdef CPX_SOLNPOOL_OBJ
      *nv_return = CPX_SOLNPOOL_OBJ;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_SCALED_X", 16)) {
    /*                          ^           */
#ifdef CPX_SUM_SCALED_X
      *nv_return = CPX_SUM_SCALED_X;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "CPX_PARAM_IMPLBD", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_IMPLBD
      *nv_return = CPX_PARAM_IMPLBD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPXERR_NO_ENDATA", 16)) {
    /*                          ^           */
#ifdef CPXERR_NO_ENDATA
      *nv_return = CPXERR_NO_ENDATA;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_RNGVAL", 16)) {
    /*                          ^           */
#ifdef CPXERR_NO_RNGVAL
      *nv_return = CPXERR_NO_RNGVAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CUT_SOLNPOOL", 16)) {
    /*                          ^           */
#ifdef CPX_CUT_SOLNPOOL
      *nv_return = CPX_CUT_SOLNPOOL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_INCUMBENT_ID", 16)) {
    /*                          ^           */
#ifdef CPX_INCUMBENT_ID
      *nv_return = CPX_INCUMBENT_ID;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPX_ALG_PIVOTOUT", 16)) {
    /*                          ^           */
#ifdef CPX_ALG_PIVOTOUT
      *nv_return = CPX_ALG_PIVOTOUT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CUT_ZEROHALF", 16)) {
    /*                          ^           */
#ifdef CPX_CUT_ZEROHALF
      *nv_return = CPX_CUT_ZEROHALF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_INDICATOR_IF", 16)) {
    /*                          ^           */
#ifdef CPX_INDICATOR_IF
      *nv_return = CPX_INDICATOR_IF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_COVERS", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_COVERS
      *nv_return = CPX_PARAM_COVERS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PRECOL_OTHER", 16)) {
    /*                          ^           */
#ifdef CPX_PRECOL_OTHER
      *nv_return = CPX_PRECOL_OTHER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PREROW_OTHER", 16)) {
    /*                          ^           */
#ifdef CPX_PREROW_OTHER
      *nv_return = CPX_PREROW_OTHER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPXERR_BAD_PIVOT", 16)) {
    /*                          ^           */
#ifdef CPXERR_BAD_PIVOT
      *nv_return = CPXERR_BAD_PIVOT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_EPAGAP", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_EPAGAP
      *nv_return = CPX_PARAM_EPAGAP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_FPHEUR", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_FPHEUR
      *nv_return = CPX_PARAM_FPHEUR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_USECUT_PURGE", 16)) {
    /*                          ^           */
#ifdef CPX_USECUT_PURGE
      *nv_return = CPX_USECUT_PURGE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPX_BARORDER_AMD", 16)) {
    /*                          ^           */
#ifdef CPX_BARORDER_AMD
      *nv_return = CPX_BARORDER_AMD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_BARORDER_AMF", 16)) {
    /*                          ^           */
#ifdef CPX_BARORDER_AMF
      *nv_return = CPX_BARORDER_AMF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_CRAIND", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_CRAIND
      *nv_return = CPX_PARAM_CRAIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_PREIND", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_PREIND
      *nv_return = CPX_PARAM_PREIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_TRELIM", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_TRELIM
      *nv_return = CPX_PARAM_TRELIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPXERR_ADJ_SIGNS", 16)) {
    /*                          ^           */
#ifdef CPXERR_ADJ_SIGNS
      *nv_return = CPXERR_ADJ_SIGNS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_BAD_SENSE", 16)) {
    /*                          ^           */
#ifdef CPXERR_BAD_SENSE
      *nv_return = CPXERR_BAD_SENSE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_QCP_SENSE", 16)) {
    /*                          ^           */
#ifdef CPXERR_QCP_SENSE
      *nv_return = CPXERR_QCP_SENSE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "CPX_KAPPA_STABLE", 16)) {
    /*                          ^           */
#ifdef CPX_KAPPA_STABLE
      *nv_return = CPX_KAPPA_STABLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_OPTIMAL", 16)) {
    /*                          ^           */
#ifdef CPX_STAT_OPTIMAL
      *nv_return = CPX_STAT_OPTIMAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "CPXERR_NO_NUMBER", 16)) {
    /*                          ^           */
#ifdef CPXERR_NO_NUMBER
      *nv_return = CPXERR_NO_NUMBER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXMIP_UNBOUNDED", 16)) {
    /*                          ^           */
#ifdef CPXMIP_UNBOUNDED
      *nv_return = CPXMIP_UNBOUNDED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_SUBALG", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_SUBALG
      *nv_return = CPX_PARAM_SUBALG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "CPXERR_Q_DIVISOR", 16)) {
    /*                          ^           */
#ifdef CPXERR_Q_DIVISOR
      *nv_return = CPXERR_Q_DIVISOR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CON_SETVAREQ", 16)) {
    /*                          ^           */
#ifdef CPX_CON_SETVAREQ
      *nv_return = CPX_CON_SETVAREQ;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "CPX_CUT_FLOWPATH", 16)) {
    /*                          ^           */
#ifdef CPX_CUT_FLOWPATH
      *nv_return = CPX_CUT_FLOWPATH;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'X':
    if (memEQ(name, "CPX_PARAM_XXXIND", 16)) {
    /*                          ^           */
#ifdef CPX_PARAM_XXXIND
      *nv_return = CPX_PARAM_XXXIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "CPXERR_NULL_NAME", 16)) {
    /*                          ^           */
#ifdef CPXERR_NULL_NAME
      *nv_return = CPXERR_NULL_NAME;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXMIP_FAIL_FEAS", 16)) {
    /*                          ^           */
#ifdef CPXMIP_FAIL_FEAS
      *nv_return = CPXMIP_FAIL_FEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_DPRIIND_AUTO", 16)) {
    /*                          ^           */
#ifdef CPX_DPRIIND_AUTO
      *nv_return = CPX_DPRIIND_AUTO;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_DPRIIND_FULL", 16)) {
    /*                          ^           */
#ifdef CPX_DPRIIND_FULL
      *nv_return = CPX_DPRIIND_FULL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MAX_RED_COST", 16)) {
    /*                          ^           */
#ifdef CPX_MAX_RED_COST
      *nv_return = CPX_MAX_RED_COST;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PPRIIND_AUTO", 16)) {
    /*                          ^           */
#ifdef CPX_PPRIIND_AUTO
      *nv_return = CPX_PPRIIND_AUTO;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PPRIIND_FULL", 16)) {
    /*                          ^           */
#ifdef CPX_PPRIIND_FULL
      *nv_return = CPX_PPRIIND_FULL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_RED_COST", 16)) {
    /*                          ^           */
#ifdef CPX_SUM_RED_COST
      *nv_return = CPX_SUM_RED_COST;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'r':
    if (memEQ(name, "CPXMIP_INForUNBD", 16)) {
    /*                          ^           */
#ifdef CPXMIP_INForUNBD
      *nv_return = CPXMIP_INForUNBD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_17 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_BADPRODUCT CPXERR_BAD_METHOD CPXERR_BAD_NUMBER CPXERR_BAD_ROW_ID
     CPXERR_BAD_STATUS CPXERR_NOT_FOR_QP CPXERR_NO_MIP_LIC CPXERR_NO_PROBLEM
     CPXERR_PRESLV_INF CPXERR_PRM_HEADER CPXERR_RHS_IN_OBJ CPXERR_TUNE_MIXED
     CPXMESSAGEBUFSIZE CPXMIP_ABORT_FEAS CPXMIP_INFEASIBLE CPXNET_PRICE_AUTO
     CPXPROB_FIXEDMILP CPXPROB_FIXEDMIQP CPX_ALG_AUTOMATIC CPX_BARORDER_AUTO
     CPX_BRANCH_GLOBAL CPX_CALLBACK_DUAL CPX_CALLBACK_FAIL CPX_CON_INDICATOR
     CPX_CON_QUADRATIC CPX_CON_SETVARMAX CPX_CON_SETVARMIN CPX_CON_SETVARNEQ
     CPX_CON_SETVARSUM CPX_CUT_FLOWCOVER CPX_CUT_NUM_TYPES CPX_DPRIIND_DEVEX
     CPX_DPRIIND_STEEP CPX_MAX_SCALED_PI CPX_MIPKAPPA_AUTO CPX_MIPKAPPA_FULL
     CPX_MIPORDER_COST CPX_MIPSTART_AUTO CPX_NONBASIC_SOLN CPX_PARALLEL_AUTO
     CPX_PARAMTYPE_INT CPX_PARAM_AGGFILL CPX_PARAM_ALL_MAX CPX_PARAM_ALL_MIN
     CPX_PARAM_CLIQUES CPX_PARAM_CUTPASS CPX_PARAM_DPRIIND CPX_PARAM_EPOPT_H
     CPX_PARAM_EPRELAX CPX_PARAM_EPRHS_H CPX_PARAM_FASTMIP CPX_PARAM_MCFCUTS
     CPX_PARAM_MIRCUTS CPX_PARAM_NETFIND CPX_PARAM_NODELIM CPX_PARAM_NODESEL
     CPX_PARAM_OBJLLIM CPX_PARAM_OBJULIM CPX_PARAM_PPRIIND CPX_PARAM_PREDUAL
     CPX_PARAM_PREPASS CPX_PARAM_SIFTALG CPX_PARAM_SINGLIM CPX_PARAM_SINGTOL
     CPX_PARAM_THREADS CPX_PARAM_WORKDIR CPX_PARAM_WORKMEM CPX_PPRIIND_DEVEX
     CPX_PPRIIND_STEEP CPX_SOLNPOOL_FIFO CPX_STAT_FEASIBLE CPX_STAT_NUM_BEST
     CPX_STR_PARAM_MAX CPX_SUM_SCALED_PI CPX_TUNE_DETTILIM CPX_USECUT_FILTER
     CPX_VARSEL_PSEUDO CPX_VARSEL_STRONG */
  /* Offset 11 gives the best switch position.  */
  switch (name[11]) {
  case 'A':
    if (memEQ(name, "CPXMIP_INFEASIBLE", 17)) {
    /*                          ^            */
#ifdef CPXMIP_INFEASIBLE
      *nv_return = CPXMIP_INFEASIBLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MIPKAPPA_AUTO", 17)) {
    /*                          ^            */
#ifdef CPX_MIPKAPPA_AUTO
      *nv_return = CPX_MIPKAPPA_AUTO;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MIPKAPPA_FULL", 17)) {
    /*                          ^            */
#ifdef CPX_MIPKAPPA_FULL
      *nv_return = CPX_MIPKAPPA_FULL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_FASTMIP", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_FASTMIP
      *nv_return = CPX_PARAM_FASTMIP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_FEASIBLE", 17)) {
    /*                          ^            */
#ifdef CPX_STAT_FEASIBLE
      *nv_return = CPX_STAT_FEASIBLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STR_PARAM_MAX", 17)) {
    /*                          ^            */
#ifdef CPX_STR_PARAM_MAX
      *nv_return = CPX_STR_PARAM_MAX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "CPX_PARAM_OBJLLIM", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_OBJLLIM
      *nv_return = CPX_PARAM_OBJLLIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_OBJULIM", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_OBJULIM
      *nv_return = CPX_PARAM_OBJULIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "CPX_NONBASIC_SOLN", 17)) {
    /*                          ^            */
#ifdef CPX_NONBASIC_SOLN
      *nv_return = CPX_NONBASIC_SOLN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_MCFCUTS", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_MCFCUTS
      *nv_return = CPX_PARAM_MCFCUTS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "CPX_CON_QUADRATIC", 17)) {
    /*                          ^            */
#ifdef CPX_CON_QUADRATIC
      *nv_return = CPX_CON_QUADRATIC;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPXNET_PRICE_AUTO", 17)) {
    /*                          ^            */
#ifdef CPXNET_PRICE_AUTO
      *nv_return = CPXNET_PRICE_AUTO;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXPROB_FIXEDMILP", 17)) {
    /*                          ^            */
#ifdef CPXPROB_FIXEDMILP
      *nv_return = CPXPROB_FIXEDMILP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXPROB_FIXEDMIQP", 17)) {
    /*                          ^            */
#ifdef CPXPROB_FIXEDMIQP
      *nv_return = CPXPROB_FIXEDMIQP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_NETFIND", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_NETFIND
      *nv_return = CPX_PARAM_NETFIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "CPXERR_NOT_FOR_QP", 17)) {
    /*                          ^            */
#ifdef CPXERR_NOT_FOR_QP
      *nv_return = CPXERR_NOT_FOR_QP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_USECUT_FILTER", 17)) {
    /*                          ^            */
#ifdef CPX_USECUT_FILTER
      *nv_return = CPX_USECUT_FILTER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "CPX_BRANCH_GLOBAL", 17)) {
    /*                          ^            */
#ifdef CPX_BRANCH_GLOBAL
      *nv_return = CPX_BRANCH_GLOBAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_AGGFILL", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_AGGFILL
      *nv_return = CPX_PARAM_AGGFILL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "CPXERR_PRM_HEADER", 17)) {
    /*                          ^            */
#ifdef CPXERR_PRM_HEADER
      *nv_return = CPXERR_PRM_HEADER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_THREADS", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_THREADS
      *nv_return = CPX_PARAM_THREADS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPXERR_NO_MIP_LIC", 17)) {
    /*                          ^            */
#ifdef CPXERR_NO_MIP_LIC
      *nv_return = CPXERR_NO_MIP_LIC;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_RHS_IN_OBJ", 17)) {
    /*                          ^            */
#ifdef CPXERR_RHS_IN_OBJ
      *nv_return = CPXERR_RHS_IN_OBJ;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CON_INDICATOR", 17)) {
    /*                          ^            */
#ifdef CPX_CON_INDICATOR
      *nv_return = CPX_CON_INDICATOR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_MIRCUTS", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_MIRCUTS
      *nv_return = CPX_PARAM_MIRCUTS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_SIFTALG", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_SIFTALG
      *nv_return = CPX_PARAM_SIFTALG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_SINGLIM", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_SINGLIM
      *nv_return = CPX_PARAM_SINGLIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_SINGTOL", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_SINGTOL
      *nv_return = CPX_PARAM_SINGTOL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "CPX_CALLBACK_DUAL", 17)) {
    /*                          ^            */
#ifdef CPX_CALLBACK_DUAL
      *nv_return = CPX_CALLBACK_DUAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_FAIL", 17)) {
    /*                          ^            */
#ifdef CPX_CALLBACK_FAIL
      *nv_return = CPX_CALLBACK_FAIL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPXERR_PRESLV_INF", 17)) {
    /*                          ^            */
#ifdef CPXERR_PRESLV_INF
      *nv_return = CPXERR_PRESLV_INF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MAX_SCALED_PI", 17)) {
    /*                          ^            */
#ifdef CPX_MAX_SCALED_PI
      *nv_return = CPX_MAX_SCALED_PI;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARALLEL_AUTO", 17)) {
    /*                          ^            */
#ifdef CPX_PARALLEL_AUTO
      *nv_return = CPX_PARALLEL_AUTO;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_ALL_MAX", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_ALL_MAX
      *nv_return = CPX_PARAM_ALL_MAX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_ALL_MIN", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_ALL_MIN
      *nv_return = CPX_PARAM_ALL_MIN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_CLIQUES", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_CLIQUES
      *nv_return = CPX_PARAM_CLIQUES;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SOLNPOOL_FIFO", 17)) {
    /*                          ^            */
#ifdef CPX_SOLNPOOL_FIFO
      *nv_return = CPX_SOLNPOOL_FIFO;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_SCALED_PI", 17)) {
    /*                          ^            */
#ifdef CPX_SUM_SCALED_PI
      *nv_return = CPX_SUM_SCALED_PI;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "CPXERR_BAD_METHOD", 17)) {
    /*                          ^            */
#ifdef CPXERR_BAD_METHOD
      *nv_return = CPXERR_BAD_METHOD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_NUM_BEST", 17)) {
    /*                          ^            */
#ifdef CPX_STAT_NUM_BEST
      *nv_return = CPX_STAT_NUM_BEST;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPXERR_BAD_NUMBER", 17)) {
    /*                          ^            */
#ifdef CPXERR_BAD_NUMBER
      *nv_return = CPXERR_BAD_NUMBER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPX_ALG_AUTOMATIC", 17)) {
    /*                          ^            */
#ifdef CPX_ALG_AUTOMATIC
      *nv_return = CPX_ALG_AUTOMATIC;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_NODELIM", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_NODELIM
      *nv_return = CPX_PARAM_NODELIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_NODESEL", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_NODESEL
      *nv_return = CPX_PARAM_NODESEL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_WORKDIR", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_WORKDIR
      *nv_return = CPX_PARAM_WORKDIR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_WORKMEM", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_WORKMEM
      *nv_return = CPX_PARAM_WORKMEM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPX_PARAMTYPE_INT", 17)) {
    /*                          ^            */
#ifdef CPX_PARAMTYPE_INT
      *nv_return = CPX_PARAMTYPE_INT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_DPRIIND", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_DPRIIND
      *nv_return = CPX_PARAM_DPRIIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_EPOPT_H", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_EPOPT_H
      *nv_return = CPX_PARAM_EPOPT_H;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_EPRELAX", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_EPRELAX
      *nv_return = CPX_PARAM_EPRELAX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_EPRHS_H", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_EPRHS_H
      *nv_return = CPX_PARAM_EPRHS_H;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_PPRIIND", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_PPRIIND
      *nv_return = CPX_PARAM_PPRIIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_VARSEL_PSEUDO", 17)) {
    /*                          ^            */
#ifdef CPX_VARSEL_PSEUDO
      *nv_return = CPX_VARSEL_PSEUDO;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPXERR_BADPRODUCT", 17)) {
    /*                          ^            */
#ifdef CPXERR_BADPRODUCT
      *nv_return = CPXERR_BADPRODUCT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_BAD_ROW_ID", 17)) {
    /*                          ^            */
#ifdef CPXERR_BAD_ROW_ID
      *nv_return = CPXERR_BAD_ROW_ID;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_PROBLEM", 17)) {
    /*                          ^            */
#ifdef CPXERR_NO_PROBLEM
      *nv_return = CPXERR_NO_PROBLEM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_BARORDER_AUTO", 17)) {
    /*                          ^            */
#ifdef CPX_BARORDER_AUTO
      *nv_return = CPX_BARORDER_AUTO;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MIPORDER_COST", 17)) {
    /*                          ^            */
#ifdef CPX_MIPORDER_COST
      *nv_return = CPX_MIPORDER_COST;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_PREDUAL", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_PREDUAL
      *nv_return = CPX_PARAM_PREDUAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_PREPASS", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_PREPASS
      *nv_return = CPX_PARAM_PREPASS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPXERR_BAD_STATUS", 17)) {
    /*                          ^            */
#ifdef CPXERR_BAD_STATUS
      *nv_return = CPXERR_BAD_STATUS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_VARSEL_STRONG", 17)) {
    /*                          ^            */
#ifdef CPX_VARSEL_STRONG
      *nv_return = CPX_VARSEL_STRONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "CPXMIP_ABORT_FEAS", 17)) {
    /*                          ^            */
#ifdef CPXMIP_ABORT_FEAS
      *nv_return = CPXMIP_ABORT_FEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MIPSTART_AUTO", 17)) {
    /*                          ^            */
#ifdef CPX_MIPSTART_AUTO
      *nv_return = CPX_MIPSTART_AUTO;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_TUNE_DETTILIM", 17)) {
    /*                          ^            */
#ifdef CPX_TUNE_DETTILIM
      *nv_return = CPX_TUNE_DETTILIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "CPXMESSAGEBUFSIZE", 17)) {
    /*                          ^            */
#ifdef CPXMESSAGEBUFSIZE
      *nv_return = CPXMESSAGEBUFSIZE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_CUTPASS", 17)) {
    /*                          ^            */
#ifdef CPX_PARAM_CUTPASS
      *nv_return = CPX_PARAM_CUTPASS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "CPX_CON_SETVARMAX", 17)) {
    /*                          ^            */
#ifdef CPX_CON_SETVARMAX
      *nv_return = CPX_CON_SETVARMAX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CON_SETVARMIN", 17)) {
    /*                          ^            */
#ifdef CPX_CON_SETVARMIN
      *nv_return = CPX_CON_SETVARMIN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CON_SETVARNEQ", 17)) {
    /*                          ^            */
#ifdef CPX_CON_SETVARNEQ
      *nv_return = CPX_CON_SETVARNEQ;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CON_SETVARSUM", 17)) {
    /*                          ^            */
#ifdef CPX_CON_SETVARSUM
      *nv_return = CPX_CON_SETVARSUM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "CPX_CUT_FLOWCOVER", 17)) {
    /*                          ^            */
#ifdef CPX_CUT_FLOWCOVER
      *nv_return = CPX_CUT_FLOWCOVER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "CPXERR_TUNE_MIXED", 17)) {
    /*                          ^            */
#ifdef CPXERR_TUNE_MIXED
      *nv_return = CPXERR_TUNE_MIXED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CUT_NUM_TYPES", 17)) {
    /*                          ^            */
#ifdef CPX_CUT_NUM_TYPES
      *nv_return = CPX_CUT_NUM_TYPES;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_DPRIIND_DEVEX", 17)) {
    /*                          ^            */
#ifdef CPX_DPRIIND_DEVEX
      *nv_return = CPX_DPRIIND_DEVEX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_DPRIIND_STEEP", 17)) {
    /*                          ^            */
#ifdef CPX_DPRIIND_STEEP
      *nv_return = CPX_DPRIIND_STEEP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PPRIIND_DEVEX", 17)) {
    /*                          ^            */
#ifdef CPX_PPRIIND_DEVEX
      *nv_return = CPX_PPRIIND_DEVEX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PPRIIND_STEEP", 17)) {
    /*                          ^            */
#ifdef CPX_PPRIIND_STEEP
      *nv_return = CPX_PPRIIND_STEEP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_18 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_COL_REPEATS CPXERR_COL_UNKNOWN CPXERR_COUNT_RANGE
     CPXERR_FILE_FORMAT CPXERR_IIS_DEFAULT CPXERR_IIS_NO_INFO
     CPXERR_IIS_NO_LOAD CPXERR_IIS_NO_SOLN CPXERR_INDEX_RANGE
     CPXERR_INT_TOO_BIG CPXERR_LICENSE_MAX CPXERR_LICENSE_MIN
     CPXERR_LOCK_CREATE CPXERR_NOT_FOR_MIP CPXERR_NOT_FOR_QCP
     CPXERR_NO_CONFLICT CPXERR_NO_FILENAME CPXERR_NO_ID_FIRST
     CPXERR_NO_MIPSTART CPXERR_NO_MIQP_LIC CPXERR_NO_OPERATOR
     CPXERR_NO_QUAD_EXP CPXERR_NO_ROW_NAME CPXERR_NO_SOLNPOOL
     CPXERR_PRESLV_DUAL CPXERR_PRESLV_UNBD CPXERR_QUAD_IN_ROW
     CPXERR_Q_DUP_ENTRY CPXERR_Q_NOT_INDEF CPXERR_RIM_REPEATS
     CPXERR_ROW_REPEATS CPXERR_ROW_UNKNOWN CPXMIP_FAIL_INFEAS
     CPXMIP_OPTIMAL_TOL CPX_ALG_CONCURRENT CPX_CON_INDDISJCST
     CPX_CON_SETVARCARD CPX_CUT_LOCALCOVER CPX_KAPPA_ILLPOSED
     CPX_KAPPA_UNSTABLE CPX_MAX_COMP_SLACK CPX_MAX_INT_INFEAS
     CPX_MIPSEARCH_AUTO CPX_PARAMTYPE_LONG CPX_PARAMTYPE_NONE
     CPX_PARAM_BARCOLNZ CPX_PARAM_BARITLIM CPX_PARAM_BARORDER
     CPX_PARAM_CFILEMUL CPX_PARAM_CLONELOG CPX_PARAM_DETTILIM
     CPX_PARAM_DISJCUTS CPX_PARAM_DIVETYPE CPX_PARAM_FRACCAND
     CPX_PARAM_FRACCUTS CPX_PARAM_FRACPASS CPX_PARAM_HEURFREQ
     CPX_PARAM_LPMETHOD CPX_PARAM_NETEPOPT CPX_PARAM_NETEPRHS
     CPX_PARAM_NETITLIM CPX_PARAM_PRESLVND CPX_PARAM_PRICELIM
     CPX_PARAM_QPMETHOD CPX_PARAM_RFILEMUL CPX_PARAM_RINSHEUR
     CPX_PARAM_STARTALG CPX_PARAM_SYMMETRY CPX_STAT_INForUNBD
     CPX_STAT_UNBOUNDED CPX_SUM_COMP_SLACK CPX_SUM_INT_INFEAS
     CPX_VARSEL_DEFAULT */
  /* Offset 11 gives the best switch position.  */
  switch (name[11]) {
  case 'A':
    if (memEQ(name, "CPX_CUT_LOCALCOVER", 18)) {
    /*                          ^             */
#ifdef CPX_CUT_LOCALCOVER
      *nv_return = CPX_CUT_LOCALCOVER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_BARCOLNZ", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_BARCOLNZ
      *nv_return = CPX_PARAM_BARCOLNZ;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_BARITLIM", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_BARITLIM
      *nv_return = CPX_PARAM_BARITLIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_BARORDER", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_BARORDER
      *nv_return = CPX_PARAM_BARORDER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "CPX_STAT_UNBOUNDED", 18)) {
    /*                          ^             */
#ifdef CPX_STAT_UNBOUNDED
      *nv_return = CPX_STAT_UNBOUNDED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "CPX_ALG_CONCURRENT", 18)) {
    /*                          ^             */
#ifdef CPX_ALG_CONCURRENT
      *nv_return = CPX_ALG_CONCURRENT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MIPSEARCH_AUTO", 18)) {
    /*                          ^             */
#ifdef CPX_MIPSEARCH_AUTO
      *nv_return = CPX_MIPSEARCH_AUTO;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "CPXERR_IIS_DEFAULT", 18)) {
    /*                          ^             */
#ifdef CPXERR_IIS_DEFAULT
      *nv_return = CPXERR_IIS_DEFAULT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_ID_FIRST", 18)) {
    /*                          ^             */
#ifdef CPXERR_NO_ID_FIRST
      *nv_return = CPXERR_NO_ID_FIRST;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CON_INDDISJCST", 18)) {
    /*                          ^             */
#ifdef CPX_CON_INDDISJCST
      *nv_return = CPX_CON_INDDISJCST;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_VARSEL_DEFAULT", 18)) {
    /*                          ^             */
#ifdef CPX_VARSEL_DEFAULT
      *nv_return = CPX_VARSEL_DEFAULT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPX_PARAM_DETTILIM", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_DETTILIM
      *nv_return = CPX_PARAM_DETTILIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_HEURFREQ", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_HEURFREQ
      *nv_return = CPX_PARAM_HEURFREQ;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_NETEPOPT", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_NETEPOPT
      *nv_return = CPX_PARAM_NETEPOPT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_NETEPRHS", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_NETEPRHS
      *nv_return = CPX_PARAM_NETEPRHS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_NETITLIM", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_NETITLIM
      *nv_return = CPX_PARAM_NETITLIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "CPXERR_NOT_FOR_MIP", 18)) {
    /*                          ^             */
#ifdef CPXERR_NOT_FOR_MIP
      *nv_return = CPXERR_NOT_FOR_MIP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NOT_FOR_QCP", 18)) {
    /*                          ^             */
#ifdef CPXERR_NOT_FOR_QCP
      *nv_return = CPXERR_NOT_FOR_QCP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_CFILEMUL", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_CFILEMUL
      *nv_return = CPX_PARAM_CFILEMUL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_RFILEMUL", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_RFILEMUL
      *nv_return = CPX_PARAM_RFILEMUL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_INForUNBD", 18)) {
    /*                          ^             */
#ifdef CPX_STAT_INForUNBD
      *nv_return = CPX_STAT_INForUNBD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPXERR_NO_FILENAME", 18)) {
    /*                          ^             */
#ifdef CPXERR_NO_FILENAME
      *nv_return = CPXERR_NO_FILENAME;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_MIPSTART", 18)) {
    /*                          ^             */
#ifdef CPXERR_NO_MIPSTART
      *nv_return = CPXERR_NO_MIPSTART;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_MIQP_LIC", 18)) {
    /*                          ^             */
#ifdef CPXERR_NO_MIQP_LIC
      *nv_return = CPXERR_NO_MIQP_LIC;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_DISJCUTS", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_DISJCUTS
      *nv_return = CPX_PARAM_DISJCUTS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_DIVETYPE", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_DIVETYPE
      *nv_return = CPX_PARAM_DIVETYPE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_RINSHEUR", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_RINSHEUR
      *nv_return = CPX_PARAM_RINSHEUR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPXERR_PRESLV_DUAL", 18)) {
    /*                          ^             */
#ifdef CPXERR_PRESLV_DUAL
      *nv_return = CPXERR_PRESLV_DUAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_PRESLV_UNBD", 18)) {
    /*                          ^             */
#ifdef CPXERR_PRESLV_UNBD
      *nv_return = CPXERR_PRESLV_UNBD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_KAPPA_ILLPOSED", 18)) {
    /*                          ^             */
#ifdef CPX_KAPPA_ILLPOSED
      *nv_return = CPX_KAPPA_ILLPOSED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_CLONELOG", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_CLONELOG
      *nv_return = CPX_PARAM_CLONELOG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "CPXMIP_OPTIMAL_TOL", 18)) {
    /*                          ^             */
#ifdef CPXMIP_OPTIMAL_TOL
      *nv_return = CPXMIP_OPTIMAL_TOL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPXERR_IIS_NO_INFO", 18)) {
    /*                          ^             */
#ifdef CPXERR_IIS_NO_INFO
      *nv_return = CPXERR_IIS_NO_INFO;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_IIS_NO_LOAD", 18)) {
    /*                          ^             */
#ifdef CPXERR_IIS_NO_LOAD
      *nv_return = CPXERR_IIS_NO_LOAD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_IIS_NO_SOLN", 18)) {
    /*                          ^             */
#ifdef CPXERR_IIS_NO_SOLN
      *nv_return = CPXERR_IIS_NO_SOLN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_LICENSE_MAX", 18)) {
    /*                          ^             */
#ifdef CPXERR_LICENSE_MAX
      *nv_return = CPXERR_LICENSE_MAX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_LICENSE_MIN", 18)) {
    /*                          ^             */
#ifdef CPXERR_LICENSE_MIN
      *nv_return = CPXERR_LICENSE_MIN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_KAPPA_UNSTABLE", 18)) {
    /*                          ^             */
#ifdef CPX_KAPPA_UNSTABLE
      *nv_return = CPX_KAPPA_UNSTABLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPXERR_NO_CONFLICT", 18)) {
    /*                          ^             */
#ifdef CPXERR_NO_CONFLICT
      *nv_return = CPXERR_NO_CONFLICT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_ROW_NAME", 18)) {
    /*                          ^             */
#ifdef CPXERR_NO_ROW_NAME
      *nv_return = CPXERR_NO_ROW_NAME;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_SOLNPOOL", 18)) {
    /*                          ^             */
#ifdef CPXERR_NO_SOLNPOOL
      *nv_return = CPXERR_NO_SOLNPOOL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPXERR_NO_OPERATOR", 18)) {
    /*                          ^             */
#ifdef CPXERR_NO_OPERATOR
      *nv_return = CPXERR_NO_OPERATOR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_Q_DUP_ENTRY", 18)) {
    /*                          ^             */
#ifdef CPXERR_Q_DUP_ENTRY
      *nv_return = CPXERR_Q_DUP_ENTRY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MAX_COMP_SLACK", 18)) {
    /*                          ^             */
#ifdef CPX_MAX_COMP_SLACK
      *nv_return = CPX_MAX_COMP_SLACK;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAMTYPE_LONG", 18)) {
    /*                          ^             */
#ifdef CPX_PARAMTYPE_LONG
      *nv_return = CPX_PARAMTYPE_LONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAMTYPE_NONE", 18)) {
    /*                          ^             */
#ifdef CPX_PARAMTYPE_NONE
      *nv_return = CPX_PARAMTYPE_NONE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_LPMETHOD", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_LPMETHOD
      *nv_return = CPX_PARAM_LPMETHOD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_QPMETHOD", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_QPMETHOD
      *nv_return = CPX_PARAM_QPMETHOD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_COMP_SLACK", 18)) {
    /*                          ^             */
#ifdef CPX_SUM_COMP_SLACK
      *nv_return = CPX_SUM_COMP_SLACK;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPXERR_COL_REPEATS", 18)) {
    /*                          ^             */
#ifdef CPXERR_COL_REPEATS
      *nv_return = CPXERR_COL_REPEATS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_RIM_REPEATS", 18)) {
    /*                          ^             */
#ifdef CPXERR_RIM_REPEATS
      *nv_return = CPXERR_RIM_REPEATS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_ROW_REPEATS", 18)) {
    /*                          ^             */
#ifdef CPXERR_ROW_REPEATS
      *nv_return = CPXERR_ROW_REPEATS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_FRACCAND", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_FRACCAND
      *nv_return = CPX_PARAM_FRACCAND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_FRACCUTS", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_FRACCUTS
      *nv_return = CPX_PARAM_FRACCUTS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_FRACPASS", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_FRACPASS
      *nv_return = CPX_PARAM_FRACPASS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_PRESLVND", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_PRESLVND
      *nv_return = CPX_PARAM_PRESLVND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_PRICELIM", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_PRICELIM
      *nv_return = CPX_PARAM_PRICELIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "CPXERR_COUNT_RANGE", 18)) {
    /*                          ^             */
#ifdef CPXERR_COUNT_RANGE
      *nv_return = CPXERR_COUNT_RANGE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_INT_TOO_BIG", 18)) {
    /*                          ^             */
#ifdef CPXERR_INT_TOO_BIG
      *nv_return = CPXERR_INT_TOO_BIG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_Q_NOT_INDEF", 18)) {
    /*                          ^             */
#ifdef CPXERR_Q_NOT_INDEF
      *nv_return = CPXERR_Q_NOT_INDEF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_STARTALG", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_STARTALG
      *nv_return = CPX_PARAM_STARTALG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "CPXERR_COL_UNKNOWN", 18)) {
    /*                          ^             */
#ifdef CPXERR_COL_UNKNOWN
      *nv_return = CPXERR_COL_UNKNOWN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_QUAD_EXP", 18)) {
    /*                          ^             */
#ifdef CPXERR_NO_QUAD_EXP
      *nv_return = CPXERR_NO_QUAD_EXP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_ROW_UNKNOWN", 18)) {
    /*                          ^             */
#ifdef CPXERR_ROW_UNKNOWN
      *nv_return = CPXERR_ROW_UNKNOWN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "CPX_CON_SETVARCARD", 18)) {
    /*                          ^             */
#ifdef CPX_CON_SETVARCARD
      *nv_return = CPX_CON_SETVARCARD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'X':
    if (memEQ(name, "CPXERR_INDEX_RANGE", 18)) {
    /*                          ^             */
#ifdef CPXERR_INDEX_RANGE
      *nv_return = CPXERR_INDEX_RANGE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Y':
    if (memEQ(name, "CPX_PARAM_SYMMETRY", 18)) {
    /*                          ^             */
#ifdef CPX_PARAM_SYMMETRY
      *nv_return = CPX_PARAM_SYMMETRY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "CPXERR_FILE_FORMAT", 18)) {
    /*                          ^             */
#ifdef CPXERR_FILE_FORMAT
      *nv_return = CPXERR_FILE_FORMAT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_LOCK_CREATE", 18)) {
    /*                          ^             */
#ifdef CPXERR_LOCK_CREATE
      *nv_return = CPXERR_LOCK_CREATE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_QUAD_IN_ROW", 18)) {
    /*                          ^             */
#ifdef CPXERR_QUAD_IN_ROW
      *nv_return = CPXERR_QUAD_IN_ROW;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXMIP_FAIL_INFEAS", 18)) {
    /*                          ^             */
#ifdef CPXMIP_FAIL_INFEAS
      *nv_return = CPXMIP_FAIL_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MAX_INT_INFEAS", 18)) {
    /*                          ^             */
#ifdef CPX_MAX_INT_INFEAS
      *nv_return = CPX_MAX_INT_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_INT_INFEAS", 18)) {
    /*                          ^             */
#ifdef CPX_SUM_INT_INFEAS
      *nv_return = CPX_SUM_INT_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_19 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_BAD_ARGUMENT CPXERR_BAD_EXPONENT CPXERR_BAD_FILETYPE
     CPXERR_BAD_PRIORITY CPXERR_BAD_SOS_TYPE CPXERR_EXTRA_INTEND
     CPXERR_EXTRA_INTORG CPXERR_EXTRA_SOSEND CPXERR_EXTRA_SOSORG
     CPXERR_FILE_ENTRIES CPXERR_IIS_NO_BASIC CPXERR_IIS_NUM_BEST
     CPXERR_ILOG_LICENSE CPXERR_NODE_ON_DISK CPXERR_NOT_SAV_FILE
     CPXERR_NO_DUAL_SOLN CPXERR_NO_LU_FACTOR CPXERR_NO_OBJECTIVE
     CPXERR_NO_OBJ_SENSE CPXERR_NO_RHS_COEFF CPXERR_NO_ROW_SENSE
     CPXERR_NULL_POINTER CPXERR_PRESLV_ABORT CPXMIP_ABORT_INFEAS
     CPXMIP_MEM_LIM_FEAS CPX_CALLBACK_PRIMAL CPX_CALLBACK_TUNING
     CPX_CONFLICT_MEMBER CPX_CON_LOWER_BOUND CPX_CON_SETVARUNION
     CPX_CON_UPPER_BOUND CPX_FEASOPT_MIN_INF CPX_FEASOPT_MIN_SUM
     CPX_FEASOPT_OPT_INF CPX_FEASOPT_OPT_SUM CPX_KAPPA_ATTENTION
     CPX_MAX_DUAL_INFEAS CPX_MIPKAPPA_SAMPLE CPX_MIPORDER_BOUNDS
     CPX_MIPSTART_REPAIR CPX_NODESEL_BESTEST CPX_PARAM_AGGCUTLIM
     CPX_PARAM_BARDSTART CPX_PARAM_BAREPCOMP CPX_PARAM_BARGROWTH
     CPX_PARAM_BARMAXCOR CPX_PARAM_BAROBJRNG CPX_PARAM_BARPSTART
     CPX_PARAM_CLOCKTYPE CPX_PARAM_COEREDIND CPX_PARAM_DATACHECK
     CPX_PARAM_FLOWPATHS CPX_PARAM_GUBCOVERS CPX_PARAM_INTSOLLIM
     CPX_PARAM_MIPORDIND CPX_PARAM_MIPSEARCH CPX_PARAM_NZREADLIM
     CPX_PARAM_PRELINEAR CPX_PARAM_PROBETIME CPX_PARAM_RELOBJDIF
     CPX_PARAM_SIFTITLIM CPX_PPRIIND_PARTIAL CPX_STAT_ABORT_USER
     CPX_STAT_FIRSTORDER CPX_STAT_INFEASIBLE CPX_SUM_DUAL_INFEAS
     CPX_VERSION_RELEASE CPX_VERSION_VERSION CPX_WRITELEVEL_AUTO */
  /* Offset 13 gives the best switch position.  */
  switch (name[13]) {
  case 'A':
    if (memEQ(name, "CPX_PARAM_DATACHECK", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_DATACHECK
      *nv_return = CPX_PARAM_DATACHECK;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PPRIIND_PARTIAL", 19)) {
    /*                            ^            */
#ifdef CPX_PPRIIND_PARTIAL
      *nv_return = CPX_PPRIIND_PARTIAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_INFEASIBLE", 19)) {
    /*                            ^            */
#ifdef CPX_STAT_INFEASIBLE
      *nv_return = CPX_STAT_INFEASIBLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "CPX_MIPORDER_BOUNDS", 19)) {
    /*                            ^            */
#ifdef CPX_MIPORDER_BOUNDS
      *nv_return = CPX_MIPORDER_BOUNDS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_PROBETIME", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_PROBETIME
      *nv_return = CPX_PARAM_PROBETIME;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "CPX_PARAM_AGGCUTLIM", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_AGGCUTLIM
      *nv_return = CPX_PARAM_AGGCUTLIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_CLOCKTYPE", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_CLOCKTYPE
      *nv_return = CPX_PARAM_CLOCKTYPE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_GUBCOVERS", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_GUBCOVERS
      *nv_return = CPX_PARAM_GUBCOVERS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "CPX_PARAM_BARDSTART", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_BARDSTART
      *nv_return = CPX_PARAM_BARDSTART;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPXERR_NO_OBJECTIVE", 19)) {
    /*                            ^            */
#ifdef CPXERR_NO_OBJECTIVE
      *nv_return = CPXERR_NO_OBJECTIVE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_KAPPA_ATTENTION", 19)) {
    /*                            ^            */
#ifdef CPX_KAPPA_ATTENTION
      *nv_return = CPX_KAPPA_ATTENTION;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_NODESEL_BESTEST", 19)) {
    /*                            ^            */
#ifdef CPX_NODESEL_BESTEST
      *nv_return = CPX_NODESEL_BESTEST;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_BAREPCOMP", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_BAREPCOMP
      *nv_return = CPX_PARAM_BAREPCOMP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_NZREADLIM", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_NZREADLIM
      *nv_return = CPX_PARAM_NZREADLIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_VERSION_RELEASE", 19)) {
    /*                            ^            */
#ifdef CPX_VERSION_RELEASE
      *nv_return = CPX_VERSION_RELEASE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_VERSION_VERSION", 19)) {
    /*                            ^            */
#ifdef CPX_VERSION_VERSION
      *nv_return = CPX_VERSION_VERSION;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "CPXERR_NO_LU_FACTOR", 19)) {
    /*                            ^            */
#ifdef CPXERR_NO_LU_FACTOR
      *nv_return = CPXERR_NO_LU_FACTOR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "CPXERR_BAD_ARGUMENT", 19)) {
    /*                            ^            */
#ifdef CPXERR_BAD_ARGUMENT
      *nv_return = CPXERR_BAD_ARGUMENT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_BARGROWTH", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_BARGROWTH
      *nv_return = CPX_PARAM_BARGROWTH;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPXERR_BAD_PRIORITY", 19)) {
    /*                            ^            */
#ifdef CPXERR_BAD_PRIORITY
      *nv_return = CPXERR_BAD_PRIORITY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_EXTRA_INTEND", 19)) {
    /*                            ^            */
#ifdef CPXERR_EXTRA_INTEND
      *nv_return = CPXERR_EXTRA_INTEND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_EXTRA_INTORG", 19)) {
    /*                            ^            */
#ifdef CPXERR_EXTRA_INTORG
      *nv_return = CPXERR_EXTRA_INTORG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_ILOG_LICENSE", 19)) {
    /*                            ^            */
#ifdef CPXERR_ILOG_LICENSE
      *nv_return = CPXERR_ILOG_LICENSE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXMIP_ABORT_INFEAS", 19)) {
    /*                            ^            */
#ifdef CPXMIP_ABORT_INFEAS
      *nv_return = CPXMIP_ABORT_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_FEASOPT_MIN_INF", 19)) {
    /*                            ^            */
#ifdef CPX_FEASOPT_MIN_INF
      *nv_return = CPX_FEASOPT_MIN_INF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_FEASOPT_MIN_SUM", 19)) {
    /*                            ^            */
#ifdef CPX_FEASOPT_MIN_SUM
      *nv_return = CPX_FEASOPT_MIN_SUM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MAX_DUAL_INFEAS", 19)) {
    /*                            ^            */
#ifdef CPX_MAX_DUAL_INFEAS
      *nv_return = CPX_MAX_DUAL_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_DUAL_INFEAS", 19)) {
    /*                            ^            */
#ifdef CPX_SUM_DUAL_INFEAS
      *nv_return = CPX_SUM_DUAL_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPXERR_BAD_FILETYPE", 19)) {
    /*                            ^            */
#ifdef CPXERR_BAD_FILETYPE
      *nv_return = CPXERR_BAD_FILETYPE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_DUAL_SOLN", 19)) {
    /*                            ^            */
#ifdef CPXERR_NO_DUAL_SOLN
      *nv_return = CPXERR_NO_DUAL_SOLN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_PRELINEAR", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_PRELINEAR
      *nv_return = CPX_PARAM_PRELINEAR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_WRITELEVEL_AUTO", 19)) {
    /*                            ^            */
#ifdef CPX_WRITELEVEL_AUTO
      *nv_return = CPX_WRITELEVEL_AUTO;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "CPXERR_IIS_NUM_BEST", 19)) {
    /*                            ^            */
#ifdef CPXERR_IIS_NUM_BEST
      *nv_return = CPXERR_IIS_NUM_BEST;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXMIP_MEM_LIM_FEAS", 19)) {
    /*                            ^            */
#ifdef CPXMIP_MEM_LIM_FEAS
      *nv_return = CPXMIP_MEM_LIM_FEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CONFLICT_MEMBER", 19)) {
    /*                            ^            */
#ifdef CPX_CONFLICT_MEMBER
      *nv_return = CPX_CONFLICT_MEMBER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_BARMAXCOR", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_BARMAXCOR
      *nv_return = CPX_PARAM_BARMAXCOR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPXERR_FILE_ENTRIES", 19)) {
    /*                            ^            */
#ifdef CPXERR_FILE_ENTRIES
      *nv_return = CPXERR_FILE_ENTRIES;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NODE_ON_DISK", 19)) {
    /*                            ^            */
#ifdef CPXERR_NODE_ON_DISK
      *nv_return = CPXERR_NODE_ON_DISK;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPXERR_NULL_POINTER", 19)) {
    /*                            ^            */
#ifdef CPXERR_NULL_POINTER
      *nv_return = CPXERR_NULL_POINTER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_BAROBJRNG", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_BAROBJRNG
      *nv_return = CPX_PARAM_BAROBJRNG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_MIPORDIND", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_MIPORDIND
      *nv_return = CPX_PARAM_MIPORDIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_RELOBJDIF", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_RELOBJDIF
      *nv_return = CPX_PARAM_RELOBJDIF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPXERR_BAD_EXPONENT", 19)) {
    /*                            ^            */
#ifdef CPXERR_BAD_EXPONENT
      *nv_return = CPXERR_BAD_EXPONENT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_PRIMAL", 19)) {
    /*                            ^            */
#ifdef CPX_CALLBACK_PRIMAL
      *nv_return = CPX_CALLBACK_PRIMAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_FEASOPT_OPT_INF", 19)) {
    /*                            ^            */
#ifdef CPX_FEASOPT_OPT_INF
      *nv_return = CPX_FEASOPT_OPT_INF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_FEASOPT_OPT_SUM", 19)) {
    /*                            ^            */
#ifdef CPX_FEASOPT_OPT_SUM
      *nv_return = CPX_FEASOPT_OPT_SUM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_BARPSTART", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_BARPSTART
      *nv_return = CPX_PARAM_BARPSTART;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPX_CON_SETVARUNION", 19)) {
    /*                            ^            */
#ifdef CPX_CON_SETVARUNION
      *nv_return = CPX_CON_SETVARUNION;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MIPSTART_REPAIR", 19)) {
    /*                            ^            */
#ifdef CPX_MIPSTART_REPAIR
      *nv_return = CPX_MIPSTART_REPAIR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_COEREDIND", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_COEREDIND
      *nv_return = CPX_PARAM_COEREDIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPXERR_BAD_SOS_TYPE", 19)) {
    /*                            ^            */
#ifdef CPXERR_BAD_SOS_TYPE
      *nv_return = CPXERR_BAD_SOS_TYPE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_EXTRA_SOSEND", 19)) {
    /*                            ^            */
#ifdef CPXERR_EXTRA_SOSEND
      *nv_return = CPXERR_EXTRA_SOSEND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_EXTRA_SOSORG", 19)) {
    /*                            ^            */
#ifdef CPXERR_EXTRA_SOSORG
      *nv_return = CPXERR_EXTRA_SOSORG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MIPKAPPA_SAMPLE", 19)) {
    /*                            ^            */
#ifdef CPX_MIPKAPPA_SAMPLE
      *nv_return = CPX_MIPKAPPA_SAMPLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_INTSOLLIM", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_INTSOLLIM
      *nv_return = CPX_PARAM_INTSOLLIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_MIPSEARCH", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_MIPSEARCH
      *nv_return = CPX_PARAM_MIPSEARCH;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "CPX_CALLBACK_TUNING", 19)) {
    /*                            ^            */
#ifdef CPX_CALLBACK_TUNING
      *nv_return = CPX_CALLBACK_TUNING;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_SIFTITLIM", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_SIFTITLIM
      *nv_return = CPX_PARAM_SIFTITLIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_ABORT_USER", 19)) {
    /*                            ^            */
#ifdef CPX_STAT_ABORT_USER
      *nv_return = CPX_STAT_ABORT_USER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_FIRSTORDER", 19)) {
    /*                            ^            */
#ifdef CPX_STAT_FIRSTORDER
      *nv_return = CPX_STAT_FIRSTORDER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "CPXERR_NOT_SAV_FILE", 19)) {
    /*                            ^            */
#ifdef CPXERR_NOT_SAV_FILE
      *nv_return = CPXERR_NOT_SAV_FILE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "CPX_PARAM_FLOWPATHS", 19)) {
    /*                            ^            */
#ifdef CPX_PARAM_FLOWPATHS
      *nv_return = CPX_PARAM_FLOWPATHS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "CPXERR_IIS_NO_BASIC", 19)) {
    /*                            ^            */
#ifdef CPXERR_IIS_NO_BASIC
      *nv_return = CPXERR_IIS_NO_BASIC;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_OBJ_SENSE", 19)) {
    /*                            ^            */
#ifdef CPXERR_NO_OBJ_SENSE
      *nv_return = CPXERR_NO_OBJ_SENSE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_RHS_COEFF", 19)) {
    /*                            ^            */
#ifdef CPXERR_NO_RHS_COEFF
      *nv_return = CPXERR_NO_RHS_COEFF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_ROW_SENSE", 19)) {
    /*                            ^            */
#ifdef CPXERR_NO_ROW_SENSE
      *nv_return = CPXERR_NO_ROW_SENSE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_PRESLV_ABORT", 19)) {
    /*                            ^            */
#ifdef CPXERR_PRESLV_ABORT
      *nv_return = CPXERR_PRESLV_ABORT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CON_LOWER_BOUND", 19)) {
    /*                            ^            */
#ifdef CPX_CON_LOWER_BOUND
      *nv_return = CPX_CON_LOWER_BOUND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CON_UPPER_BOUND", 19)) {
    /*                            ^            */
#ifdef CPX_CON_UPPER_BOUND
      *nv_return = CPX_CON_UPPER_BOUND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_20 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_ADJ_SIGN_QUAD CPXERR_BAD_DIRECTION CPXERR_BAD_INDCONSTR
     CPXERR_BAD_INDICATOR CPXERR_BAD_LAZY_UCUT CPXERR_BAD_OBJ_SENSE
     CPXERR_BAD_PARAM_NUM CPXERR_BAD_PROB_TYPE CPXERR_BAS_FILE_SIZE
     CPXERR_COUNT_OVERLAP CPXERR_DECOMPRESSION CPXERR_IIS_SUB_ABORT
     CPXERR_LINE_TOO_LONG CPXERR_MISS_SOS_TYPE CPXERR_NAME_CREATION
     CPXERR_NAME_TOO_LONG CPXERR_NEED_OPT_SOLN CPXERR_NOT_MILPCLASS
     CPXERR_NOT_MIQPCLASS CPXERR_NOT_UNBOUNDED CPXERR_NO_BASIC_SOLN
     CPXERR_NO_BOUND_TYPE CPXERR_NO_KAPPASTATS CPXERR_NO_RHS_IN_OBJ
     CPXERR_PARAM_TOO_BIG CPXERR_Q_NOT_POS_DEF CPXERR_RIMNZ_REPEATS
     CPXERR_SAV_FILE_DATA CPXERR_SBASE_ILLEGAL CPXERR_SUBPROB_SOLVE
     CPXERR_THREAD_FAILED CPXERR_TOO_MANY_COLS CPXERR_TOO_MANY_RIMS
     CPXERR_TOO_MANY_ROWS CPXMIP_ABORT_RELAXED CPXMIP_NODE_LIM_FEAS
     CPXMIP_TIME_LIM_FEAS CPXNET_PRICE_PARTIAL CPX_CALLBACK_BARRIER
     CPX_CALLBACK_DEFAULT CPX_CALLBACK_NETWORK CPX_CON_LAST_CONTYPE
     CPX_CON_SETVARDOMAIN CPX_CON_SETVARMEMBER CPX_CON_SETVARNEQCST
     CPX_CON_SETVARSUBSET CPX_FEASOPT_MIN_QUAD CPX_FEASOPT_OPT_QUAD
     CPX_INDICATOR_ONLYIF CPX_INTEGER_FEASIBLE CPX_KAPPA_SUSPICIOUS
     CPX_MAX_SCALED_SLACK CPX_PARAMTYPE_DOUBLE CPX_PARAMTYPE_STRING
     CPX_PARAM_BARDISPLAY CPX_PARAM_BBINTERVAL CPX_PARAM_COLREADLIM
     CPX_PARAM_CUTSFACTOR CPX_PARAM_EACHCUTLIM CPX_PARAM_FLOWCOVERS
     CPX_PARAM_MIPCBREDLP CPX_PARAM_MIPDISPLAY CPX_PARAM_MIPORDTYPE
     CPX_PARAM_MIQCPSTRAT CPX_PARAM_MPSLONGNUM CPX_PARAM_NETDISPLAY
     CPX_PARAM_NETPPRIIND CPX_PARAM_POLISHTIME CPX_PARAM_RANDOMSEED
     CPX_PARAM_REVERSEIND CPX_PARAM_ROWREADLIM CPX_PARAM_SIMDISPLAY
     CPX_PARAM_WRITELEVEL CPX_SUM_SCALED_SLACK CPX_VARSEL_MAXINFEAS
     CPX_VARSEL_MININFEAS */
  /* Offset 16 gives the best switch position.  */
  switch (name[16]) {
  case 'A':
    if (memEQ(name, "CPXERR_BAD_INDICATOR", 20)) {
    /*                               ^          */
#ifdef CPXERR_BAD_INDICATOR
      *nv_return = CPXERR_BAD_INDICATOR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXMIP_ABORT_RELAXED", 20)) {
    /*                               ^          */
#ifdef CPXMIP_ABORT_RELAXED
      *nv_return = CPXMIP_ABORT_RELAXED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_DEFAULT", 20)) {
    /*                               ^          */
#ifdef CPX_CALLBACK_DEFAULT
      *nv_return = CPX_CALLBACK_DEFAULT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "CPXERR_IIS_SUB_ABORT", 20)) {
    /*                               ^          */
#ifdef CPXERR_IIS_SUB_ABORT
      *nv_return = CPXERR_IIS_SUB_ABORT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CON_SETVARSUBSET", 20)) {
    /*                               ^          */
#ifdef CPX_CON_SETVARSUBSET
      *nv_return = CPX_CON_SETVARSUBSET;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "CPXERR_TOO_MANY_COLS", 20)) {
    /*                               ^          */
#ifdef CPXERR_TOO_MANY_COLS
      *nv_return = CPXERR_TOO_MANY_COLS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_CUTSFACTOR", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_CUTSFACTOR
      *nv_return = CPX_PARAM_CUTSFACTOR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "CPXERR_SAV_FILE_DATA", 20)) {
    /*                               ^          */
#ifdef CPXERR_SAV_FILE_DATA
      *nv_return = CPXERR_SAV_FILE_DATA;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_COLREADLIM", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_COLREADLIM
      *nv_return = CPX_PARAM_COLREADLIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_ROWREADLIM", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_ROWREADLIM
      *nv_return = CPX_PARAM_ROWREADLIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPXERR_BAD_OBJ_SENSE", 20)) {
    /*                               ^          */
#ifdef CPXERR_BAD_OBJ_SENSE
      *nv_return = CPXERR_BAD_OBJ_SENSE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_RIMNZ_REPEATS", 20)) {
    /*                               ^          */
#ifdef CPXERR_RIMNZ_REPEATS
      *nv_return = CPXERR_RIMNZ_REPEATS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_SBASE_ILLEGAL", 20)) {
    /*                               ^          */
#ifdef CPXERR_SBASE_ILLEGAL
      *nv_return = CPXERR_SBASE_ILLEGAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_MIPCBREDLP", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_MIPCBREDLP
      *nv_return = CPX_PARAM_MIPCBREDLP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_REVERSEIND", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_REVERSEIND
      *nv_return = CPX_PARAM_REVERSEIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_WRITELEVEL", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_WRITELEVEL
      *nv_return = CPX_PARAM_WRITELEVEL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "CPXMIP_NODE_LIM_FEAS", 20)) {
    /*                               ^          */
#ifdef CPXMIP_NODE_LIM_FEAS
      *nv_return = CPXMIP_NODE_LIM_FEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXMIP_TIME_LIM_FEAS", 20)) {
    /*                               ^          */
#ifdef CPXMIP_TIME_LIM_FEAS
      *nv_return = CPXMIP_TIME_LIM_FEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_VARSEL_MAXINFEAS", 20)) {
    /*                               ^          */
#ifdef CPX_VARSEL_MAXINFEAS
      *nv_return = CPX_VARSEL_MAXINFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_VARSEL_MININFEAS", 20)) {
    /*                               ^          */
#ifdef CPX_VARSEL_MININFEAS
      *nv_return = CPX_VARSEL_MININFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "CPX_PARAM_MPSLONGNUM", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_MPSLONGNUM
      *nv_return = CPX_PARAM_MPSLONGNUM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPXERR_THREAD_FAILED", 20)) {
    /*                               ^          */
#ifdef CPXERR_THREAD_FAILED
      *nv_return = CPXERR_THREAD_FAILED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_INTEGER_FEASIBLE", 20)) {
    /*                               ^          */
#ifdef CPX_INTEGER_FEASIBLE
      *nv_return = CPX_INTEGER_FEASIBLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_KAPPA_SUSPICIOUS", 20)) {
    /*                               ^          */
#ifdef CPX_KAPPA_SUSPICIOUS
      *nv_return = CPX_KAPPA_SUSPICIOUS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_NETPPRIIND", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_NETPPRIIND
      *nv_return = CPX_PARAM_NETPPRIIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPXERR_LINE_TOO_LONG", 20)) {
    /*                               ^          */
#ifdef CPXERR_LINE_TOO_LONG
      *nv_return = CPXERR_LINE_TOO_LONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NAME_TOO_LONG", 20)) {
    /*                               ^          */
#ifdef CPXERR_NAME_TOO_LONG
      *nv_return = CPXERR_NAME_TOO_LONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NOT_MILPCLASS", 20)) {
    /*                               ^          */
#ifdef CPXERR_NOT_MILPCLASS
      *nv_return = CPXERR_NOT_MILPCLASS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NOT_MIQPCLASS", 20)) {
    /*                               ^          */
#ifdef CPXERR_NOT_MIQPCLASS
      *nv_return = CPXERR_NOT_MIQPCLASS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_INDICATOR_ONLYIF", 20)) {
    /*                               ^          */
#ifdef CPX_INDICATOR_ONLYIF
      *nv_return = CPX_INDICATOR_ONLYIF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MAX_SCALED_SLACK", 20)) {
    /*                               ^          */
#ifdef CPX_MAX_SCALED_SLACK
      *nv_return = CPX_MAX_SCALED_SLACK;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_SCALED_SLACK", 20)) {
    /*                               ^          */
#ifdef CPX_SUM_SCALED_SLACK
      *nv_return = CPX_SUM_SCALED_SLACK;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "CPX_CON_SETVARDOMAIN", 20)) {
    /*                               ^          */
#ifdef CPX_CON_SETVARDOMAIN
      *nv_return = CPX_CON_SETVARDOMAIN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CON_SETVARMEMBER", 20)) {
    /*                               ^          */
#ifdef CPX_CON_SETVARMEMBER
      *nv_return = CPX_CON_SETVARMEMBER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPXERR_BAD_INDCONSTR", 20)) {
    /*                               ^          */
#ifdef CPXERR_BAD_INDCONSTR
      *nv_return = CPXERR_BAD_INDCONSTR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NOT_UNBOUNDED", 20)) {
    /*                               ^          */
#ifdef CPXERR_NOT_UNBOUNDED
      *nv_return = CPXERR_NOT_UNBOUNDED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPXERR_SUBPROB_SOLVE", 20)) {
    /*                               ^          */
#ifdef CPXERR_SUBPROB_SOLVE
      *nv_return = CPXERR_SUBPROB_SOLVE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPX_PARAM_BARDISPLAY", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_BARDISPLAY
      *nv_return = CPX_PARAM_BARDISPLAY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_MIPDISPLAY", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_MIPDISPLAY
      *nv_return = CPX_PARAM_MIPDISPLAY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_NETDISPLAY", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_NETDISPLAY
      *nv_return = CPX_PARAM_NETDISPLAY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_SIMDISPLAY", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_SIMDISPLAY
      *nv_return = CPX_PARAM_SIMDISPLAY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Q':
    if (memEQ(name, "CPXERR_ADJ_SIGN_QUAD", 20)) {
    /*                               ^          */
#ifdef CPXERR_ADJ_SIGN_QUAD
      *nv_return = CPXERR_ADJ_SIGN_QUAD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CON_SETVARNEQCST", 20)) {
    /*                               ^          */
#ifdef CPX_CON_SETVARNEQCST
      *nv_return = CPX_CON_SETVARNEQCST;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_FEASOPT_MIN_QUAD", 20)) {
    /*                               ^          */
#ifdef CPX_FEASOPT_MIN_QUAD
      *nv_return = CPX_FEASOPT_MIN_QUAD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_FEASOPT_OPT_QUAD", 20)) {
    /*                               ^          */
#ifdef CPX_FEASOPT_OPT_QUAD
      *nv_return = CPX_FEASOPT_OPT_QUAD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPXERR_COUNT_OVERLAP", 20)) {
    /*                               ^          */
#ifdef CPXERR_COUNT_OVERLAP
      *nv_return = CPXERR_COUNT_OVERLAP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_TOO_MANY_RIMS", 20)) {
    /*                               ^          */
#ifdef CPXERR_TOO_MANY_RIMS
      *nv_return = CPXERR_TOO_MANY_RIMS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_TOO_MANY_ROWS", 20)) {
    /*                               ^          */
#ifdef CPXERR_TOO_MANY_ROWS
      *nv_return = CPXERR_TOO_MANY_ROWS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_BARRIER", 20)) {
    /*                               ^          */
#ifdef CPX_CALLBACK_BARRIER
      *nv_return = CPX_CALLBACK_BARRIER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAMTYPE_STRING", 20)) {
    /*                               ^          */
#ifdef CPX_PARAMTYPE_STRING
      *nv_return = CPX_PARAMTYPE_STRING;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_BBINTERVAL", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_BBINTERVAL
      *nv_return = CPX_PARAM_BBINTERVAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPXERR_BAS_FILE_SIZE", 20)) {
    /*                               ^          */
#ifdef CPXERR_BAS_FILE_SIZE
      *nv_return = CPXERR_BAS_FILE_SIZE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_DECOMPRESSION", 20)) {
    /*                               ^          */
#ifdef CPXERR_DECOMPRESSION
      *nv_return = CPXERR_DECOMPRESSION;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NEED_OPT_SOLN", 20)) {
    /*                               ^          */
#ifdef CPXERR_NEED_OPT_SOLN
      *nv_return = CPXERR_NEED_OPT_SOLN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_BASIC_SOLN", 20)) {
    /*                               ^          */
#ifdef CPXERR_NO_BASIC_SOLN
      *nv_return = CPXERR_NO_BASIC_SOLN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_RANDOMSEED", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_RANDOMSEED
      *nv_return = CPX_PARAM_RANDOMSEED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "CPXERR_BAD_DIRECTION", 20)) {
    /*                               ^          */
#ifdef CPXERR_BAD_DIRECTION
      *nv_return = CPXERR_BAD_DIRECTION;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_BAD_PROB_TYPE", 20)) {
    /*                               ^          */
#ifdef CPXERR_BAD_PROB_TYPE
      *nv_return = CPXERR_BAD_PROB_TYPE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_MISS_SOS_TYPE", 20)) {
    /*                               ^          */
#ifdef CPXERR_MISS_SOS_TYPE
      *nv_return = CPXERR_MISS_SOS_TYPE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NAME_CREATION", 20)) {
    /*                               ^          */
#ifdef CPXERR_NAME_CREATION
      *nv_return = CPXERR_NAME_CREATION;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_BOUND_TYPE", 20)) {
    /*                               ^          */
#ifdef CPXERR_NO_BOUND_TYPE
      *nv_return = CPXERR_NO_BOUND_TYPE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_KAPPASTATS", 20)) {
    /*                               ^          */
#ifdef CPXERR_NO_KAPPASTATS
      *nv_return = CPXERR_NO_KAPPASTATS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXNET_PRICE_PARTIAL", 20)) {
    /*                               ^          */
#ifdef CPXNET_PRICE_PARTIAL
      *nv_return = CPXNET_PRICE_PARTIAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CON_LAST_CONTYPE", 20)) {
    /*                               ^          */
#ifdef CPX_CON_LAST_CONTYPE
      *nv_return = CPX_CON_LAST_CONTYPE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_EACHCUTLIM", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_EACHCUTLIM
      *nv_return = CPX_PARAM_EACHCUTLIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_MIPORDTYPE", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_MIPORDTYPE
      *nv_return = CPX_PARAM_MIPORDTYPE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_MIQCPSTRAT", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_MIQCPSTRAT
      *nv_return = CPX_PARAM_MIQCPSTRAT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_POLISHTIME", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_POLISHTIME
      *nv_return = CPX_PARAM_POLISHTIME;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "CPXERR_BAD_LAZY_UCUT", 20)) {
    /*                               ^          */
#ifdef CPXERR_BAD_LAZY_UCUT
      *nv_return = CPXERR_BAD_LAZY_UCUT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAMTYPE_DOUBLE", 20)) {
    /*                               ^          */
#ifdef CPX_PARAMTYPE_DOUBLE
      *nv_return = CPX_PARAMTYPE_DOUBLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "CPX_PARAM_FLOWCOVERS", 20)) {
    /*                               ^          */
#ifdef CPX_PARAM_FLOWCOVERS
      *nv_return = CPX_PARAM_FLOWCOVERS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "CPX_CALLBACK_NETWORK", 20)) {
    /*                               ^          */
#ifdef CPX_CALLBACK_NETWORK
      *nv_return = CPX_CALLBACK_NETWORK;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "CPXERR_BAD_PARAM_NUM", 20)) {
    /*                               ^          */
#ifdef CPXERR_BAD_PARAM_NUM
      *nv_return = CPXERR_BAD_PARAM_NUM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_RHS_IN_OBJ", 20)) {
    /*                               ^          */
#ifdef CPXERR_NO_RHS_IN_OBJ
      *nv_return = CPXERR_NO_RHS_IN_OBJ;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_PARAM_TOO_BIG", 20)) {
    /*                               ^          */
#ifdef CPXERR_PARAM_TOO_BIG
      *nv_return = CPXERR_PARAM_TOO_BIG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_Q_NOT_POS_DEF", 20)) {
    /*                               ^          */
#ifdef CPXERR_Q_NOT_POS_DEF
      *nv_return = CPXERR_Q_NOT_POS_DEF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_21 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_ADJ_SIGN_SENSE CPXERR_ALGNOTLICENSED CPXERR_ARRAY_TOO_LONG
     CPXERR_BAD_BOUND_TYPE CPXERR_BAD_EXPO_RANGE CPXERR_BAD_PARAM_NAME
     CPXERR_BAS_FILE_SHORT CPXERR_CHILD_OF_CHILD CPXERR_EXTRA_BV_BOUND
     CPXERR_EXTRA_FR_BOUND CPXERR_EXTRA_FX_BOUND CPXERR_FAIL_OPEN_READ
     CPXERR_IIS_NOT_INFEAS CPXERR_IIS_OPT_INFEAS CPXERR_IIS_SUB_IT_LIM
     CPXERR_INVALID_NUMBER CPXERR_LIMITS_TOO_BIG CPXERR_MSG_NO_CHANNEL
     CPXERR_MSG_NO_FILEPTR CPXERR_NAME_NOT_FOUND CPXERR_NET_FILE_SHORT
     CPXERR_NO_BARRIER_LIC CPXERR_NO_BOUND_SENSE CPXERR_NO_ENVIRONMENT
     CPXERR_NO_OP_OR_SENSE CPXERR_NO_QP_OPERATOR CPXERR_NO_VECTOR_SOLN
     CPXERR_PRESLV_COPYSOS CPXERR_PRESLV_NO_PROB CPXERR_PRESLV_SOLN_QP
     CPXERR_PTHREAD_CREATE CPXERR_QCP_SENSE_FILE CPXERR_QUAD_EXP_NOT_2
     CPXERR_SAV_FILE_VALUE CPXERR_SAV_FILE_WRITE CPXERR_SBASE_INCOMPAT
     CPXERR_TOO_MANY_RIMNZ CPXERR_UNIQUE_WEIGHTS CPXERR_WORK_FILE_OPEN
     CPXERR_WORK_FILE_READ CPXMIP_MEM_LIM_INFEAS CPXMIP_OPTIMAL_INFEAS
     CPXNET_TRUE_OBJECTIVE CPX_CALLBACK_MIP_NODE CPX_CALLBACK_PRESOLVE
     CPX_CONFLICT_EXCLUDED CPX_DPRIIND_FULLSTEEP CPX_MAX_DUAL_RESIDUAL
     CPX_MAX_PRIMAL_INFEAS CPX_MIPSEARCH_DYNAMIC CPX_MIPSTART_SOLVEMIP
     CPX_NODESEL_BESTBOUND CPX_PARAM_APIENCODING CPX_PARAM_BARCROSSALG
     CPX_PARAM_BARSTARTALG CPX_PARAM_BASINTERVAL CPX_PARAM_BNDSTRENIND
     CPX_PARAM_FEASOPTMODE CPX_PARAM_MIPEMPHASIS CPX_PARAM_MIPINTERVAL
     CPX_PARAM_NODEFILEIND CPX_PARAM_POPULATELIM CPX_PARAM_QPNZREADLIM
     CPX_PARAM_RELAXPREIND CPX_PARAM_REPAIRTRIES CPX_PARAM_SIFTDISPLAY
     CPX_PARAM_SOLNPOOLGAP CPX_PARAM_STRONGITLIM CPX_PARAM_TUNINGTILIM
     CPX_STAT_ABORT_IT_LIM CPX_SUM_DUAL_RESIDUAL CPX_SUM_PRIMAL_INFEAS */
  /* Offset 13 gives the best switch position.  */
  switch (name[13]) {
  case 'A':
    if (memEQ(name, "CPX_PARAM_RELAXPREIND", 21)) {
    /*                            ^              */
#ifdef CPX_PARAM_RELAXPREIND
      *nv_return = CPX_PARAM_RELAXPREIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_REPAIRTRIES", 21)) {
    /*                            ^              */
#ifdef CPX_PARAM_REPAIRTRIES
      *nv_return = CPX_PARAM_REPAIRTRIES;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "CPXERR_EXTRA_BV_BOUND", 21)) {
    /*                            ^              */
#ifdef CPXERR_EXTRA_BV_BOUND
      *nv_return = CPXERR_EXTRA_BV_BOUND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_IIS_SUB_IT_LIM", 21)) {
    /*                            ^              */
#ifdef CPXERR_IIS_SUB_IT_LIM
      *nv_return = CPXERR_IIS_SUB_IT_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXNET_TRUE_OBJECTIVE", 21)) {
    /*                            ^              */
#ifdef CPXNET_TRUE_OBJECTIVE
      *nv_return = CPXNET_TRUE_OBJECTIVE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "CPX_PARAM_BARCROSSALG", 21)) {
    /*                            ^              */
#ifdef CPX_PARAM_BARCROSSALG
      *nv_return = CPX_PARAM_BARCROSSALG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "CPXERR_INVALID_NUMBER", 21)) {
    /*                            ^              */
#ifdef CPXERR_INVALID_NUMBER
      *nv_return = CPXERR_INVALID_NUMBER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_PTHREAD_CREATE", 21)) {
    /*                            ^              */
#ifdef CPXERR_PTHREAD_CREATE
      *nv_return = CPXERR_PTHREAD_CREATE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPX_CONFLICT_EXCLUDED", 21)) {
    /*                            ^              */
#ifdef CPX_CONFLICT_EXCLUDED
      *nv_return = CPX_CONFLICT_EXCLUDED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_NODESEL_BESTBOUND", 21)) {
    /*                            ^              */
#ifdef CPX_NODESEL_BESTBOUND
      *nv_return = CPX_NODESEL_BESTBOUND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_APIENCODING", 21)) {
    /*                            ^              */
#ifdef CPX_PARAM_APIENCODING
      *nv_return = CPX_PARAM_APIENCODING;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_MIPEMPHASIS", 21)) {
    /*                            ^              */
#ifdef CPX_PARAM_MIPEMPHASIS
      *nv_return = CPX_PARAM_MIPEMPHASIS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_NODEFILEIND", 21)) {
    /*                            ^              */
#ifdef CPX_PARAM_NODEFILEIND
      *nv_return = CPX_PARAM_NODEFILEIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "CPXERR_EXTRA_FR_BOUND", 21)) {
    /*                            ^              */
#ifdef CPXERR_EXTRA_FR_BOUND
      *nv_return = CPXERR_EXTRA_FR_BOUND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_EXTRA_FX_BOUND", 21)) {
    /*                            ^              */
#ifdef CPXERR_EXTRA_FX_BOUND
      *nv_return = CPXERR_EXTRA_FX_BOUND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "CPXERR_ADJ_SIGN_SENSE", 21)) {
    /*                            ^              */
#ifdef CPXERR_ADJ_SIGN_SENSE
      *nv_return = CPXERR_ADJ_SIGN_SENSE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPXERR_NO_ENVIRONMENT", 21)) {
    /*                            ^              */
#ifdef CPXERR_NO_ENVIRONMENT
      *nv_return = CPXERR_NO_ENVIRONMENT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_SBASE_INCOMPAT", 21)) {
    /*                            ^              */
#ifdef CPXERR_SBASE_INCOMPAT
      *nv_return = CPXERR_SBASE_INCOMPAT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_WORK_FILE_OPEN", 21)) {
    /*                            ^              */
#ifdef CPXERR_WORK_FILE_OPEN
      *nv_return = CPXERR_WORK_FILE_OPEN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_WORK_FILE_READ", 21)) {
    /*                            ^              */
#ifdef CPXERR_WORK_FILE_READ
      *nv_return = CPXERR_WORK_FILE_READ;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_BASINTERVAL", 21)) {
    /*                            ^              */
#ifdef CPX_PARAM_BASINTERVAL
      *nv_return = CPX_PARAM_BASINTERVAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_MIPINTERVAL", 21)) {
    /*                            ^              */
#ifdef CPX_PARAM_MIPINTERVAL
      *nv_return = CPX_PARAM_MIPINTERVAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_TUNINGTILIM", 21)) {
    /*                            ^              */
#ifdef CPX_PARAM_TUNINGTILIM
      *nv_return = CPX_PARAM_TUNINGTILIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPXERR_ALGNOTLICENSED", 21)) {
    /*                            ^              */
#ifdef CPXERR_ALGNOTLICENSED
      *nv_return = CPXERR_ALGNOTLICENSED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_BAS_FILE_SHORT", 21)) {
    /*                            ^              */
#ifdef CPXERR_BAS_FILE_SHORT
      *nv_return = CPXERR_BAS_FILE_SHORT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NET_FILE_SHORT", 21)) {
    /*                            ^              */
#ifdef CPXERR_NET_FILE_SHORT
      *nv_return = CPXERR_NET_FILE_SHORT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_SAV_FILE_VALUE", 21)) {
    /*                            ^              */
#ifdef CPXERR_SAV_FILE_VALUE
      *nv_return = CPXERR_SAV_FILE_VALUE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_SAV_FILE_WRITE", 21)) {
    /*                            ^              */
#ifdef CPXERR_SAV_FILE_WRITE
      *nv_return = CPXERR_SAV_FILE_WRITE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXMIP_OPTIMAL_INFEAS", 21)) {
    /*                            ^              */
#ifdef CPXMIP_OPTIMAL_INFEAS
      *nv_return = CPXMIP_OPTIMAL_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MAX_PRIMAL_INFEAS", 21)) {
    /*                            ^              */
#ifdef CPX_MAX_PRIMAL_INFEAS
      *nv_return = CPX_MAX_PRIMAL_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_PRIMAL_INFEAS", 21)) {
    /*                            ^              */
#ifdef CPX_SUM_PRIMAL_INFEAS
      *nv_return = CPX_SUM_PRIMAL_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "CPXMIP_MEM_LIM_INFEAS", 21)) {
    /*                            ^              */
#ifdef CPXMIP_MEM_LIM_INFEAS
      *nv_return = CPXMIP_MEM_LIM_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_MIP_NODE", 21)) {
    /*                            ^              */
#ifdef CPX_CALLBACK_MIP_NODE
      *nv_return = CPX_CALLBACK_MIP_NODE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPXERR_NO_BOUND_SENSE", 21)) {
    /*                            ^              */
#ifdef CPXERR_NO_BOUND_SENSE
      *nv_return = CPXERR_NO_BOUND_SENSE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_QCP_SENSE_FILE", 21)) {
    /*                            ^              */
#ifdef CPXERR_QCP_SENSE_FILE
      *nv_return = CPXERR_QCP_SENSE_FILE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_TOO_MANY_RIMNZ", 21)) {
    /*                            ^              */
#ifdef CPXERR_TOO_MANY_RIMNZ
      *nv_return = CPXERR_TOO_MANY_RIMNZ;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_SOLNPOOLGAP", 21)) {
    /*                            ^              */
#ifdef CPX_PARAM_SOLNPOOLGAP
      *nv_return = CPX_PARAM_SOLNPOOLGAP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPXERR_CHILD_OF_CHILD", 21)) {
    /*                            ^              */
#ifdef CPXERR_CHILD_OF_CHILD
      *nv_return = CPXERR_CHILD_OF_CHILD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NAME_NOT_FOUND", 21)) {
    /*                            ^              */
#ifdef CPXERR_NAME_NOT_FOUND
      *nv_return = CPXERR_NAME_NOT_FOUND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_OP_OR_SENSE", 21)) {
    /*                            ^              */
#ifdef CPXERR_NO_OP_OR_SENSE
      *nv_return = CPXERR_NO_OP_OR_SENSE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_QP_OPERATOR", 21)) {
    /*                            ^              */
#ifdef CPXERR_NO_QP_OPERATOR
      *nv_return = CPXERR_NO_QP_OPERATOR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_STRONGITLIM", 21)) {
    /*                            ^              */
#ifdef CPX_PARAM_STRONGITLIM
      *nv_return = CPX_PARAM_STRONGITLIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPXERR_BAD_EXPO_RANGE", 21)) {
    /*                            ^              */
#ifdef CPXERR_BAD_EXPO_RANGE
      *nv_return = CPXERR_BAD_EXPO_RANGE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_FAIL_OPEN_READ", 21)) {
    /*                            ^              */
#ifdef CPXERR_FAIL_OPEN_READ
      *nv_return = CPXERR_FAIL_OPEN_READ;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_PRESOLVE", 21)) {
    /*                            ^              */
#ifdef CPX_CALLBACK_PRESOLVE
      *nv_return = CPX_CALLBACK_PRESOLVE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPXERR_BAD_PARAM_NAME", 21)) {
    /*                            ^              */
#ifdef CPXERR_BAD_PARAM_NAME
      *nv_return = CPXERR_BAD_PARAM_NAME;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_BARRIER_LIC", 21)) {
    /*                            ^              */
#ifdef CPXERR_NO_BARRIER_LIC
      *nv_return = CPXERR_NO_BARRIER_LIC;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MAX_DUAL_RESIDUAL", 21)) {
    /*                            ^              */
#ifdef CPX_MAX_DUAL_RESIDUAL
      *nv_return = CPX_MAX_DUAL_RESIDUAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_DUAL_RESIDUAL", 21)) {
    /*                            ^              */
#ifdef CPX_SUM_DUAL_RESIDUAL
      *nv_return = CPX_SUM_DUAL_RESIDUAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPX_MIPSTART_SOLVEMIP", 21)) {
    /*                            ^              */
#ifdef CPX_MIPSTART_SOLVEMIP
      *nv_return = CPX_MIPSTART_SOLVEMIP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_BARSTARTALG", 21)) {
    /*                            ^              */
#ifdef CPX_PARAM_BARSTARTALG
      *nv_return = CPX_PARAM_BARSTARTALG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_BNDSTRENIND", 21)) {
    /*                            ^              */
#ifdef CPX_PARAM_BNDSTRENIND
      *nv_return = CPX_PARAM_BNDSTRENIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_FEASOPTMODE", 21)) {
    /*                            ^              */
#ifdef CPX_PARAM_FEASOPTMODE
      *nv_return = CPX_PARAM_FEASOPTMODE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "CPXERR_ARRAY_TOO_LONG", 21)) {
    /*                            ^              */
#ifdef CPXERR_ARRAY_TOO_LONG
      *nv_return = CPXERR_ARRAY_TOO_LONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_IIS_NOT_INFEAS", 21)) {
    /*                            ^              */
#ifdef CPXERR_IIS_NOT_INFEAS
      *nv_return = CPXERR_IIS_NOT_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_IIS_OPT_INFEAS", 21)) {
    /*                            ^              */
#ifdef CPXERR_IIS_OPT_INFEAS
      *nv_return = CPXERR_IIS_OPT_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_VECTOR_SOLN", 21)) {
    /*                            ^              */
#ifdef CPXERR_NO_VECTOR_SOLN
      *nv_return = CPXERR_NO_VECTOR_SOLN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_SIFTDISPLAY", 21)) {
    /*                            ^              */
#ifdef CPX_PARAM_SIFTDISPLAY
      *nv_return = CPX_PARAM_SIFTDISPLAY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_ABORT_IT_LIM", 21)) {
    /*                            ^              */
#ifdef CPX_STAT_ABORT_IT_LIM
      *nv_return = CPX_STAT_ABORT_IT_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "CPXERR_BAD_BOUND_TYPE", 21)) {
    /*                            ^              */
#ifdef CPXERR_BAD_BOUND_TYPE
      *nv_return = CPXERR_BAD_BOUND_TYPE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_DPRIIND_FULLSTEEP", 21)) {
    /*                            ^              */
#ifdef CPX_DPRIIND_FULLSTEEP
      *nv_return = CPX_DPRIIND_FULLSTEEP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_POPULATELIM", 21)) {
    /*                            ^              */
#ifdef CPX_PARAM_POPULATELIM
      *nv_return = CPX_PARAM_POPULATELIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'X':
    if (memEQ(name, "CPXERR_QUAD_EXP_NOT_2", 21)) {
    /*                            ^              */
#ifdef CPXERR_QUAD_EXP_NOT_2
      *nv_return = CPXERR_QUAD_EXP_NOT_2;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Z':
    if (memEQ(name, "CPX_PARAM_QPNZREADLIM", 21)) {
    /*                            ^              */
#ifdef CPX_PARAM_QPNZREADLIM
      *nv_return = CPX_PARAM_QPNZREADLIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "CPXERR_LIMITS_TOO_BIG", 21)) {
    /*                            ^              */
#ifdef CPXERR_LIMITS_TOO_BIG
      *nv_return = CPXERR_LIMITS_TOO_BIG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_MSG_NO_CHANNEL", 21)) {
    /*                            ^              */
#ifdef CPXERR_MSG_NO_CHANNEL
      *nv_return = CPXERR_MSG_NO_CHANNEL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_MSG_NO_FILEPTR", 21)) {
    /*                            ^              */
#ifdef CPXERR_MSG_NO_FILEPTR
      *nv_return = CPXERR_MSG_NO_FILEPTR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_PRESLV_COPYSOS", 21)) {
    /*                            ^              */
#ifdef CPXERR_PRESLV_COPYSOS
      *nv_return = CPXERR_PRESLV_COPYSOS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_PRESLV_NO_PROB", 21)) {
    /*                            ^              */
#ifdef CPXERR_PRESLV_NO_PROB
      *nv_return = CPXERR_PRESLV_NO_PROB;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_PRESLV_SOLN_QP", 21)) {
    /*                            ^              */
#ifdef CPXERR_PRESLV_SOLN_QP
      *nv_return = CPXERR_PRESLV_SOLN_QP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_UNIQUE_WEIGHTS", 21)) {
    /*                            ^              */
#ifdef CPXERR_UNIQUE_WEIGHTS
      *nv_return = CPXERR_UNIQUE_WEIGHTS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MIPSEARCH_DYNAMIC", 21)) {
    /*                            ^              */
#ifdef CPX_MIPSEARCH_DYNAMIC
      *nv_return = CPX_MIPSEARCH_DYNAMIC;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_22 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_ARC_INDEX_RANGE CPXERR_BAD_BOUND_SENSE CPXERR_COL_INDEX_RANGE
     CPXERR_COL_ROW_REPEATS CPXERR_FAIL_OPEN_WRITE CPXERR_IIS_SUB_OBJ_LIM
     CPXERR_ILL_DEFINED_PWL CPXERR_INDEX_NOT_BASIC CPXERR_INDEX_RANGE_LOW
     CPXERR_IN_INFOCALLBACK CPXERR_MSG_NO_FUNCTION CPXERR_NOT_ONE_PROBLEM
     CPXERR_NO_BARRIER_SOLN CPXERR_NO_NAME_SECTION CPXERR_NO_NUMBER_BOUND
     CPXERR_NO_NUMBER_FIRST CPXERR_NO_ROWS_SECTION CPXERR_PARAM_TOO_SMALL
     CPXERR_PRESLV_NO_BASIS CPXERR_PRESLV_SOLN_MIP CPXERR_PRESLV_START_LP
     CPXERR_PRESLV_TIME_LIM CPXERR_Q_NOT_SYMMETRIC CPXERR_RIM_ROW_REPEATS
     CPXERR_ROW_INDEX_RANGE CPXERR_SYNCPRIM_CREATE CPXERR_TOO_MANY_COEFFS
     CPXERR_WORK_FILE_WRITE CPXMIP_NODE_LIM_INFEAS CPXMIP_POPULATESOL_LIM
     CPXMIP_TIME_LIM_INFEAS CPXNET_PRICE_MULT_PART CPX_CALLBACK_MIP_PROBE
     CPX_CALLBACK_MIP_SOLVE CPX_CALLBACK_QPBARRIER CPX_CALLBACK_QPSIMPLEX
     CPX_INTEGER_INFEASIBLE CPX_MAX_QCSLACK_INFEAS CPX_MIPSTART_CHECKFEAS
     CPX_PARAM_BARQCPEPCOMP CPX_PARAM_FILEENCODING CPX_PARAM_PARALLELMODE
     CPX_PARAM_PROBEDETTIME CPX_PARAM_QPMAKEPSDIND CPX_PARAM_SOLNPOOLAGAP
     CPX_PARAM_TUNINGREPEAT CPX_PARAM_ZEROHALFCUTS CPX_PREREDUCE_DUALONLY
     CPX_STAT_ABORT_OBJ_LIM CPX_SUM_QCSLACK_INFEAS CPX_WRITELEVEL_ALLVARS */
  /* Offset 13 gives the best switch position.  */
  switch (name[13]) {
  case 'A':
    if (memEQ(name, "CPX_PARAM_PARALLELMODE", 22)) {
    /*                            ^               */
#ifdef CPX_PARAM_PARALLELMODE
      *nv_return = CPX_PARAM_PARALLELMODE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_QPMAKEPSDIND", 22)) {
    /*                            ^               */
#ifdef CPX_PARAM_QPMAKEPSDIND
      *nv_return = CPX_PARAM_QPMAKEPSDIND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "CPXERR_IIS_SUB_OBJ_LIM", 22)) {
    /*                            ^               */
#ifdef CPXERR_IIS_SUB_OBJ_LIM
      *nv_return = CPXERR_IIS_SUB_OBJ_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_NUMBER_BOUND", 22)) {
    /*                            ^               */
#ifdef CPXERR_NO_NUMBER_BOUND
      *nv_return = CPXERR_NO_NUMBER_BOUND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_NUMBER_FIRST", 22)) {
    /*                            ^               */
#ifdef CPXERR_NO_NUMBER_FIRST
      *nv_return = CPXERR_NO_NUMBER_FIRST;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_PROBEDETTIME", 22)) {
    /*                            ^               */
#ifdef CPX_PARAM_PROBEDETTIME
      *nv_return = CPX_PARAM_PROBEDETTIME;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "CPX_MAX_QCSLACK_INFEAS", 22)) {
    /*                            ^               */
#ifdef CPX_MAX_QCSLACK_INFEAS
      *nv_return = CPX_MAX_QCSLACK_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MIPSTART_CHECKFEAS", 22)) {
    /*                            ^               */
#ifdef CPX_MIPSTART_CHECKFEAS
      *nv_return = CPX_MIPSTART_CHECKFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_QCSLACK_INFEAS", 22)) {
    /*                            ^               */
#ifdef CPX_SUM_QCSLACK_INFEAS
      *nv_return = CPX_SUM_QCSLACK_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "CPXERR_ARC_INDEX_RANGE", 22)) {
    /*                            ^               */
#ifdef CPXERR_ARC_INDEX_RANGE
      *nv_return = CPXERR_ARC_INDEX_RANGE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_COL_INDEX_RANGE", 22)) {
    /*                            ^               */
#ifdef CPXERR_COL_INDEX_RANGE
      *nv_return = CPXERR_COL_INDEX_RANGE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_ROW_INDEX_RANGE", 22)) {
    /*                            ^               */
#ifdef CPXERR_ROW_INDEX_RANGE
      *nv_return = CPXERR_ROW_INDEX_RANGE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPXERR_NOT_ONE_PROBLEM", 22)) {
    /*                            ^               */
#ifdef CPXERR_NOT_ONE_PROBLEM
      *nv_return = CPXERR_NOT_ONE_PROBLEM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_NAME_SECTION", 22)) {
    /*                            ^               */
#ifdef CPXERR_NO_NAME_SECTION
      *nv_return = CPXERR_NO_NAME_SECTION;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_FILEENCODING", 22)) {
    /*                            ^               */
#ifdef CPX_PARAM_FILEENCODING
      *nv_return = CPX_PARAM_FILEENCODING;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "CPXERR_ILL_DEFINED_PWL", 22)) {
    /*                            ^               */
#ifdef CPXERR_ILL_DEFINED_PWL
      *nv_return = CPXERR_ILL_DEFINED_PWL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPXERR_SYNCPRIM_CREATE", 22)) {
    /*                            ^               */
#ifdef CPXERR_SYNCPRIM_CREATE
      *nv_return = CPXERR_SYNCPRIM_CREATE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_WORK_FILE_WRITE", 22)) {
    /*                            ^               */
#ifdef CPXERR_WORK_FILE_WRITE
      *nv_return = CPXERR_WORK_FILE_WRITE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXMIP_NODE_LIM_INFEAS", 22)) {
    /*                            ^               */
#ifdef CPXMIP_NODE_LIM_INFEAS
      *nv_return = CPXMIP_NODE_LIM_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXMIP_TIME_LIM_INFEAS", 22)) {
    /*                            ^               */
#ifdef CPXMIP_TIME_LIM_INFEAS
      *nv_return = CPXMIP_TIME_LIM_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_TUNINGREPEAT", 22)) {
    /*                            ^               */
#ifdef CPX_PARAM_TUNINGREPEAT
      *nv_return = CPX_PARAM_TUNINGREPEAT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPX_WRITELEVEL_ALLVARS", 22)) {
    /*                            ^               */
#ifdef CPX_WRITELEVEL_ALLVARS
      *nv_return = CPX_WRITELEVEL_ALLVARS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "CPXNET_PRICE_MULT_PART", 22)) {
    /*                            ^               */
#ifdef CPXNET_PRICE_MULT_PART
      *nv_return = CPXNET_PRICE_MULT_PART;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_MIP_PROBE", 22)) {
    /*                            ^               */
#ifdef CPX_CALLBACK_MIP_PROBE
      *nv_return = CPX_CALLBACK_MIP_PROBE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_MIP_SOLVE", 22)) {
    /*                            ^               */
#ifdef CPX_CALLBACK_MIP_SOLVE
      *nv_return = CPX_CALLBACK_MIP_SOLVE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPXERR_INDEX_NOT_BASIC", 22)) {
    /*                            ^               */
#ifdef CPXERR_INDEX_NOT_BASIC
      *nv_return = CPXERR_INDEX_NOT_BASIC;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_TOO_MANY_COEFFS", 22)) {
    /*                            ^               */
#ifdef CPXERR_TOO_MANY_COEFFS
      *nv_return = CPXERR_TOO_MANY_COEFFS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_INTEGER_INFEASIBLE", 22)) {
    /*                            ^               */
#ifdef CPX_INTEGER_INFEASIBLE
      *nv_return = CPX_INTEGER_INFEASIBLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_SOLNPOOLAGAP", 22)) {
    /*                            ^               */
#ifdef CPX_PARAM_SOLNPOOLAGAP
      *nv_return = CPX_PARAM_SOLNPOOLAGAP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPXERR_IN_INFOCALLBACK", 22)) {
    /*                            ^               */
#ifdef CPXERR_IN_INFOCALLBACK
      *nv_return = CPXERR_IN_INFOCALLBACK;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_ZEROHALFCUTS", 22)) {
    /*                            ^               */
#ifdef CPX_PARAM_ZEROHALFCUTS
      *nv_return = CPX_PARAM_ZEROHALFCUTS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPXERR_FAIL_OPEN_WRITE", 22)) {
    /*                            ^               */
#ifdef CPXERR_FAIL_OPEN_WRITE
      *nv_return = CPXERR_FAIL_OPEN_WRITE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Q':
    if (memEQ(name, "CPX_CALLBACK_QPBARRIER", 22)) {
    /*                            ^               */
#ifdef CPX_CALLBACK_QPBARRIER
      *nv_return = CPX_CALLBACK_QPBARRIER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_QPSIMPLEX", 22)) {
    /*                            ^               */
#ifdef CPX_CALLBACK_QPSIMPLEX
      *nv_return = CPX_CALLBACK_QPSIMPLEX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_BARQCPEPCOMP", 22)) {
    /*                            ^               */
#ifdef CPX_PARAM_BARQCPEPCOMP
      *nv_return = CPX_PARAM_BARQCPEPCOMP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPXERR_INDEX_RANGE_LOW", 22)) {
    /*                            ^               */
#ifdef CPXERR_INDEX_RANGE_LOW
      *nv_return = CPXERR_INDEX_RANGE_LOW;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NO_BARRIER_SOLN", 22)) {
    /*                            ^               */
#ifdef CPXERR_NO_BARRIER_SOLN
      *nv_return = CPXERR_NO_BARRIER_SOLN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPXERR_NO_ROWS_SECTION", 22)) {
    /*                            ^               */
#ifdef CPXERR_NO_ROWS_SECTION
      *nv_return = CPXERR_NO_ROWS_SECTION;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_Q_NOT_SYMMETRIC", 22)) {
    /*                            ^               */
#ifdef CPXERR_Q_NOT_SYMMETRIC
      *nv_return = CPXERR_Q_NOT_SYMMETRIC;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "CPXERR_PARAM_TOO_SMALL", 22)) {
    /*                            ^               */
#ifdef CPXERR_PARAM_TOO_SMALL
      *nv_return = CPXERR_PARAM_TOO_SMALL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXMIP_POPULATESOL_LIM", 22)) {
    /*                            ^               */
#ifdef CPXMIP_POPULATESOL_LIM
      *nv_return = CPXMIP_POPULATESOL_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_ABORT_OBJ_LIM", 22)) {
    /*                            ^               */
#ifdef CPX_STAT_ABORT_OBJ_LIM
      *nv_return = CPX_STAT_ABORT_OBJ_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "CPXERR_BAD_BOUND_SENSE", 22)) {
    /*                            ^               */
#ifdef CPXERR_BAD_BOUND_SENSE
      *nv_return = CPXERR_BAD_BOUND_SENSE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "CPXERR_COL_ROW_REPEATS", 22)) {
    /*                            ^               */
#ifdef CPXERR_COL_ROW_REPEATS
      *nv_return = CPXERR_COL_ROW_REPEATS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_RIM_ROW_REPEATS", 22)) {
    /*                            ^               */
#ifdef CPXERR_RIM_ROW_REPEATS
      *nv_return = CPXERR_RIM_ROW_REPEATS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "CPXERR_MSG_NO_FUNCTION", 22)) {
    /*                            ^               */
#ifdef CPXERR_MSG_NO_FUNCTION
      *nv_return = CPXERR_MSG_NO_FUNCTION;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_PRESLV_NO_BASIS", 22)) {
    /*                            ^               */
#ifdef CPXERR_PRESLV_NO_BASIS
      *nv_return = CPXERR_PRESLV_NO_BASIS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_PRESLV_SOLN_MIP", 22)) {
    /*                            ^               */
#ifdef CPXERR_PRESLV_SOLN_MIP
      *nv_return = CPXERR_PRESLV_SOLN_MIP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_PRESLV_START_LP", 22)) {
    /*                            ^               */
#ifdef CPXERR_PRESLV_START_LP
      *nv_return = CPXERR_PRESLV_START_LP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_PRESLV_TIME_LIM", 22)) {
    /*                            ^               */
#ifdef CPXERR_PRESLV_TIME_LIM
      *nv_return = CPXERR_PRESLV_TIME_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PREREDUCE_DUALONLY", 22)) {
    /*                            ^               */
#ifdef CPX_PREREDUCE_DUALONLY
      *nv_return = CPX_PREREDUCE_DUALONLY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_23 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_CANT_CLOSE_CHILD CPXERR_COL_REPEAT_PRINT CPXERR_IIS_SUB_TIME_LIM
     CPXERR_INDEX_RANGE_HIGH CPXERR_LO_BOUND_REPEATS CPXERR_NEGATIVE_SURPLUS
     CPXERR_NODE_INDEX_RANGE CPXERR_PRESLV_BAD_PARAM CPXERR_PRESLV_BASIS_MEM
     CPXERR_PRESLV_COPYORDER CPXERR_PRESLV_CRUSHFORM CPXERR_PRESLV_INForUNBD
     CPXERR_ROW_REPEAT_PRINT CPXERR_TOO_MANY_THREADS CPXERR_UP_BOUND_REPEATS
     CPXMIP_DETTIME_LIM_FEAS CPX_CALLBACK_MIP_BRANCH CPX_CON_SETVARINTERSECT
     CPX_DPRIIND_STEEPQSTART CPX_MAX_INDSLACK_INFEAS CPX_MAX_PRIMAL_RESIDUAL
     CPX_MAX_SCALED_RED_COST CPX_MIPORDER_SCALEDCOST CPX_MIPSTART_SOLVEFIXED
     CPX_NODESEL_BESTEST_ALT CPX_PARAM_MIPKAPPASTATS CPX_PARAM_STRONGCANDLIM
     CPX_PARAM_SUBMIPNODELIM CPX_PARAM_TUNINGDISPLAY CPX_PARAM_TUNINGMEASURE
     CPX_PPRIIND_STEEPQSTART CPX_SOLUTIONTARGET_AUTO CPX_STAT_ABORT_TIME_LIM
     CPX_STAT_OPTIMAL_INFEAS CPX_SUM_INDSLACK_INFEAS CPX_SUM_PRIMAL_RESIDUAL
     CPX_SUM_SCALED_RED_COST */
  /* Offset 13 gives the best switch position.  */
  switch (name[13]) {
  case 'A':
    if (memEQ(name, "CPX_MAX_INDSLACK_INFEAS", 23)) {
    /*                            ^                */
#ifdef CPX_MAX_INDSLACK_INFEAS
      *nv_return = CPX_MAX_INDSLACK_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SOLUTIONTARGET_AUTO", 23)) {
    /*                            ^                */
#ifdef CPX_SOLUTIONTARGET_AUTO
      *nv_return = CPX_SOLUTIONTARGET_AUTO;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_INDSLACK_INFEAS", 23)) {
    /*                            ^                */
#ifdef CPX_SUM_INDSLACK_INFEAS
      *nv_return = CPX_SUM_INDSLACK_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "CPXERR_IIS_SUB_TIME_LIM", 23)) {
    /*                            ^                */
#ifdef CPXERR_IIS_SUB_TIME_LIM
      *nv_return = CPXERR_IIS_SUB_TIME_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "CPX_MAX_SCALED_RED_COST", 23)) {
    /*                            ^                */
#ifdef CPX_MAX_SCALED_RED_COST
      *nv_return = CPX_MAX_SCALED_RED_COST;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_SCALED_RED_COST", 23)) {
    /*                            ^                */
#ifdef CPX_SUM_SCALED_RED_COST
      *nv_return = CPX_SUM_SCALED_RED_COST;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPXMIP_DETTIME_LIM_FEAS", 23)) {
    /*                            ^                */
#ifdef CPXMIP_DETTIME_LIM_FEAS
      *nv_return = CPXMIP_DETTIME_LIM_FEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_NODESEL_BESTEST_ALT", 23)) {
    /*                            ^                */
#ifdef CPX_NODESEL_BESTEST_ALT
      *nv_return = CPX_NODESEL_BESTEST_ALT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPX_PARAM_TUNINGDISPLAY", 23)) {
    /*                            ^                */
#ifdef CPX_PARAM_TUNINGDISPLAY
      *nv_return = CPX_PARAM_TUNINGDISPLAY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_TUNINGMEASURE", 23)) {
    /*                            ^                */
#ifdef CPX_PARAM_TUNINGMEASURE
      *nv_return = CPX_PARAM_TUNINGMEASURE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "CPX_PARAM_MIPKAPPASTATS", 23)) {
    /*                            ^                */
#ifdef CPX_PARAM_MIPKAPPASTATS
      *nv_return = CPX_PARAM_MIPKAPPASTATS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPXERR_CANT_CLOSE_CHILD", 23)) {
    /*                            ^                */
#ifdef CPXERR_CANT_CLOSE_CHILD
      *nv_return = CPXERR_CANT_CLOSE_CHILD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MAX_PRIMAL_RESIDUAL", 23)) {
    /*                            ^                */
#ifdef CPX_MAX_PRIMAL_RESIDUAL
      *nv_return = CPX_MAX_PRIMAL_RESIDUAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_PRIMAL_RESIDUAL", 23)) {
    /*                            ^                */
#ifdef CPX_SUM_PRIMAL_RESIDUAL
      *nv_return = CPX_SUM_PRIMAL_RESIDUAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "CPX_CALLBACK_MIP_BRANCH", 23)) {
    /*                            ^                */
#ifdef CPX_CALLBACK_MIP_BRANCH
      *nv_return = CPX_CALLBACK_MIP_BRANCH;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_SUBMIPNODELIM", 23)) {
    /*                            ^                */
#ifdef CPX_PARAM_SUBMIPNODELIM
      *nv_return = CPX_PARAM_SUBMIPNODELIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_OPTIMAL_INFEAS", 23)) {
    /*                            ^                */
#ifdef CPX_STAT_OPTIMAL_INFEAS
      *nv_return = CPX_STAT_OPTIMAL_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPXERR_LO_BOUND_REPEATS", 23)) {
    /*                            ^                */
#ifdef CPXERR_LO_BOUND_REPEATS
      *nv_return = CPXERR_LO_BOUND_REPEATS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_NODE_INDEX_RANGE", 23)) {
    /*                            ^                */
#ifdef CPXERR_NODE_INDEX_RANGE
      *nv_return = CPXERR_NODE_INDEX_RANGE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_TOO_MANY_THREADS", 23)) {
    /*                            ^                */
#ifdef CPXERR_TOO_MANY_THREADS
      *nv_return = CPXERR_TOO_MANY_THREADS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_UP_BOUND_REPEATS", 23)) {
    /*                            ^                */
#ifdef CPXERR_UP_BOUND_REPEATS
      *nv_return = CPXERR_UP_BOUND_REPEATS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPX_PARAM_STRONGCANDLIM", 23)) {
    /*                            ^                */
#ifdef CPX_PARAM_STRONGCANDLIM
      *nv_return = CPX_PARAM_STRONGCANDLIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPXERR_COL_REPEAT_PRINT", 23)) {
    /*                            ^                */
#ifdef CPXERR_COL_REPEAT_PRINT
      *nv_return = CPXERR_COL_REPEAT_PRINT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_ROW_REPEAT_PRINT", 23)) {
    /*                            ^                */
#ifdef CPXERR_ROW_REPEAT_PRINT
      *nv_return = CPXERR_ROW_REPEAT_PRINT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPXERR_INDEX_RANGE_HIGH", 23)) {
    /*                            ^                */
#ifdef CPXERR_INDEX_RANGE_HIGH
      *nv_return = CPXERR_INDEX_RANGE_HIGH;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CON_SETVARINTERSECT", 23)) {
    /*                            ^                */
#ifdef CPX_CON_SETVARINTERSECT
      *nv_return = CPX_CON_SETVARINTERSECT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPX_MIPORDER_SCALEDCOST", 23)) {
    /*                            ^                */
#ifdef CPX_MIPORDER_SCALEDCOST
      *nv_return = CPX_MIPORDER_SCALEDCOST;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MIPSTART_SOLVEFIXED", 23)) {
    /*                            ^                */
#ifdef CPX_MIPSTART_SOLVEFIXED
      *nv_return = CPX_MIPSTART_SOLVEFIXED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "CPX_DPRIIND_STEEPQSTART", 23)) {
    /*                            ^                */
#ifdef CPX_DPRIIND_STEEPQSTART
      *nv_return = CPX_DPRIIND_STEEPQSTART;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PPRIIND_STEEPQSTART", 23)) {
    /*                            ^                */
#ifdef CPX_PPRIIND_STEEPQSTART
      *nv_return = CPX_PPRIIND_STEEPQSTART;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_ABORT_TIME_LIM", 23)) {
    /*                            ^                */
#ifdef CPX_STAT_ABORT_TIME_LIM
      *nv_return = CPX_STAT_ABORT_TIME_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "CPXERR_NEGATIVE_SURPLUS", 23)) {
    /*                            ^                */
#ifdef CPXERR_NEGATIVE_SURPLUS
      *nv_return = CPXERR_NEGATIVE_SURPLUS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "CPXERR_PRESLV_BAD_PARAM", 23)) {
    /*                            ^                */
#ifdef CPXERR_PRESLV_BAD_PARAM
      *nv_return = CPXERR_PRESLV_BAD_PARAM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_PRESLV_BASIS_MEM", 23)) {
    /*                            ^                */
#ifdef CPXERR_PRESLV_BASIS_MEM
      *nv_return = CPXERR_PRESLV_BASIS_MEM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_PRESLV_COPYORDER", 23)) {
    /*                            ^                */
#ifdef CPXERR_PRESLV_COPYORDER
      *nv_return = CPXERR_PRESLV_COPYORDER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_PRESLV_CRUSHFORM", 23)) {
    /*                            ^                */
#ifdef CPXERR_PRESLV_CRUSHFORM
      *nv_return = CPXERR_PRESLV_CRUSHFORM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_PRESLV_INForUNBD", 23)) {
    /*                            ^                */
#ifdef CPXERR_PRESLV_INForUNBD
      *nv_return = CPXERR_PRESLV_INForUNBD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_24 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_CONFLICT_UNSTABLE CPXERR_INT_TOO_BIG_INPUT CPXERR_NOT_MIN_COST_FLOW
     CPXERR_PRESLV_FAIL_BASIS CPXERR_TREE_MEMORY_LIMIT CPXMIP_FAIL_FEAS_NO_TREE
     CPXMIP_OPTIMAL_POPULATED CPX_CALLBACK_INFO_CUTOFF CPX_CALLBACK_INFO_IC_NUM
     CPX_CALLBACK_INFO_IC_RHS CPX_CALLBACK_MIP_DISJCUT CPX_CALLBACK_MIP_FLOWMIR
     CPX_CALLBACK_MIP_FRACCUT CPX_CONFLICT_POSSIBLE_LB CPX_CONFLICT_POSSIBLE_UB
     CPX_MIPEMPHASIS_BALANCED CPX_PARAM_AUXROOTTHREADS CPX_PARAM_MEMORYEMPHASIS
     CPX_PARAM_REPEATPRESOLVE CPX_PARAM_SOLUTIONTARGET CPX_PARAM_TUNINGDETTILIM
     CPX_PREREDUCE_PRIMALONLY CPX_VARSEL_PSEUDOREDUCED CPX_VERSION_MODIFICATION
     */
  /* Offset 17 gives the best switch position.  */
  switch (name[17]) {
  case 'A':
    if (memEQ(name, "CPX_MIPEMPHASIS_BALANCED", 24)) {
    /*                                ^             */
#ifdef CPX_MIPEMPHASIS_BALANCED
      *nv_return = CPX_MIPEMPHASIS_BALANCED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "CPX_CALLBACK_MIP_DISJCUT", 24)) {
    /*                                ^             */
#ifdef CPX_CALLBACK_MIP_DISJCUT
      *nv_return = CPX_CALLBACK_MIP_DISJCUT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPX_PARAM_TUNINGDETTILIM", 24)) {
    /*                                ^             */
#ifdef CPX_PARAM_TUNINGDETTILIM
      *nv_return = CPX_PARAM_TUNINGDETTILIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "CPX_CALLBACK_MIP_FLOWMIR", 24)) {
    /*                                ^             */
#ifdef CPX_CALLBACK_MIP_FLOWMIR
      *nv_return = CPX_CALLBACK_MIP_FLOWMIR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_MIP_FRACCUT", 24)) {
    /*                                ^             */
#ifdef CPX_CALLBACK_MIP_FRACCUT
      *nv_return = CPX_CALLBACK_MIP_FRACCUT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "CPXERR_INT_TOO_BIG_INPUT", 24)) {
    /*                                ^             */
#ifdef CPXERR_INT_TOO_BIG_INPUT
      *nv_return = CPXERR_INT_TOO_BIG_INPUT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPX_CONFLICT_POSSIBLE_LB", 24)) {
    /*                                ^             */
#ifdef CPX_CONFLICT_POSSIBLE_LB
      *nv_return = CPX_CONFLICT_POSSIBLE_LB;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CONFLICT_POSSIBLE_UB", 24)) {
    /*                                ^             */
#ifdef CPX_CONFLICT_POSSIBLE_UB
      *nv_return = CPX_CONFLICT_POSSIBLE_UB;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_VERSION_MODIFICATION", 24)) {
    /*                                ^             */
#ifdef CPX_VERSION_MODIFICATION
      *nv_return = CPX_VERSION_MODIFICATION;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPXERR_PRESLV_FAIL_BASIS", 24)) {
    /*                                ^             */
#ifdef CPXERR_PRESLV_FAIL_BASIS
      *nv_return = CPXERR_PRESLV_FAIL_BASIS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "CPX_PARAM_MEMORYEMPHASIS", 24)) {
    /*                                ^             */
#ifdef CPX_PARAM_MEMORYEMPHASIS
      *nv_return = CPX_PARAM_MEMORYEMPHASIS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PREREDUCE_PRIMALONLY", 24)) {
    /*                                ^             */
#ifdef CPX_PREREDUCE_PRIMALONLY
      *nv_return = CPX_PREREDUCE_PRIMALONLY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPXERR_CONFLICT_UNSTABLE", 24)) {
    /*                                ^             */
#ifdef CPXERR_CONFLICT_UNSTABLE
      *nv_return = CPXERR_CONFLICT_UNSTABLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXMIP_FAIL_FEAS_NO_TREE", 24)) {
    /*                                ^             */
#ifdef CPXMIP_FAIL_FEAS_NO_TREE
      *nv_return = CPXMIP_FAIL_FEAS_NO_TREE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_SOLUTIONTARGET", 24)) {
    /*                                ^             */
#ifdef CPX_PARAM_SOLUTIONTARGET
      *nv_return = CPX_PARAM_SOLUTIONTARGET;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPXMIP_OPTIMAL_POPULATED", 24)) {
    /*                                ^             */
#ifdef CPXMIP_OPTIMAL_POPULATED
      *nv_return = CPXMIP_OPTIMAL_POPULATED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPX_PARAM_REPEATPRESOLVE", 24)) {
    /*                                ^             */
#ifdef CPX_PARAM_REPEATPRESOLVE
      *nv_return = CPX_PARAM_REPEATPRESOLVE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_VARSEL_PSEUDOREDUCED", 24)) {
    /*                                ^             */
#ifdef CPX_VARSEL_PSEUDOREDUCED
      *nv_return = CPX_VARSEL_PSEUDOREDUCED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPXERR_NOT_MIN_COST_FLOW", 24)) {
    /*                                ^             */
#ifdef CPXERR_NOT_MIN_COST_FLOW
      *nv_return = CPXERR_NOT_MIN_COST_FLOW;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "CPX_PARAM_AUXROOTTHREADS", 24)) {
    /*                                ^             */
#ifdef CPX_PARAM_AUXROOTTHREADS
      *nv_return = CPX_PARAM_AUXROOTTHREADS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Y':
    if (memEQ(name, "CPXERR_TREE_MEMORY_LIMIT", 24)) {
    /*                                ^             */
#ifdef CPXERR_TREE_MEMORY_LIMIT
      *nv_return = CPXERR_TREE_MEMORY_LIMIT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "CPX_CALLBACK_INFO_CUTOFF", 24)) {
    /*                                ^             */
#ifdef CPX_CALLBACK_INFO_CUTOFF
      *nv_return = CPX_CALLBACK_INFO_CUTOFF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_IC_NUM", 24)) {
    /*                                ^             */
#ifdef CPX_CALLBACK_INFO_IC_NUM
      *nv_return = CPX_CALLBACK_INFO_IC_NUM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_IC_RHS", 24)) {
    /*                                ^             */
#ifdef CPX_CALLBACK_INFO_IC_RHS
      *nv_return = CPX_CALLBACK_INFO_IC_RHS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_25 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_ABORT_STRONGBRANCH CPXERR_ARRAY_BAD_SOS_TYPE
     CPXERR_BAD_SECTION_BOUNDS CPXERR_BAD_SECTION_ENDATA
     CPXERR_NOT_DUAL_UNBOUNDED CPXERR_NO_COLUMNS_SECTION
     CPXERR_PARAM_INCOMPATIBLE CPXERR_PRESLV_DETTIME_LIM
     CPXERR_PRESLV_UNCRUSHFORM CPXERR_PTHREAD_MUTEX_INIT
     CPXERR_RESTRICTED_VERSION CPXERR_STR_PARAM_TOO_LONG
     CPXERR_TILIM_CONDITION_NO CPXERR_TILIM_STRONGBRANCH
     CPXMIP_DETTIME_LIM_INFEAS CPX_CALLBACK_INFO_ENDTIME
     CPX_CALLBACK_INFO_ITCOUNT CPX_CALLBACK_INFO_SOS_NUM
     CPX_CALLBACK_MIP_CUT_FEAS CPX_CALLBACK_MIP_CUT_LAST
     CPX_CALLBACK_MIP_CUT_LOOP CPX_CALLBACK_MIP_CUT_UNBD
     CPX_INDICATOR_IFANDONLYIF CPX_MAX_QCPRIMAL_RESIDUAL
     CPX_MIPEMPHASIS_BESTBOUND CPX_MIPSEARCH_TRADITIONAL
     CPX_PARAM_CONFLICTDISPLAY CPX_PARAM_POLISHAFTERNODE
     CPX_PARAM_POLISHAFTERTIME CPX_PARAM_SOLNPOOLREPLACE
     CPX_SOLNPOOL_FILTER_RANGE CPX_STAT_CONFLICT_MINIMAL
     CPX_SUM_QCPRIMAL_RESIDUAL */
  /* Offset 23 gives the best switch position.  */
  switch (name[23]) {
  case 'A':
    if (memEQ(name, "CPXMIP_DETTIME_LIM_INFEAS", 25)) {
    /*                                      ^        */
#ifdef CPXMIP_DETTIME_LIM_INFEAS
      *nv_return = CPXMIP_DETTIME_LIM_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_MIP_CUT_FEAS", 25)) {
    /*                                      ^        */
#ifdef CPX_CALLBACK_MIP_CUT_FEAS
      *nv_return = CPX_CALLBACK_MIP_CUT_FEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MAX_QCPRIMAL_RESIDUAL", 25)) {
    /*                                      ^        */
#ifdef CPX_MAX_QCPRIMAL_RESIDUAL
      *nv_return = CPX_MAX_QCPRIMAL_RESIDUAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MIPSEARCH_TRADITIONAL", 25)) {
    /*                                      ^        */
#ifdef CPX_MIPSEARCH_TRADITIONAL
      *nv_return = CPX_MIPSEARCH_TRADITIONAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_CONFLICTDISPLAY", 25)) {
    /*                                      ^        */
#ifdef CPX_PARAM_CONFLICTDISPLAY
      *nv_return = CPX_PARAM_CONFLICTDISPLAY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_CONFLICT_MINIMAL", 25)) {
    /*                                      ^        */
#ifdef CPX_STAT_CONFLICT_MINIMAL
      *nv_return = CPX_STAT_CONFLICT_MINIMAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_QCPRIMAL_RESIDUAL", 25)) {
    /*                                      ^        */
#ifdef CPX_SUM_QCPRIMAL_RESIDUAL
      *nv_return = CPX_SUM_QCPRIMAL_RESIDUAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "CPX_CALLBACK_MIP_CUT_UNBD", 25)) {
    /*                                      ^        */
#ifdef CPX_CALLBACK_MIP_CUT_UNBD
      *nv_return = CPX_CALLBACK_MIP_CUT_UNBD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "CPXERR_ABORT_STRONGBRANCH", 25)) {
    /*                                      ^        */
#ifdef CPXERR_ABORT_STRONGBRANCH
      *nv_return = CPXERR_ABORT_STRONGBRANCH;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_TILIM_STRONGBRANCH", 25)) {
    /*                                      ^        */
#ifdef CPXERR_TILIM_STRONGBRANCH
      *nv_return = CPXERR_TILIM_STRONGBRANCH;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_SOLNPOOLREPLACE", 25)) {
    /*                                      ^        */
#ifdef CPX_PARAM_SOLNPOOLREPLACE
      *nv_return = CPX_PARAM_SOLNPOOLREPLACE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "CPXERR_BAD_SECTION_BOUNDS", 25)) {
    /*                                      ^        */
#ifdef CPXERR_BAD_SECTION_BOUNDS
      *nv_return = CPXERR_BAD_SECTION_BOUNDS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_POLISHAFTERNODE", 25)) {
    /*                                      ^        */
#ifdef CPX_PARAM_POLISHAFTERNODE
      *nv_return = CPX_PARAM_POLISHAFTERNODE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPXERR_NOT_DUAL_UNBOUNDED", 25)) {
    /*                                      ^        */
#ifdef CPXERR_NOT_DUAL_UNBOUNDED
      *nv_return = CPXERR_NOT_DUAL_UNBOUNDED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "CPX_SOLNPOOL_FILTER_RANGE", 25)) {
    /*                                      ^        */
#ifdef CPX_SOLNPOOL_FILTER_RANGE
      *nv_return = CPX_SOLNPOOL_FILTER_RANGE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPXERR_PRESLV_DETTIME_LIM", 25)) {
    /*                                      ^        */
#ifdef CPXERR_PRESLV_DETTIME_LIM
      *nv_return = CPXERR_PRESLV_DETTIME_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_PTHREAD_MUTEX_INIT", 25)) {
    /*                                      ^        */
#ifdef CPXERR_PTHREAD_MUTEX_INIT
      *nv_return = CPXERR_PTHREAD_MUTEX_INIT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_INDICATOR_IFANDONLYIF", 25)) {
    /*                                      ^        */
#ifdef CPX_INDICATOR_IFANDONLYIF
      *nv_return = CPX_INDICATOR_IFANDONLYIF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPXERR_PARAM_INCOMPATIBLE", 25)) {
    /*                                      ^        */
#ifdef CPXERR_PARAM_INCOMPATIBLE
      *nv_return = CPXERR_PARAM_INCOMPATIBLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "CPX_CALLBACK_INFO_ENDTIME", 25)) {
    /*                                      ^        */
#ifdef CPX_CALLBACK_INFO_ENDTIME
      *nv_return = CPX_CALLBACK_INFO_ENDTIME;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_POLISHAFTERTIME", 25)) {
    /*                                      ^        */
#ifdef CPX_PARAM_POLISHAFTERTIME
      *nv_return = CPX_PARAM_POLISHAFTERTIME;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPXERR_STR_PARAM_TOO_LONG", 25)) {
    /*                                      ^        */
#ifdef CPXERR_STR_PARAM_TOO_LONG
      *nv_return = CPXERR_STR_PARAM_TOO_LONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_TILIM_CONDITION_NO", 25)) {
    /*                                      ^        */
#ifdef CPXERR_TILIM_CONDITION_NO
      *nv_return = CPXERR_TILIM_CONDITION_NO;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_ITCOUNT", 25)) {
    /*                                      ^        */
#ifdef CPX_CALLBACK_INFO_ITCOUNT
      *nv_return = CPX_CALLBACK_INFO_ITCOUNT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MIPEMPHASIS_BESTBOUND", 25)) {
    /*                                      ^        */
#ifdef CPX_MIPEMPHASIS_BESTBOUND
      *nv_return = CPX_MIPEMPHASIS_BESTBOUND;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPXERR_NO_COLUMNS_SECTION", 25)) {
    /*                                      ^        */
#ifdef CPXERR_NO_COLUMNS_SECTION
      *nv_return = CPXERR_NO_COLUMNS_SECTION;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXERR_RESTRICTED_VERSION", 25)) {
    /*                                      ^        */
#ifdef CPXERR_RESTRICTED_VERSION
      *nv_return = CPXERR_RESTRICTED_VERSION;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_MIP_CUT_LOOP", 25)) {
    /*                                      ^        */
#ifdef CPX_CALLBACK_MIP_CUT_LOOP
      *nv_return = CPX_CALLBACK_MIP_CUT_LOOP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPXERR_ARRAY_BAD_SOS_TYPE", 25)) {
    /*                                      ^        */
#ifdef CPXERR_ARRAY_BAD_SOS_TYPE
      *nv_return = CPXERR_ARRAY_BAD_SOS_TYPE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPXERR_PRESLV_UNCRUSHFORM", 25)) {
    /*                                      ^        */
#ifdef CPXERR_PRESLV_UNCRUSHFORM
      *nv_return = CPXERR_PRESLV_UNCRUSHFORM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPX_CALLBACK_MIP_CUT_LAST", 25)) {
    /*                                      ^        */
#ifdef CPX_CALLBACK_MIP_CUT_LAST
      *nv_return = CPX_CALLBACK_MIP_CUT_LAST;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "CPXERR_BAD_SECTION_ENDATA", 25)) {
    /*                                      ^        */
#ifdef CPXERR_BAD_SECTION_ENDATA
      *nv_return = CPXERR_BAD_SECTION_ENDATA;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "CPX_CALLBACK_INFO_SOS_NUM", 25)) {
    /*                                      ^        */
#ifdef CPX_CALLBACK_INFO_SOS_NUM
      *nv_return = CPX_CALLBACK_INFO_SOS_NUM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_26 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_ARRAY_NOT_ASCENDING CPXERR_BAD_SECTION_QMATRIX
     CPXERR_ENCODING_CONVERSION CPXERR_IIS_SUB_DETTIME_LIM
     CPXERR_ORDER_BAD_DIRECTION CPXERR_RANGE_SECTION_ORDER
     CPXMIP_FAIL_INFEAS_NO_TREE CPXMIP_OPTIMAL_RELAXED_INF
     CPXMIP_OPTIMAL_RELAXED_SUM CPXNET_PENALIZED_OBJECTIVE
     CPX_CALLBACK_INFO_DUAL_OBJ CPX_CALLBACK_INFO_IC_COMPL
     CPX_CALLBACK_INFO_IC_SENSE CPX_CALLBACK_INFO_MIP_FEAS
     CPX_CALLBACK_INFO_NODE_SOS CPX_CALLBACK_INFO_NODE_VAR
     CPX_CALLBACK_INFO_SOS_SIZE CPX_CALLBACK_INFO_SOS_TYPE
     CPX_CALLBACK_MIP_HEURISTIC CPX_CON_SETVARINTERSECTION
     CPX_MAX_SCALED_DUAL_INFEAS CPX_MIPEMPHASIS_HIDDENFEAS
     CPX_MIPEMPHASIS_OPTIMALITY CPX_PARALLEL_DETERMINISTIC
     CPX_PARALLEL_OPPORTUNISTIC CPX_PARAM_INTSOLFILEPREFIX
     CPX_PARAM_POLISHAFTEREPGAP CPX_PARAM_SOLNPOOLCAPACITY
     CPX_STAT_ABORT_DETTIME_LIM CPX_STAT_CONFLICT_FEASIBLE
     CPX_SUM_SCALED_DUAL_INFEAS CPX_WRITELEVEL_NONZEROVARS */
  /* Offset 18 gives the best switch position.  */
  switch (name[18]) {
  case 'A':
    if (memEQ(name, "CPXMIP_OPTIMAL_RELAXED_INF", 26)) {
    /*                                 ^              */
#ifdef CPXMIP_OPTIMAL_RELAXED_INF
      *nv_return = CPXMIP_OPTIMAL_RELAXED_INF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXMIP_OPTIMAL_RELAXED_SUM", 26)) {
    /*                                 ^              */
#ifdef CPXMIP_OPTIMAL_RELAXED_SUM
      *nv_return = CPXMIP_OPTIMAL_RELAXED_SUM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "CPXNET_PENALIZED_OBJECTIVE", 26)) {
    /*                                 ^              */
#ifdef CPXNET_PENALIZED_OBJECTIVE
      *nv_return = CPXNET_PENALIZED_OBJECTIVE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "CPX_PARAM_SOLNPOOLCAPACITY", 26)) {
    /*                                 ^              */
#ifdef CPX_PARAM_SOLNPOOLCAPACITY
      *nv_return = CPX_PARAM_SOLNPOOLCAPACITY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "CPX_CALLBACK_INFO_DUAL_OBJ", 26)) {
    /*                                 ^              */
#ifdef CPX_CALLBACK_INFO_DUAL_OBJ
      *nv_return = CPX_CALLBACK_INFO_DUAL_OBJ;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MIPEMPHASIS_HIDDENFEAS", 26)) {
    /*                                 ^              */
#ifdef CPX_MIPEMPHASIS_HIDDENFEAS
      *nv_return = CPX_MIPEMPHASIS_HIDDENFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPX_CALLBACK_MIP_HEURISTIC", 26)) {
    /*                                 ^              */
#ifdef CPX_CALLBACK_MIP_HEURISTIC
      *nv_return = CPX_CALLBACK_MIP_HEURISTIC;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "CPX_STAT_CONFLICT_FEASIBLE", 26)) {
    /*                                 ^              */
#ifdef CPX_STAT_CONFLICT_FEASIBLE
      *nv_return = CPX_STAT_CONFLICT_FEASIBLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPXERR_ORDER_BAD_DIRECTION", 26)) {
    /*                                 ^              */
#ifdef CPXERR_ORDER_BAD_DIRECTION
      *nv_return = CPXERR_ORDER_BAD_DIRECTION;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_IC_COMPL", 26)) {
    /*                                 ^              */
#ifdef CPX_CALLBACK_INFO_IC_COMPL
      *nv_return = CPX_CALLBACK_INFO_IC_COMPL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_IC_SENSE", 26)) {
    /*                                 ^              */
#ifdef CPX_CALLBACK_INFO_IC_SENSE
      *nv_return = CPX_CALLBACK_INFO_IC_SENSE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPX_MAX_SCALED_DUAL_INFEAS", 26)) {
    /*                                 ^              */
#ifdef CPX_MAX_SCALED_DUAL_INFEAS
      *nv_return = CPX_MAX_SCALED_DUAL_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_INTSOLFILEPREFIX", 26)) {
    /*                                 ^              */
#ifdef CPX_PARAM_INTSOLFILEPREFIX
      *nv_return = CPX_PARAM_INTSOLFILEPREFIX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_SCALED_DUAL_INFEAS", 26)) {
    /*                                 ^              */
#ifdef CPX_SUM_SCALED_DUAL_INFEAS
      *nv_return = CPX_SUM_SCALED_DUAL_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "CPX_CALLBACK_INFO_MIP_FEAS", 26)) {
    /*                                 ^              */
#ifdef CPX_CALLBACK_INFO_MIP_FEAS
      *nv_return = CPX_CALLBACK_INFO_MIP_FEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARALLEL_DETERMINISTIC", 26)) {
    /*                                 ^              */
#ifdef CPX_PARALLEL_DETERMINISTIC
      *nv_return = CPX_PARALLEL_DETERMINISTIC;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPXERR_ENCODING_CONVERSION", 26)) {
    /*                                 ^              */
#ifdef CPXERR_ENCODING_CONVERSION
      *nv_return = CPXERR_ENCODING_CONVERSION;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_NODE_SOS", 26)) {
    /*                                 ^              */
#ifdef CPX_CALLBACK_INFO_NODE_SOS
      *nv_return = CPX_CALLBACK_INFO_NODE_SOS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_NODE_VAR", 26)) {
    /*                                 ^              */
#ifdef CPX_CALLBACK_INFO_NODE_VAR
      *nv_return = CPX_CALLBACK_INFO_NODE_VAR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPXERR_RANGE_SECTION_ORDER", 26)) {
    /*                                 ^              */
#ifdef CPXERR_RANGE_SECTION_ORDER
      *nv_return = CPXERR_RANGE_SECTION_ORDER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPX_CON_SETVARINTERSECTION", 26)) {
    /*                                 ^              */
#ifdef CPX_CON_SETVARINTERSECTION
      *nv_return = CPX_CON_SETVARINTERSECTION;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPXERR_ARRAY_NOT_ASCENDING", 26)) {
    /*                                 ^              */
#ifdef CPXERR_ARRAY_NOT_ASCENDING
      *nv_return = CPXERR_ARRAY_NOT_ASCENDING;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_SOS_SIZE", 26)) {
    /*                                 ^              */
#ifdef CPX_CALLBACK_INFO_SOS_SIZE
      *nv_return = CPX_CALLBACK_INFO_SOS_SIZE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_SOS_TYPE", 26)) {
    /*                                 ^              */
#ifdef CPX_CALLBACK_INFO_SOS_TYPE
      *nv_return = CPX_CALLBACK_INFO_SOS_TYPE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "CPXERR_IIS_SUB_DETTIME_LIM", 26)) {
    /*                                 ^              */
#ifdef CPXERR_IIS_SUB_DETTIME_LIM
      *nv_return = CPXERR_IIS_SUB_DETTIME_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_MIPEMPHASIS_OPTIMALITY", 26)) {
    /*                                 ^              */
#ifdef CPX_MIPEMPHASIS_OPTIMALITY
      *nv_return = CPX_MIPEMPHASIS_OPTIMALITY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARALLEL_OPPORTUNISTIC", 26)) {
    /*                                 ^              */
#ifdef CPX_PARALLEL_OPPORTUNISTIC
      *nv_return = CPX_PARALLEL_OPPORTUNISTIC;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_POLISHAFTEREPGAP", 26)) {
    /*                                 ^              */
#ifdef CPX_PARAM_POLISHAFTEREPGAP
      *nv_return = CPX_PARAM_POLISHAFTEREPGAP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_ABORT_DETTIME_LIM", 26)) {
    /*                                 ^              */
#ifdef CPX_STAT_ABORT_DETTIME_LIM
      *nv_return = CPX_STAT_ABORT_DETTIME_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Z':
    if (memEQ(name, "CPX_WRITELEVEL_NONZEROVARS", 26)) {
    /*                                 ^              */
#ifdef CPX_WRITELEVEL_NONZEROVARS
      *nv_return = CPX_WRITELEVEL_NONZEROVARS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "CPXERR_BAD_SECTION_QMATRIX", 26)) {
    /*                                 ^              */
#ifdef CPXERR_BAD_SECTION_QMATRIX
      *nv_return = CPXERR_BAD_SECTION_QMATRIX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXMIP_FAIL_INFEAS_NO_TREE", 26)) {
    /*                                 ^              */
#ifdef CPXMIP_FAIL_INFEAS_NO_TREE
      *nv_return = CPXMIP_FAIL_INFEAS_NO_TREE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_27 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_FILTER_VARIABLE_TYPE CPXMIP_FEASIBLE_RELAXED_INF
     CPXMIP_FEASIBLE_RELAXED_SUM CPXMIP_OPTIMAL_RELAXED_QUAD
     CPXNET_NO_DISPLAY_OBJECTIVE CPXNET_PRICE_SORT_MULT_PART
     CPX_CALLBACK_ABORT_CUT_LOOP CPX_CALLBACK_DUAL_CROSSOVER
     CPX_CALLBACK_INFO_DUAL_FEAS CPX_CALLBACK_INFO_KAPPA_MAX
     CPX_CALLBACK_INFO_NODE_TYPE CPX_CALLBACK_INFO_STARTTIME
     CPX_CALLBACK_MIP_DELETENODE CPX_CON_SETVARNULLINTERSECT
     CPX_MIPEMPHASIS_FEASIBILITY CPX_PARAM_NUMERICALEMPHASIS
     CPX_PARAM_POLISHAFTEREPAGAP CPX_PARAM_POLISHAFTERINTSOL
     CPX_PARAM_SOLNPOOLINTENSITY CPX_PREREDUCE_PRIMALANDDUAL
     CPX_STAT_ABORT_DUAL_OBJ_LIM CPX_STAT_ABORT_PRIM_OBJ_LIM
     CPX_WRITELEVEL_DISCRETEVARS */
  /* Offset 19 gives the best switch position.  */
  switch (name[19]) {
  case 'A':
    if (memEQ(name, "CPXMIP_FEASIBLE_RELAXED_INF", 27)) {
    /*                                  ^              */
#ifdef CPXMIP_FEASIBLE_RELAXED_INF
      *nv_return = CPXMIP_FEASIBLE_RELAXED_INF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXMIP_FEASIBLE_RELAXED_SUM", 27)) {
    /*                                  ^              */
#ifdef CPXMIP_FEASIBLE_RELAXED_SUM
      *nv_return = CPXMIP_FEASIBLE_RELAXED_SUM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_KAPPA_MAX", 27)) {
    /*                                  ^              */
#ifdef CPX_CALLBACK_INFO_KAPPA_MAX
      *nv_return = CPX_CALLBACK_INFO_KAPPA_MAX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "CPXERR_FILTER_VARIABLE_TYPE", 27)) {
    /*                                  ^              */
#ifdef CPXERR_FILTER_VARIABLE_TYPE
      *nv_return = CPXERR_FILTER_VARIABLE_TYPE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPXNET_NO_DISPLAY_OBJECTIVE", 27)) {
    /*                                  ^              */
#ifdef CPXNET_NO_DISPLAY_OBJECTIVE
      *nv_return = CPXNET_NO_DISPLAY_OBJECTIVE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "CPX_CALLBACK_ABORT_CUT_LOOP", 27)) {
    /*                                  ^              */
#ifdef CPX_CALLBACK_ABORT_CUT_LOOP
      *nv_return = CPX_CALLBACK_ABORT_CUT_LOOP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPX_PARAM_NUMERICALEMPHASIS", 27)) {
    /*                                  ^              */
#ifdef CPX_PARAM_NUMERICALEMPHASIS
      *nv_return = CPX_PARAM_NUMERICALEMPHASIS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_POLISHAFTEREPAGAP", 27)) {
    /*                                  ^              */
#ifdef CPX_PARAM_POLISHAFTEREPAGAP
      *nv_return = CPX_PARAM_POLISHAFTEREPAGAP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_POLISHAFTERINTSOL", 27)) {
    /*                                  ^              */
#ifdef CPX_PARAM_POLISHAFTERINTSOL
      *nv_return = CPX_PARAM_POLISHAFTERINTSOL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPX_CALLBACK_MIP_DELETENODE", 27)) {
    /*                                  ^              */
#ifdef CPX_CALLBACK_MIP_DELETENODE
      *nv_return = CPX_CALLBACK_MIP_DELETENODE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PREREDUCE_PRIMALANDDUAL", 27)) {
    /*                                  ^              */
#ifdef CPX_PREREDUCE_PRIMALANDDUAL
      *nv_return = CPX_PREREDUCE_PRIMALANDDUAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPX_CON_SETVARNULLINTERSECT", 27)) {
    /*                                  ^              */
#ifdef CPX_CON_SETVARNULLINTERSECT
      *nv_return = CPX_CON_SETVARNULLINTERSECT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_SOLNPOOLINTENSITY", 27)) {
    /*                                  ^              */
#ifdef CPX_PARAM_SOLNPOOLINTENSITY
      *nv_return = CPX_PARAM_SOLNPOOLINTENSITY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPX_CALLBACK_INFO_NODE_TYPE", 27)) {
    /*                                  ^              */
#ifdef CPX_CALLBACK_INFO_NODE_TYPE
      *nv_return = CPX_CALLBACK_INFO_NODE_TYPE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPX_CALLBACK_DUAL_CROSSOVER", 27)) {
    /*                                  ^              */
#ifdef CPX_CALLBACK_DUAL_CROSSOVER
      *nv_return = CPX_CALLBACK_DUAL_CROSSOVER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_WRITELEVEL_DISCRETEVARS", 27)) {
    /*                                  ^              */
#ifdef CPX_WRITELEVEL_DISCRETEVARS
      *nv_return = CPX_WRITELEVEL_DISCRETEVARS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPX_MIPEMPHASIS_FEASIBILITY", 27)) {
    /*                                  ^              */
#ifdef CPX_MIPEMPHASIS_FEASIBILITY
      *nv_return = CPX_MIPEMPHASIS_FEASIBILITY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "CPX_CALLBACK_INFO_STARTTIME", 27)) {
    /*                                  ^              */
#ifdef CPX_CALLBACK_INFO_STARTTIME
      *nv_return = CPX_CALLBACK_INFO_STARTTIME;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "CPXNET_PRICE_SORT_MULT_PART", 27)) {
    /*                                  ^              */
#ifdef CPXNET_PRICE_SORT_MULT_PART
      *nv_return = CPXNET_PRICE_SORT_MULT_PART;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_DUAL_FEAS", 27)) {
    /*                                  ^              */
#ifdef CPX_CALLBACK_INFO_DUAL_FEAS
      *nv_return = CPX_CALLBACK_INFO_DUAL_FEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'X':
    if (memEQ(name, "CPXMIP_OPTIMAL_RELAXED_QUAD", 27)) {
    /*                                  ^              */
#ifdef CPXMIP_OPTIMAL_RELAXED_QUAD
      *nv_return = CPXMIP_OPTIMAL_RELAXED_QUAD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "CPX_STAT_ABORT_DUAL_OBJ_LIM", 27)) {
    /*                                  ^              */
#ifdef CPX_STAT_ABORT_DUAL_OBJ_LIM
      *nv_return = CPX_STAT_ABORT_DUAL_OBJ_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_ABORT_PRIM_OBJ_LIM", 27)) {
    /*                                  ^              */
#ifdef CPX_STAT_ABORT_PRIM_OBJ_LIM
      *nv_return = CPX_STAT_ABORT_PRIM_OBJ_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_28 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_DETTILIM_STRONGBRANCH CPXERR_LP_NOT_IN_ENVIRONMENT
     CPXERR_UNSUPPORTED_OPERATION CPXMIP_FEASIBLE_RELAXED_QUAD
     CPXMIP_OPTIMAL_POPULATED_TOL CPX_CALLBACK_INFO_ENDDETTIME
     CPX_CALLBACK_INFO_NODES_LEFT CPX_CALLBACK_INFO_NODE_COUNT
     CPX_CALLBACK_INFO_NODE_DEPTH CPX_CALLBACK_INFO_NODE_NIINF
     CPX_CALLBACK_INFO_NODE_SIINF CPX_CALLBACK_INFO_PRIMAL_OBJ
     CPX_CONFLICT_POSSIBLE_MEMBER CPX_IMPLIED_INTEGER_FEASIBLE
     CPX_MAX_SCALED_DUAL_RESIDUAL CPX_MAX_SCALED_PRIMAL_INFEAS
     CPX_PARAM_POLISHAFTERDETTIME CPX_PREREDUCE_NOPRIMALORDUAL
     CPX_STAT_CONFLICT_ABORT_USER CPX_STAT_OPTIMAL_RELAXED_INF
     CPX_STAT_OPTIMAL_RELAXED_SUM CPX_SUM_SCALED_DUAL_RESIDUAL
     CPX_SUM_SCALED_PRIMAL_INFEAS */
  /* Offset 24 gives the best switch position.  */
  switch (name[24]) {
  case 'A':
    if (memEQ(name, "CPXERR_DETTILIM_STRONGBRANCH", 28)) {
    /*                                       ^          */
#ifdef CPXERR_DETTILIM_STRONGBRANCH
      *nv_return = CPXERR_DETTILIM_STRONGBRANCH;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "CPX_MAX_SCALED_DUAL_RESIDUAL", 28)) {
    /*                                       ^          */
#ifdef CPX_MAX_SCALED_DUAL_RESIDUAL
      *nv_return = CPX_MAX_SCALED_DUAL_RESIDUAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PREREDUCE_NOPRIMALORDUAL", 28)) {
    /*                                       ^          */
#ifdef CPX_PREREDUCE_NOPRIMALORDUAL
      *nv_return = CPX_PREREDUCE_NOPRIMALORDUAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_SCALED_DUAL_RESIDUAL", 28)) {
    /*                                       ^          */
#ifdef CPX_SUM_SCALED_DUAL_RESIDUAL
      *nv_return = CPX_SUM_SCALED_DUAL_RESIDUAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPX_CALLBACK_INFO_NODE_DEPTH", 28)) {
    /*                                       ^          */
#ifdef CPX_CALLBACK_INFO_NODE_DEPTH
      *nv_return = CPX_CALLBACK_INFO_NODE_DEPTH;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "CPX_MAX_SCALED_PRIMAL_INFEAS", 28)) {
    /*                                       ^          */
#ifdef CPX_MAX_SCALED_PRIMAL_INFEAS
      *nv_return = CPX_MAX_SCALED_PRIMAL_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_SCALED_PRIMAL_INFEAS", 28)) {
    /*                                       ^          */
#ifdef CPX_SUM_SCALED_PRIMAL_INFEAS
      *nv_return = CPX_SUM_SCALED_PRIMAL_INFEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPX_CALLBACK_INFO_NODE_NIINF", 28)) {
    /*                                       ^          */
#ifdef CPX_CALLBACK_INFO_NODE_NIINF
      *nv_return = CPX_CALLBACK_INFO_NODE_NIINF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_NODE_SIINF", 28)) {
    /*                                       ^          */
#ifdef CPX_CALLBACK_INFO_NODE_SIINF
      *nv_return = CPX_CALLBACK_INFO_NODE_SIINF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_IMPLIED_INTEGER_FEASIBLE", 28)) {
    /*                                       ^          */
#ifdef CPX_IMPLIED_INTEGER_FEASIBLE
      *nv_return = CPX_IMPLIED_INTEGER_FEASIBLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPX_CALLBACK_INFO_NODES_LEFT", 28)) {
    /*                                       ^          */
#ifdef CPX_CALLBACK_INFO_NODES_LEFT
      *nv_return = CPX_CALLBACK_INFO_NODES_LEFT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "CPXERR_LP_NOT_IN_ENVIRONMENT", 28)) {
    /*                                       ^          */
#ifdef CPXERR_LP_NOT_IN_ENVIRONMENT
      *nv_return = CPXERR_LP_NOT_IN_ENVIRONMENT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CONFLICT_POSSIBLE_MEMBER", 28)) {
    /*                                       ^          */
#ifdef CPX_CONFLICT_POSSIBLE_MEMBER
      *nv_return = CPX_CONFLICT_POSSIBLE_MEMBER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPX_CALLBACK_INFO_NODE_COUNT", 28)) {
    /*                                       ^          */
#ifdef CPX_CALLBACK_INFO_NODE_COUNT
      *nv_return = CPX_CALLBACK_INFO_NODE_COUNT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Q':
    if (memEQ(name, "CPXMIP_FEASIBLE_RELAXED_QUAD", 28)) {
    /*                                       ^          */
#ifdef CPXMIP_FEASIBLE_RELAXED_QUAD
      *nv_return = CPXMIP_FEASIBLE_RELAXED_QUAD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "CPXERR_UNSUPPORTED_OPERATION", 28)) {
    /*                                       ^          */
#ifdef CPXERR_UNSUPPORTED_OPERATION
      *nv_return = CPXERR_UNSUPPORTED_OPERATION;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_ENDDETTIME", 28)) {
    /*                                       ^          */
#ifdef CPX_CALLBACK_INFO_ENDDETTIME
      *nv_return = CPX_CALLBACK_INFO_ENDDETTIME;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_PARAM_POLISHAFTERDETTIME", 28)) {
    /*                                       ^          */
#ifdef CPX_PARAM_POLISHAFTERDETTIME
      *nv_return = CPX_PARAM_POLISHAFTERDETTIME;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "CPX_STAT_CONFLICT_ABORT_USER", 28)) {
    /*                                       ^          */
#ifdef CPX_STAT_CONFLICT_ABORT_USER
      *nv_return = CPX_STAT_CONFLICT_ABORT_USER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "CPXMIP_OPTIMAL_POPULATED_TOL", 28)) {
    /*                                       ^          */
#ifdef CPXMIP_OPTIMAL_POPULATED_TOL
      *nv_return = CPXMIP_OPTIMAL_POPULATED_TOL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_PRIMAL_OBJ", 28)) {
    /*                                       ^          */
#ifdef CPX_CALLBACK_INFO_PRIMAL_OBJ
      *nv_return = CPX_CALLBACK_INFO_PRIMAL_OBJ;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_OPTIMAL_RELAXED_INF", 28)) {
    /*                                       ^          */
#ifdef CPX_STAT_OPTIMAL_RELAXED_INF
      *nv_return = CPX_STAT_OPTIMAL_RELAXED_INF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_OPTIMAL_RELAXED_SUM", 28)) {
    /*                                       ^          */
#ifdef CPX_STAT_OPTIMAL_RELAXED_SUM
      *nv_return = CPX_STAT_OPTIMAL_RELAXED_SUM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_29 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPX_CALLBACK_INFO_COVER_COUNT CPX_CALLBACK_INFO_MIP_REL_GAP
     CPX_CALLBACK_INFO_NODE_OBJVAL CPX_CALLBACK_INFO_NODE_SEQNUM
     CPX_CALLBACK_INFO_PRIMAL_FEAS CPX_CALLBACK_INFO_PROBE_PHASE
     CPX_CALLBACK_PRIMAL_CROSSOVER CPX_SOLNPOOL_FILTER_DIVERSITY
     CPX_SOLUTIONTARGET_FIRSTORDER CPX_STAT_FEASIBLE_RELAXED_INF
     CPX_STAT_FEASIBLE_RELAXED_SUM CPX_STAT_OPTIMAL_RELAXED_QUAD */
  /* Offset 28 gives the best switch position.  */
  switch (name[28]) {
  case 'D':
    if (memEQ(name, "CPX_STAT_OPTIMAL_RELAXED_QUA", 28)) {
    /*                                           D      */
#ifdef CPX_STAT_OPTIMAL_RELAXED_QUAD
      *nv_return = CPX_STAT_OPTIMAL_RELAXED_QUAD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPX_CALLBACK_INFO_PROBE_PHAS", 28)) {
    /*                                           E      */
#ifdef CPX_CALLBACK_INFO_PROBE_PHASE
      *nv_return = CPX_CALLBACK_INFO_PROBE_PHASE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "CPX_STAT_FEASIBLE_RELAXED_IN", 28)) {
    /*                                           F      */
#ifdef CPX_STAT_FEASIBLE_RELAXED_INF
      *nv_return = CPX_STAT_FEASIBLE_RELAXED_INF;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPX_CALLBACK_INFO_NODE_OBJVA", 28)) {
    /*                                           L      */
#ifdef CPX_CALLBACK_INFO_NODE_OBJVAL
      *nv_return = CPX_CALLBACK_INFO_NODE_OBJVAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "CPX_CALLBACK_INFO_NODE_SEQNU", 28)) {
    /*                                           M      */
#ifdef CPX_CALLBACK_INFO_NODE_SEQNUM
      *nv_return = CPX_CALLBACK_INFO_NODE_SEQNUM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_FEASIBLE_RELAXED_SU", 28)) {
    /*                                           M      */
#ifdef CPX_STAT_FEASIBLE_RELAXED_SUM
      *nv_return = CPX_STAT_FEASIBLE_RELAXED_SUM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPX_CALLBACK_INFO_MIP_REL_GA", 28)) {
    /*                                           P      */
#ifdef CPX_CALLBACK_INFO_MIP_REL_GAP
      *nv_return = CPX_CALLBACK_INFO_MIP_REL_GAP;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPX_CALLBACK_PRIMAL_CROSSOVE", 28)) {
    /*                                           R      */
#ifdef CPX_CALLBACK_PRIMAL_CROSSOVER
      *nv_return = CPX_CALLBACK_PRIMAL_CROSSOVER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SOLUTIONTARGET_FIRSTORDE", 28)) {
    /*                                           R      */
#ifdef CPX_SOLUTIONTARGET_FIRSTORDER
      *nv_return = CPX_SOLUTIONTARGET_FIRSTORDER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPX_CALLBACK_INFO_PRIMAL_FEA", 28)) {
    /*                                           S      */
#ifdef CPX_CALLBACK_INFO_PRIMAL_FEAS
      *nv_return = CPX_CALLBACK_INFO_PRIMAL_FEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "CPX_CALLBACK_INFO_COVER_COUN", 28)) {
    /*                                           T      */
#ifdef CPX_CALLBACK_INFO_COVER_COUNT
      *nv_return = CPX_CALLBACK_INFO_COVER_COUNT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Y':
    if (memEQ(name, "CPX_SOLNPOOL_FILTER_DIVERSIT", 28)) {
    /*                                           Y      */
#ifdef CPX_SOLNPOOL_FILTER_DIVERSITY
      *nv_return = CPX_SOLNPOOL_FILTER_DIVERSITY;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_30 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPX_CALLBACK_INFO_BEST_INTEGER CPX_CALLBACK_INFO_CLIQUE_COUNT
     CPX_CALLBACK_INFO_DUAL_INFMEAS CPX_CALLBACK_INFO_IMPLBD_COUNT
     CPX_CALLBACK_INFO_ITCOUNT_LONG CPX_CALLBACK_INFO_KAPPA_STABLE
     CPX_CALLBACK_INFO_MCFCUT_COUNT CPX_CALLBACK_INFO_MIRCUT_COUNT
     CPX_CALLBACK_INFO_NODE_NODENUM CPX_CALLBACK_INFO_STARTDETTIME
     CPX_CALLBACK_INFO_USER_PROBLEM CPX_CALLBACK_INFO_USER_THREADS
     CPX_CALLBACK_MIP_BRANCH_NOSOLN CPX_MAX_SCALED_PRIMAL_RESIDUAL
     CPX_STAT_CONFLICT_ABORT_IT_LIM CPX_STAT_FEASIBLE_RELAXED_QUAD
     CPX_SUM_SCALED_PRIMAL_RESIDUAL */
  /* Offset 20 gives the best switch position.  */
  switch (name[20]) {
  case 'A':
    if (memEQ(name, "CPX_CALLBACK_INFO_DUAL_INFMEAS", 30)) {
    /*                                   ^                */
#ifdef CPX_CALLBACK_INFO_DUAL_INFMEAS
      *nv_return = CPX_CALLBACK_INFO_DUAL_INFMEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_STARTDETTIME", 30)) {
    /*                                   ^                */
#ifdef CPX_CALLBACK_INFO_STARTDETTIME
      *nv_return = CPX_CALLBACK_INFO_STARTDETTIME;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "CPX_CALLBACK_INFO_ITCOUNT_LONG", 30)) {
    /*                                   ^                */
#ifdef CPX_CALLBACK_INFO_ITCOUNT_LONG
      *nv_return = CPX_CALLBACK_INFO_ITCOUNT_LONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "CPX_CALLBACK_INFO_NODE_NODENUM", 30)) {
    /*                                   ^                */
#ifdef CPX_CALLBACK_INFO_NODE_NODENUM
      *nv_return = CPX_CALLBACK_INFO_NODE_NODENUM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPX_CALLBACK_INFO_USER_PROBLEM", 30)) {
    /*                                   ^                */
#ifdef CPX_CALLBACK_INFO_USER_PROBLEM
      *nv_return = CPX_CALLBACK_INFO_USER_PROBLEM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_USER_THREADS", 30)) {
    /*                                   ^                */
#ifdef CPX_CALLBACK_INFO_USER_THREADS
      *nv_return = CPX_CALLBACK_INFO_USER_THREADS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "CPX_CALLBACK_INFO_MCFCUT_COUNT", 30)) {
    /*                                   ^                */
#ifdef CPX_CALLBACK_INFO_MCFCUT_COUNT
      *nv_return = CPX_CALLBACK_INFO_MCFCUT_COUNT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPX_CALLBACK_INFO_CLIQUE_COUNT", 30)) {
    /*                                   ^                */
#ifdef CPX_CALLBACK_INFO_CLIQUE_COUNT
      *nv_return = CPX_CALLBACK_INFO_CLIQUE_COUNT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPX_MAX_SCALED_PRIMAL_RESIDUAL", 30)) {
    /*                                   ^                */
#ifdef CPX_MAX_SCALED_PRIMAL_RESIDUAL
      *nv_return = CPX_MAX_SCALED_PRIMAL_RESIDUAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_FEASIBLE_RELAXED_QUAD", 30)) {
    /*                                   ^                */
#ifdef CPX_STAT_FEASIBLE_RELAXED_QUAD
      *nv_return = CPX_STAT_FEASIBLE_RELAXED_QUAD;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_SUM_SCALED_PRIMAL_RESIDUAL", 30)) {
    /*                                   ^                */
#ifdef CPX_SUM_SCALED_PRIMAL_RESIDUAL
      *nv_return = CPX_SUM_SCALED_PRIMAL_RESIDUAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPX_CALLBACK_MIP_BRANCH_NOSOLN", 30)) {
    /*                                   ^                */
#ifdef CPX_CALLBACK_MIP_BRANCH_NOSOLN
      *nv_return = CPX_CALLBACK_MIP_BRANCH_NOSOLN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPX_STAT_CONFLICT_ABORT_IT_LIM", 30)) {
    /*                                   ^                */
#ifdef CPX_STAT_CONFLICT_ABORT_IT_LIM
      *nv_return = CPX_STAT_CONFLICT_ABORT_IT_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPX_CALLBACK_INFO_IMPLBD_COUNT", 30)) {
    /*                                   ^                */
#ifdef CPX_CALLBACK_INFO_IMPLBD_COUNT
      *nv_return = CPX_CALLBACK_INFO_IMPLBD_COUNT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_KAPPA_STABLE", 30)) {
    /*                                   ^                */
#ifdef CPX_CALLBACK_INFO_KAPPA_STABLE
      *nv_return = CPX_CALLBACK_INFO_KAPPA_STABLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPX_CALLBACK_INFO_MIRCUT_COUNT", 30)) {
    /*                                   ^                */
#ifdef CPX_CALLBACK_INFO_MIRCUT_COUNT
      *nv_return = CPX_CALLBACK_INFO_MIRCUT_COUNT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPX_CALLBACK_INFO_BEST_INTEGER", 30)) {
    /*                                   ^                */
#ifdef CPX_CALLBACK_INFO_BEST_INTEGER
      *nv_return = CPX_CALLBACK_INFO_BEST_INTEGER;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_31 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_MIPSEARCH_WITH_CALLBACKS CPX_CALLBACK_INFO_DISJCUT_COUNT
     CPX_CALLBACK_INFO_FRACCUT_COUNT CPX_CALLBACK_INFO_MY_THREAD_NUM
     CPX_CALLBACK_INFO_NODE_ESTIMATE CPX_STAT_CONFLICT_ABORT_MEM_LIM
     CPX_STAT_CONFLICT_ABORT_OBJ_LIM CPX_STAT_OPTIMAL_FACE_UNBOUNDED */
  /* Offset 24 gives the best switch position.  */
  switch (name[24]) {
  case 'B':
    if (memEQ(name, "CPX_STAT_OPTIMAL_FACE_UNBOUNDED", 31)) {
    /*                                       ^             */
#ifdef CPX_STAT_OPTIMAL_FACE_UNBOUNDED
      *nv_return = CPX_STAT_OPTIMAL_FACE_UNBOUNDED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPX_CALLBACK_INFO_MY_THREAD_NUM", 31)) {
    /*                                       ^             */
#ifdef CPX_CALLBACK_INFO_MY_THREAD_NUM
      *nv_return = CPX_CALLBACK_INFO_MY_THREAD_NUM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPXERR_MIPSEARCH_WITH_CALLBACKS", 31)) {
    /*                                       ^             */
#ifdef CPXERR_MIPSEARCH_WITH_CALLBACKS
      *nv_return = CPXERR_MIPSEARCH_WITH_CALLBACKS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "CPX_STAT_CONFLICT_ABORT_MEM_LIM", 31)) {
    /*                                       ^             */
#ifdef CPX_STAT_CONFLICT_ABORT_MEM_LIM
      *nv_return = CPX_STAT_CONFLICT_ABORT_MEM_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPX_STAT_CONFLICT_ABORT_OBJ_LIM", 31)) {
    /*                                       ^             */
#ifdef CPX_STAT_CONFLICT_ABORT_OBJ_LIM
      *nv_return = CPX_STAT_CONFLICT_ABORT_OBJ_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPX_CALLBACK_INFO_NODE_ESTIMATE", 31)) {
    /*                                       ^             */
#ifdef CPX_CALLBACK_INFO_NODE_ESTIMATE
      *nv_return = CPX_CALLBACK_INFO_NODE_ESTIMATE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "CPX_CALLBACK_INFO_DISJCUT_COUNT", 31)) {
    /*                                       ^             */
#ifdef CPX_CALLBACK_INFO_DISJCUT_COUNT
      *nv_return = CPX_CALLBACK_INFO_DISJCUT_COUNT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_FRACCUT_COUNT", 31)) {
    /*                                       ^             */
#ifdef CPX_CALLBACK_INFO_FRACCUT_COUNT
      *nv_return = CPX_CALLBACK_INFO_FRACCUT_COUNT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_32 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPX_CALLBACK_INFO_BEST_REMAINING CPX_CALLBACK_INFO_FLOWPATH_COUNT
     CPX_CALLBACK_INFO_GUBCOVER_COUNT CPX_CALLBACK_INFO_IC_IMPLIED_VAR
     CPX_CALLBACK_INFO_IC_IS_FEASIBLE CPX_CALLBACK_INFO_KAPPA_ILLPOSED
     CPX_CALLBACK_INFO_KAPPA_UNSTABLE CPX_CALLBACK_INFO_MIP_ITERATIONS
     CPX_CALLBACK_INFO_PRIMAL_INFMEAS CPX_CALLBACK_INFO_PROBE_PROGRESS
     CPX_SOLUTIONTARGET_OPTIMALCONVEX CPX_SOLUTIONTARGET_OPTIMALGLOBAL
     CPX_STAT_CONFLICT_ABORT_NODE_LIM CPX_STAT_CONFLICT_ABORT_TIME_LIM */
  /* Offset 27 gives the best switch position.  */
  switch (name[27]) {
  case 'C':
    if (memEQ(name, "CPX_CALLBACK_INFO_FLOWPATH_COUNT", 32)) {
    /*                                          ^           */
#ifdef CPX_CALLBACK_INFO_FLOWPATH_COUNT
      *nv_return = CPX_CALLBACK_INFO_FLOWPATH_COUNT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_GUBCOVER_COUNT", 32)) {
    /*                                          ^           */
#ifdef CPX_CALLBACK_INFO_GUBCOVER_COUNT
      *nv_return = CPX_CALLBACK_INFO_GUBCOVER_COUNT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "CPX_CALLBACK_INFO_IC_IMPLIED_VAR", 32)) {
    /*                                          ^           */
#ifdef CPX_CALLBACK_INFO_IC_IMPLIED_VAR
      *nv_return = CPX_CALLBACK_INFO_IC_IMPLIED_VAR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPX_STAT_CONFLICT_ABORT_NODE_LIM", 32)) {
    /*                                          ^           */
#ifdef CPX_STAT_CONFLICT_ABORT_NODE_LIM
      *nv_return = CPX_STAT_CONFLICT_ABORT_NODE_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_CONFLICT_ABORT_TIME_LIM", 32)) {
    /*                                          ^           */
#ifdef CPX_STAT_CONFLICT_ABORT_TIME_LIM
      *nv_return = CPX_STAT_CONFLICT_ABORT_TIME_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "CPX_CALLBACK_INFO_PRIMAL_INFMEAS", 32)) {
    /*                                          ^           */
#ifdef CPX_CALLBACK_INFO_PRIMAL_INFMEAS
      *nv_return = CPX_CALLBACK_INFO_PRIMAL_INFMEAS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "CPX_CALLBACK_INFO_PROBE_PROGRESS", 32)) {
    /*                                          ^           */
#ifdef CPX_CALLBACK_INFO_PROBE_PROGRESS
      *nv_return = CPX_CALLBACK_INFO_PROBE_PROGRESS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPX_CALLBACK_INFO_BEST_REMAINING", 32)) {
    /*                                          ^           */
#ifdef CPX_CALLBACK_INFO_BEST_REMAINING
      *nv_return = CPX_CALLBACK_INFO_BEST_REMAINING;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPX_SOLUTIONTARGET_OPTIMALGLOBAL", 32)) {
    /*                                          ^           */
#ifdef CPX_SOLUTIONTARGET_OPTIMALGLOBAL
      *nv_return = CPX_SOLUTIONTARGET_OPTIMALGLOBAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPX_SOLUTIONTARGET_OPTIMALCONVEX", 32)) {
    /*                                          ^           */
#ifdef CPX_SOLUTIONTARGET_OPTIMALCONVEX
      *nv_return = CPX_SOLUTIONTARGET_OPTIMALCONVEX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPX_CALLBACK_INFO_KAPPA_ILLPOSED", 32)) {
    /*                                          ^           */
#ifdef CPX_CALLBACK_INFO_KAPPA_ILLPOSED
      *nv_return = CPX_CALLBACK_INFO_KAPPA_ILLPOSED;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "CPX_CALLBACK_INFO_IC_IS_FEASIBLE", 32)) {
    /*                                          ^           */
#ifdef CPX_CALLBACK_INFO_IC_IS_FEASIBLE
      *nv_return = CPX_CALLBACK_INFO_IC_IS_FEASIBLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "CPX_CALLBACK_INFO_KAPPA_UNSTABLE", 32)) {
    /*                                          ^           */
#ifdef CPX_CALLBACK_INFO_KAPPA_UNSTABLE
      *nv_return = CPX_CALLBACK_INFO_KAPPA_UNSTABLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_MIP_ITERATIONS", 32)) {
    /*                                          ^           */
#ifdef CPX_CALLBACK_INFO_MIP_ITERATIONS
      *nv_return = CPX_CALLBACK_INFO_MIP_ITERATIONS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_33 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPX_CALLBACK_INFO_CROSSOVER_DEXCH CPX_CALLBACK_INFO_CROSSOVER_DPUSH
     CPX_CALLBACK_INFO_CROSSOVER_PEXCH CPX_CALLBACK_INFO_CROSSOVER_PPUSH
     CPX_CALLBACK_INFO_CROSSOVER_SBCNT CPX_CALLBACK_INFO_FLOWCOVER_COUNT
     CPX_CALLBACK_INFO_IC_IMPLYING_VAR CPX_CALLBACK_INFO_KAPPA_ATTENTION
     CPX_CALLBACK_INFO_NODES_LEFT_LONG CPX_CALLBACK_INFO_NODE_COUNT_LONG
     CPX_CALLBACK_INFO_NODE_DEPTH_LONG CPX_CALLBACK_INFO_NODE_USERHANDLE
     CPX_CALLBACK_INFO_PRESOLVE_COEFFS CPX_CALLBACK_INFO_SOS_IS_FEASIBLE
     CPX_CALLBACK_INFO_TUNING_PROGRESS */
  /* Offset 30 gives the best switch position.  */
  switch (name[30]) {
  case 'B':
    if (memEQ(name, "CPX_CALLBACK_INFO_SOS_IS_FEASIBLE", 33)) {
    /*                                             ^         */
#ifdef CPX_CALLBACK_INFO_SOS_IS_FEASIBLE
      *nv_return = CPX_CALLBACK_INFO_SOS_IS_FEASIBLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "CPX_CALLBACK_INFO_CROSSOVER_SBCNT", 33)) {
    /*                                             ^         */
#ifdef CPX_CALLBACK_INFO_CROSSOVER_SBCNT
      *nv_return = CPX_CALLBACK_INFO_CROSSOVER_SBCNT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "CPX_CALLBACK_INFO_NODE_USERHANDLE", 33)) {
    /*                                             ^         */
#ifdef CPX_CALLBACK_INFO_NODE_USERHANDLE
      *nv_return = CPX_CALLBACK_INFO_NODE_USERHANDLE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPX_CALLBACK_INFO_TUNING_PROGRESS", 33)) {
    /*                                             ^         */
#ifdef CPX_CALLBACK_INFO_TUNING_PROGRESS
      *nv_return = CPX_CALLBACK_INFO_TUNING_PROGRESS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "CPX_CALLBACK_INFO_PRESOLVE_COEFFS", 33)) {
    /*                                             ^         */
#ifdef CPX_CALLBACK_INFO_PRESOLVE_COEFFS
      *nv_return = CPX_CALLBACK_INFO_PRESOLVE_COEFFS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "CPX_CALLBACK_INFO_KAPPA_ATTENTION", 33)) {
    /*                                             ^         */
#ifdef CPX_CALLBACK_INFO_KAPPA_ATTENTION
      *nv_return = CPX_CALLBACK_INFO_KAPPA_ATTENTION;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPX_CALLBACK_INFO_NODES_LEFT_LONG", 33)) {
    /*                                             ^         */
#ifdef CPX_CALLBACK_INFO_NODES_LEFT_LONG
      *nv_return = CPX_CALLBACK_INFO_NODES_LEFT_LONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_NODE_COUNT_LONG", 33)) {
    /*                                             ^         */
#ifdef CPX_CALLBACK_INFO_NODE_COUNT_LONG
      *nv_return = CPX_CALLBACK_INFO_NODE_COUNT_LONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_NODE_DEPTH_LONG", 33)) {
    /*                                             ^         */
#ifdef CPX_CALLBACK_INFO_NODE_DEPTH_LONG
      *nv_return = CPX_CALLBACK_INFO_NODE_DEPTH_LONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "CPX_CALLBACK_INFO_CROSSOVER_DPUSH", 33)) {
    /*                                             ^         */
#ifdef CPX_CALLBACK_INFO_CROSSOVER_DPUSH
      *nv_return = CPX_CALLBACK_INFO_CROSSOVER_DPUSH;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_CROSSOVER_PPUSH", 33)) {
    /*                                             ^         */
#ifdef CPX_CALLBACK_INFO_CROSSOVER_PPUSH
      *nv_return = CPX_CALLBACK_INFO_CROSSOVER_PPUSH;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_FLOWCOVER_COUNT", 33)) {
    /*                                             ^         */
#ifdef CPX_CALLBACK_INFO_FLOWCOVER_COUNT
      *nv_return = CPX_CALLBACK_INFO_FLOWCOVER_COUNT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "CPX_CALLBACK_INFO_IC_IMPLYING_VAR", 33)) {
    /*                                             ^         */
#ifdef CPX_CALLBACK_INFO_IC_IMPLYING_VAR
      *nv_return = CPX_CALLBACK_INFO_IC_IMPLYING_VAR;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'X':
    if (memEQ(name, "CPX_CALLBACK_INFO_CROSSOVER_DEXCH", 33)) {
    /*                                             ^         */
#ifdef CPX_CALLBACK_INFO_CROSSOVER_DEXCH
      *nv_return = CPX_CALLBACK_INFO_CROSSOVER_DEXCH;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_CROSSOVER_PEXCH", 33)) {
    /*                                             ^         */
#ifdef CPX_CALLBACK_INFO_CROSSOVER_PEXCH
      *nv_return = CPX_CALLBACK_INFO_CROSSOVER_PEXCH;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_34 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPXERR_UNSUPPORTED_CONSTRAINT_TYPE CPX_CALLBACK_INFO_DISJCUT_PROGRESS
     CPX_CALLBACK_INFO_FLOWMIR_PROGRESS CPX_CALLBACK_INFO_FRACCUT_PROGRESS
     CPX_CALLBACK_INFO_KAPPA_SUSPICIOUS CPX_CALLBACK_INFO_NODE_SEQNUM_LONG
     CPX_CALLBACK_INFO_SOS_MEMBER_INDEX CPX_WRITELEVEL_NONZERODISCRETEVARS */
  /* Offset 21 gives the best switch position.  */
  switch (name[21]) {
  case 'C':
    if (memEQ(name, "CPX_CALLBACK_INFO_FRACCUT_PROGRESS", 34)) {
    /*                                    ^                   */
#ifdef CPX_CALLBACK_INFO_FRACCUT_PROGRESS
      *nv_return = CPX_CALLBACK_INFO_FRACCUT_PROGRESS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPX_CALLBACK_INFO_NODE_SEQNUM_LONG", 34)) {
    /*                                    ^                   */
#ifdef CPX_CALLBACK_INFO_NODE_SEQNUM_LONG
      *nv_return = CPX_CALLBACK_INFO_NODE_SEQNUM_LONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'J':
    if (memEQ(name, "CPX_CALLBACK_INFO_DISJCUT_PROGRESS", 34)) {
    /*                                    ^                   */
#ifdef CPX_CALLBACK_INFO_DISJCUT_PROGRESS
      *nv_return = CPX_CALLBACK_INFO_DISJCUT_PROGRESS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CPXERR_UNSUPPORTED_CONSTRAINT_TYPE", 34)) {
    /*                                    ^                   */
#ifdef CPXERR_UNSUPPORTED_CONSTRAINT_TYPE
      *nv_return = CPXERR_UNSUPPORTED_CONSTRAINT_TYPE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPX_WRITELEVEL_NONZERODISCRETEVARS", 34)) {
    /*                                    ^                   */
#ifdef CPX_WRITELEVEL_NONZERODISCRETEVARS
      *nv_return = CPX_WRITELEVEL_NONZERODISCRETEVARS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPX_CALLBACK_INFO_KAPPA_SUSPICIOUS", 34)) {
    /*                                    ^                   */
#ifdef CPX_CALLBACK_INFO_KAPPA_SUSPICIOUS
      *nv_return = CPX_CALLBACK_INFO_KAPPA_SUSPICIOUS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "CPX_CALLBACK_INFO_FLOWMIR_PROGRESS", 34)) {
    /*                                    ^                   */
#ifdef CPX_CALLBACK_INFO_FLOWMIR_PROGRESS
      *nv_return = CPX_CALLBACK_INFO_FLOWMIR_PROGRESS;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "CPX_CALLBACK_INFO_SOS_MEMBER_INDEX", 34)) {
    /*                                    ^                   */
#ifdef CPX_CALLBACK_INFO_SOS_MEMBER_INDEX
      *nv_return = CPX_CALLBACK_INFO_SOS_MEMBER_INDEX;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_35 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPX_CALLBACK_INFO_NODE_NODENUM_LONG CPX_CALLBACK_INFO_PRESOLVE_AGGSUBST
     CPX_CALLBACK_INFO_PRESOLVE_COLSGONE CPX_CALLBACK_INFO_PRESOLVE_ROWSGONE
     CPX_CALLBACK_INFO_SOS_MEMBER_REFVAL CPX_CALLBACK_INFO_ZEROHALFCUT_COUNT
     CPX_CALLBACK_MIP_INCUMBENT_HEURSOLN CPX_CALLBACK_MIP_INCUMBENT_NODESOLN
     CPX_CALLBACK_MIP_INCUMBENT_USERSOLN CPX_STAT_CONFLICT_ABORT_DETTIME_LIM */
  /* Offset 29 gives the best switch position.  */
  switch (name[29]) {
  case 'D':
    if (memEQ(name, "CPX_CALLBACK_MIP_INCUMBENT_NODESOLN", 35)) {
    /*                                            ^            */
#ifdef CPX_CALLBACK_MIP_INCUMBENT_NODESOLN
      *nv_return = CPX_CALLBACK_MIP_INCUMBENT_NODESOLN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "CPX_CALLBACK_MIP_INCUMBENT_USERSOLN", 35)) {
    /*                                            ^            */
#ifdef CPX_CALLBACK_MIP_INCUMBENT_USERSOLN
      *nv_return = CPX_CALLBACK_MIP_INCUMBENT_USERSOLN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "CPX_CALLBACK_INFO_PRESOLVE_AGGSUBST", 35)) {
    /*                                            ^            */
#ifdef CPX_CALLBACK_INFO_PRESOLVE_AGGSUBST
      *nv_return = CPX_CALLBACK_INFO_PRESOLVE_AGGSUBST;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "CPX_CALLBACK_INFO_PRESOLVE_COLSGONE", 35)) {
    /*                                            ^            */
#ifdef CPX_CALLBACK_INFO_PRESOLVE_COLSGONE
      *nv_return = CPX_CALLBACK_INFO_PRESOLVE_COLSGONE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "CPX_CALLBACK_INFO_NODE_NODENUM_LONG", 35)) {
    /*                                            ^            */
#ifdef CPX_CALLBACK_INFO_NODE_NODENUM_LONG
      *nv_return = CPX_CALLBACK_INFO_NODE_NODENUM_LONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_STAT_CONFLICT_ABORT_DETTIME_LIM", 35)) {
    /*                                            ^            */
#ifdef CPX_STAT_CONFLICT_ABORT_DETTIME_LIM
      *nv_return = CPX_STAT_CONFLICT_ABORT_DETTIME_LIM;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "CPX_CALLBACK_INFO_SOS_MEMBER_REFVAL", 35)) {
    /*                                            ^            */
#ifdef CPX_CALLBACK_INFO_SOS_MEMBER_REFVAL
      *nv_return = CPX_CALLBACK_INFO_SOS_MEMBER_REFVAL;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "CPX_CALLBACK_MIP_INCUMBENT_HEURSOLN", 35)) {
    /*                                            ^            */
#ifdef CPX_CALLBACK_MIP_INCUMBENT_HEURSOLN
      *nv_return = CPX_CALLBACK_MIP_INCUMBENT_HEURSOLN;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "CPX_CALLBACK_INFO_PRESOLVE_ROWSGONE", 35)) {
    /*                                            ^            */
#ifdef CPX_CALLBACK_INFO_PRESOLVE_ROWSGONE
      *nv_return = CPX_CALLBACK_INFO_PRESOLVE_ROWSGONE;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "CPX_CALLBACK_INFO_ZEROHALFCUT_COUNT", 35)) {
    /*                                            ^            */
#ifdef CPX_CALLBACK_INFO_ZEROHALFCUT_COUNT
      *nv_return = CPX_CALLBACK_INFO_ZEROHALFCUT_COUNT;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant_38 (pTHX_ const char *name, NV *nv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CPX_CALLBACK_INFO_CROSSOVER_DEXCH_LONG
     CPX_CALLBACK_INFO_CROSSOVER_DPUSH_LONG
     CPX_CALLBACK_INFO_CROSSOVER_PEXCH_LONG
     CPX_CALLBACK_INFO_CROSSOVER_PPUSH_LONG
     CPX_CALLBACK_INFO_PRESOLVE_COEFFS_LONG */
  /* Offset 28 gives the best switch position.  */
  switch (name[28]) {
  case 'D':
    if (memEQ(name, "CPX_CALLBACK_INFO_CROSSOVER_DEXCH_LONG", 38)) {
    /*                                           ^                */
#ifdef CPX_CALLBACK_INFO_CROSSOVER_DEXCH_LONG
      *nv_return = CPX_CALLBACK_INFO_CROSSOVER_DEXCH_LONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_CROSSOVER_DPUSH_LONG", 38)) {
    /*                                           ^                */
#ifdef CPX_CALLBACK_INFO_CROSSOVER_DPUSH_LONG
      *nv_return = CPX_CALLBACK_INFO_CROSSOVER_DPUSH_LONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "CPX_CALLBACK_INFO_PRESOLVE_COEFFS_LONG", 38)) {
    /*                                           ^                */
#ifdef CPX_CALLBACK_INFO_PRESOLVE_COEFFS_LONG
      *nv_return = CPX_CALLBACK_INFO_PRESOLVE_COEFFS_LONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "CPX_CALLBACK_INFO_CROSSOVER_PEXCH_LONG", 38)) {
    /*                                           ^                */
#ifdef CPX_CALLBACK_INFO_CROSSOVER_PEXCH_LONG
      *nv_return = CPX_CALLBACK_INFO_CROSSOVER_PEXCH_LONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CPX_CALLBACK_INFO_CROSSOVER_PPUSH_LONG", 38)) {
    /*                                           ^                */
#ifdef CPX_CALLBACK_INFO_CROSSOVER_PPUSH_LONG
      *nv_return = CPX_CALLBACK_INFO_CROSSOVER_PPUSH_LONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
iv_constant (pTHX_ const char *name, STRLEN len, NV *nv_return) {
  /* Initially switch on the length of the name.  */
  /* When generated this function returned values for the list of names given
     in this section of perl code.  Rather than manually editing these functions
     to add or remove constants, which would result in this comment and section
     of code becoming inaccurate, we recommend that you edit this section of
     code, and use it to regenerate a new set of constant functions which you
     then use to replace the originals.

     Regenerate these constant functions by feeding this entire source file to
     perl -x

#!/usr/bin/perl -w
use ExtUtils::Constant qw (constant_types C_constant XS_constant);

my $types = {map {($_, 1)} qw(NV)};
my @names = (qw(CPXERR_ABORT_STRONGBRANCH CPXERR_ADJ_SIGNS CPXERR_ADJ_SIGN_QUAD
	       CPXERR_ADJ_SIGN_SENSE CPXERR_ALGNOTLICENSED
	       CPXERR_ARC_INDEX_RANGE CPXERR_ARRAY_BAD_SOS_TYPE
	       CPXERR_ARRAY_NOT_ASCENDING CPXERR_ARRAY_TOO_LONG CPXERR_BADLDWID
	       CPXERR_BADPRODUCT CPXERR_BAD_ARGUMENT CPXERR_BAD_BOUND_SENSE
	       CPXERR_BAD_BOUND_TYPE CPXERR_BAD_CHAR CPXERR_BAD_CTYPE
	       CPXERR_BAD_DIRECTION CPXERR_BAD_EXPONENT CPXERR_BAD_EXPO_RANGE
	       CPXERR_BAD_FILETYPE CPXERR_BAD_ID CPXERR_BAD_INDCONSTR
	       CPXERR_BAD_INDICATOR CPXERR_BAD_LAZY_UCUT CPXERR_BAD_LUB
	       CPXERR_BAD_METHOD CPXERR_BAD_NUMBER CPXERR_BAD_OBJ_SENSE
	       CPXERR_BAD_PARAM_NAME CPXERR_BAD_PARAM_NUM CPXERR_BAD_PIVOT
	       CPXERR_BAD_PRIORITY CPXERR_BAD_PROB_TYPE CPXERR_BAD_ROW_ID
	       CPXERR_BAD_SECTION_BOUNDS CPXERR_BAD_SECTION_ENDATA
	       CPXERR_BAD_SECTION_QMATRIX CPXERR_BAD_SENSE CPXERR_BAD_SOS_TYPE
	       CPXERR_BAD_STATUS CPXERR_BAS_FILE_SHORT CPXERR_BAS_FILE_SIZE
	       CPXERR_CALLBACK CPXERR_CANT_CLOSE_CHILD CPXERR_CHILD_OF_CHILD
	       CPXERR_COL_INDEX_RANGE CPXERR_COL_REPEATS
	       CPXERR_COL_REPEAT_PRINT CPXERR_COL_ROW_REPEATS
	       CPXERR_COL_UNKNOWN CPXERR_CONFLICT_UNSTABLE CPXERR_COUNT_OVERLAP
	       CPXERR_COUNT_RANGE CPXERR_DBL_MAX CPXERR_DECOMPRESSION
	       CPXERR_DETTILIM_STRONGBRANCH CPXERR_DUP_ENTRY CPXERR_DYNFUNC
	       CPXERR_DYNLOAD CPXERR_ENCODING_CONVERSION CPXERR_EXTRA_BV_BOUND
	       CPXERR_EXTRA_FR_BOUND CPXERR_EXTRA_FX_BOUND CPXERR_EXTRA_INTEND
	       CPXERR_EXTRA_INTORG CPXERR_EXTRA_SOSEND CPXERR_EXTRA_SOSORG
	       CPXERR_FAIL_OPEN_READ CPXERR_FAIL_OPEN_WRITE CPXERR_FILE_ENTRIES
	       CPXERR_FILE_FORMAT CPXERR_FILE_IO CPXERR_FILTER_VARIABLE_TYPE
	       CPXERR_IIS_DEFAULT CPXERR_IIS_FEAS CPXERR_IIS_NOT_INFEAS
	       CPXERR_IIS_NO_BASIC CPXERR_IIS_NO_INFO CPXERR_IIS_NO_LOAD
	       CPXERR_IIS_NO_SOLN CPXERR_IIS_NUM_BEST CPXERR_IIS_OPT_INFEAS
	       CPXERR_IIS_SUB_ABORT CPXERR_IIS_SUB_DETTIME_LIM
	       CPXERR_IIS_SUB_IT_LIM CPXERR_IIS_SUB_OBJ_LIM
	       CPXERR_IIS_SUB_TIME_LIM CPXERR_ILL_DEFINED_PWL
	       CPXERR_ILOG_LICENSE CPXERR_INDEX_NOT_BASIC CPXERR_INDEX_RANGE
	       CPXERR_INDEX_RANGE_HIGH CPXERR_INDEX_RANGE_LOW
	       CPXERR_INT_TOO_BIG CPXERR_INT_TOO_BIG_INPUT
	       CPXERR_INVALID_NUMBER CPXERR_IN_INFOCALLBACK CPXERR_LICENSE_MAX
	       CPXERR_LICENSE_MIN CPXERR_LIMITS_TOO_BIG CPXERR_LINE_TOO_LONG
	       CPXERR_LOCK_CREATE CPXERR_LO_BOUND_REPEATS
	       CPXERR_LP_NOT_IN_ENVIRONMENT CPXERR_MIPSEARCH_WITH_CALLBACKS
	       CPXERR_MISS_SOS_TYPE CPXERR_MSG_NO_CHANNEL CPXERR_MSG_NO_FILEPTR
	       CPXERR_MSG_NO_FUNCTION CPXERR_NAME_CREATION
	       CPXERR_NAME_NOT_FOUND CPXERR_NAME_TOO_LONG CPXERR_NAN
	       CPXERR_NEED_OPT_SOLN CPXERR_NEGATIVE_SURPLUS CPXERR_NET_DATA
	       CPXERR_NET_FILE_SHORT CPXERR_NODE_INDEX_RANGE
	       CPXERR_NODE_ON_DISK CPXERR_NOT_DUAL_UNBOUNDED CPXERR_NOT_FIXED
	       CPXERR_NOT_FOR_MIP CPXERR_NOT_FOR_QCP CPXERR_NOT_FOR_QP
	       CPXERR_NOT_MILPCLASS CPXERR_NOT_MIN_COST_FLOW CPXERR_NOT_MIP
	       CPXERR_NOT_MIQPCLASS CPXERR_NOT_ONE_PROBLEM CPXERR_NOT_QP
	       CPXERR_NOT_SAV_FILE CPXERR_NOT_UNBOUNDED CPXERR_NO_BARRIER_LIC
	       CPXERR_NO_BARRIER_SOLN CPXERR_NO_BASIC_SOLN CPXERR_NO_BASIS
	       CPXERR_NO_BOUND_SENSE CPXERR_NO_BOUND_TYPE
	       CPXERR_NO_COLUMNS_SECTION CPXERR_NO_CONFLICT CPXERR_NO_DUAL_SOLN
	       CPXERR_NO_ENDATA CPXERR_NO_ENVIRONMENT CPXERR_NO_FILENAME
	       CPXERR_NO_ID CPXERR_NO_ID_FIRST CPXERR_NO_INT_X
	       CPXERR_NO_KAPPASTATS CPXERR_NO_LU_FACTOR CPXERR_NO_MEMORY
	       CPXERR_NO_MIPSTART CPXERR_NO_MIP_LIC CPXERR_NO_MIQP_LIC
	       CPXERR_NO_NAMES CPXERR_NO_NAME_SECTION CPXERR_NO_NORMS
	       CPXERR_NO_NUMBER CPXERR_NO_NUMBER_BOUND CPXERR_NO_NUMBER_FIRST
	       CPXERR_NO_OBJECTIVE CPXERR_NO_OBJ_SENSE CPXERR_NO_OPERATOR
	       CPXERR_NO_OP_OR_SENSE CPXERR_NO_ORDER CPXERR_NO_PROBLEM
	       CPXERR_NO_QP_OPERATOR CPXERR_NO_QUAD_EXP CPXERR_NO_RHS_COEFF
	       CPXERR_NO_RHS_IN_OBJ CPXERR_NO_RNGVAL CPXERR_NO_ROWS_SECTION
	       CPXERR_NO_ROW_NAME CPXERR_NO_ROW_SENSE CPXERR_NO_SENSIT
	       CPXERR_NO_SOLN CPXERR_NO_SOLNPOOL CPXERR_NO_SOS CPXERR_NO_TREE
	       CPXERR_NO_VECTOR_SOLN CPXERR_NULL_NAME CPXERR_NULL_POINTER
	       CPXERR_ORDER_BAD_DIRECTION CPXERR_OVERFLOW
	       CPXERR_PARAM_INCOMPATIBLE CPXERR_PARAM_TOO_BIG
	       CPXERR_PARAM_TOO_SMALL CPXERR_PRESLV_ABORT
	       CPXERR_PRESLV_BAD_PARAM CPXERR_PRESLV_BASIS_MEM
	       CPXERR_PRESLV_COPYORDER CPXERR_PRESLV_COPYSOS
	       CPXERR_PRESLV_CRUSHFORM CPXERR_PRESLV_DETTIME_LIM
	       CPXERR_PRESLV_DUAL CPXERR_PRESLV_FAIL_BASIS CPXERR_PRESLV_INF
	       CPXERR_PRESLV_INForUNBD CPXERR_PRESLV_NO_BASIS
	       CPXERR_PRESLV_NO_PROB CPXERR_PRESLV_SOLN_MIP
	       CPXERR_PRESLV_SOLN_QP CPXERR_PRESLV_START_LP
	       CPXERR_PRESLV_TIME_LIM CPXERR_PRESLV_UNBD
	       CPXERR_PRESLV_UNCRUSHFORM CPXERR_PRIIND CPXERR_PRM_DATA
	       CPXERR_PRM_HEADER CPXERR_PROTOCOL CPXERR_PTHREAD_CREATE
	       CPXERR_PTHREAD_MUTEX_INIT CPXERR_QCP_SENSE CPXERR_QCP_SENSE_FILE
	       CPXERR_QUAD_EXP_NOT_2 CPXERR_QUAD_IN_ROW CPXERR_Q_DIVISOR
	       CPXERR_Q_DUP_ENTRY CPXERR_Q_NOT_INDEF CPXERR_Q_NOT_POS_DEF
	       CPXERR_Q_NOT_SYMMETRIC CPXERR_RANGE_SECTION_ORDER
	       CPXERR_RESTRICTED_VERSION CPXERR_RHS_IN_OBJ CPXERR_RIMNZ_REPEATS
	       CPXERR_RIM_REPEATS CPXERR_RIM_ROW_REPEATS CPXERR_ROW_INDEX_RANGE
	       CPXERR_ROW_REPEATS CPXERR_ROW_REPEAT_PRINT CPXERR_ROW_UNKNOWN
	       CPXERR_SAV_FILE_DATA CPXERR_SAV_FILE_VALUE CPXERR_SAV_FILE_WRITE
	       CPXERR_SBASE_ILLEGAL CPXERR_SBASE_INCOMPAT CPXERR_SINGULAR
	       CPXERR_STR_PARAM_TOO_LONG CPXERR_SUBPROB_SOLVE
	       CPXERR_SYNCPRIM_CREATE CPXERR_SYSCALL CPXERR_THREAD_FAILED
	       CPXERR_TILIM_CONDITION_NO CPXERR_TILIM_STRONGBRANCH
	       CPXERR_TOO_MANY_COEFFS CPXERR_TOO_MANY_COLS
	       CPXERR_TOO_MANY_RIMNZ CPXERR_TOO_MANY_RIMS CPXERR_TOO_MANY_ROWS
	       CPXERR_TOO_MANY_THREADS CPXERR_TREE_MEMORY_LIMIT
	       CPXERR_TUNE_MIXED CPXERR_UNIQUE_WEIGHTS
	       CPXERR_UNSUPPORTED_CONSTRAINT_TYPE CPXERR_UNSUPPORTED_OPERATION
	       CPXERR_UP_BOUND_REPEATS CPXERR_WORK_FILE_OPEN
	       CPXERR_WORK_FILE_READ CPXERR_WORK_FILE_WRITE CPXERR_XMLPARSE
	       CPXIIS_AT_LOWER CPXIIS_AT_UPPER CPXIIS_COMPLETE CPXIIS_FIXED
	       CPXIIS_PARTIAL CPXMESSAGEBUFSIZE CPXMIP_ABORT_FEAS
	       CPXMIP_ABORT_INFEAS CPXMIP_ABORT_RELAXED CPXMIP_DETTIME_LIM_FEAS
	       CPXMIP_DETTIME_LIM_INFEAS CPXMIP_FAIL_FEAS
	       CPXMIP_FAIL_FEAS_NO_TREE CPXMIP_FAIL_INFEAS
	       CPXMIP_FAIL_INFEAS_NO_TREE CPXMIP_FEASIBLE
	       CPXMIP_FEASIBLE_RELAXED_INF CPXMIP_FEASIBLE_RELAXED_QUAD
	       CPXMIP_FEASIBLE_RELAXED_SUM CPXMIP_INFEASIBLE CPXMIP_INForUNBD
	       CPXMIP_MEM_LIM_FEAS CPXMIP_MEM_LIM_INFEAS CPXMIP_NODE_LIM_FEAS
	       CPXMIP_NODE_LIM_INFEAS CPXMIP_OPTIMAL CPXMIP_OPTIMAL_INFEAS
	       CPXMIP_OPTIMAL_POPULATED CPXMIP_OPTIMAL_POPULATED_TOL
	       CPXMIP_OPTIMAL_RELAXED_INF CPXMIP_OPTIMAL_RELAXED_QUAD
	       CPXMIP_OPTIMAL_RELAXED_SUM CPXMIP_OPTIMAL_TOL
	       CPXMIP_POPULATESOL_LIM CPXMIP_SOL_LIM CPXMIP_TIME_LIM_FEAS
	       CPXMIP_TIME_LIM_INFEAS CPXMIP_UNBOUNDED
	       CPXNET_NO_DISPLAY_OBJECTIVE CPXNET_PENALIZED_OBJECTIVE
	       CPXNET_PRICE_AUTO CPXNET_PRICE_MULT_PART CPXNET_PRICE_PARTIAL
	       CPXNET_PRICE_SORT_MULT_PART CPXNET_TRUE_OBJECTIVE
	       CPXPROB_FIXEDMILP CPXPROB_FIXEDMIQP CPXPROB_LP CPXPROB_MILP
	       CPXPROB_MIQCP CPXPROB_MIQP CPXPROB_NODELP CPXPROB_NODEQCP
	       CPXPROB_NODEQP CPXPROB_QCP CPXPROB_QP CPX_ALG_AUTOMATIC
	       CPX_ALG_BAROPT CPX_ALG_BARRIER CPX_ALG_CONCURRENT CPX_ALG_DUAL
	       CPX_ALG_FEASOPT CPX_ALG_MIP CPX_ALG_NET CPX_ALG_NONE
	       CPX_ALG_PIVOT CPX_ALG_PIVOTIN CPX_ALG_PIVOTOUT CPX_ALG_PRIMAL
	       CPX_ALG_ROBUST CPX_ALG_SIFTING CPX_AT_LOWER CPX_AT_UPPER
	       CPX_BARORDER_AMD CPX_BARORDER_AMF CPX_BARORDER_AUTO
	       CPX_BARORDER_ND CPX_BASIC CPX_BASIC_SOLN CPX_BIGINT CPX_BIGLONG
	       CPX_BINARY CPX_BRANCH_DOWN CPX_BRANCH_GLOBAL CPX_BRANCH_UP
	       CPX_BRDIR_AUTO CPX_BRDIR_DOWN CPX_BRDIR_UP
	       CPX_CALLBACK_ABORT_CUT_LOOP CPX_CALLBACK_BARRIER
	       CPX_CALLBACK_DEFAULT CPX_CALLBACK_DUAL
	       CPX_CALLBACK_DUAL_CROSSOVER CPX_CALLBACK_FAIL
	       CPX_CALLBACK_INFO_BEST_INTEGER CPX_CALLBACK_INFO_BEST_REMAINING
	       CPX_CALLBACK_INFO_CLIQUE_COUNT CPX_CALLBACK_INFO_COVER_COUNT
	       CPX_CALLBACK_INFO_CROSSOVER_DEXCH
	       CPX_CALLBACK_INFO_CROSSOVER_DEXCH_LONG
	       CPX_CALLBACK_INFO_CROSSOVER_DPUSH
	       CPX_CALLBACK_INFO_CROSSOVER_DPUSH_LONG
	       CPX_CALLBACK_INFO_CROSSOVER_PEXCH
	       CPX_CALLBACK_INFO_CROSSOVER_PEXCH_LONG
	       CPX_CALLBACK_INFO_CROSSOVER_PPUSH
	       CPX_CALLBACK_INFO_CROSSOVER_PPUSH_LONG
	       CPX_CALLBACK_INFO_CROSSOVER_SBCNT CPX_CALLBACK_INFO_CUTOFF
	       CPX_CALLBACK_INFO_DISJCUT_COUNT
	       CPX_CALLBACK_INFO_DISJCUT_PROGRESS CPX_CALLBACK_INFO_DUAL_FEAS
	       CPX_CALLBACK_INFO_DUAL_INFMEAS CPX_CALLBACK_INFO_DUAL_OBJ
	       CPX_CALLBACK_INFO_ENDDETTIME CPX_CALLBACK_INFO_ENDTIME
	       CPX_CALLBACK_INFO_FLOWCOVER_COUNT
	       CPX_CALLBACK_INFO_FLOWMIR_PROGRESS
	       CPX_CALLBACK_INFO_FLOWPATH_COUNT CPX_CALLBACK_INFO_FRACCUT_COUNT
	       CPX_CALLBACK_INFO_FRACCUT_PROGRESS
	       CPX_CALLBACK_INFO_GUBCOVER_COUNT CPX_CALLBACK_INFO_IC_COMPL
	       CPX_CALLBACK_INFO_IC_IMPLIED_VAR
	       CPX_CALLBACK_INFO_IC_IMPLYING_VAR
	       CPX_CALLBACK_INFO_IC_IS_FEASIBLE CPX_CALLBACK_INFO_IC_NUM
	       CPX_CALLBACK_INFO_IC_RHS CPX_CALLBACK_INFO_IC_SENSE
	       CPX_CALLBACK_INFO_IMPLBD_COUNT CPX_CALLBACK_INFO_ITCOUNT
	       CPX_CALLBACK_INFO_ITCOUNT_LONG CPX_CALLBACK_INFO_KAPPA_ATTENTION
	       CPX_CALLBACK_INFO_KAPPA_ILLPOSED CPX_CALLBACK_INFO_KAPPA_MAX
	       CPX_CALLBACK_INFO_KAPPA_STABLE
	       CPX_CALLBACK_INFO_KAPPA_SUSPICIOUS
	       CPX_CALLBACK_INFO_KAPPA_UNSTABLE CPX_CALLBACK_INFO_MCFCUT_COUNT
	       CPX_CALLBACK_INFO_MIP_FEAS CPX_CALLBACK_INFO_MIP_ITERATIONS
	       CPX_CALLBACK_INFO_MIP_ITERATIONS_LONG
	       CPX_CALLBACK_INFO_MIP_REL_GAP CPX_CALLBACK_INFO_MIRCUT_COUNT
	       CPX_CALLBACK_INFO_MY_THREAD_NUM CPX_CALLBACK_INFO_NODES_LEFT
	       CPX_CALLBACK_INFO_NODES_LEFT_LONG CPX_CALLBACK_INFO_NODE_COUNT
	       CPX_CALLBACK_INFO_NODE_COUNT_LONG CPX_CALLBACK_INFO_NODE_DEPTH
	       CPX_CALLBACK_INFO_NODE_DEPTH_LONG
	       CPX_CALLBACK_INFO_NODE_ESTIMATE CPX_CALLBACK_INFO_NODE_NIINF
	       CPX_CALLBACK_INFO_NODE_NODENUM
	       CPX_CALLBACK_INFO_NODE_NODENUM_LONG
	       CPX_CALLBACK_INFO_NODE_OBJVAL CPX_CALLBACK_INFO_NODE_SEQNUM
	       CPX_CALLBACK_INFO_NODE_SEQNUM_LONG CPX_CALLBACK_INFO_NODE_SIINF
	       CPX_CALLBACK_INFO_NODE_SOS CPX_CALLBACK_INFO_NODE_TYPE
	       CPX_CALLBACK_INFO_NODE_USERHANDLE CPX_CALLBACK_INFO_NODE_VAR
	       CPX_CALLBACK_INFO_PRESOLVE_AGGSUBST
	       CPX_CALLBACK_INFO_PRESOLVE_AGGSUBST_LONG
	       CPX_CALLBACK_INFO_PRESOLVE_COEFFS
	       CPX_CALLBACK_INFO_PRESOLVE_COEFFS_LONG
	       CPX_CALLBACK_INFO_PRESOLVE_COLSGONE
	       CPX_CALLBACK_INFO_PRESOLVE_ROWSGONE
	       CPX_CALLBACK_INFO_PRIMAL_FEAS CPX_CALLBACK_INFO_PRIMAL_INFMEAS
	       CPX_CALLBACK_INFO_PRIMAL_OBJ CPX_CALLBACK_INFO_PROBE_PHASE
	       CPX_CALLBACK_INFO_PROBE_PROGRESS
	       CPX_CALLBACK_INFO_SOS_IS_FEASIBLE
	       CPX_CALLBACK_INFO_SOS_MEMBER_INDEX
	       CPX_CALLBACK_INFO_SOS_MEMBER_REFVAL CPX_CALLBACK_INFO_SOS_NUM
	       CPX_CALLBACK_INFO_SOS_SIZE CPX_CALLBACK_INFO_SOS_TYPE
	       CPX_CALLBACK_INFO_STARTDETTIME CPX_CALLBACK_INFO_STARTTIME
	       CPX_CALLBACK_INFO_TUNING_PROGRESS CPX_CALLBACK_INFO_USER_PROBLEM
	       CPX_CALLBACK_INFO_USER_THREADS
	       CPX_CALLBACK_INFO_ZEROHALFCUT_COUNT CPX_CALLBACK_MIP
	       CPX_CALLBACK_MIP_BRANCH CPX_CALLBACK_MIP_BRANCH_NOSOLN
	       CPX_CALLBACK_MIP_CUT_FEAS CPX_CALLBACK_MIP_CUT_LAST
	       CPX_CALLBACK_MIP_CUT_LOOP CPX_CALLBACK_MIP_CUT_UNBD
	       CPX_CALLBACK_MIP_DELETENODE CPX_CALLBACK_MIP_DISJCUT
	       CPX_CALLBACK_MIP_FLOWMIR CPX_CALLBACK_MIP_FRACCUT
	       CPX_CALLBACK_MIP_HEURISTIC CPX_CALLBACK_MIP_INCUMBENT_HEURSOLN
	       CPX_CALLBACK_MIP_INCUMBENT_NODESOLN
	       CPX_CALLBACK_MIP_INCUMBENT_USERSOLN CPX_CALLBACK_MIP_NODE
	       CPX_CALLBACK_MIP_PROBE CPX_CALLBACK_MIP_SOLVE
	       CPX_CALLBACK_NETWORK CPX_CALLBACK_PRESOLVE CPX_CALLBACK_PRIMAL
	       CPX_CALLBACK_PRIMAL_CROSSOVER CPX_CALLBACK_QPBARRIER
	       CPX_CALLBACK_QPSIMPLEX CPX_CALLBACK_SET CPX_CALLBACK_TUNING
	       CPX_CONFLICT_EXCLUDED CPX_CONFLICT_LB CPX_CONFLICT_MEMBER
	       CPX_CONFLICT_POSSIBLE_LB CPX_CONFLICT_POSSIBLE_MEMBER
	       CPX_CONFLICT_POSSIBLE_UB CPX_CONFLICT_UB CPX_CONTINUOUS
	       CPX_CON_ABS CPX_CON_DISJCST CPX_CON_INDDISJCST CPX_CON_INDICATOR
	       CPX_CON_LAST_CONTYPE CPX_CON_LINEAR CPX_CON_LOWER_BOUND
	       CPX_CON_MAXEXPR CPX_CON_MINEXPR CPX_CON_PWL CPX_CON_QUADRATIC
	       CPX_CON_SETVAR CPX_CON_SETVARCARD CPX_CON_SETVARDOMAIN
	       CPX_CON_SETVAREQ CPX_CON_SETVARINTERSECT
	       CPX_CON_SETVARINTERSECTION CPX_CON_SETVARMAX
	       CPX_CON_SETVARMEMBER CPX_CON_SETVARMIN CPX_CON_SETVARNEQ
	       CPX_CON_SETVARNEQCST CPX_CON_SETVARNULLINTERSECT
	       CPX_CON_SETVARSUBSET CPX_CON_SETVARSUM CPX_CON_SETVARUNION
	       CPX_CON_SOS CPX_CON_UPPER_BOUND CPX_CUT_CLIQUE CPX_CUT_COVER
	       CPX_CUT_DISJ CPX_CUT_FLOWCOVER CPX_CUT_FLOWPATH CPX_CUT_FRAC
	       CPX_CUT_GUBCOVER CPX_CUT_IMPLBD CPX_CUT_LOCALCOVER CPX_CUT_MCF
	       CPX_CUT_MIR CPX_CUT_NUM_TYPES CPX_CUT_OBJDISJ CPX_CUT_SOLNPOOL
	       CPX_CUT_TABLE CPX_CUT_TIGHTEN CPX_CUT_USER CPX_CUT_ZEROHALF
	       CPX_DPRIIND_AUTO CPX_DPRIIND_DEVEX CPX_DPRIIND_FULL
	       CPX_DPRIIND_FULLSTEEP CPX_DPRIIND_STEEP CPX_DPRIIND_STEEPQSTART
	       CPX_DUAL_OBJ CPX_EXACT_KAPPA CPX_FEASOPT_MIN_INF
	       CPX_FEASOPT_MIN_QUAD CPX_FEASOPT_MIN_SUM CPX_FEASOPT_OPT_INF
	       CPX_FEASOPT_OPT_QUAD CPX_FEASOPT_OPT_SUM CPX_FREE_SUPER
	       CPX_IMPLIED_INTEGER_FEASIBLE CPX_INCUMBENT_ID CPX_INDICATOR_IF
	       CPX_INDICATOR_IFANDONLYIF CPX_INDICATOR_ONLYIF CPX_INTEGER
	       CPX_INTEGER_FEASIBLE CPX_INTEGER_INFEASIBLE CPX_KAPPA
	       CPX_KAPPA_ATTENTION CPX_KAPPA_ILLPOSED CPX_KAPPA_MAX
	       CPX_KAPPA_STABLE CPX_KAPPA_SUSPICIOUS CPX_KAPPA_UNSTABLE CPX_MAX
	       CPX_MAX_COMP_SLACK CPX_MAX_DUAL_INFEAS CPX_MAX_DUAL_RESIDUAL
	       CPX_MAX_INDSLACK_INFEAS CPX_MAX_INT_INFEAS CPX_MAX_PI
	       CPX_MAX_PRIMAL_INFEAS CPX_MAX_PRIMAL_RESIDUAL
	       CPX_MAX_QCPRIMAL_RESIDUAL CPX_MAX_QCSLACK CPX_MAX_QCSLACK_INFEAS
	       CPX_MAX_RED_COST CPX_MAX_SCALED_DUAL_INFEAS
	       CPX_MAX_SCALED_DUAL_RESIDUAL CPX_MAX_SCALED_PI
	       CPX_MAX_SCALED_PRIMAL_INFEAS CPX_MAX_SCALED_PRIMAL_RESIDUAL
	       CPX_MAX_SCALED_RED_COST CPX_MAX_SCALED_SLACK CPX_MAX_SCALED_X
	       CPX_MAX_SLACK CPX_MAX_X CPX_MIN CPX_MIPEMPHASIS_BALANCED
	       CPX_MIPEMPHASIS_BESTBOUND CPX_MIPEMPHASIS_FEASIBILITY
	       CPX_MIPEMPHASIS_HIDDENFEAS CPX_MIPEMPHASIS_OPTIMALITY
	       CPX_MIPKAPPA_AUTO CPX_MIPKAPPA_FULL CPX_MIPKAPPA_OFF
	       CPX_MIPKAPPA_SAMPLE CPX_MIPORDER_BOUNDS CPX_MIPORDER_COST
	       CPX_MIPORDER_SCALEDCOST CPX_MIPSEARCH_AUTO CPX_MIPSEARCH_DYNAMIC
	       CPX_MIPSEARCH_TRADITIONAL CPX_MIPSTART_AUTO
	       CPX_MIPSTART_CHECKFEAS CPX_MIPSTART_REPAIR
	       CPX_MIPSTART_SOLVEFIXED CPX_MIPSTART_SOLVEMIP
	       CPX_NODESEL_BESTBOUND CPX_NODESEL_BESTEST
	       CPX_NODESEL_BESTEST_ALT CPX_NODESEL_DFS CPX_NONBASIC_SOLN
	       CPX_NO_SOLN CPX_NO_VARIABLE CPX_OBJ_GAP CPX_OFF CPX_ON
	       CPX_PARALLEL_AUTO CPX_PARALLEL_DETERMINISTIC
	       CPX_PARALLEL_OPPORTUNISTIC CPX_PARAMTYPE_DOUBLE
	       CPX_PARAMTYPE_INT CPX_PARAMTYPE_LONG CPX_PARAMTYPE_NONE
	       CPX_PARAMTYPE_STRING CPX_PARAM_ADVIND CPX_PARAM_AGGCUTLIM
	       CPX_PARAM_AGGFILL CPX_PARAM_AGGIND CPX_PARAM_ALL_MAX
	       CPX_PARAM_ALL_MIN CPX_PARAM_APIENCODING CPX_PARAM_AUXROOTTHREADS
	       CPX_PARAM_BARALG CPX_PARAM_BARCOLNZ CPX_PARAM_BARCROSSALG
	       CPX_PARAM_BARDISPLAY CPX_PARAM_BARDSTART CPX_PARAM_BAREPCOMP
	       CPX_PARAM_BARGROWTH CPX_PARAM_BARITLIM CPX_PARAM_BARMAXCOR
	       CPX_PARAM_BAROBJRNG CPX_PARAM_BARORDER CPX_PARAM_BARPSTART
	       CPX_PARAM_BARQCPEPCOMP CPX_PARAM_BARSTARTALG
	       CPX_PARAM_BASINTERVAL CPX_PARAM_BBINTERVAL CPX_PARAM_BNDSTRENIND
	       CPX_PARAM_BRDIR CPX_PARAM_BTTOL CPX_PARAM_CFILEMUL
	       CPX_PARAM_CLIQUES CPX_PARAM_CLOCKTYPE CPX_PARAM_CLONELOG
	       CPX_PARAM_COEREDIND CPX_PARAM_COLREADLIM
	       CPX_PARAM_CONFLICTDISPLAY CPX_PARAM_COVERS CPX_PARAM_CRAIND
	       CPX_PARAM_CUTLO CPX_PARAM_CUTPASS CPX_PARAM_CUTSFACTOR
	       CPX_PARAM_CUTUP CPX_PARAM_DATACHECK CPX_PARAM_DEPIND
	       CPX_PARAM_DETTILIM CPX_PARAM_DISJCUTS CPX_PARAM_DIVETYPE
	       CPX_PARAM_DPRIIND CPX_PARAM_EACHCUTLIM CPX_PARAM_EPAGAP
	       CPX_PARAM_EPGAP CPX_PARAM_EPINT CPX_PARAM_EPLIN CPX_PARAM_EPMRK
	       CPX_PARAM_EPOPT CPX_PARAM_EPOPT_H CPX_PARAM_EPPER
	       CPX_PARAM_EPRELAX CPX_PARAM_EPRHS CPX_PARAM_EPRHS_H
	       CPX_PARAM_FASTMIP CPX_PARAM_FEASOPTMODE CPX_PARAM_FILEENCODING
	       CPX_PARAM_FLOWCOVERS CPX_PARAM_FLOWPATHS CPX_PARAM_FPHEUR
	       CPX_PARAM_FRACCAND CPX_PARAM_FRACCUTS CPX_PARAM_FRACPASS
	       CPX_PARAM_GUBCOVERS CPX_PARAM_HEURFREQ CPX_PARAM_IMPLBD
	       CPX_PARAM_INTSOLFILEPREFIX CPX_PARAM_INTSOLLIM CPX_PARAM_ITLIM
	       CPX_PARAM_LBHEUR CPX_PARAM_LPMETHOD CPX_PARAM_MCFCUTS
	       CPX_PARAM_MEMORYEMPHASIS CPX_PARAM_MIPCBREDLP
	       CPX_PARAM_MIPDISPLAY CPX_PARAM_MIPEMPHASIS CPX_PARAM_MIPINTERVAL
	       CPX_PARAM_MIPKAPPASTATS CPX_PARAM_MIPORDIND CPX_PARAM_MIPORDTYPE
	       CPX_PARAM_MIPSEARCH CPX_PARAM_MIQCPSTRAT CPX_PARAM_MIRCUTS
	       CPX_PARAM_MPSLONGNUM CPX_PARAM_NETDISPLAY CPX_PARAM_NETEPOPT
	       CPX_PARAM_NETEPRHS CPX_PARAM_NETFIND CPX_PARAM_NETITLIM
	       CPX_PARAM_NETPPRIIND CPX_PARAM_NODEFILEIND CPX_PARAM_NODELIM
	       CPX_PARAM_NODESEL CPX_PARAM_NUMERICALEMPHASIS
	       CPX_PARAM_NZREADLIM CPX_PARAM_OBJDIF CPX_PARAM_OBJLLIM
	       CPX_PARAM_OBJULIM CPX_PARAM_PARALLELMODE CPX_PARAM_PERIND
	       CPX_PARAM_PERLIM CPX_PARAM_POLISHAFTERDETTIME
	       CPX_PARAM_POLISHAFTEREPAGAP CPX_PARAM_POLISHAFTEREPGAP
	       CPX_PARAM_POLISHAFTERINTSOL CPX_PARAM_POLISHAFTERNODE
	       CPX_PARAM_POLISHAFTERTIME CPX_PARAM_POLISHTIME
	       CPX_PARAM_POPULATELIM CPX_PARAM_PPRIIND CPX_PARAM_PREDUAL
	       CPX_PARAM_PREIND CPX_PARAM_PRELINEAR CPX_PARAM_PREPASS
	       CPX_PARAM_PRESLVND CPX_PARAM_PRICELIM CPX_PARAM_PROBE
	       CPX_PARAM_PROBEDETTIME CPX_PARAM_PROBETIME
	       CPX_PARAM_QPMAKEPSDIND CPX_PARAM_QPMETHOD CPX_PARAM_QPNZREADLIM
	       CPX_PARAM_RANDOMSEED CPX_PARAM_REDUCE CPX_PARAM_REINV
	       CPX_PARAM_RELAXPREIND CPX_PARAM_RELOBJDIF CPX_PARAM_REPAIRTRIES
	       CPX_PARAM_REPEATPRESOLVE CPX_PARAM_REVERSEIND CPX_PARAM_RFILEMUL
	       CPX_PARAM_RINSHEUR CPX_PARAM_ROWREADLIM CPX_PARAM_SCAIND
	       CPX_PARAM_SCRIND CPX_PARAM_SIFTALG CPX_PARAM_SIFTDISPLAY
	       CPX_PARAM_SIFTITLIM CPX_PARAM_SIMDISPLAY CPX_PARAM_SINGLIM
	       CPX_PARAM_SINGTOL CPX_PARAM_SOLNPOOLAGAP
	       CPX_PARAM_SOLNPOOLCAPACITY CPX_PARAM_SOLNPOOLGAP
	       CPX_PARAM_SOLNPOOLINTENSITY CPX_PARAM_SOLNPOOLREPLACE
	       CPX_PARAM_SOLUTIONTARGET CPX_PARAM_STARTALG
	       CPX_PARAM_STRONGCANDLIM CPX_PARAM_STRONGITLIM CPX_PARAM_SUBALG
	       CPX_PARAM_SUBMIPNODELIM CPX_PARAM_SYMMETRY CPX_PARAM_THREADS
	       CPX_PARAM_TILIM CPX_PARAM_TRELIM CPX_PARAM_TUNINGDETTILIM
	       CPX_PARAM_TUNINGDISPLAY CPX_PARAM_TUNINGMEASURE
	       CPX_PARAM_TUNINGREPEAT CPX_PARAM_TUNINGTILIM CPX_PARAM_VARSEL
	       CPX_PARAM_WORKDIR CPX_PARAM_WORKMEM CPX_PARAM_WRITELEVEL
	       CPX_PARAM_XXXIND CPX_PARAM_ZEROHALFCUTS CPX_PPRIIND_AUTO
	       CPX_PPRIIND_DEVEX CPX_PPRIIND_FULL CPX_PPRIIND_PARTIAL
	       CPX_PPRIIND_STEEP CPX_PPRIIND_STEEPQSTART CPX_PRECOL_AGG
	       CPX_PRECOL_FIX CPX_PRECOL_LOW CPX_PRECOL_OTHER CPX_PRECOL_UP
	       CPX_PREREDUCE_DUALONLY CPX_PREREDUCE_NOPRIMALORDUAL
	       CPX_PREREDUCE_PRIMALANDDUAL CPX_PREREDUCE_PRIMALONLY
	       CPX_PREROW_AGG CPX_PREROW_OTHER CPX_PREROW_RED CPX_PRIMAL_OBJ
	       CPX_PRIMAL_SOLN CPX_SEMICONT CPX_SEMIINT CPX_SOLNPOOL_DIV
	       CPX_SOLNPOOL_FIFO CPX_SOLNPOOL_FILTER_DIVERSITY
	       CPX_SOLNPOOL_FILTER_RANGE CPX_SOLNPOOL_OBJ
	       CPX_SOLUTIONTARGET_AUTO CPX_SOLUTIONTARGET_FIRSTORDER
	       CPX_SOLUTIONTARGET_OPTIMALCONVEX
	       CPX_SOLUTIONTARGET_OPTIMALGLOBAL CPX_STAT_ABORT_DETTIME_LIM
	       CPX_STAT_ABORT_DUAL_OBJ_LIM CPX_STAT_ABORT_IT_LIM
	       CPX_STAT_ABORT_OBJ_LIM CPX_STAT_ABORT_PRIM_OBJ_LIM
	       CPX_STAT_ABORT_TIME_LIM CPX_STAT_ABORT_USER
	       CPX_STAT_CONFLICT_ABORT_CONTRADICTION
	       CPX_STAT_CONFLICT_ABORT_DETTIME_LIM
	       CPX_STAT_CONFLICT_ABORT_IT_LIM CPX_STAT_CONFLICT_ABORT_MEM_LIM
	       CPX_STAT_CONFLICT_ABORT_NODE_LIM CPX_STAT_CONFLICT_ABORT_OBJ_LIM
	       CPX_STAT_CONFLICT_ABORT_TIME_LIM CPX_STAT_CONFLICT_ABORT_USER
	       CPX_STAT_CONFLICT_FEASIBLE CPX_STAT_CONFLICT_MINIMAL
	       CPX_STAT_FEASIBLE CPX_STAT_FEASIBLE_RELAXED_INF
	       CPX_STAT_FEASIBLE_RELAXED_QUAD CPX_STAT_FEASIBLE_RELAXED_SUM
	       CPX_STAT_FIRSTORDER CPX_STAT_INFEASIBLE CPX_STAT_INForUNBD
	       CPX_STAT_NUM_BEST CPX_STAT_OPTIMAL
	       CPX_STAT_OPTIMAL_FACE_UNBOUNDED CPX_STAT_OPTIMAL_INFEAS
	       CPX_STAT_OPTIMAL_RELAXED_INF CPX_STAT_OPTIMAL_RELAXED_QUAD
	       CPX_STAT_OPTIMAL_RELAXED_SUM CPX_STAT_UNBOUNDED
	       CPX_STR_PARAM_MAX CPX_SUM_COMP_SLACK CPX_SUM_DUAL_INFEAS
	       CPX_SUM_DUAL_RESIDUAL CPX_SUM_INDSLACK_INFEAS CPX_SUM_INT_INFEAS
	       CPX_SUM_PI CPX_SUM_PRIMAL_INFEAS CPX_SUM_PRIMAL_RESIDUAL
	       CPX_SUM_QCPRIMAL_RESIDUAL CPX_SUM_QCSLACK CPX_SUM_QCSLACK_INFEAS
	       CPX_SUM_RED_COST CPX_SUM_SCALED_DUAL_INFEAS
	       CPX_SUM_SCALED_DUAL_RESIDUAL CPX_SUM_SCALED_PI
	       CPX_SUM_SCALED_PRIMAL_INFEAS CPX_SUM_SCALED_PRIMAL_RESIDUAL
	       CPX_SUM_SCALED_RED_COST CPX_SUM_SCALED_SLACK CPX_SUM_SCALED_X
	       CPX_SUM_SLACK CPX_SUM_X CPX_TUNE_ABORT CPX_TUNE_AVERAGE
	       CPX_TUNE_DETTILIM CPX_TUNE_MINMAX CPX_TUNE_TILIM CPX_TYPE_ANY
	       CPX_TYPE_SOS1 CPX_TYPE_SOS2 CPX_TYPE_USER CPX_TYPE_VAR
	       CPX_USECUT_FILTER CPX_USECUT_FORCE CPX_USECUT_PURGE
	       CPX_VARSEL_DEFAULT CPX_VARSEL_MAXINFEAS CPX_VARSEL_MININFEAS
	       CPX_VARSEL_PSEUDO CPX_VARSEL_PSEUDOREDUCED CPX_VARSEL_STRONG
	       CPX_VERSION CPX_VERSION_FIX CPX_VERSION_MODIFICATION
	       CPX_VERSION_RELEASE CPX_VERSION_VERSION CPX_WRITELEVEL_ALLVARS
	       CPX_WRITELEVEL_AUTO CPX_WRITELEVEL_DISCRETEVARS
	       CPX_WRITELEVEL_NONZERODISCRETEVARS CPX_WRITELEVEL_NONZEROVARS));

print constant_types(), "\n"; # macro defs
foreach (C_constant ("Math::CPLEX::Base", 'iv_constant', 'NV', $types, undef, 3, @names) ) {
    print $_, "\n"; # C constant subs
}
print "\n#### XS Section:\n";
print XS_constant ("Math::CPLEX::Base", $types);
__END__
   */

  switch (len) {
  case 6:
    if (memEQ(name, "CPX_ON", 6)) {
#ifdef CPX_ON
      *nv_return = CPX_ON;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 7:
    return iv_constant_7 (aTHX_ name, nv_return);
    break;
  case 9:
    return iv_constant_9 (aTHX_ name, nv_return);
    break;
  case 10:
    return iv_constant_10 (aTHX_ name, nv_return);
    break;
  case 11:
    return iv_constant_11 (aTHX_ name, nv_return);
    break;
  case 12:
    return iv_constant_12 (aTHX_ name, nv_return);
    break;
  case 13:
    return iv_constant_13 (aTHX_ name, nv_return);
    break;
  case 14:
    return iv_constant_14 (aTHX_ name, nv_return);
    break;
  case 15:
    return iv_constant_15 (aTHX_ name, nv_return);
    break;
  case 16:
    return iv_constant_16 (aTHX_ name, nv_return);
    break;
  case 17:
    return iv_constant_17 (aTHX_ name, nv_return);
    break;
  case 18:
    return iv_constant_18 (aTHX_ name, nv_return);
    break;
  case 19:
    return iv_constant_19 (aTHX_ name, nv_return);
    break;
  case 20:
    return iv_constant_20 (aTHX_ name, nv_return);
    break;
  case 21:
    return iv_constant_21 (aTHX_ name, nv_return);
    break;
  case 22:
    return iv_constant_22 (aTHX_ name, nv_return);
    break;
  case 23:
    return iv_constant_23 (aTHX_ name, nv_return);
    break;
  case 24:
    return iv_constant_24 (aTHX_ name, nv_return);
    break;
  case 25:
    return iv_constant_25 (aTHX_ name, nv_return);
    break;
  case 26:
    return iv_constant_26 (aTHX_ name, nv_return);
    break;
  case 27:
    return iv_constant_27 (aTHX_ name, nv_return);
    break;
  case 28:
    return iv_constant_28 (aTHX_ name, nv_return);
    break;
  case 29:
    return iv_constant_29 (aTHX_ name, nv_return);
    break;
  case 30:
    return iv_constant_30 (aTHX_ name, nv_return);
    break;
  case 31:
    return iv_constant_31 (aTHX_ name, nv_return);
    break;
  case 32:
    return iv_constant_32 (aTHX_ name, nv_return);
    break;
  case 33:
    return iv_constant_33 (aTHX_ name, nv_return);
    break;
  case 34:
    return iv_constant_34 (aTHX_ name, nv_return);
    break;
  case 35:
    return iv_constant_35 (aTHX_ name, nv_return);
    break;
  case 37:
    /* Names all of length 37.  */
    /* CPX_CALLBACK_INFO_MIP_ITERATIONS_LONG
       CPX_STAT_CONFLICT_ABORT_CONTRADICTION */
    /* Offset 20 gives the best switch position.  */
    switch (name[20]) {
    case 'O':
      if (memEQ(name, "CPX_STAT_CONFLICT_ABORT_CONTRADICTION", 37)) {
      /*                                   ^                       */
#ifdef CPX_STAT_CONFLICT_ABORT_CONTRADICTION
        *nv_return = CPX_STAT_CONFLICT_ABORT_CONTRADICTION;
        return PERL_constant_ISNV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    case 'P':
      if (memEQ(name, "CPX_CALLBACK_INFO_MIP_ITERATIONS_LONG", 37)) {
      /*                                   ^                       */
#ifdef CPX_CALLBACK_INFO_MIP_ITERATIONS_LONG
        *nv_return = CPX_CALLBACK_INFO_MIP_ITERATIONS_LONG;
        return PERL_constant_ISNV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    }
    break;
  case 38:
    return iv_constant_38 (aTHX_ name, nv_return);
    break;
  case 40:
    if (memEQ(name, "CPX_CALLBACK_INFO_PRESOLVE_AGGSUBST_LONG", 40)) {
#ifdef CPX_CALLBACK_INFO_PRESOLVE_AGGSUBST_LONG
      *nv_return = CPX_CALLBACK_INFO_PRESOLVE_AGGSUBST_LONG;
      return PERL_constant_ISNV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

