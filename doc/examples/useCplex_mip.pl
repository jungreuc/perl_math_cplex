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
# access some of CPLEX constants
################################################################################
my $param1 = &Math::CPLEX::Base::CPX_INFBOUND;
print "CPX_INFBOUND= $param1\n";

my $param2 = &Math::CPLEX::Base::CPX_BIGINT;
print "CPX_BIGINT: $param2\n";

my $cplex_unbounded = &Math::CPLEX::Base::CPX_INFBOUND;
################################################################################


################################################################################
# get a CPLEX environment and print the CPLEX version
################################################################################
my $cplex_env = Math::CPLEX::Env->new();
die "ERROR: openCPLEX() failed!" unless $cplex_env;

my $version = $cplex_env->version();
print "CPLEX Version: $version\n";
################################################################################

################################################################################
# set and get some CPLEX parameter (int/long/double/string)
################################################################################
print "CPX_PARAM_THREADS: ", &Math::CPLEX::Base::CPX_PARAM_THREADS, "\n";
if( $cplex_env->setintparam(&Math::CPLEX::Base::CPX_PARAM_THREADS, 3) )
{
   die "setting parameter ". &Math::CPLEX::Base::CPX_PARAM_THREADS, " to 3 failed\n";
}
print "number of threads: ", $cplex_env->getintparam(&Math::CPLEX::Base::CPX_PARAM_THREADS), "\n";

print "CPX_PARAM_ITLIM: ", &Math::CPLEX::Base::CPX_PARAM_ITLIM, "\n";
if( $cplex_env->setlongparam(&Math::CPLEX::Base::CPX_PARAM_ITLIM, 1000000000000) )
{
   die "setting parameter ". &Math::CPLEX::Base::CPX_PARAM_ITLIM, " to 3 failed\n";
}
print "iteratiom limit: ", $cplex_env->getlongparam(&Math::CPLEX::Base::CPX_PARAM_ITLIM), "\n";

print "CPX_PARAM_EPAGAP: ", &Math::CPLEX::Base::CPX_PARAM_EPAGAP, "\n";
if( $cplex_env->setdblparam(&Math::CPLEX::Base::CPX_PARAM_EPAGAP, 1e-7) )
{
   die "setting parameter ". &Math::CPLEX::Base::CPX_PARAM_EPAGAP, " to 1e-7 failed\n";
}
print "MIP GAP: ", $cplex_env->getdblparam(&Math::CPLEX::Base::CPX_PARAM_EPAGAP), "\n";

print "CPX_STR_PARAM_MAX: ", &Math::CPLEX::Base::CPX_STR_PARAM_MAX, "\n";
print "CPX_PARAM_WORKDIR: ", &Math::CPLEX::Base::CPX_PARAM_WORKDIR, "\n";
if( $cplex_env->setstrparam(&Math::CPLEX::Base::CPX_PARAM_WORKDIR, "/tmp") )
{
   die "setting parameter ". &Math::CPLEX::Base::CPX_PARAM_WORKDIR, " to '/tmp' failed\n";
}
print "working directory: ", $cplex_env->getstrparam(&Math::CPLEX::Base::CPX_PARAM_WORKDIR), "\n";
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
my $cols = { num_cols  => 3,
             obj_coefs => [ 1.0,  0.5,  0.3],
             lower_bnd => [ 0.0,  1.0,  0.0],
             upper_bnd => [10.0,  9.0,  1.0],
             col_types => [ 'C',  'I',  'B'],
             col_names => ['c1', 'c2', 'c3']};
die "ERROR: newcols() failed\n" unless $lp->newcols( $cols );


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

die "ERROR: addrows() failed\n" unless $lp->addrows($rows);
################################################################################


################################################################################
# write optimization problem to file
################################################################################
my $filename = "/tmp/myCPLEX1.lp";
print "INFO: going to write lp-file '$filename'\n";
die "ERROR: writeprob() failed\n" unless $lp->writeprob($filename);
################################################################################

################################################################################
# use some of the supported get methods
################################################################################
print "number of rows: ",$lp->getnumrows(),"\n";
print "number of cols: ",$lp->getnumcols(),"\n";
print "number of bins: ",$lp->getnumbin(),"\n";
print "number of ints: ",$lp->getnumint(),"\n";
print "number of non-zeros: ",$lp->getnumnz(),"\n";
print "objective sense: ",$lp->getobjsen(),"\n";
################################################################################

################################################################################
# write non-default CPLEX parameters to file
################################################################################
$filename = "/tmp/myCPLEX2.params";
print "INFO: going to write CPLEX parameter to '$filename'\n";
die "ERROR: writeparams() failed\n" unless $cplex_env->writeparams($filename);
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
   die "ERROR: solwrite() failed\n" unless $lp->solwrite("/tmp/lp_solution.txt");
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
# add two new columns to to system
################################################################################
my $obj_coefs = [-0.3, 1.7];
my $lower_bnd = [0.7, 0.3];
my $upper_bnd = [$cplex_unbounded, 7.7];
my $col_names = ['newc1', 'newc2'];
my $col_coefs = [ [-0.2,  0.6],
                  [ 1.4,  1.1],
                  [ 0.5, -0.8]];
my $newcols;
$newcols = {num_cols  => 2,
            obj_coefs => $obj_coefs,
            col_coefs => $col_coefs,
            lower_bnd => $lower_bnd,
            upper_bnd => $upper_bnd,
            col_names => $col_names,};
die "ERROR: addcols() failed\n" unless $lp->addcols($newcols);
################################################################################

################################################################################
# change bound of columns
################################################################################
# change lower bound of second column
my $new_lower_bounds = [undef, 0.2];
# change lower bound of first and third column
my $new_upper_bounds = [2.5, undef, 3.1415926];
die "ERROR: chglbs() failed\n" unless $lp->chglbs($new_lower_bounds);
die "ERROR: chgubs() failed\n" unless $lp->chgubs($new_upper_bounds);
################################################################################

################################################################################
# modify optimization problem using supported chgXXX methods
################################################################################
my $newrhs->[1] = 6.66;
die "ERROR: chgrhs() failed\n" unless $lp->chgrhs($newrhs);

my $newctype = ['B', undef , 'C'];
die "ERROR: chgcypte() failed\n" unless $lp->chgctype($newctype);

my $newsense;
$newsense->[0] = 'E';
$newsense->[1] = 'E';
$newsense->[2] = 'E';
die "ERROR: chgsense() failed\n" unless $lp->chgsense($newsense);

my $newobjcoef->[0] = -0.1111111;
die "ERROR: chgobj() failed\n" unless $lp->chgobj($newobjcoef);
################################################################################

################################################################################
# write modified problem to file
################################################################################
$filename = "/tmp/myCPLEX2.lp";
print "INFO: going to write lp-file '$filename'\n";
die "ERROR: writeprob() failed\n" unless $lp->writeprob($filename);
################################################################################

################################################################################
# modify optimization problem
################################################################################
# delete the second column of system
$lp->delcols(1,1);
# delete the first row of system
$lp->delrows(0,0);
################################################################################

################################################################################
# write modified problem to file
################################################################################
$filename = "/tmp/myCPLEX3.lp";
print "INFO: going to write lp-file '$filename'\n";
die "ERROR: writeprob() failed\n" unless $lp->writeprob($filename);
################################################################################

################################################################################
# reset parameter settings
################################################################################
die "ERROR: setdefaults() failed\n" if $cplex_env->setdefaults();
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
