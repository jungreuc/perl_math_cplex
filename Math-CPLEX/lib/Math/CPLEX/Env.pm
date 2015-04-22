package Math::CPLEX::Env;

use 5.000000;
use strict;
use warnings;

use Carp;
use Math::CPLEX::Base;
use Math::CPLEX::OP;
# require Exporter;

our @ISA = qw(Exporter);
our $AUTOLOAD;
our $VERSION = '0.02';

# our %EXPORT_TAGS = ( 'all' => [ qw( ) ] );
# our @EXPORT_OK = ( @{ $EXPORT_TAGS{'all'} } );
# our @EXPORT = ( );

###############################################################################
# create a new Perl Math::CPLEX::Env object and get CPLEX environment
###############################################################################
sub new
{
   my $class = shift;
   my $self  = {};
   my $whoami = _whoami();

   # check if new() was not called for an already existing CPLEX environment
   croak "$whoami: It seems that new() was already called for this object" if ref($class);

   $self->{cplex_env} = Math::CPLEX::Base::_openCPLEX();

   # check if we could obtained a valid CPLEX environment
   # and return 'undef' if we didn't
   return undef unless $self->{cplex_env};

   $self = bless $self, $class;
   return $self;
}
###############################################################################

###############################################################################
# close open CPLEX environment
###############################################################################
sub close
{
   my $self = shift;
   my $whoami = _whoami();

   croak "$whoami: invalid object" unless ref($self) && $self->isa(__PACKAGE__);

   # free all attached Linear Programs
   foreach my $lp (@{$self->{lps}})
   {
      $lp->free() if defined $lp;
   }

   if( $self->{cplex_env} )
   {
      unless( Math::CPLEX::Base::_closeCPLEX($self->{cplex_env}) )
      {
         carp "$whoami: Closing CPLEX environment falied.\n";
      }
      delete $self->{cplex_env};
      return 1;
   }
   else
   {
      carp "$whoami: There exists no valid CPLEX environment to be closed.";
      return undef;
   }
}
###############################################################################


###############################################################################
###############################################################################
sub createOP
{
   my $self = shift;
   my $name = shift || 'perlOP';
   my $lp;
   my $whoami = _whoami();

   # check if createOP was called via an ENV package
   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $lp = Math::CPLEX::OP->new($self, $name) )
   {
      carp "$whoami: creating optimization problem failed";
      return undef;
   }

   push @{$self->{lps}}, $lp;

   return $lp;
}
###############################################################################


###############################################################################
###############################################################################
sub version
{
   my ($self) = @_;
   my $ret;
   my $whoami = _whoami();

   # do some checks
   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   return Math::CPLEX::Base::_version($self->{cplex_env});
}
###############################################################################


###############################################################################
###############################################################################
sub setdefaults
{
   my ($self) = @_;
   my $ret;
   my $whoami = _whoami();

   # do some checks
   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: CPLEX environment not found" unless defined $self->{cplex_env};

   if( $ret = Math::CPLEX::Base::_setdefaults($self->{cplex_env}) )
   {
      warn "$whoami: setting parameters to default values failed. Error code: $ret\n";
   }

   return $ret;
}
###############################################################################


###############################################################################
###############################################################################
sub setstrparam
{
   my ($self, $what, $to) = @_;
   my $ret;
   my $whoami = _whoami();

   # do some checks
   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: parameter to be set is missing" unless $what;
   croak "$whoami: value to be set is missing" unless defined $to;
   croak "$whoami: CPLEX environment not found" unless defined $self->{cplex_env};

   if( $ret = Math::CPLEX::Base::_setstrparam($self->{cplex_env}, $what, $to) )
   {
      warn "$whoami: setting parameter $what to $to failed. Error code: $ret\n";
   }

   return $ret;
}
###############################################################################


