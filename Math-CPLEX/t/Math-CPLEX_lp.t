# Before `make install' is performed this script should be runnable with
# `make test'. After `make install' it should work as `perl Math-CPLEX.t'

#########################

# change 'tests => 1' to 'tests => last_test_to_print';

use strict;
use warnings;

use Test::More tests => 21;
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
################################################################################
ok( $lp->maximize(), "maximize" );

my $unbounded = &Math::CPLEX::Base::CPX_INFBOUND;
print "unbounded=$unbounded\n";
ok( $unbounded, "get a CPLEX macro" );
ok( $unbounded > 1e+9);


my $cols = {num_cols  => 2,
            obj_coefs => [ 0.6,  0.5]};
ok( $lp->newcols($cols), "define new columns" );


my $newRows;
$newRows->[0][0] = 1.0;
$newRows->[0][1] = 2.0;
$newRows->[1][0] = 3.0;
$newRows->[1][1] = 1.0;
my $rows = {num_rows  => 2,
            rhs       => [1.0, 2.0],
            sense     => ['L', 'L'],
            row_coefs => $newRows};

ok( $lp->addrows($rows), "add rows" );
################################################################################


################################################################################
################################################################################
my $filename = "/tmp/MathCPLEX" . int(rand(1000000)) . "_lp.lp";
print "INFO: going to write lp-file '$filename'\n";
ok( $lp->writeprob($filename), "write linear program to file '$filename'" );
################################################################################

################################################################################
################################################################################
ok( $lp->lpopt(), "linear programming optimization" );
################################################################################


################################################################################
################################################################################
my $otpi_status = &Math::CPLEX::Base::CPX_STAT_OPTIMAL;
my $status = $lp->getstat();
ok( $status == $otpi_status, "optimization status" );

my ($sol_status, $obj_val, @vals) = $lp->solution();
ok( $sol_status == $otpi_status, "optimization status via solution()" );
ok( $sol_status );
ok( abs($obj_val - 0.46) < 1e-5 , "objective value" );
ok( @vals == 2, "number of variables" );
ok( abs($vals[0] - 0.6) < 1e-5, "solution: variable 1" );
ok( abs($vals[1] - 0.2) < 1e-5, "solution: variable 2" );
################################################################################

################################################################################
################################################################################
ok( $lp->free(), "free linear program" );
ok( $cplex_env->close(), "close CPLEX environment" );
################################################################################
