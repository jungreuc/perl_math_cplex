#! /usr/bin/perl
################################################################################
################################################################################
# Author:  Christian Jungreuthmayer
# Date:    Fri Oct 25 13:41:39 CEST 2013
# Company: Austrian Centre of Industrial Biotechnology (ACIB)
################################################################################
# http://www.ensta-paristech.fr/~diam/ro/online/ilog/examples/cplex/src/c/fixnet.c
################################################################################

use strict;
use warnings;

use Math::CPLEX::Env;
use Math::CPLEX::Base;

################################################################################
# access some of CPLEX constants
################################################################################
my $param1 = &Math::CPLEX::Base::CPX_ON;
print "CPX_ON= $param1\n";

my $param2 = &Math::CPLEX::Base::CPX_PARAM_SCRIND;
print "CPX_PARAM_SCRIND: $param2\n";


my $cplex_unbounded = &Math::CPLEX::Base::CPX_INFBOUND;
################################################################################


################################################################################
# get a CPLEX environment and print the CPLEX version
################################################################################
my $cplex_env = Math::CPLEX::Env->new();
die "ERROR: openCPLEX() failed!" unless $cplex_env;

my $version = $cplex_env->version();
print "CPLEX Version: $version\n";

$cplex_env->setintparam(&Math::CPLEX::Base::CPX_PARAM_SCRIND, &Math::CPLEX::Base::CPX_ON);
################################################################################


################################################################################
# create a optimization problem
################################################################################
my $lp = $cplex_env->createOP("indicatorOP");
die "ERROR: couldn't create Linear Program\n" unless $lp;
################################################################################


################################################################################
# set up the optimization problem
################################################################################
# we want to maximize our objective function
die "ERROR: minimize() failed\n" unless $lp->minimize();



# define columns
my $cols = { num_cols  => 12,
             lower_bnd => [ 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
             upper_bnd => [ $cplex_unbounded, $cplex_unbounded, $cplex_unbounded, $cplex_unbounded, $cplex_unbounded, $cplex_unbounded, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0],
             obj_coefs => [ 0.0, 0.0, 0.0, 0.0, 0.0, 5.0, 1.0, 1.0, 1.0, 10.0, 1.0, 1.0],
             col_types => [ 'C', 'C', 'C', 'C', 'C', 'C', 'B', 'B', 'B', 'B', 'B', 'B'],
             col_names => ['x01', 'x02', 'x13', 'x14', 'x23', 'x24', 'f01', 'f02', 'f13', 'f14', 'f23', 'f24']};
die "ERROR: newcols() failed\n" unless $lp->newcols( $cols );

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
die "ERROR: addrows() failed\n" unless $lp->addrows($rows);

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

   die "ERROR: addindconstr() failed\n" unless $lp->addindconstr($indconstr);
}
################################################################################


################################################################################
# write optimization problem to file
################################################################################
my $filename = "/tmp/myCPLEX_indicator.lp";
print "INFO: going to write lp-file '$filename'\n";
die "ERROR: writeprob() failed\n" unless $lp->writeprob($filename);
################################################################################

################################################################################
# optimize
################################################################################
die "ERROR:  mipopt() failed\n" unless $lp->mipopt();
################################################################################

################################################################################
# check status of optimization
################################################################################
print "INFO: getstat returned: ", $lp->getstat(), "\n";
################################################################################

################################################################################
# retrieve computed solution
################################################################################
if( $lp->getstat() == &Math::CPLEX::Base::CPXMIP_OPTIMAL )
{
   my ($sol_status, $obj_val, @vals) = $lp->solution();
   if( defined $sol_status )
   {
      print "INFO: solution() was successful: sol_status=$sol_status obj_val=$obj_val\n";
      print "                                 vals=@vals\n";
   }
   else
   {
      die "INFO: solution() failed\n";
   }

   #############################################################################

   #############################################################################
   # write solution to file
   #############################################################################
   print "INFO: writing solution to '/tmp/lp_solution.txt'\n";
   die "ERROR: solwrite() failed\n" unless $lp->solwrite("/tmp/lp_solution_indicator.txt");
   #############################################################################
}
else
{
   die "ERROR: CPLEX didn't find optimal solution\n";
}

################################################################################
# retrieve solution info
################################################################################
my @solinfo = $lp->solninfo();
print "solution info: @solinfo\n";
################################################################################

################################################################################
# free problem resources
################################################################################
die "ERROR: freeOP() failed\n" unless $lp->free();
################################################################################

################################################################################
# close CPLEX environment
################################################################################
die "ERROR: closeCPLEX() failed\n" unless $cplex_env->close();
################################################################################