###############################################################################
###############################################################################
sub setintparam
{
   my ($self, $what, $to) = @_;
   my $ret;
   my $whoami = _whoami();

   # do some checks
   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: parameter to be set is missing" unless $what;
   croak "$whoami: value to be set is missing" unless defined $to;
   croak "$whoami: CPLEX environment not found" unless defined $self->{cplex_env};

   if( $ret = Math::CPLEX::Base::_setintparam($self->{cplex_env}, $what, $to) )
   {
      warn "$whoami: setting parameter $what to $to failed. Error code: $ret\n";
   }

   return $ret;
}
###############################################################################


###############################################################################
###############################################################################
sub setlongparam
{
   my ($self, $what, $to) = @_;
   my $ret;
   my $whoami = _whoami();

   # do some checks
   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: parameter to be set is missing" unless $what;
   croak "$whoami: value to be set is missing" unless $to;
   croak "$whoami: CPLEX environment not found" unless defined $self->{cplex_env};

   if( $ret = Math::CPLEX::Base::_setlongparam($self->{cplex_env}, $what, $to) )
   {
      warn "$whoami: setting parameter $what to $to failed. Error code: $ret\n";
   }

   return $ret;
}
###############################################################################


###############################################################################
###############################################################################
sub getlongparam
{
   my ($self, $what ) = @_;
   my $ret;
   my $whoami = _whoami();

   # do some checks
   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: parameter to be set is missing" unless $what;
   croak "$whoami: CPLEX environment not found" unless defined $self->{cplex_env};

   unless( $ret = Math::CPLEX::Base::_getlongparam($self->{cplex_env}, $what) )
   {
      warn "$whoami: getting parameter $what failed.\n";
   }
   return $ret;
}
###############################################################################


###############################################################################
###############################################################################
sub getstrparam
{
   my ($self, $what ) = @_;
   my $ret;
   my $whoami = _whoami();

   # do some checks
   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: parameter to be set is missing" unless $what;
   croak "$whoami: CPLEX environment not found" unless defined $self->{cplex_env};

   unless( $ret = Math::CPLEX::Base::_getstrparam($self->{cplex_env}, $what) )
   {
      warn "$whoami: getting parameter $what failed.\n";
   }
   return $ret;
}
###############################################################################


###############################################################################
###############################################################################
sub getintparam
{
   my ($self, $what ) = @_;
   my $ret;
   my $whoami = _whoami();

   # do some checks
   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: parameter to be set is missing" unless $what;
   croak "$whoami: CPLEX environment not found" unless defined $self->{cplex_env};

   unless( $ret = Math::CPLEX::Base::_getintparam($self->{cplex_env}, $what) )
   {
      warn "$whoami: getting parameter $what failed.\n";
   }
   return $ret;
}
###############################################################################


###############################################################################
###############################################################################
sub setdblparam
{
   my ($self, $what, $to) = @_;
   my $ret;
   my $whoami = _whoami();

   # do some checks
   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: parameter to be set is missing" unless $what;
   croak "$whoami: value to be set is missing" unless defined $to;
   croak "$whoami: CPLEX environment not found" unless defined $self->{cplex_env};

   if( $ret = Math::CPLEX::Base::_setdblparam($self->{cplex_env}, $what, $to) )
   {
      warn "$whoami: setting parameter $what to $to failed. Error code: $ret\n";
   }

   return $ret;
}
###############################################################################


###############################################################################
###############################################################################
sub getdblparam
{
   my ($self, $what ) = @_;
   my $ret;
   my $whoami = _whoami();

   # do some checks
   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: parameter to be set is missing" unless $what;
   croak "$whoami: CPLEX environment not found" unless defined $self->{cplex_env};

   unless( $ret = Math::CPLEX::Base::_getdblparam($self->{cplex_env}, $what) )
   {
      warn "$whoami: getting parameter $what failed.\n";
   }
   return $ret;
}
###############################################################################


