#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"
#include "ilcplex/cplex.h"
#include "ilcplex/cpxconst.h"

#include "const-c-iv.inc"
#include "const-c-nv.inc"

void print_CPLEX_error_string(CPXENVptr env, int error_code)
{
   char buffer[CPXMESSAGEBUFSIZE];
   const char *errstr;

   errstr = CPXgeterrorstring(env, error_code, buffer );

   if( errstr != NULL )
   {
      fprintf(stderr, "%s\n", buffer );
   }
   else
   {
      fprintf(stderr, "Error code %d not known.\n", error_code );
   }
}

MODULE = Math::CPLEX::Base		PACKAGE = Math::CPLEX::Base

INCLUDE: const-xs-iv.inc
INCLUDE: const-xs-nv.inc

###############################################################################
###############################################################################
CPXENVptr
_openCPLEX ()
  PREINIT:
     int status;
  CODE:
     RETVAL = CPXopenCPLEX(&status);
     if( status )
     {
        fprintf(stderr, "ERROR: CPXcreateprob() failed. Returned status: %d\n",status);
        XSRETURN_UNDEF;
     }
  OUTPUT:
     RETVAL
###############################################################################


###############################################################################
###############################################################################
CPXLPptr
_createOP (CPXENVptr g_cplex_env, char *lp_name);
   PREINIT:
      int status;
   CODE:
      RETVAL = CPXcreateprob (g_cplex_env, &status, lp_name);
      if( status )
      {
        fprintf(stderr, "ERROR: CPXcreateprob() failed. Returned status: %d\n",status);
        print_CPLEX_error_string(g_cplex_env, status);
        XSRETURN_UNDEF;
      }
   OUTPUT:
      RETVAL
###############################################################################

###############################################################################
###############################################################################
int
_freeOP(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp);
   PREINIT:
      int status;
   CODE:
      status = CPXfreeprob ( g_cplex_env, &g_cplex_lp);

      if( status )
      {
        fprintf(stderr, "ERROR: CPXfreeprob() failed. Returned status: %d\n",status);
        print_CPLEX_error_string(g_cplex_env, status);
        XSRETURN_UNDEF;
      }
      else
      {
        RETVAL = 1;
      }
      
   OUTPUT:
      RETVAL
###############################################################################

###############################################################################
###############################################################################
int
_closeCPLEX(CPXENVptr g_cplex_env);
   PREINIT:
      int status;
   CODE:
      status = CPXcloseCPLEX ( &g_cplex_env );

      if( status )
      {
        fprintf(stderr, "ERROR: CPXcloseCPLEX() failed. Returned status: %d\n",status);
        print_CPLEX_error_string(g_cplex_env, status);
        XSRETURN_UNDEF;
      }
      else
      {
        RETVAL = 1;
      }
      
   OUTPUT:
      RETVAL
###############################################################################

###############################################################################
###############################################################################
int
_newcols(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, int numCols, AV * avref_obj_coef, AV * avref_lower_bnd, AV * avref_upper_bnd, AV * avref_col_type, AV * avref_col_names)
   PREINIT:
     int status = 0;
     int i;
     double *obj_coef = NULL;
     double *lower_bnd = NULL;
     double *upper_bnd = NULL;
     char *col_type = NULL;
     char tmp_type[2];
     char **col_names = NULL;
     SV ** elem;
   CODE:

      //////////////////////////////////////////
      // coefficient in objective function
      //////////////////////////////////////////
      if( av_len( avref_obj_coef) > -1 )
      {
         New( 0, obj_coef, numCols, double);
         for( i = 0; i < numCols; i++ )
         {
            elem = av_fetch( avref_obj_coef, i, 0 );
            if( elem == NULL )
            {
               obj_coef[i] = 0.0;
            }
            else
            {
               obj_coef[i] = SvNV( *elem );
            }
         }
      }
      //////////////////////////////////////////

      //////////////////////////////////////////
      // lower bound
      //////////////////////////////////////////
      if( av_len( avref_lower_bnd) > -1 )
      {
         New( 0, lower_bnd, numCols, double);
         for( i = 0; i < numCols; i++ )
         {
            elem = av_fetch( avref_lower_bnd, i, 0 );
            if( elem == NULL )
            {
               lower_bnd[i] = -CPX_INFBOUND;
            }
            else
            {
               lower_bnd[i] = SvNV( *elem );
            }
         }
      }
      //////////////////////////////////////////

      //////////////////////////////////////////
      // upper bound
      //////////////////////////////////////////
      if( av_len(avref_upper_bnd) > -1 )
      {
         New( 0, upper_bnd, numCols, double);
         for( i = 0; i < numCols; i++ )
         {
            elem = av_fetch( avref_upper_bnd, i, 0 );
            if( elem == NULL )
            {
               upper_bnd[i] = CPX_INFBOUND;
            }
            else
            {
               upper_bnd[i] = SvNV( *elem );
            }
         }
      }
      //////////////////////////////////////////

      //////////////////////////////////////////
      // column type: is a character!
      // 'B' ... binary
      // 'C' ... continous
      // 'I' ... integer
      //////////////////////////////////////////
      if( av_len(avref_col_type) > -1 )
      {
         New( 0, col_type,  numCols, char);
         for( i = 0; i < numCols; i++ )
         {
            elem = av_fetch( avref_col_type, i, 0 );
            if( elem == NULL || !SvOK( *elem ) )
            {
               col_type[i] = 'C';
            }
            else
            {
               if( SvCUR( *elem ) != 1 )
               {
                  fprintf(stderr, "ERROR: length of column type parameter not equal 1. Length is %ld: %s\n",
                                  SvCUR( *elem ), SvPV( *elem, SvCUR( *elem ) ));
                  if( col_type  != NULL ) SAVEFREEPV(col_type);
                  if( upper_bnd != NULL ) SAVEFREEPV(upper_bnd);
                  if( lower_bnd != NULL ) SAVEFREEPV(lower_bnd);
                  SAVEFREEPV(obj_coef);
                  XSRETURN_UNDEF;
               }
               
               strcpy(tmp_type, SvPV( *elem, SvCUR( *elem ) ) );
               
               
               if( strcmp( tmp_type, "C" ) == 0 )
               {
                  col_type[i] = 'C';
               }
               else if( strcmp( tmp_type, "B" ) == 0 )
               {
                  col_type[i] = 'B';
               }
               else if( strcmp( tmp_type, "I" ) == 0 )
               {
                  col_type[i] = 'I';
               }
               else if( strcmp( tmp_type, "S" ) == 0 )
               {
                  col_type[i] = 'S';
               }
               else if( strcmp( tmp_type, "N" ) == 0 )
               {
                  col_type[i] = 'N';
               }
               else
               {
                  fprintf(stderr, "ERROR: unknown column type '%s' at index %d\n",SvPV( *elem, SvCUR( *elem )),i);
                  fprintf(stderr, "       column type is ignored and a continuous column, 'C', is used instead\n");
                  col_type[i] = 'C';
               }
            }
         }
      }
      //////////////////////////////////////////

      //////////////////////////////////////////
      // column names
      //////////////////////////////////////////
      if( av_len(avref_col_names) > -1 )
      {
         New( 0, col_names, numCols, char*);
         for( i = 0; i < numCols; i++ )
         {
            col_names[i] = NULL;
            elem = av_fetch( avref_col_names, i, 0 );
            if( elem == NULL )
            {
               New( 0, col_names[i], 10, char);
               strcpy(col_names[i],"column");
            }
            else
            {
               New( 0, col_names[i], SvCUR( *elem ) + 1, char);
               strcpy(col_names[i], SvPV( *elem, SvCUR( *elem ) ) );
            }
         }
      }
      //////////////////////////////////////////

      // printf("numCols=%d\n",numCols);
      // printf("g_cplex_env=%p\n",g_cplex_env);
      // printf("g_cplex_lp=%p\n",g_cplex_lp);
      // printf("numCols=%d\n",numCols);
      // for( i = 0; i < numCols; i++ )
      // {
      //    printf("i=%d ",i);
      //    if( obj_coef  != NULL ) printf("obj_coef=%g ",obj_coef[i]);
      //    if( col_type  != NULL ) printf("col_type=%c ",col_type[i]);
      //    if( lower_bnd != NULL ) printf("lower_bnd=%g ",lower_bnd[i]);
      //    if( upper_bnd != NULL ) printf("upper_bnd=%g ",upper_bnd[i]); 
      //    if( col_names != NULL ) printf("col_names=%s ",col_names[i]);
      //    printf("\n");
      // }

      status = CPXnewcols(g_cplex_env, g_cplex_lp, numCols, obj_coef, lower_bnd, upper_bnd, col_type, col_names);

      if( col_names != NULL )
      {
         for( i = 0; i < numCols; i++ )
         {
             if( col_names[i] != NULL ) SAVEFREEPV(col_names[i]);
         }
      }
      if( col_names != NULL ) SAVEFREEPV(col_names);
      if( col_type  != NULL ) SAVEFREEPV(col_type);
      if( upper_bnd != NULL ) SAVEFREEPV(upper_bnd);
      if( lower_bnd != NULL ) SAVEFREEPV(lower_bnd);
      if( obj_coef  != NULL ) SAVEFREEPV(obj_coef);
      if( status )
      {
         fprintf(stderr, "ERROR: CPXnewcols() failed. Returned status: %d\n",status);
         print_CPLEX_error_string(g_cplex_env, status);
         XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }
   OUTPUT:
      RETVAL
     
