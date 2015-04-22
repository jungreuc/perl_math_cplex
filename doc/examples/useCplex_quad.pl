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
################################################################################
my $cplex_env = Math::CPLEX::Env->new();
die "ERROR: openCPLEX() failed!" unless $cplex_env;
################################################################################

################################################################################
################################################################################
my $lp = $cplex_env->createOP();
die "ERROR: couldn't create Linear Program\n" unless $lp;
################################################################################


################################################################################
################################################################################
$cplex_env->setdblparam(&Math::CPLEX::Base::CPX_PARAM_BARQCPEPCOMP, 1e-12);
################################################################################


################################################################################
################################################################################
die "ERROR: maximize() failed\n" unless $lp->maximize();

my $unbounded = &Math::CPLEX::Base::CPX_INFBOUND;

my $cols = {num_cols  => 3,
            lower_bnd => [0],
            upper_bnd => [40],
            obj_coefs => [ 1, 2, 3]};
die "ERROR: newcols() failed\n" unless $lp->newcols($cols);


my $newRows = [[-1,  1,  1],
               [ 1, -3,  1]];
my $rows = {num_rows  => 2,
            rhs       => [20, 30],
            sense     => ['L', 'L'],
            row_coefs => $newRows};
die "ERROR: addrows() failed\n" unless $lp->addrows($rows);

# just set one single quadratic coefficient
my $row_idx = 1;
my $col_idx = 1;
my $new_val = -6;
die "ERROR: chgqpcoef() failed\n" unless $lp->chgqpcoef($row_idx, $col_idx, $new_val);

# set the entire quadratic coefficient matrix matrix
# we want to obtain the following objective function:
# x1 + 2 x2 + 3 x3 + [ - 33 x1 ^2 + 12 x1 * x2 - 22 x2 ^2 + 23 x2 * x3 - 11 x3 ^2 ] / 2
# enhane we need to set to coefficients for x1*x2 to 6 and for x2*x3 to 11.5!
my $quad_coef = [[-32.5,   6.0,   0.0],
                 [  6.0, -19.9,  11.5],
                 [  0.0,  11.5, -11.1]];
die "ERROR: setqpcoef() failed\n" unless $lp->setqpcoef($quad_coef);

$row_idx = 2;
$col_idx = 2;
my $coef = $lp->getqpcoef($row_idx, $col_idx);
die "ERROR: getqpcoef() failed\n" unless $coef;
print "objective coefficient at ($row_idx, $col_idx): $coef\n";

print "coef x1*x1: ", $lp->getqpcoef(0,0),"\n";
print "coef x2*x2: ", $lp->getqpcoef(1,1),"\n";
print "coef x3*x3: ", $lp->getqpcoef(2,2),"\n";
print "coef x1*x2: ", $lp->getqpcoef(0,1),"\n";
print "coef x2*x3: ", $lp->getqpcoef(1,2),"\n";
print "coef x2*x1: ", $lp->getqpcoef(1,0),"\n";
print "coef x3*x2: ", $lp->getqpcoef(2,1),"\n";
                 
################################################################################


################################################################################
################################################################################
my $filename = "/tmp/myCPLEX.lp";
print "INFO: going to write lp-file '$filename'\n";
die "ERROR: writeprob() failed\n" unless $lp->writeprob($filename);
################################################################################


################################################################################
################################################################################
die "ERROR: qppopt() failed\n" unless $lp->qpopt();
################################################################################

################################################################################
################################################################################
print "INFO: getstat returned: ", $lp->getstat(), "\n";

my ($sol_status, $obj_val, @vals) = $lp->solution();
die "ERROR: solution() failed\n" unless defined $sol_status;
print "obj_val=$obj_val values: @vals\n";
################################################################################

################################################################################
################################################################################
die "ERROR: free() failed\n" unless $lp->free();
die "ERROR: close() failed\n" unless $cplex_env->close();
################################################################################