###############################################################################
###############################################################################
sub writeparams
{
   my ($self, $filename ) = @_;
   my $whoami = _whoami();

   # do some checks
   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: filename was missing" unless $filename;
   croak "$whoami: CPLEX environment not found" unless defined $self->{cplex_env};

   Math::CPLEX::Base::_writeparams($self->{cplex_env}, $filename);
}
###############################################################################


###############################################################################
###############################################################################
sub getEnv
{
   my ($self) = @_;
   my $whoami = _whoami();

   # do some checks
   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: there is no valid CPLEX environment" unless defined $self->{cplex_env};

   return $self->{cplex_env};
}
###############################################################################


###############################################################################
###############################################################################
sub _deleteOPEntry
{
   my $self = shift;
   my $lp   = shift;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   my $i = 0;

   while( $i < @{$self->{lps}} )
   {
      if( not defined $self->{lps}[$i] )
      {
         splice @{$self->{lps}}, $i, 1;
      }
      elsif( $lp == $self->{lps}[$i] )
      {
         splice @{$self->{lps}}, $i, 1;
      }
      else
      {
         $i++;
      }
   }
}
###############################################################################


###############################################################################
###############################################################################
sub _whoami
{
   ( caller(1) )[3]
}
###############################################################################


###############################################################################
###############################################################################
sub DESTROY
{
   my $self = shift;

   $self->close() if defined $self->{cplex_env};
}
###############################################################################

1;

__END__

=head1 NAME

Math::CPLEX::Env - Perl extension to create, modify, use, and
close CPLEX environment objects.

=head1 SYNOPSIS

  use Math::CPLEX::Env;
  use Math::CPLEX::Base;

  # create new CPLEX environment object
  $cplex_env = Math::CPLEX::Env->new();

  # get CPLEX version
  $version = $cplex_env->version();

  # set a CPLEX double parameter (mip gap to 1e-7)
  $cplex_env->setdblparam(&Math::CPLEX::Base::CPX_PARAM_EPAGAP, 1e-7)

  # get a CPLEX double parameter
  $mip_gap = $cplex_env->getdblparam(&Math::CPLEX::Base::CPX_PARAM_EPAGAP);

  # set a CPLEX int parameter (number of used threads to 3)
  $cplex_env->setintparam(&Math::CPLEX::Base::CPX_PARAM_THREADS, 3)

  # get a CPLEX int parameter
  $num_threads = $cplex_env->getintparam(&Math::CPLEX::Base::CPX_PARAM_THREADS);

  # create a new optimization problem programming object
  $lp = $cplex_env->createOP();

  # write non-default CPLEX parameters to file
  $cplex_env->writeparams("/tmp/cplex_param.txt");

  # close CPLEX environment
  $cplex_env->close();


=head1 DESCRIPTION

C<Math::CPLEX::Env> uses methods of the module C<Math::CPLEX::Base> to communicate
with the CPLEX C library. In general C<Math::CPLEX::Env> allows to
create a new CPLEX environment, to set and get environment parameters, 
and write the current settings to a file.
The definition and optimization of the actual optimization problem
is done via the C<Math::CPLEX::OP> module. An instance of a C<Math::CPLEX::OP> 
object is obtained via C<Math::CPLEX::Env>'s C<createOP()> method.

=head2 EXPORT

None by default.

=head2 new

Create a new C<Math::CPLEX::Env> object. Returns C<undef> if create the CPLEX
environment failes.

   $cplex_env = Math::CPLEX::Env->new();

=head2 close

Close CPLEX environment and free used CPLEX resources. The method C<close()>
frees all optimization problems that were created via C<createOP()>.
Returns C<undef> if closing the CPLEX environment fails.

   $cplex_env->close();

=head2 createOP

Obtain a new C<Math::CPLEX::OP> object which is used to set, modify, solve and remove
a CPLEX optimization problem. Returns C<undef> if creating the optimization problem fails.

   $op = $cplex_env->createOP();

=head2 version

Get CPLEX version. Returns a string contain the version if successful, otherwise C<undef>.

   $version = $cplex_env->version();

=head2 setdefaults