###############################################################################


###############################################################################
# add indicator constraint
###############################################################################
int
_addindconstr(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, int indvar, int complemented, double rhs, char *sense_in, AV * avref_linval, char *indname );

   PREINIT:
     int i;
     int status;
     int nzcont = 0;
     int elm_cnt = 0;
     int *linind;
     double *linval;
     char sense;
     AV * row;
     SV ** elem;

   CODE:

      if( strcmp( sense_in, "L" ) == 0 )
      {
         sense = 'L';
      }
      else if( strcmp( sense_in, "G" ) == 0 )
      {
         sense = 'G';
      }
      else if( strcmp( sense_in, "E" ) == 0 )
      {
         sense = 'E';
      }
      else
      {
         fprintf(stderr, "ERROR: unknown sense '%s' provided\n", sense_in);
         XSRETURN_UNDEF;
      }

      //////////////////////////////////////////
      // get constraint values
      //////////////////////////////////////////
      if( av_len(avref_linval) == -1 )
      {
         nzcont = 0;
         linind = NULL;
         linval = NULL;
      }
      else
      {
         // count number of non-zero linear constraint values
         for( i = 0; i < av_len(avref_linval) + 1; i++ )
         {
            elem = av_fetch( avref_linval, i, 0 );
            if( elem != NULL && SvOK(*elem) )
            {
               if( SvNV( *elem ) != 0 )
               {
                  nzcont++;
               }
            }
         }

         // allocate memory for linear non-zeros
         New( 0, linval, nzcont, double);
         New( 0, linind, nzcont, int);

         for( i = 0; i < av_len(avref_linval) + 1; i++ )
         {
            elem = av_fetch( avref_linval, i, 0 );
            if( elem != NULL && SvOK(*elem) )
            {
               if( SvNV( *elem ) != 0 )
               {
                  linind[elm_cnt] = i;
                  linval[elm_cnt] = SvNV( *elem );
                  elm_cnt++;
               }
            }
         }
      }
      //////////////////////////////////////////

      status = CPXaddindconstr (g_cplex_env, g_cplex_lp, indvar, complemented, nzcont, rhs,
                                sense, linind, linval, indname);

      if( linind ) SAVEFREEPV( linind );
      if( linval ) SAVEFREEPV( linval );

      if( status )
      {
         fprintf(stderr, "ERROR: CPXaddindconstr() failed. Returned status: %d\n",status);
         print_CPLEX_error_string(g_cplex_env, status);
         XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }

   OUTPUT:
      RETVAL
###############################################################################

