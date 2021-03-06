#! /usr/bin/perl
################################################################################
################################################################################
# Author:  Christian Jungreuthmayer
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
die "ERROR: maximize() failed\n" unless $lp->maximize();

my $cols = {num_cols  => 2,
            obj_coefs => [ 0.6,  0.5]};
die "ERROR: newcols() failed\n" unless $lp->newcols($cols);


my $newRows;
$newRows->[0][0] = 1.0;
$newRows->[0][1] = 2.0;
$newRows->[1][0] = 3.0;
$newRows->[1][1] = 1.0;
my $rows = {num_rows  => 2,
            rhs       => [1.0, 2.0],
            sense     => ['L', 'L'],
            row_coefs => $newRows};

die "ERROR: addrows() failed\n" unless $lp->addrows($rows);
################################################################################


################################################################################
################################################################################
my $filename = "/tmp/myCPLEX.lp";
print "INFO: going to write lp-file '$filename'\n";
die "ERROR: writeprob() failed\n" unless $lp->writeprob($filename);
################################################################################

################################################################################
################################################################################
die "ERROR: lpopt() failed\n" unless $lp->lpopt();
################################################################################

################################################################################
################################################################################
print "INFO: getstat returned: ", $lp->getstat(), "\n";
die "ERROR: CPLEX couldn't find optimal solution" unless $lp->getstat() == &Math::CPLEX::Base::CPX_STAT_OPTIMAL;

my ($sol_status, $obj_val, @vals) = $lp->solution();
die "ERROR: solution() failed\n" unless defined $sol_status;
print "obj_val=$obj_val values: @vals\n";

my $obj_val2 = $lp->getobjval();
print "obj_val2=$obj_val2\n";
################################################################################


################################################################################
################################################################################
die "ERROR: free() failed\n" unless $lp->free();
die "ERROR: close() failed\n" unless $cplex_env->close();
################################################################################



