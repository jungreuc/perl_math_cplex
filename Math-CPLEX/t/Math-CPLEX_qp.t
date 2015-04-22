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


################################################################################
################################################################################
my $cplex_env = Math::CPLEX::Env->new();
isa_ok( $cplex_env, 'Math::CPLEX::Env');
################################################################################

################################################################################
################################################################################
my $lp = $cplex_env->createOP();
isa_ok( $lp, 'Math::CPLEX::OP' );
################################################################################


################################################################################
################################################################################
ok( ! $cplex_env->setdblparam(&Math::CPLEX::Base::CPX_PARAM_BARQCPEPCOMP, 1e-12), "set double parameter" );
ok( ($cplex_env->getdblparam(&Math::CPLEX::Base::CPX_PARAM_BARQCPEPCOMP) - 1e-12) < 1e-11, "get double parameter" );
################################################################################


################################################################################
################################################################################
ok( $lp->maximize() );

my $unbounded = &Math::CPLEX::Base::CPX_INFBOUND;

my $cols = {num_cols  => 3,
            lower_bnd => [0],
            upper_bnd => [40],
            obj_coefs => [ 1, 2, 3]};
ok( $lp->newcols($cols) );


my $newRows = [[-1,  1,  1],
               [ 1, -3,  1]];
my $rows = {num_rows  => 2,
            rhs       => [20, 30],
            sense     => ['L', 'L'],
            row_coefs => $newRows};
ok( $lp->addrows($rows) );

# set the entire quadratic coefficient matrix matrix
# we want to obtain the following objective function:
# x1 + 2 x2 + 3 x3 + [ - 33 x1 ^2 + 12 x1 * x2 - 22 x2 ^2 + 23 x2 * x3 - 11 x3 ^2 ] / 2
# enhane we need to set to coefficients for x1*x2 to 6 and for x2*x3 to 11.5!
my $quad_coef = [[-33.0,   6.0,   0.0],
                 [  6.0, -22.0,  11.5],
                 [  0.0,  11.5, -11.0]];
ok( $lp->setqpcoef($quad_coef) );

# add a quadratic constraint to optimization problem
# results in: 
# new_quad: - 3 x1 + 1.5 x2 - 7.2 x3 + [ 0  * x1 - 2 x1 ^2 + 1.8 x1 * x2 - 1.5 x2 ^2 + 2.2 x2 * x3 - 1.3 x3 ^2 ] >= 0.31415
my $linval  = [-3.0,  1.5, -7.2];
my $quadval = [[-2.0,  0.9,  0.0],
               [ 0.9, -1.5,  1.1],
               [ 0.0,  1.1, -1.3]];
my $quad_constr = {linear => $linval,
                   rhs    => 0.31415,
                   sense  => 'G',
                   name   => 'new_quad',
                   quad   => $quadval};
ok( $lp->addqconstr($quad_constr) );
################################################################################


################################################################################
################################################################################
my $filename = "/tmp/myCPLEX" . rand(100000) . "_qp.lp";
print "INFO: going to write lp-file '$filename'\n";
ok( $lp->writeprob($filename) );
################################################################################

################################################################################
################################################################################
ok( $lp->qpopt() );
################################################################################

################################################################################
################################################################################
my $otpi_status = &Math::CPLEX::Base::CPX_STAT_OPTIMAL;
my $status = $lp->getstat();
ok( $status == $otpi_status, "optimization status" );

my ($sol_status, $obj_val, @vals) = $lp->solution();
die "ERROR: solution() failed\n" unless defined $sol_status;
print "obj_val=$obj_val values: @vals\n";

ok( $sol_status == $otpi_status, "optimization status via solution()" );
ok( $sol_status );
ok( abs($obj_val + 0.0192898810774823) < 1e-07 , "objective value" );
ok( @vals == 3, "number of variables" );
ok( abs($vals[0] - 0.0 ) < 1e-11, "solution: variable 1" );
ok( abs($vals[1] - 0.1117942 )    < 1e-06, "solution: variable 2" );
ok( abs($vals[2] + 0.0238631)   < 1e-06, "solution: variable 3" );
################################################################################

################################################################################
################################################################################
ok( $lp->free(), "free linear program resources" );
ok( $cplex_env->close(), "close CPLEX environement" );
################################################################################