###############################################################################
# we do not support adding new columns here,
# note that CPLEX can do that
###############################################################################
int
_addrows(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, int numNewRows, AV * avref_rhs, AV * avref_sense, AV * avref_newRows, AV * avref_rownames);
   PREINIT:
     int status;
     int numNewCols;
     int numNewNonZero = 0;
     int nonZeroCnt = 0;
     int i;
     int j;
     double *rhs;
     int *rmatbeg;
     int *rmatidx;
     double *rmatval;
     char *sense;
     char tmp_sense[2];
     char **colNames;
     char **rowNames;
     AV * row;
     SV ** elem;

   CODE:
      //////////////////////////////////////////
      // right hand side of constraint
      //////////////////////////////////////////
      if( av_len(avref_rhs) == -1 )
      {
         rhs = NULL;
      }
      else
      {
         New( 0, rhs, numNewRows, double);
         for( i = 0; i < numNewRows; i++ )
         {
            elem = av_fetch( avref_rhs, i, 0 );
            if( elem == NULL )
            {
               rhs[i] = 0.0;
            }
            else
            {
               rhs[i] = SvNV( *elem );
            }
         }
      }
      //////////////////////////////////////////

      //////////////////////////////////////////
      // type of constraint (sense)
      // 'L' ... <=
      // 'G' ... >=
      // 'E' ... =
      // 'R' ... ranged constraint
      //////////////////////////////////////////
      if( av_len(avref_sense) == -1 )
      {
         rhs = NULL;
      }
      else
      {
         New( 0, sense,  numNewRows, char);
         for( i = 0; i < numNewRows; i++ )
         {
            elem = av_fetch( avref_sense, i, 0 );
            if( elem == NULL )
            {
               sense[i] = 'E';
            }
            else
            {
               if( SvCUR( *elem ) != 1 )
               {
                  fprintf(stderr, "ERROR: length of constraint type parameter not equal 1. Length is %ld: %s\n",
                                  SvCUR( *elem ), SvPV( *elem, SvCUR( *elem ) ));
                  SAVEFREEPV(rhs);
                  SAVEFREEPV(sense);
                  XSRETURN_UNDEF;
               }
               strcpy(tmp_sense, SvPV( *elem, SvCUR( *elem ) ) );

               if( strcmp( tmp_sense, "L" ) == 0 )
               {
                  sense[i] = 'L';
               }
               else if( strcmp( tmp_sense, "E" ) == 0 )
               {
                  sense[i] = 'E';
               }
               else if( strcmp( tmp_sense, "G" ) == 0 )
               {
                  sense[i] = 'G';
               }
               else if( strcmp( tmp_sense, "R" ) == 0 )
               {
                  sense[i] = 'R';
               }
               else
               {
                  fprintf(stderr, "ERROR: unknown sense type '%s' at index %d\n",SvPV( *elem, SvCUR( *elem )),i);
                  fprintf(stderr, "       sense type is ignored and an equality constraint, 'E', is used instead\n");
                  sense[i] = 'C';
               }
            }
         }
      }
      //////////////////////////////////////////

      //////////////////////////////////////////
      // get row names
      //////////////////////////////////////////
      if( av_len( avref_rownames ) == -1 )
      {
         rowNames = NULL;
      }
      else
      {
         New( 0, rowNames, numNewRows, char*);
         for( i = 0; i < numNewRows; i++ )
         {
            elem = av_fetch( avref_rownames, i, 0 );
            if( elem == NULL )
            {
               New( 0, rowNames[i], 10, char);
               strcpy(rowNames[i],"row");
            }
            else
            {
               size_t len = SvCUR( *elem );
               New( 0, rowNames[i], len + 1, char);
               strcpy(rowNames[i], SvPV( *elem, SvCUR( *elem ) ) );
               // printf("rowNames[%d]=%s (len=%ld) (strlen=%ld)\n",i,rowNames[i], len, strlen(rowNames[i]));
            }
         }
      }
      //////////////////////////////////////////


      //////////////////////////////////////////
      // count number of non-Zero elements
      //////////////////////////////////////////
      for( i = 0; i < numNewRows; i++ )
      {
         elem = av_fetch( avref_newRows, i, 0 );

         if( elem != NULL )
         {
            row  = (AV*) SvRV(*elem);
            for( j = 0; j < av_len(row) + 1; j++ )
            {
               elem = av_fetch( row, j, 0 );
               if( elem != NULL )
               {
                  double val = SvNV(*elem);
                  if( val != 0.0 )
                  {
                     numNewNonZero++;
                  }
               }
            }
         }
      }
      //////////////////////////////////////////


      //////////////////////////////////////////
      // allocate memory for CPLEX call
      //////////////////////////////////////////
      New( 0, rmatbeg, numNewRows+1, int);
      New( 0, rmatidx, numNewNonZero, int);
      New( 0, rmatval, numNewNonZero, double);

      //////////////////////////////////////////

      //////////////////////////////////////////
      // fill arrays for CPLEX call
      //////////////////////////////////////////
      for( i = 0; i < numNewRows; i++ )
      {
         elem = av_fetch( avref_newRows, i, 0 );
         if( elem != NULL )
         {
            row  = (AV*) SvRV(*elem);

            rmatbeg[i] = nonZeroCnt;
            for( j = 0; j < av_len(row) + 1; j++ )
            {
              elem = av_fetch( row, j, 0 );
              if( elem != NULL )
              {
                 double val = SvNV(*elem);
                 if( val != 0.0 )
                 {
                    rmatidx[nonZeroCnt] = j;
                    rmatval[nonZeroCnt] = val;
                    nonZeroCnt++;
                 }
              }
            }
         }
      }
      rmatbeg[i] = nonZeroCnt;
      //////////////////////////////////////////
      //for( i = 0; i < numNewRows; i++ )
      //{
      //   printf("before CALL: rowNames[%d]=%s\n",i,rowNames[i]);
      //}

      numNewCols = 0;
      colNames   = NULL;
      status = CPXaddrows (g_cplex_env, g_cplex_lp, numNewCols, numNewRows, numNewNonZero, rhs,
                           sense, rmatbeg, rmatidx, rmatval, colNames, rowNames);
      //for( i = 0; i < numNewRows; i++ )
      //{
      //   printf("after CALL: rowNames[%d]=%s\n",i,rowNames[i]);
      //}

      SAVEFREEPV(rmatbeg);
      SAVEFREEPV(rmatidx);
      SAVEFREEPV(rmatval);
      if( rowNames != NULL )
      {
         for( i = 0; i < numNewRows; i++ )
         {
            SAVEFREEPV(rowNames[i]);
         }
         SAVEFREEPV(rowNames);
      }
      if( sense != NULL ) SAVEFREEPV(sense);
      if( rhs   != NULL ) SAVEFREEPV(rhs);

      if( status )
      {
         fprintf(stderr, "ERROR: CPXnewcols() failed. Returned status: %d\n",status);
         print_CPLEX_error_string(g_cplex_env, status);
         XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }

   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_chgrhs(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, AV * avref_rhs)
   PREINIT:
     int i;
     int status;
     int rhs_size;
     int nonZero = 0;
     int cntFill = 0;
     int *idx;
     double *val;
     SV ** elem;
   CODE:
      rhs_size = av_len(avref_rhs) + 1;

      if( rhs_size == 0 )
      {
         // nothing to do if array is empty
         RETVAL = 1;
      }
      else
      {
         for( i = 0; i < rhs_size; i++ )
         {
            elem = av_fetch( avref_rhs, i, 0 );
            if( elem != NULL )
            {
               nonZero++;
            }
         }
         New( 0, idx, nonZero, int);
         New( 0, val, nonZero, double);

         for( i = 0; i < rhs_size; i++ )
         {
            elem = av_fetch( avref_rhs, i, 0 );
            if( elem != NULL )
            {
               idx[cntFill] = i;
               val[cntFill] = SvNV( *elem );
               cntFill++;
            }
         }

         status = CPXchgrhs(g_cplex_env, g_cplex_lp, nonZero, idx, val);

         if( status )
         {
            fprintf(stderr, "ERROR: CPXchgrhs() failed. Returned status: %d\n",status);
            print_CPLEX_error_string(g_cplex_env, status);
            XSRETURN_UNDEF;
         }
         else
         {
            RETVAL = 1;
         }

         // clean up
         SAVEFREEPV(idx);
         SAVEFREEPV(val);
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_chgobj(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, AV * avref_obj)
   PREINIT:
     int i;
     int status;
     int obj_size;
     int nonZero = 0;
     int cntFill = 0;
     int *idx;
     double *val;
     SV ** elem;
   CODE:
      obj_size = av_len(avref_obj) + 1;

      if( obj_size == 0 )
      {
         // nothing to do if array is empty
         RETVAL = 1;
      }
      else
      {
         for( i = 0; i < obj_size; i++ )
         {
            elem = av_fetch( avref_obj, i, 0 );
            if( elem != NULL )
            {
               nonZero++;
            }
         }
         New( 0, idx, nonZero, int);
         New( 0, val, nonZero, double);

         for( i = 0; i < obj_size; i++ )
         {
            elem = av_fetch( avref_obj, i, 0 );
            if( elem != NULL )
            {
               idx[cntFill] = i;
               val[cntFill] = SvNV( *elem );
               cntFill++;
            }
         }

         status = CPXchgobj(g_cplex_env, g_cplex_lp, nonZero, idx, val);

         if( status )
         {
            fprintf(stderr, "ERROR: CPXchgobj() failed. Returned status: %d\n",status);
            print_CPLEX_error_string(g_cplex_env, status);
            XSRETURN_UNDEF;
         }
         else
         {
            RETVAL = 1;
         }

         // clean up
         SAVEFREEPV(idx);
         SAVEFREEPV(val);
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_chgctype(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, AV * avref_ctype)
   PREINIT:
     int i;
     int status;
     int ctype_size;
     int nonZero = 0;
     int cntFill = 0;
     int *idx;
     char *val;
     SV ** elem;
   CODE:
      ctype_size = av_len(avref_ctype) + 1;

      // printf("ctype_size=%d\n",ctype_size);

      if( ctype_size == 0 )
      {
         // nothing to do if array is empty
         RETVAL = 1;
      }
      else
      {
         for( i = 0; i < ctype_size; i++ )
         {
            elem = av_fetch( avref_ctype, i, 0 );
            if( elem != NULL && SvOK( *elem ) )
            {
               nonZero++;
            }
         }
         // printf("nonZero=%d\n",nonZero);

         New( 0, idx, nonZero, int);
         New( 0, val, nonZero, char);

         for( i = 0; i < ctype_size; i++ )
         {
            // printf("i=%d\n",i);
            elem = av_fetch( avref_ctype, i, 0 );
            if( elem != NULL  )
            {
               // printf("elem is not NULL\n");
               if( SvOK( *elem ) )
               {
                  if( SvCUR( *elem ) != 1 )
                  {
                     fprintf(stderr, "ERROR: length of column type parameter not equal 1. Length is %ld: %s\n",
                                     SvCUR( *elem ), SvPV( *elem, SvCUR( *elem ) ));
                     SAVEFREEPV(idx);
                     SAVEFREEPV(val);
                     XSRETURN_UNDEF;
                  }
                  idx[cntFill] = i;
                  // printf("i=%d cntfill=%d\n",i,cntFill);
                  strcpy(&val[cntFill], SvPV( *elem, SvCUR( *elem ) ) );
                  cntFill++;
               }
            }
         }

         status = CPXchgctype(g_cplex_env, g_cplex_lp, nonZero, idx, val);

         if( status )
         {
            fprintf(stderr, "ERROR: CPXchgctype() failed. Returned status: %d\n",status);
            print_CPLEX_error_string(g_cplex_env, status);
            XSRETURN_UNDEF;
         }
         else
         {
            RETVAL = 1;
         }

         // clean up
         SAVEFREEPV(idx);
         SAVEFREEPV(val);
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_chgbds(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, AV * avref_bdstype, AV * avref_bdsvals)
   PREINIT:
     int i;
     int status;
     int bdstype_size;
     int bdsvals_size;
     int nonZero_bdstype = 0;
     int nonZero_bdsvals = 0;
     int cntFill = 0;
     int *idx;
     char *typ;
     double *val;
     SV ** elem_bdstype;
     SV ** elem_bdsvals;
   CODE:
      bdstype_size = av_len(avref_bdstype) + 1;
      bdsvals_size = av_len(avref_bdsvals) + 1;

      // printf("ctype_size=%d\n",ctype_size);

      if( bdstype_size != bdsvals_size )
      {
         // size of arrays for bound type and bound values are not equal!!
         fprintf(stderr, "ERROR: size of array for boundary types (%d) and boundary values (%d) are not equal\n",bdstype_size,bdsvals_size);
         XSRETURN_UNDEF;
      }
      else if( bdstype_size == 0 )
      {
         // nothing to do if array is empty
         RETVAL = 2;
      }
      else
      {
         for( i = 0; i < bdstype_size; i++ )
         {
            elem_bdstype = av_fetch( avref_bdstype, i, 0 );
            if( elem_bdstype != NULL && SvOK( *elem_bdstype ) )
            {
               nonZero_bdstype++;
            }
            elem_bdsvals = av_fetch( avref_bdsvals, i, 0 );
            if( elem_bdsvals != NULL && SvOK( *elem_bdsvals ) )
            {
               nonZero_bdsvals++;
            }
         }

         if( nonZero_bdstype != nonZero_bdsvals )
         {
            fprintf(stderr, "ERROR: number of non-zero values in arrays for boundary type (%d) and boundary values (%d) differ!\n",nonZero_bdstype,nonZero_bdsvals);
            XSRETURN_UNDEF;
         }
         // printf("nonZero=%d\n",nonZero);

         New( 0, idx, nonZero_bdstype, int);
         New( 0, typ, nonZero_bdstype, char);
         New( 0, val, nonZero_bdstype, double);

         for( i = 0; i < bdstype_size; i++ )
         {
            // printf("i=%d\n",i);
            elem_bdstype = av_fetch( avref_bdstype, i, 0 );
            elem_bdsvals = av_fetch( avref_bdsvals, i, 0 );
            if( elem_bdstype != NULL && elem_bdsvals != NULL  )
            {
               // printf("elem is not NULL\n");
               if( SvOK( *elem_bdstype ) && SvOK( *elem_bdsvals ) )
               {
                  if( SvCUR( *elem_bdstype ) != 1 )
                  {
                     fprintf(stderr, "ERROR: length of column type parameter not equal 1. Length is %ld: %s\n",
                                     SvCUR( *elem_bdstype ), SvPV( *elem_bdstype, SvCUR( *elem_bdstype ) ));
                     SAVEFREEPV(idx);
                     SAVEFREEPV(typ);
                     SAVEFREEPV(val);
                     XSRETURN_UNDEF;
                  }
                  idx[cntFill] = i;
                  val[cntFill] = SvNV(*elem_bdsvals);
                  strcpy(&typ[cntFill], SvPV( *elem_bdstype, SvCUR( *elem_bdstype ) ) );
                  // printf("i=%d cntfill=%d val=%f type=%c\n",i,cntFill,val[cntFill],typ[cntFill]);
                  cntFill++;
               }
            }
         }

         status = CPXchgbds(g_cplex_env, g_cplex_lp, nonZero_bdstype, idx, typ, val);

         if( status )
         {
            fprintf(stderr, "ERROR: CPXchgbds() failed. Returned status: %d\n",status);
            print_CPLEX_error_string(g_cplex_env, status);
            XSRETURN_UNDEF;
         }
         else
         {
            RETVAL = 1;
         }

         // clean up
         SAVEFREEPV(idx);
         SAVEFREEPV(typ);
         SAVEFREEPV(val);
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_chgsense(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, AV * avref_sense)
   PREINIT:
     int i;
     int status;
     int sense_size;
     int nonZero = 0;
     int cntFill = 0;
     int *idx;
     char *val;
     SV ** elem;
   CODE:
      sense_size = av_len(avref_sense) + 1;

      // printf("sense_size=%d\n",sense_size);

      if( sense_size == 0 )
      {
         // nothing to do if array is empty
         RETVAL = 1;
      }
      else
      {
         for( i = 0; i < sense_size; i++ )
         {
            elem = av_fetch( avref_sense, i, 0 );
            if( elem != NULL && SvOK( *elem ) )
            {
               nonZero++;
            }
         }
         // printf("nonZero=%d\n",nonZero);

         New( 0, idx, nonZero, int);
         New( 0, val, nonZero, char);

         for( i = 0; i < sense_size; i++ )
         {
            // printf("i=%d\n",i);
            elem = av_fetch( avref_sense, i, 0 );
            if( elem != NULL  )
            {
               // printf("elem is not NULL\n");
               if( SvOK( *elem ) )
               {
                  if( SvCUR( *elem ) != 1 )
                  {
                     fprintf(stderr, "ERROR: length of column type parameter not equal 1. Length is %ld: %s\n",
                                     SvCUR( *elem ), SvPV( *elem, SvCUR( *elem ) ));
                     SAVEFREEPV(idx);
                     SAVEFREEPV(val);
                     XSRETURN_UNDEF;
                  }
                  idx[cntFill] = i;
                  // printf("i=%d cntfill=%d\n",i,cntFill);
                  strcpy(&val[cntFill], SvPV( *elem, SvCUR( *elem ) ) );
                  cntFill++;
               }
            }
         }

         status = CPXchgsense(g_cplex_env, g_cplex_lp, nonZero, idx, val);

         if( status )
         {
            fprintf(stderr, "ERROR: CPXchgsense() failed. Returned status: %d\n",status);
            print_CPLEX_error_string(g_cplex_env, status);
            XSRETURN_UNDEF;
         }
         else
         {
            RETVAL = 1;
         }

         // clean up
         SAVEFREEPV(idx);
         SAVEFREEPV(val);
      }
   OUTPUT:
      RETVAL
###############################################################################

###############################################################################
###############################################################################
int
_addcols(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, int numNewCols, int numRows, AV * avref_obj, AV * avref_newCols, AV * avref_lower_bnd, AV * avref_upper_bnd, AV * avref_col_names);
   PREINIT:
     int status;
     int numNewNonZero = 0;
     int nonZeroCnt = 0;
     int i;
     int j;
     double *obj;
     int *cmatbeg;
     int *cmatidx;
     double *cmatval;
     double *lower_bnd;
     double *upper_bnd;
     char **col_names;
     AV * row;
     SV ** elem;

   CODE:
      //////////////////////////////////////////
      // coefficient in objective function
      //////////////////////////////////////////
      if( av_len(avref_obj) == -1 )
      {
         obj = NULL;
      }
      else
      {
         New( 0, obj, numNewCols, double);
         for( i = 0; i < numNewCols; i++ )
         {
            elem = av_fetch( avref_obj, i, 0 );
            if( elem == NULL )
            {
               obj[i] = 0.0;
            }
            else
            {
               obj[i] = SvNV( *elem );
            }
         }
      }
      //////////////////////////////////////////

      //////////////////////////////////////////
      // lower bound
      //////////////////////////////////////////
      if( av_len(avref_lower_bnd) == -1 )
      {
         lower_bnd = NULL;
      }
      else
      {
         New( 0, lower_bnd, numNewCols, double);
         for( i = 0; i < numNewCols; i++ )
         {
            elem = av_fetch( avref_lower_bnd, i, 0 );
            if( elem == NULL )
            {
               lower_bnd[i] = 0.0;
            }
            else
            {
               lower_bnd[i] = SvNV( *elem );
            }
         }
      }
      //////////////////////////////////////////

      //////////////////////////////////////////
      // upper bound
      //////////////////////////////////////////
      if( av_len(avref_upper_bnd) == -1 )
      {
         upper_bnd = NULL;
      }
      else
      {
         New( 0, upper_bnd, numNewCols, double);
         for( i = 0; i < numNewCols; i++ )
         {
            elem = av_fetch( avref_upper_bnd, i, 0 );
            if( elem == NULL )
            {
               upper_bnd[i] = 0.0;
            }
            else
            {
               upper_bnd[i] = SvNV( *elem );
            }
         }
      }
      //////////////////////////////////////////

      //////////////////////////////////////////
      // column names
      //////////////////////////////////////////
      if( av_len(avref_col_names) == -1 )
      {
         col_names = NULL;
      }
      else
      {
         New( 0, col_names, numNewCols, char*);
         for( i = 0; i < numNewCols; i++ )
         {
            elem = av_fetch( avref_col_names, i, 0 );
            if( elem == NULL )
            {
               New( 0, col_names[i], 10, char);
               strcpy(col_names[i],"column");
            }
            else
            {
               New( 0, col_names[i], SvCUR( *elem ) + 1, char);
               strcpy(col_names[i], SvPV( *elem, SvCUR( *elem ) ) );
            }
         }
      }
      //////////////////////////////////////////

      //////////////////////////////////////////
      // count number of non-Zero elements
      //////////////////////////////////////////
      for( i = 0; i < numNewCols; i++ )
      {
         for( j = 0; j < numRows; j++ )
         {
            elem = av_fetch( avref_newCols, j, 0 );
            if( elem != NULL )
            {
               row  = (AV*) SvRV(*elem);
               elem = av_fetch( row, i, 0 );
               if( elem != NULL )
               {
                  double val = SvNV(*elem);
                  if( val != 0.0 )
                  {
                     numNewNonZero++;
                  }
               }
            }
         }
      }
      //////////////////////////////////////////


      //////////////////////////////////////////
      // allocate memory for CPLEX call
      //////////////////////////////////////////
      New( 0, cmatbeg, numNewCols+1,  int);
      New( 0, cmatidx, numNewNonZero, int);
      New( 0, cmatval, numNewNonZero, double);

      //////////////////////////////////////////

      //////////////////////////////////////////
      // fill arrays for CPLEX call
      //////////////////////////////////////////
      for( i = 0; i < numNewCols; i++ )
      {
         cmatbeg[i] = nonZeroCnt;
         for( j = 0; j < numRows; j++ )
         {
            elem = av_fetch( avref_newCols, j, 0 );
            if( elem != NULL )
            {
               row  = (AV*) SvRV(*elem);
               elem = av_fetch( row, i, 0 );
               if( elem != NULL )
               {
                  double val = SvNV(*elem);
                  if( val != 0.0 )
                  {
                     cmatidx[nonZeroCnt] = j;
                     cmatval[nonZeroCnt] = val;
                     nonZeroCnt++;
                  }
               }
            }
         }
      }
      cmatbeg[i] = nonZeroCnt;
      //////////////////////////////////////////

      status = CPXaddcols (g_cplex_env, g_cplex_lp, numNewCols, numNewNonZero, obj, cmatbeg, cmatidx, cmatval,
                           lower_bnd, upper_bnd, col_names);

      SAVEFREEPV(cmatbeg);
      SAVEFREEPV(cmatidx);
      SAVEFREEPV(cmatval);
      if( col_names != NULL )
      {
         for( i = 0; i < numNewCols; i++ )
         {
            SAVEFREEPV(col_names[i]);
         }
         SAVEFREEPV(col_names);
      }
      if(obj)       SAVEFREEPV(obj);
      if(lower_bnd) SAVEFREEPV(lower_bnd);
      if(upper_bnd) SAVEFREEPV(upper_bnd);

      if( status )
      {
         fprintf(stderr, "ERROR: CPXnewcols() failed. Returned status: %d\n",status);
         print_CPLEX_error_string(g_cplex_env, status);
         XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }

   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_delrows(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, int start_idx, int stop_idx)
   PREINIT:
      int status;
   CODE:
      status = CPXdelrows(g_cplex_env, g_cplex_lp, start_idx, stop_idx);
      if( status )
      {
        fprintf(stderr, "ERROR: CPXdelrows() failed. Returned status: %d\n", status);
        print_CPLEX_error_string(g_cplex_env, status);
        XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_delcols(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, int start_idx, int stop_idx)
   PREINIT:
      int status;
   CODE:
      status = CPXdelcols(g_cplex_env, g_cplex_lp, start_idx, stop_idx);
      if( status )
      {
        fprintf(stderr, "ERROR: CPXdelcols() failed. Returned status: %d\n", status);
        print_CPLEX_error_string(g_cplex_env, status);
        XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_mipopt(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
      int status;
   CODE:
      status = CPXmipopt(g_cplex_env, g_cplex_lp);

      if( status )
      {
         fprintf(stderr, "ERROR: CPXmipopt() failed. Returned status: %d\n",status);
         print_CPLEX_error_string(g_cplex_env, status);
         XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_lpopt(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
      int status;
   CODE:
      status = CPXlpopt(g_cplex_env, g_cplex_lp);

      if( status )
      {
         fprintf(stderr, "ERROR: CPXlpopt() failed. Returned status: %d\n",status);
         print_CPLEX_error_string(g_cplex_env, status);
         XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_primopt(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
      int status;
   CODE:
      status = CPXprimopt(g_cplex_env, g_cplex_lp);

      if( status )
      {
         fprintf(stderr, "ERROR: CPXprimopt() failed. Returned status: %d\n",status);
         print_CPLEX_error_string(g_cplex_env, status);
         XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_baropt(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
      int status;
   CODE:
      status = CPXbaropt(g_cplex_env, g_cplex_lp);

      if( status )
      {
         fprintf(stderr, "ERROR: CPXbaropt() failed. Returned status: %d\n",status);
         print_CPLEX_error_string(g_cplex_env, status);
         XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_qpopt(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
      int status;
   CODE:
      status = CPXqpopt(g_cplex_env, g_cplex_lp);

      if( status )
      {
         fprintf(stderr, "ERROR: CPXqpopt() failed. Returned status: %d\n",status);
         print_CPLEX_error_string(g_cplex_env, status);
         XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
void
_solution(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, int num_cols)
   PREINIT:
      int i;
      int status;
      int solution_status;
      double objective_value;
      double *solution_vector;
   PPCODE:
      New( 0, solution_vector, num_cols, double);

      status = CPXsolution(g_cplex_env, g_cplex_lp, &solution_status, &objective_value, solution_vector, NULL, NULL, NULL);

      if( status )
      {
         fprintf(stderr, "ERROR: CPXsolution() failed. Returned status: %d\n",status);
         print_CPLEX_error_string(g_cplex_env, status);
         SAVEFREEPV(solution_vector);
         XSRETURN_UNDEF;
      }


      EXTEND(SP, 1 + 1 + num_cols);

      // fprintf(stderr, "INFO: solution_status=%d\n",solution_status);
      // push solution status to stack
      PUSHs( sv_2mortal( newSViv( solution_status ) ) );

      // fprintf(stderr, "INFO: objective_value=%g\n",objective_value);
      // push objective value to stack
      PUSHs( sv_2mortal( newSVnv( objective_value ) ) );

      for( i = 0; i < num_cols; i++ )
      {
         // fprintf(stderr, "INFO: solution_vector[%d]=%g\n",i,solution_vector[i]);
         PUSHs( sv_2mortal( newSVnv( solution_vector[i] ) ) );
      }

      SAVEFREEPV(solution_vector);
###############################################################################


###############################################################################
###############################################################################
void
_solninfo(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
      int status;
      int solnmethod;
      int solntype;
      int pfeasind;
      int dfeasind;
   PPCODE:

      status = CPXsolninfo(g_cplex_env, g_cplex_lp, &solnmethod, &solntype, &pfeasind, &dfeasind);

      if( status )
      {
         fprintf(stderr, "ERROR: CPXsolninfo() failed. Returned status: %d\n",status);
         print_CPLEX_error_string(g_cplex_env, status);
         XSRETURN_UNDEF;
      }


      EXTEND(SP, 4);

      fprintf(stderr, "INFO: solnmethod=%d\n",solnmethod);
      PUSHs( sv_2mortal( newSViv( solnmethod ) ) );

      fprintf(stderr, "INFO: solntype=%d\n",solntype);
      PUSHs( sv_2mortal( newSViv( solntype ) ) );

      fprintf(stderr, "INFO: pfeasind=%d\n",pfeasind);
      PUSHs( sv_2mortal( newSViv( pfeasind ) ) );

      fprintf(stderr, "INFO: dfeasind=%d\n",dfeasind);
      PUSHs( sv_2mortal( newSViv( dfeasind ) ) );

###############################################################################


###############################################################################
###############################################################################
char *
_version(CPXENVptr g_cplex_env)
   PREINIT:
      CPXCCHARptr ret_version;
      STRLEN length;
   CODE:
      ret_version = CPXversion(g_cplex_env);

      if( ret_version == NULL )
      {
         fprintf(stderr, "ERROR: CPXversion() failed.\n");
         XSRETURN_UNDEF;
      }
      else
      {
         length = strlen(ret_version);
         // fprintf(stderr, "CPLEX Version: %s. strlen=%ld\n", ret_version, length);
         New( 0, RETVAL, length + 1, char);
         strcpy( RETVAL, ret_version );
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_populate(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
      int status;
   CODE:
      status = CPXpopulate(g_cplex_env, g_cplex_lp);

      if( status )
      {
         fprintf(stderr, "ERROR: CPXpopulate() failed. Returned status: %d\n",status);
         print_CPLEX_error_string(g_cplex_env, status);
         XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_getnumcols(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
      int num_cols;
   CODE:
      num_cols = CPXgetnumcols(g_cplex_env, g_cplex_lp);
      RETVAL = num_cols;
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_getnumrows(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
      int num_rows;
   CODE:
      num_rows = CPXgetnumrows(g_cplex_env, g_cplex_lp);
      RETVAL = num_rows;
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_getnumbin(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
      int num_bin;
   CODE:
      num_bin = CPXgetnumbin(g_cplex_env, g_cplex_lp);
      RETVAL = num_bin;
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_getnumint(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
      int num_int;
   CODE:
      num_int = CPXgetnumint(g_cplex_env, g_cplex_lp);
      RETVAL = num_int;
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_getnumnz(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
      int num_nz;
   CODE:
      num_nz = CPXgetnumnz(g_cplex_env, g_cplex_lp);
      RETVAL = num_nz;
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_getstat(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
      int sol_status;
   CODE:
      sol_status = CPXgetstat(g_cplex_env, g_cplex_lp);
      RETVAL = sol_status;
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_getobjsen(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
      int obj_sense;
   CODE:
      obj_sense = CPXgetobjsen(g_cplex_env, g_cplex_lp);
      RETVAL = obj_sense;
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
double
_getobjval(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
      int status;
      double obj_val;
   CODE:
      status = CPXgetobjval(g_cplex_env, g_cplex_lp, &obj_val);
      if( status )
      {
        fprintf(stderr, "ERROR: CPXgetobjval() failed. Returned status: %d\n", status);
        print_CPLEX_error_string(g_cplex_env, status);
        XSRETURN_UNDEF;
      }
      RETVAL = obj_val;
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_getsolnpoolnumsolns(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
     int num_solutions;
   CODE:
     num_solutions = CPXgetsolnpoolnumsolns(g_cplex_env, g_cplex_lp);
     RETVAL = num_solutions;
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_getsolnpoolnumreplaced(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
     int num_solutions_replaced;
   CODE:
     num_solutions_replaced = CPXgetsolnpoolnumreplaced(g_cplex_env, g_cplex_lp);
     RETVAL = num_solutions_replaced;
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
double
_getsolnpoolobjval(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, int sol_num)
   PREINIT:
      double obj_val;
      int status;
   CODE:
      status = CPXgetsolnpoolobjval(g_cplex_env, g_cplex_lp, sol_num, &obj_val);
      if( status )
      {
        fprintf(stderr, "ERROR: CPXgetsolnpoolobjval() failed. Returned status: %d\n", status);
        print_CPLEX_error_string(g_cplex_env, status);
        XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = obj_val;
      }

   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
void
_getsolnpoolx(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, int sol_num, int num_cols)
   PREINIT:
      int i;
      int status;
      int solution_status;
      double objective_value;
      double *solution_vector;
   PPCODE:
      New( 0, solution_vector, num_cols, double);

      status = CPXgetsolnpoolx(g_cplex_env, g_cplex_lp, sol_num, solution_vector, 0, num_cols - 1);

      if( status )
      {
         fprintf(stderr, "ERROR: CPXgetsolnpoolx() failed. Returned status: %d\n",status);
         print_CPLEX_error_string(g_cplex_env, status);
         SAVEFREEPV(solution_vector);
         XSRETURN_UNDEF;
      }


      EXTEND(SP, num_cols);

      for( i = 0; i < num_cols; i++ )
      {
         // fprintf(stderr, "INFO: solution_vector[%d]=%g\n",i,solution_vector[i]);
         PUSHs( sv_2mortal( newSVnv( solution_vector[i] ) ) );
      }

      SAVEFREEPV(solution_vector);
###############################################################################


###############################################################################
###############################################################################
int
_writeprob(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, char *filename, char *format)
   PREINIT:
      int status;
   CODE:
      status = CPXwriteprob(g_cplex_env, g_cplex_lp, filename, format);
      if( status )
      {
        fprintf(stderr, "ERROR: CPXwriteprob() to file '%s' in format '%s' failed. Returned status: %d\n", filename, format, status);
        print_CPLEX_error_string(g_cplex_env, status);
        XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_solwrite(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, char *filename)
   PREINIT:
      int status;
   CODE:
      status = CPXsolwrite(g_cplex_env, g_cplex_lp, filename);
      if( status )
      {
        fprintf(stderr, "ERROR: CPXwriteprob() to file '%s' failed. Returned status: %d\n", filename, status);
        print_CPLEX_error_string(g_cplex_env, status);
        XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_solwritesolnpool(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, int sol_num, char *filename)
   PREINIT:
      int status;
   CODE:
      status = CPXsolwritesolnpool(g_cplex_env, g_cplex_lp, sol_num, filename);
      if( status )
      {
        fprintf(stderr, "ERROR: CPXsolwritesolnpool() to file '%s' failed. Returned status: %d\n", filename, status);
        print_CPLEX_error_string(g_cplex_env, status);
        XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_solwritesolnpoolall(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, char *filename)
   PREINIT:
      int status;
   CODE:
      status = CPXsolwritesolnpoolall(g_cplex_env, g_cplex_lp, filename);
      if( status )
      {
        fprintf(stderr, "ERROR: CPXsolwritesolnpoolall() to file '%s' failed. Returned status: %d\n", filename, status);
        print_CPLEX_error_string(g_cplex_env, status);
        XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_writeparams(CPXENVptr g_cplex_env, char *filename)
   PREINIT:
      int status;
   CODE:
      status = CPXwriteparam(g_cplex_env, filename);
      if( status )
      {
        fprintf(stderr, "ERROR: CPXwriteparam() to file '%s' failed. Returned status: %d\n", filename, status);
        print_CPLEX_error_string(g_cplex_env, status);
        XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_maximize(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
      int status;
   CODE:
      status = CPXchgobjsen (g_cplex_env, g_cplex_lp, CPX_MAX);
      if( status )
      {
        fprintf(stderr, "ERROR: CPXchgobjsen failed. Returned status: %d\n",status);
        print_CPLEX_error_string(g_cplex_env, status);
        XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_minimize(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp)
   PREINIT:
      int status;
   CODE:
      status = CPXchgobjsen (g_cplex_env, g_cplex_lp, CPX_MIN);
      if( status )
      {
        fprintf(stderr, "ERROR: CPXchgobjsen failed. Returned status: %d\n",status);
        print_CPLEX_error_string(g_cplex_env, status);
        XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_setdefaults(CPXENVptr g_cplex_env)
   PREINIT:
      int status;
   CODE:
      status = CPXsetdefaults( g_cplex_env);

   if( status )
   {
      fprintf(stderr, "ERROR: setdefaults() failed. Returned status: %d\n",status);
      print_CPLEX_error_string(g_cplex_env, status);
      RETVAL = status;
   }
   else
   {
      XSRETURN_UNDEF;
   }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_setstrparam(CPXENVptr g_cplex_env, int what, char *to)
   PREINIT:
      int status;
   CODE:

   if( strlen(to) + 1 > CPX_STR_PARAM_MAX )
   {
      fprintf(stderr, "ERROR: setstrparam() failed. string '%s' is too long: %ld\n",to,strlen(to));
      fprintf(stderr, "       maximum length including '\\0' is %d\n", CPX_STR_PARAM_MAX);
      RETVAL = -1;
   }

      status = CPXsetstrparam( g_cplex_env, what, to);

   if( status )
   {
      fprintf(stderr, "ERROR: setstrparam() failed. Returned status: %d\n",status);
      print_CPLEX_error_string(g_cplex_env, status);
      RETVAL = status;
   }
   else
   {
      XSRETURN_UNDEF;
   }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_setintparam(CPXENVptr g_cplex_env, int what, int to)
   PREINIT:
      int status;
   CODE:
      status = CPXsetintparam( g_cplex_env, what, to);

   if( status )
   {
      fprintf(stderr, "ERROR: setintparam() failed. Returned status: %d\n",status);
      print_CPLEX_error_string(g_cplex_env, status);
      RETVAL = status;
   }
   else
   {
      XSRETURN_UNDEF;
   }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_setlongparam(CPXENVptr g_cplex_env, int what, long to)
   PREINIT:
      int status;
   CODE:
      status = CPXsetlongparam( g_cplex_env, what, to);

   if( status )
   {
      fprintf(stderr, "ERROR: setlongparam() failed. Returned status: %d\n",status);
      print_CPLEX_error_string(g_cplex_env, status);
      RETVAL = status;
   }
   else
   {
      XSRETURN_UNDEF;
   }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
char *
_getstrparam(CPXENVptr g_cplex_env, int what)
   PREINIT:
      int status;
   CODE:
      New( 0, RETVAL, CPX_STR_PARAM_MAX + 1, char);
      status = CPXgetstrparam( g_cplex_env, what, RETVAL);

   if( status )
   {
      fprintf(stderr, "ERROR: getstrparam() failed. Returned status: %d\n",status);
      print_CPLEX_error_string(g_cplex_env, status);
      XSRETURN_UNDEF;
   }

   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_getintparam(CPXENVptr g_cplex_env, int what)
   PREINIT:
      int status;
      int param;
   CODE:
      status = CPXgetintparam( g_cplex_env, what, &param);

   if( status )
   {
      fprintf(stderr, "ERROR: getintparam() failed. Returned status: %d\n",status);
      print_CPLEX_error_string(g_cplex_env, status);
      XSRETURN_UNDEF;
   }
   else
   {
      RETVAL = param;
   }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
long
_getlongparam(CPXENVptr g_cplex_env, int what)
   PREINIT:
      int status;
      CPXLONG param;
   CODE:
      status = CPXgetlongparam( g_cplex_env, what, &param);

   if( status )
   {
      fprintf(stderr, "ERROR: getlongparam() failed. Returned status: %d\n",status);
      print_CPLEX_error_string(g_cplex_env, status);
      XSRETURN_UNDEF;
   }
   else
   {
      RETVAL = param;
   }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_setdblparam(CPXENVptr g_cplex_env, int what, double to)
   PREINIT:
      int status;
   CODE:
      status = CPXsetdblparam( g_cplex_env, what, to);

   if( status )
   {
      fprintf(stderr, "ERROR: setdblparam() failed. Returned status: %d\n",status);
      print_CPLEX_error_string(g_cplex_env, status);
      RETVAL = status;
   }
   else
   {
      XSRETURN_UNDEF;
   }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
double
_getdblparam(CPXENVptr g_cplex_env, int what)
   PREINIT:
      int status;
      double param;
   CODE:
      status = CPXgetdblparam( g_cplex_env, what, &param);

   if( status )
   {
      fprintf(stderr, "ERROR: getdblparam() failed. Returned status: %d\n",status);
      print_CPLEX_error_string(g_cplex_env, status);
      XSRETURN_UNDEF;
   }
   else
   {
      RETVAL = param;
   }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
double
_getqpcoef(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, int row_idx, int col_idx)
   PREINIT:
      int status;
      double coef;
   CODE:
      status = CPXgetqpcoef( g_cplex_env, g_cplex_lp, row_idx, col_idx, &coef);

   if( status )
   {
      fprintf(stderr, "ERROR: CPXgetqpcoef() failed. Returned status: %d\n",status);
      print_CPLEX_error_string(g_cplex_env, status);
      XSRETURN_UNDEF;
   }
   else
   {
      // fprintf(stderr, "DEBUG: CPXgetqpcoef(): val(%d,%d)=%g\n",row_idx, col_idx, coef);
      RETVAL = coef;
   }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_chgqpcoef(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, int row_idx, int col_idx, double new_val)
   PREINIT:
      int status;
   CODE:
      status = CPXchgqpcoef( g_cplex_env, g_cplex_lp, row_idx, col_idx, new_val);

   if( status )
   {
      fprintf(stderr, "ERROR: Xchgqpcoef() failed. Returned status: %d\n",status);
      print_CPLEX_error_string(g_cplex_env, status);
      XSRETURN_UNDEF;
   }
   else
   {
      RETVAL = 1;
   }
   OUTPUT:
      RETVAL
###############################################################################


###############################################################################
###############################################################################
int
_addqconstr(CPXENVptr g_cplex_env, CPXLPptr g_cplex_lp, int num_cols, double rhs, char *sense, char *name, AV * avref_linear, AV * avref_quad)
   PREINIT:
      int i,j;
      int status;
      int nz_linear  = 0;
      int linear_cnt = 0;
      int nz_quad    = 0;
      int quad_cnt   = 0;
      int *linear_idx;
      double *linear_val;
      int *quad_row;
      int *quad_col;
      double *quad_val;
      AV * row;
      SV ** elem;

   CODE:
      /////////////////////////////////////////////////////////////
      // deal with linear part of constraint which might be NULL
      /////////////////////////////////////////////////////////////
      if( av_len(avref_linear) == -1 )
      {
         linear_val = 0;
      }
      else
      {
         // count number of non-zero linear values
         for( i = 0; i < av_len(avref_linear) + 1; i++ )
         {
            elem = av_fetch( avref_linear, i, 0 );
            if( elem != NULL && SvOK(*elem) )
            {
               if( SvNV( *elem ) != 0 )
               {
                  nz_linear++;
               }
            }
         }
         // allocate memory for linear non-zeros
         New( 0, linear_val, nz_linear, double);
         New( 0, linear_idx, nz_linear, int);

         for( i = 0; i < av_len(avref_linear) + 1; i++ )
         {
            elem = av_fetch( avref_linear, i, 0 );
            if( elem != NULL && SvOK(*elem) )
            {
               if( SvNV( *elem ) != 0 )
               {
                  linear_idx[linear_cnt] = i;
                  linear_val[linear_cnt] = SvNV( *elem );
                  linear_cnt++;
               }
            }
         }
      }
      /////////////////////////////////////////////////////////////


      /////////////////////////////////////////////////////////////
      // deal with quadratic part of constraint
      /////////////////////////////////////////////////////////////
      if( av_len(avref_quad) == -1 )
      {
         // empty quadratic matrix -> that's not good
         fprintf(stderr, "ERROR: addqpconstr(): quadratic matrix is empty!\n");
         if( linear_idx ) SAVEFREEPV(linear_idx);
         if( linear_val ) SAVEFREEPV(linear_val);
         XSRETURN_UNDEF;
      }
      else
      {
         // count number of non-zero quadratic elements
         for( i = 0; i < av_len(avref_quad) + 1; i++ )
         {
            elem = av_fetch( avref_quad, i, 0 );
            if( elem != NULL )
            {
               row  = (AV*) SvRV(*elem);
               for( j = 0; j < av_len( row ) + 1; j++ )
               {
                  elem = av_fetch( row, i, 0 );
                  if( elem != NULL && SvOK(*elem) && SvNV(*elem) != 0 )
                  {
                     nz_quad++;
                  }
               }
            }
         }

         if( nz_quad == 0 )
         {
            // we didn't find a single non-zero element in quadratic constraint matrix
            fprintf(stderr, "ERROR: addqpconstr(): no non-zero element in quadratic constraint matrix found!\n");
            if( linear_idx ) SAVEFREEPV(linear_idx);
            if( linear_val ) SAVEFREEPV(linear_val);
            XSRETURN_UNDEF;
         }

         // allocate memory for quadratic memory
         New( 0, quad_row, nz_quad, int);
         New( 0, quad_col, nz_quad, int);
         New( 0, quad_val, nz_quad, double);
        
         for( i = 0; i < av_len(avref_quad) + 1; i++ )
         {
            elem = av_fetch( avref_quad, i, 0 );
            if( elem != NULL )
            {
               row  = (AV*) SvRV(*elem);
               for( j = 0; j < av_len( row ) + 1; j++ )
               {
                  elem = av_fetch( row, j, 0 );
                  if( elem != NULL && SvOK(*elem) && SvNV(*elem) != 0 )
                  {
                     quad_row[quad_cnt] = i;
                     quad_col[quad_cnt] = j;
                     quad_val[quad_cnt] = SvNV(*elem);
                     // printf("_addqconstr(): r=%d c=%d quad_val=%g\n",i,j,quad_val[quad_cnt]);
                     quad_cnt++;
                  }
               }
            }
         }
      }
      /////////////////////////////////////////////////////////////

      status = CPXaddqconstr(g_cplex_env, g_cplex_lp, nz_linear, nz_quad, rhs, sense[0], linear_idx, linear_val, quad_row, quad_col, quad_val, name);

      if( linear_idx ) SAVEFREEPV( linear_idx );
      if( linear_val ) SAVEFREEPV( linear_val );
      if( quad_val )   SAVEFREEPV( quad_val );
      if( quad_row )   SAVEFREEPV( quad_row );
      if( quad_col )   SAVEFREEPV( quad_col );

      if( status )
      {
         fprintf(stderr, "ERROR: CPXaddqpconstr() failed. Returned status: %d\n",status);
         print_CPLEX_error_string(g_cplex_env, status);
         XSRETURN_UNDEF;
      }
      else
      {
         RETVAL = 1;
      }

   OUTPUT:
      RETVAL
###############################################################################
