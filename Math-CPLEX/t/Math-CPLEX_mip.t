# Before `make install' is performed this script should be runnable with
# `make test'. After `make install' it should work as `perl Math-CPLEX.t'

#########################

# change 'tests => 1' to 'tests => last_test_to_print';

use strict;
use warnings;

use Test::More tests => 24;
# use Test::More 'no_plan';

BEGIN
{
   use_ok('Math::CPLEX::Base');
   use_ok('Math::CPLEX::Env');
   use_ok('Math::CPLEX::OP');
};

my $cplex_env = Math::CPLEX::Env->new();
isa_ok( $cplex_env, 'Math::CPLEX::Env');

################################################################################
################################################################################
my $lp = $cplex_env->createOP();
isa_ok( $lp, 'Math::CPLEX::OP' );
################################################################################


################################################################################
# set CPLEX parameters
################################################################################
my $limit = 10000;
ok( ! $cplex_env->setlongparam(&Math::CPLEX::Base::CPX_PARAM_ITLIM, $limit), "set long parameter" );
ok( $cplex_env->getlongparam(&Math::CPLEX::Base::CPX_PARAM_ITLIM) == $limit, "get long parameter" );

ok( !$cplex_env->setdblparam(&Math::CPLEX::Base::CPX_PARAM_EPAGAP, 1e-7), "set double parameter" );
ok( ($cplex_env->getdblparam(&Math::CPLEX::Base::CPX_PARAM_EPAGAP) - 1e-7) < 1e-5, "get double parameter" );

################################################################################


################################################################################
################################################################################
ok( $lp->maximize(), "maximize" );


# define columns
my $cols = { num_cols  => 3,
             obj_coefs => [ 1.0,  0.5,  0.3],
             lower_bnd => [ 0.0,  1.0,  0.0],
             upper_bnd => [10.0,  9.0,  1.0],
             col_types => [ 'C',  'I',  'B'],
             col_names => ['c1', 'c2', 'c3']};
ok( $lp->newcols($cols), "define new columns" );


# define rows
my $newRows;
$newRows->[0][0] = -0.3;
$newRows->[0][2] =  1.3;
$newRows->[1][0] =  0.7;
$newRows->[1][1] = -1.3;
$newRows->[1][2] =  2.9;
$newRows->[2][1] =  2.0;
$newRows->[2][2] = -3.1;
my $rows = {'num_rows'  => 3,
            'rhs'       => [0.25, 1.33, 0.8],
            'sense'     => ['L', 'E', 'G'],
            'row_names' => ["row1", "row2", "row3"],
            'row_coefs' => $newRows};
ok( $lp->addrows($rows), "add rows" );
################################################################################


################################################################################
################################################################################
my $filename = "/tmp/MathCPLEX" . int(rand(1000000)) . "_mip.lp";
print "INFO: going to write lp-file '$filename'\n";
ok( $lp->writeprob($filename), "write linear program to file '$filename'" );
################################################################################

################################################################################
################################################################################
ok( $lp->mipopt(), "mixed integer programming optimization" );
################################################################################


################################################################################
################################################################################
my $otpi_status = &Math::CPLEX::Base::CPXMIP_OPTIMAL;
my $status = $lp->getstat();
ok( $status == $otpi_status, "optimization status" );

my ($sol_status, $obj_val, @vals) = $lp->solution();
ok( $sol_status == $otpi_status, "optimization status via solution()" );
ok( $sol_status );
ok( abs($obj_val - 12.2) < 1e-5 , "objective value" );
ok( @vals == 3, "number of variables" );
ok( abs($vals[0] - 8.9) < 1e-5, "solution: variable 1" );
ok( abs($vals[1] - 6.0) < 1e-5, "solution: variable 2" );
ok( abs($vals[2] - 1.0) < 1e-5, "solution: variable 3" );
################################################################################

################################################################################
################################################################################
ok( $lp->free(), "free linear program" );
ok( $cplex_env->close(), "close CPLEX environment" );
################################################################################
