# Before `make install' is performed this script should be runnable with
# `make test'. After `make install' it should work as `perl Math-CPLEX.t'

#########################

# change 'tests => 1' to 'tests => last_test_to_print';

use strict;
use warnings;

use Test::More tests => 36;
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
my $lp = $cplex_env->createOP("indicatorOP");
isa_ok( $lp, 'Math::CPLEX::OP' );
################################################################################


################################################################################
# set CPLEX parameters
################################################################################
ok( ! $cplex_env->setintparam(&Math::CPLEX::Base::CPX_PARAM_SCRIND, &Math::CPLEX::Base::CPX_ON), "display results on screen -> turned on" );
my $cplex_unbounded = &Math::CPLEX::Base::CPX_INFBOUND;
###############################################################################


################################################################################
################################################################################
ok( $lp->minimize(), "minimize" );


# define columns
my $cols = { num_cols  => 12,
             lower_bnd => [ 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
             upper_bnd => [ $cplex_unbounded, $cplex_unbounded, $cplex_unbounded, $cplex_unbounded, $cplex_unbounded, $cplex_unbounded, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0],
             obj_coefs => [ 0.0, 0.0, 0.0, 0.0, 0.0, 5.0, 1.0, 1.0, 1.0, 10.0, 1.0, 1.0],
             col_types => [ 'C', 'C', 'C', 'C', 'C', 'C', 'B', 'B', 'B', 'B', 'B', 'B'],
             col_names => ['x01', 'x02', 'x13', 'x14', 'x23', 'x24', 'f01', 'f02', 'f13', 'f14', 'f23', 'f24']};
ok( $lp->newcols($cols), "define new columns" );


# define rows
my $newRows;
$newRows->[0][0] = -1.0;
$newRows->[0][1] = -1.0;

$newRows->[1][0] =  1.0;
$newRows->[1][2] = -1.0;
$newRows->[1][3] = -1.0;

$newRows->[2][1] =  1.0;
$newRows->[2][4] = -1.0;
$newRows->[2][5] = -1.0;

$newRows->[3][2] =  1.0;
$newRows->[3][4] =  1.0;

$newRows->[4][3] =  1.0;
$newRows->[4][5] =  1.0;

my $rows = {'num_rows'  => 5,
            'rhs'       => [-1_000_001, 0, 0, 1_000_000, 1],
            'sense'     => ['G', 'G', 'G', 'G', 'G'],
            'row_names' => ["c1", "c2", "c3", "c4", "c5"],
            'row_coefs' => $newRows};
ok( $lp->addrows($rows), "add rows" );


# add indicator constraints
for( my $i = 0; $i < 6; $i++ )
{
   my $val;
   $val->[$i] = 1.0;
   my $indconstr = {
                      indvar       => 6 + $i,
                      complemented => 1,
                      rhs          => 0.0,
                      sense        => 'L',
                      val          => $val,
                      name         => "indicator$i",
                   };

   ok( $lp->addindconstr($indconstr), "add indicator constraint $i" );
}
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
ok( abs($obj_val - 8.0) < 1e-5 , "objective value" );
ok( @vals == 12, "number of variables" );
ok( abs($vals[ 0] -       0) < 1e-5, "solution: variable 1" );
ok( abs($vals[ 1] - 1000001) < 1e-5, "solution: variable 2" );
ok( abs($vals[ 2] -       0) < 1e-5, "solution: variable 3" );
ok( abs($vals[ 3] -       0) < 1e-5, "solution: variable 4" );
ok( abs($vals[ 4] - 1000000) < 1e-5, "solution: variable 5" );
ok( abs($vals[ 5] -       1) < 1e-5, "solution: variable 6" );
ok( abs($vals[ 6] -       0) < 1e-5, "solution: variable 7" );
ok( abs($vals[ 7] -       1) < 1e-5, "solution: variable 8" );
ok( abs($vals[ 8] -       0) < 1e-5, "solution: variable 9" );
ok( abs($vals[ 9] -       0) < 1e-5, "solution: variable 10" );
ok( abs($vals[10] -       1) < 1e-5, "solution: variable 11" );
ok( abs($vals[11] -       1) < 1e-5, "solution: variable 12" );
################################################################################

################################################################################
################################################################################
ok( $lp->free(), "free linear program" );
ok( $cplex_env->close(), "close CPLEX environment" );
################################################################################