Set all CPLEX parameters to their default values. Returns the CPLEX error code in the
case of an error. Returns C<undef> if successful.

   $cplex_env->setdefaults();

=head2 setdblparam

Set a C<double> CPLEX parameter. Returns C<undef> if successful, otherwise
the CPLEX error code.

   $cplex_env->setdblparam(&Math::CPLEX::Base::CPX_PARAM_EPAGAP, 1e-7)

=head2 getdblparam

Get a C<double> CPLEX parameter. Returns the retrieved parameter if successful.
Returns C<undef> in case of an error.

   my $dbl_param = $cplex_env->getdblparam(&Math::CPLEX::Base::CPX_PARAM_EPAGAP);

=head2 setintparam

Set an integer CPLEX parameter. Returns C<undef> if successful, otherwise
the CPLEX error code.

   $cplex_env->setintparam(&Math::CPLEX::Base::CPX_PARAM_THREADS, 3);

=head2 getintparam

Get an integer CPLEX parameter. Returns the retrieved parameter if successful.
Returns C<undef> in case of an error.

   my $num_threads = $cplex_env->getintparam(&Math::CPLEX::Base::CPX_PARAM_THREADS);

=head2 setlongparam

Set a long integer CPLEX parameter. Returns C<undef> if successful, otherwise
the CPLEX error code.

   $cplex_env->setlongparam(&Math::CPLEX::Base::CPX_PARAM_ITLIM, 1000000000000);

=head2 getlongparam

Get a long integer CPLEX parameter. Returns the retrieved parameter if successful.
Returns C<undef> in case of an error.

   my $max_iterations = $cplex_env->getlongparam(&Math::CPLEX::Base::CPX_PARAM_ITLIM);

=head2 setstrparam

Set a string CPLEX parameter. Returns C<undef> if successful, otherwise
the CPLEX error code.

   $cplex_env->setstrparam(&Math::CPLEX::Base::CPX_PARAM_WORKDIR, "/tmp");

=head2 getstrparam

Get a string CPLEX parameter. Returns the retrieved parameter if successful.
Returns C<undef> in case of an error.

   my $working_dir = $cplex_env->getstrparam(&Math::CPLEX::Base::CPX_PARAM_WORKDIR);

=head2 writeparams

Write all non-default parameters to a text file. C<writeparams> takes as input the name
of the file to be written. Returns C<1> if successful, otherwise C<undef>.

   $cplex_env->writeparams("/tmp/cplex_params.txt");

The content of the file C</tmp/cplex_params.txt> might looks as follows:

   \CPLEX Parameter File Version 12.5.0.0
   CPX_PARAM_ITLIM                  1000000000000
   CPX_PARAM_WORKDIR                "/tmp"
   CPX_PARAM_THREADS                3
   CPX_PARAM_EPAGAP                 1.00000000000000e-07

Note that all default parameters are not written to the file.

=head2 CPLEX constants

CPLEX heavily uses constants, e.g. for setting and getting parameters and for
evaluating the status of an optimization. C<Math::CPLEX> allows to access
these constants via methods that are provided by an C<AUTOLOAD> function
of the module C<Math::CPLEX::Base>.
Hence, constants can be accessed as follows:

   my $val_unbounded  = &Math::CPLEX::Base::CPX_INFBOUND;
   my $opti_mip_state = Math::CPLEX::Base::CPXMIP_OPTIMAL();

=head1 SEE ALSO

Valuable information about the supported CPLEX functions can be found in
the CPLEX documentation.

=head1 AUTHOR

Christian Jungreuthmayer, E<lt>christian.jungreuthmayer@boku.ac.atE<gt>

=head1 COPYRIGHT AND LICENSE

Copyright (C) 2013,2014 by Christian Jungreuthmayer

This library is free software; you can redistribute it and/or modify
it under the same terms as Perl itself, either Perl version 5.14.2 or,
at your option, any later version of Perl 5 you may have available.


=cut
