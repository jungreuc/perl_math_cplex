#! /usr/bin/perl
################################################################################
################################################################################
# Author:  Christian Jungreuthmayer
# Date:    Fri Oct 25 13:41:39 CEST 2013
# Company: Austrian Centre of Industrial Biotechnology (ACIB)
################################################################################

use strict;
use warnings;

use Math::CPLEX::Env;
use Math::CPLEX::Base;

################################################################################
# get a CPLEX environment and print the CPLEX version
################################################################################
my $cplex_env = Math::CPLEX::Env->new();
die "ERROR: openCPLEX() failed!" unless $cplex_env;
################################################################################

################################################################################
################################################################################
$cplex_env->setdblparam(&Math::CPLEX::Base::CPX_PARAM_SOLNPOOLAGAP,0.1);
$cplex_env->setdblparam(&Math::CPLEX::Base::CPX_PARAM_SOLNPOOLGAP,1e-05);
$cplex_env->setintparam(&Math::CPLEX::Base::CPX_PARAM_SOLNPOOLINTENSITY,4);
$cplex_env->setintparam(&Math::CPLEX::Base::CPX_PARAM_SOLNPOOLCAPACITY ,10000);
$cplex_env->setintparam(&Math::CPLEX::Base::CPX_PARAM_POPULATELIM ,10000);
print "write parameters to '/tmp/populate_params.txt'\n";
$cplex_env->writeparams('/tmp/populate_params.txt');
################################################################################


################################################################################
# create a optimization problem
################################################################################
my $lp = $cplex_env->createOP();
die "ERROR: couldn't create Linear Program\n" unless $lp;
################################################################################


################################################################################
# set up the optimization problem
################################################################################
# we want to maximize our objective function
die "ERROR: maximize() failed\n" unless $lp->maximize();

# define columns
my $cols = {num_cols  => 10,
            obj_coefs => [ 1.0,  1.0,  1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, ],
            col_types => [ 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', ]};
die "ERROR: newCols() failed\n" unless $lp->newcols($cols);


# define rows
my $rhs       = [ 1.0, 2.0, 2.0, 4.0, 3.0, 2.0, 4.0, 4.0, 4.0, 2.0, 4.0 ];
my $sense     = [ 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L',];
my $row_coefs = [ [0,     0,     1,     0,     0,     0,     1,     0,     0,     0,],   # 2
                  [1,     1,     0,     0,     0,     0,     1,     0,     0,     0,],   # 3
                  [1,     0,     0,     0,     0,     1,     1,     0,     0,     0,],   # 3
                  [0,     0,     1,     0,     1,     1,     0,     1,     1,     0,],   # 5
                  [0,     0,     1,     1,     0,     0,     0,     1,     0,     1,],   # 4
                  [1,     0,     0,     0,     1,     0,     0,     0,     1,     0,],   # 3
                  [1,     1,     0,     1,     0,     0,     0,     1,     0,     1,],   # 5
                  [1,     0,     0,     1,     0,     1,     0,     1,     0,     1,],   # 5
                  [0,     1,     0,     0,     1,     1,     0,     1,     1,     0,],   # 5
                  [0,     1,     0,     0,     0,     1,     1,     0,     0,     0,],   # 3
                  [0,     1,     0,     1,     0,     1,     0,     1,     0,     1,],]; # 5

my $rows = { num_rows  => 11,
             rhs       => $rhs,
             sense     => $sense,
             row_coefs => $row_coefs};

die "ERROR: addrows() failed\n" unless $lp->addrows($rows);
################################################################################

################################################################################
# optimize
################################################################################
die "ERROR:  mippopulate() failed\n" unless $lp->populate();
################################################################################

################################################################################
# retrieve computed solution
################################################################################
my $first_obj_val;
my $num_sols = $lp->getsolnpoolnumsolns();
print "found $num_sols\n";
for( my $i = 0; $i < $num_sols; $i++ )
{
   my $obj_val = $lp->getsolnpoolobjval($i);
   $first_obj_val = $obj_val if $i == 0;

   my @vals = $lp->getsolnpoolx($i);
   print "   solution $i: obj_val: $obj_val, values: @vals\n" if $obj_val == $first_obj_val;
}
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
