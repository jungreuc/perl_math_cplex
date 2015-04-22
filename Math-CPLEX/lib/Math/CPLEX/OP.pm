package Math::CPLEX::OP;

use 5.000000;
use strict;
use warnings;

use Carp;
use Math::CPLEX::Base;
# require Exporter;

our @ISA = qw(Exporter);
our $AUTOLOAD;
our $VERSION = '0.02';

# our %EXPORT_TAGS = ( 'all' => [ qw( ) ] );
# our @EXPORT_OK = ( @{ $EXPORT_TAGS{'all'} } );
# our @EXPORT = ( );

###############################################################################
# create a new Perl Math::CPLEX::OP object and get Linear Program
###############################################################################
sub new
{
   my $whoami = _whoami();
   my $class     = shift;
   my $cplex_env = shift || croak "$whoami: no CPLEX environment provided";
   my $lp_name   = shift || croak "$whoami: no OP name provided";
   my $self  = {};

   # check if new() was not called for an already existing CPLEX environment
   croak "$whoami: It seems that new() was already called for this object" if ref($class);

   # check if cplex_env is really of type Math::CPLEX::Env
   croak "$whoami: Passed parameter is not of type Math::CPLEX::Env: " . ref($cplex_env) if ref($cplex_env) ne 'Math::CPLEX::Env';

   $self->{lp} = Math::CPLEX::Base::_createOP($cplex_env->getEnv(), $lp_name);

   # check if we could obtained a valid CPLEX environment
   # and return 'undef' if we didn't
   return undef unless $self->{lp};

   $self->{cplex_env} = $cplex_env;
   $self->{lp_name}   = $lp_name;

   $self = bless $self, $class;
   return $self;
}
###############################################################################


###############################################################################
###############################################################################
sub minimize
{
   my $self = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   my $ret = Math::CPLEX::Base::_minimize($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub maximize
{
   my $self = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_maximize($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub writeprob
{
   my $self     = shift;
   my $filename = shift;
   my $format   = shift || 'LP';
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: filename was not provided" unless $filename;

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_writeprob($env, $self->{lp}, $filename, $format);
}
###############################################################################


###############################################################################
###############################################################################
sub solwrite
{
   my $self = shift;
   my $filename = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: filename was not provided" unless $filename;

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_solwrite($env, $self->{lp}, $filename);
}
###############################################################################


###############################################################################
###############################################################################
sub solwritesolnpool
{
   my $self    = shift;
   my $sol_num = shift;
   my $filename = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: solution number to be written to file not provided" unless $sol_num;
   croak "$whoami: filename was not provided" unless $filename;

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_solwritesolnpool($env, $self->{lp}, $sol_num, $filename);
}
###############################################################################


###############################################################################
###############################################################################
sub solwritesolnpoolall
{
   my $self = shift;
   my $filename = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: filename was not provided" unless $filename;

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_solwritesolnpoolall($env, $self->{lp}, $filename);
}
###############################################################################

###############################################################################
# free Linear Program
###############################################################################
sub free
{
   my $self = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();
   my $ret;

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   if( $cplex_obj = $self->{cplex_env} )
   {
      if( $env = $cplex_obj->getEnv() )
      {
         $ret = Math::CPLEX::Base::_freeOP($env, $self->{lp});
      }

      $cplex_obj->_deleteOPEntry($self);
   }

   delete $self->{lp};

   return $ret;
}
###############################################################################


###############################################################################
###############################################################################
sub newcols
{
   my $self      = shift;
   my $cols      = shift;
   my ($cplex_obj, $env);
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: data specifying columns not provided" unless $cols;
   croak "$whoami: column data is not stored in a HASH reference" unless ref($cols) eq 'HASH';

   my $num_elems = $cols->{num_cols};
   my $obj_coefs = $cols->{obj_coefs};
   my $lower_bnd = $cols->{lower_bnd};
   my $upper_bnd = $cols->{upper_bnd};
   my $col_types = $cols->{col_types};
   my $col_names = $cols->{col_names};

   croak "$whoami: number of new columns was not provided" unless defined $num_elems;

   if( ! defined $obj_coefs )
   {
      $obj_coefs = [];
   }
   elsif( ref $obj_coefs ne 'ARRAY' )
   {
      croak "$whoami: objective coefficients must be defined via an array reference";
   }

   if( ! defined $lower_bnd )
   {
      $lower_bnd = [];
   }
   elsif( ref $lower_bnd ne 'ARRAY' )
   {
      croak "$whoami: lower bounds must be defined via an array reference";
   }

   if( ! defined $upper_bnd )
   {
      $upper_bnd = [];
   }
   elsif( ref $upper_bnd ne 'ARRAY' )
   {
      croak "$whoami: upper bounds must be defined via an array reference";
   }

   if( ! defined $col_types )
   {
      $col_types = [];
   }
   elsif( ref $col_types ne 'ARRAY' )
   {
      croak "$whoami: column types must be defined via an array reference";
   }

   if( ! defined $col_names )
   {
      $col_names = [];
   }
   elsif( ref $col_names ne 'ARRAY' )
   {
      croak "$whoami: column names must be defined via an array reference";
   }

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_newcols($env, $self->{lp}, $num_elems, $obj_coefs, $lower_bnd, $upper_bnd, $col_types, $col_names);
}
###############################################################################


###############################################################################
###############################################################################
sub addrows
{
   my $self     = shift;
   my $rows     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: data specifying rows not provided" unless $rows;
   croak "$whoami: row data is not stored in a HASH reference" unless ref($rows) eq 'HASH';

   my $num_rows  = $rows->{num_rows};
   my $rhs       = $rows->{rhs};
   my $sense     = $rows->{sense};
   my $row_names = $rows->{row_names};
   my $row_coefs = $rows->{row_coefs};

   croak "$whoami: number of new rows was not provided" unless defined $num_rows;

   if( ! defined $rhs )
   {
      $rhs = [];
   }
   elsif( ref $rhs ne 'ARRAY' )
   {
      croak "$whoami: right hand side of rows must be defined via an array reference";
   }

   if( ! defined $sense )
   {
      $sense = [];
   }
   elsif( ref $sense ne 'ARRAY' )
   {
      croak "$whoami: row sense must be defined via an array reference";
   }

   if( ! defined $row_names )
   {
      $row_names = [];
   }
   elsif( ref $row_names ne 'ARRAY' )
   {
      croak "$whoami: row names must be defined via an array reference";
   }

   if( ! defined $row_coefs )
   {
      $row_coefs = [];
   }
   elsif( ref $row_coefs ne 'ARRAY' )
   {
      croak "$whoami: row coefficents must be defined via an array reference";
   }

   my $num_cols = $self->getnumcols();

   # check if system is OK for current task
   for( my $r = 0; $r < scalar(@$row_coefs); $r++ )
   {
      if( ! defined $row_coefs )
      {
         $row_coefs->[$r] = [];
      }
      elsif( ref $row_coefs->[$r] ne 'ARRAY' )
      {
         croak "$whoami: coefficents for row $r must be defined via an array reference";
      }

      croak "$whoami: number of columns ($num_cols) for row $r in optimization problem is less than in specified array (", scalar(@{$row_coefs->[$r]}), ")\n" if $num_cols < @{$row_coefs->[$r]};
   }

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_addrows($env, $self->{lp}, $num_rows, $rhs, $sense, $row_coefs, $row_names);
}
###############################################################################


###############################################################################
###############################################################################
sub chgctype
{
   my $self     = shift;
   my $newctype = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: data specifying new ctype value(s) not provided" unless $newctype;
   croak "$whoami: new ctype data is not stored in an ARRAY reference" unless ref($newctype) eq 'ARRAY';

   my $num_cols = $self->getnumcols();

   # check if system is OK for current task
   croak "$whoami: number of columns in optimization problem is less than in specified array\n" if $num_cols < @$newctype;

   # if we received an empty array then do nothing
   return 1 if @$newctype == 0;
   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_chgctype($env, $self->{lp}, $newctype);
}
###############################################################################


###############################################################################
###############################################################################
sub chglbs
{
   my $self      = shift;
   my $newbdsval = shift;
   my $newbdstyp = [];
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: data specifying new boundary values not provided" unless $newbdsval;
   croak "$whoami: new boundary value data are not stored in an ARRAY reference" unless ref($newbdsval) eq 'ARRAY';

   my $num_cols = $self->getnumcols();

   # check if system is OK for current task
   croak "$whoami: number of columns in optimization problem is less than in specified array\n" if $num_cols < @$newbdsval;

   # if we received an empty array then do nothing
   return 1 if @$newbdsval == 0;

   for( my $i = 0; $i < @$newbdsval; $i++ )
   {
      $newbdstyp->[$i] = 'L' if defined $newbdsval->[$i];
   }
   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_chgbds($env, $self->{lp}, $newbdstyp, $newbdsval);
}
#########################################################mx######################


###############################################################################
###############################################################################
sub chgubs
{
   my $self      = shift;
   my $newbdsval = shift;
   my $newbdstyp = [];
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: data specifying new boundary values not provided" unless $newbdsval;
   croak "$whoami: new boundary value data are not stored in an ARRAY reference" unless ref($newbdsval) eq 'ARRAY';

   my $num_cols = $self->getnumcols();

   # check if system is OK for current task
   croak "$whoami: number of columns in optimization problem is less than in specified array\n" if $num_cols < @$newbdsval;

   # if we received an empty array then do nothing
   return 1 if @$newbdsval == 0;

   for( my $i = 0; $i < @$newbdsval; $i++ )
   {
      $newbdstyp->[$i] = 'U' if defined $newbdsval->[$i];
   }
   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_chgbds($env, $self->{lp}, $newbdstyp, $newbdsval);
}
#########################################################mx######################


###############################################################################
###############################################################################
sub chgsense
{
   my $self     = shift;
   my $newsense = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: data specifying new sense value(s) not provided" unless $newsense;
   croak "$whoami: new sense data is not stored in an ARRAY reference" unless ref($newsense) eq 'ARRAY';

   my $num_rows = $self->getnumrows();

   # check if system is OK for current task
   croak "$whoami: number of rows in optimization problem is less than in specified array\n" if $num_rows < @$newsense;

   # if we received an empty array then do nothing
   return 1 if @$newsense == 0;
   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_chgsense($env, $self->{lp}, $newsense);
}
###############################################################################


###############################################################################
###############################################################################
sub chgrhs
{
   my $self   = shift;
   my $newrhs = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: data specifying new rhs value(s) not provided" unless $newrhs;
   croak "$whoami: new rhs data is not stored in an ARRAY reference" unless ref($newrhs) eq 'ARRAY';

   my $num_rows = $self->getnumrows();

   # check if system is OK for current task
   croak "$whoami: number of rows in optimization problem is less than in specified array\n" if $num_rows < @$newrhs;

   # if we received an empty array then do nothing
   return 1 if @$newrhs == 0;
   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_chgrhs($env, $self->{lp}, $newrhs);
}
###############################################################################


###############################################################################
###############################################################################
sub chgobj
{
   my $self   = shift;
   my $newobj = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: data specifying new objective coefficients not provided" unless $newobj;
   croak "$whoami: new objective coefficients are not stored in an ARRAY reference" unless ref($newobj) eq 'ARRAY';

   my $num_cols = $self->getnumcols();

   # check if system is OK for current task
   croak "$whoami: number of columns in optimization problem is less than in specified array\n" if $num_cols < @$newobj;

   # if we received an empty array then do nothing
   return 1 if @$newobj == 0;
   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_chgobj($env, $self->{lp}, $newobj);
}
###############################################################################


###############################################################################
###############################################################################
sub addcols
{
   my $self     = shift;
   my $newcols  = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: data specifying new columns not provided" unless $newcols;
   croak "$whoami: row data is not stored in a HASH reference" unless ref($newcols) eq 'HASH';

   my $num_cols  = $newcols->{num_cols};
   my $obj_coefs = $newcols->{obj_coefs};
   my $col_coefs = $newcols->{col_coefs};
   my $lower_bnd = $newcols->{lower_bnd};
   my $upper_bnd = $newcols->{upper_bnd};
   my $col_names = $newcols->{col_names};

   croak "$whoami: number of new columns was not provided" unless defined $num_cols;

   if( ! defined $obj_coefs )
   {
      $obj_coefs = [];
   }
   elsif( ref $obj_coefs ne 'ARRAY' )
   {
      croak "$whoami: objective coefficients of new columns must be defined via an array reference";
   }

   if( ! defined $col_coefs )
   {
      $col_coefs = [];
   }
   elsif( ref $col_coefs ne 'ARRAY' )
   {
      croak "$whoami: coefficients of new columns must be defined via an array reference";
   }

   if( ! defined $lower_bnd )
   {
      $lower_bnd = [];
   }
   elsif( ref $lower_bnd ne 'ARRAY' )
   {
      croak "$whoami: lower bounds of new columns must be defined via an array reference";
   }

   if( ! defined $upper_bnd )
   {
      $upper_bnd = [];
   }
   elsif( ref $upper_bnd ne 'ARRAY' )
   {
      croak "$whoami: upper bouns of new columns must be defined via an array reference";
   }

   if( ! defined $col_names )
   {
      $col_names = [];
   }
   elsif( ref $col_names ne 'ARRAY' )
   {
      croak "$whoami: names of new columns must be defined via an array reference";
   }

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   my $num_rows = $self->getnumrows();
   Math::CPLEX::Base::_addcols($env, $self->{lp}, $num_cols, $num_rows, $obj_coefs, $col_coefs, $lower_bnd, $upper_bnd, $col_names);
}
###############################################################################


###############################################################################
# note that first row has index 0
###############################################################################
sub delrows
{
   my $self      = shift;
   my $start_idx = shift;
   my $stop_idx  = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: start index of rows to be deleted not provided" unless defined $start_idx;
   croak "$whoami: stop index of rows to be deleted not provided" unless defined $stop_idx;

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_delrows($env, $self->{lp}, $start_idx, $stop_idx);
}
###############################################################################


###############################################################################
# note that first row has index 0
###############################################################################
sub delcols
{
   my $self      = shift;
   my $start_idx = shift;
   my $stop_idx  = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: start index of cols to be deleted not provided" unless defined $start_idx;
   croak "$whoami: stop index of cols to be deleted not provided" unless defined $stop_idx;

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_delcols($env, $self->{lp}, $start_idx, $stop_idx);
}
###############################################################################


###############################################################################
###############################################################################
sub mipopt
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_mipopt($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub lpopt
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_lpopt($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub primopt
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_primopt($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub baropt
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_baropt($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub dualopt
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_dualopt($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub qpopt
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_qpopt($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub populate
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_populate($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub getstat
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_getstat($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub getnumcols
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_getnumcols($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub getnumbin
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_getnumbin($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub getnumint
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_getnumint($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub getnumnz
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_getnumnz($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub getobjsen
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_getobjsen($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub getobjval
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_getobjval($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub getnumrows
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_getnumrows($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub getsolnpoolnumsolns
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_getsolnpoolnumsolns($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub getsolnpoolnumreplaced
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_getsolnpoolnumreplaced($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub getsolnpoolobjval
{
   my $self     = shift;
   my $sol_num  = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: number of solution not provided" unless defined $sol_num;

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_getsolnpoolobjval($env, $self->{lp}, $sol_num);
}
###############################################################################


###############################################################################
###############################################################################
sub solution
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }

   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   my $num_columns = $self->getnumcols();
   croak "$whoami: couldn't retrieved number of columns" unless $num_columns;

   return Math::CPLEX::Base::_solution($env, $self->{lp}, $num_columns);
}
###############################################################################


###############################################################################
###############################################################################
sub solninfo
{
   my $self     = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }

   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   return Math::CPLEX::Base::_solninfo($env, $self->{lp});
}
###############################################################################


###############################################################################
###############################################################################
sub getsolnpoolx
{
   my $self     = shift;
   my $sol_num  = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: number of solution not provided" unless defined $sol_num;

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }

   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   my $num_columns = $self->getnumcols();
   croak "$whoami: couldn't retrieved number of columns" unless $num_columns;

   return Math::CPLEX::Base::_getsolnpoolx($env, $self->{lp}, $sol_num, $num_columns);
}
###############################################################################


###############################################################################
# note that first row has index 0
###############################################################################
sub chgqpcoef
{
   my $self    = shift;
   my $row_idx = shift;
   my $col_idx = shift;
   my $new_val = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: row index was not provided"    unless defined $row_idx;
   croak "$whoami: column index was not provided" unless defined $col_idx;
   croak "$whoami: new value was not provided"    unless defined $new_val;

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   # print "$whoami: setting quadratic coefficient at ($row_idx,$col_idx) to $new_val\n";
   Math::CPLEX::Base::_chgqpcoef($env, $self->{lp}, $row_idx, $col_idx, $new_val);
}
###############################################################################


###############################################################################
###############################################################################
sub getqpcoef
{
   my $self    = shift;
   my $row_idx = shift;
   my $col_idx = shift;
   my $cplex_obj;
   my $env;
   my $ret;
   my $whoami = _whoami();

   # do some checks
   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: row index was not provided"    unless defined $row_idx;
   croak "$whoami: column index was not provided" unless defined $col_idx;

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   unless( $ret = Math::CPLEX::Base::_getqpcoef($env, $self->{lp}, $row_idx, $col_idx) )
   {
      warn "$whoami: get quadratic objective coefficient at ($row_idx,$col_idx) failed.\n";
   }
   return $ret;
}
###############################################################################


###############################################################################
###############################################################################
sub setqpcoef
{
   my $self     = shift;
   my $obj_coef = shift;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: objective values for quadratic problem not provided" unless defined $obj_coef;
   croak "$whoami: objective values for quadratic problem not provided via ARRAY reference" unless ref($obj_coef) eq 'ARRAY';

   my $num_cols = $self->getnumcols();

   for( my $c = 0; $c < $num_cols; $c++ )
   {
      for( my $r = 0; $r <= $c; $r++ )
      {
         if( $r == $c )
         {
            # quadratic term
            if( defined $obj_coef->[$r][$c] )
            {
               # print "$whoami: setting quadratic objective function ($r,$c) to $obj_coef->[$r][$c]";
               unless( $self->chgqpcoef($r, $c, $obj_coef->[$r][$c]) )
               {
                  croak "$whoami: setting quadratic objective function ($r,$c) to $obj_coef->[$r][$c] failed";
               }
            }
         }
         else
         {
            # mixed term of second order
            if( defined $obj_coef->[$r][$c] )
            {
               if( defined $obj_coef->[$c][$r] && $obj_coef->[$c][$r] != 0 && $obj_coef->[$c][$r] != $obj_coef->[$r][$c] )
               {
                  croak "$whoami: mixed coefficients at ($r,$c) and ($c,$r) differ.";
               }
               unless( $self->chgqpcoef($r, $c, $obj_coef->[$r][$c]) )
               {
                  croak "$whoami: setting mixed quadratic objective function ($r,$c) to $obj_coef->[$r][$c] failed";
               }
            }
         }
      }
   }

   return 1;
}
###############################################################################


###############################################################################
###############################################################################
sub addindconstr
{
   my $self     = shift;
   my $params   = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: data of indicator constraint not provided" unless defined $params;
   croak "$whoami: data of indicator constraint not provided via HASH reference" unless ref($params) eq 'HASH';

   my $indvar       = $params->{indvar};
   my $complemented = $params->{complemented} || 0;
   my $rhs          = $params->{rhs};
   my $sense        = $params->{sense};
   my $val          = $params->{val};
   my $name         = $params->{name};

   croak "$whoami: binary variable that acts as the indicator for this constraint not provided" unless defined $indvar;
   croak "$whoami: right hand side of constraint not provided" unless defined $rhs;
   croak "$whoami: sense of constraint not provided" unless defined $sense;
   croak "$whoami: constraint values not provided" unless defined $val;
   croak "$whoami: constraint values are not provided as ARRAY reference" unless ref($val) eq 'ARRAY';

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_addindconstr($env, $self->{lp}, $indvar, $complemented, $rhs, $sense, $val, $name);
}
###############################################################################


###############################################################################
###############################################################################
sub addqconstr
{
   my $self     = shift;
   my $params   = shift;
   my $cplex_obj;
   my $env;
   my $whoami = _whoami();

   croak "$whoami: was not called for a " . __PACKAGE__ . " object" unless ref($self) && $self->isa(__PACKAGE__);
   croak "$whoami: data of quadratic constraint not provided" unless defined $params;
   croak "$whoami: data of quadratic constraint not provided via HASH reference" unless ref($params) eq 'HASH';

   my $linear = $params->{linear};
   my $quad   = $params->{quad};
   my $rhs    = $params->{rhs};
   my $sense  = $params->{sense};
   my $name   = $params->{name};

   croak "$whoami: no data for quadratic part of constraint found" unless defined $quad;
   croak "$whoami: data for quadratic part of constraint found not provided via ARRAY reference" unless ref($quad) eq 'ARRAY';
   croak "$whoami: right hand side of new constraint not provided" unless defined $rhs;
   croak "$whoami: sense of new constraint not provided" unless defined $sense;

   my $num_cols = $self->getnumcols();

   croak "$whoami: number of rows in quadratic constraint matrix is larger than number of columns" if @$quad > $num_cols;

   for( my $r = 0; $r < @$quad; $r++ )
   {
      croak "$whoami: data for row $r of quadratic matrix not provided via ARRAY reference" unless ref($quad->[$r]) eq 'ARRAY';
      croak "$whoami: number of columns in rows $r in quadratic constraint matrix is larger than number of columns" if @{$quad->[$r]} > $num_cols;
   }

   unless( $self->{lp} )
   {
      carp "$whoami: There is no valid Linear Program to be closed.";
      return undef;
   }

   
   unless( $cplex_obj = $self->{cplex_env} )
   {
      carp "$whoami: Couldn't get Math::CPLEX::Env object.";
      return undef;
   }
   
   unless( $env = $cplex_obj->getEnv() )
   {
      carp "$whoami: Couldn't get CPELX environment.";
      return undef;
   }

   Math::CPLEX::Base::_addqconstr($env, $self->{lp}, $num_cols, $rhs, $sense, $name, $linear, $quad)
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

   # free Linear Program if it still exists
   $self->free() if $self->{lp};
}
###############################################################################


1;

__END__

=head1 NAME

Math::CPLEX::OP - Perl extension that allows to access some of CPLEX linear
(and quadratic) programming functions.

=head1 SYNOPSIS

  use Math::CPLEX::OP;
  use Math::CPLEX::Env;

  # first we need to create a Math::CPLEX::Env object to obtain a CPLEX environment object
  $cplex_env = Math::CPLEX::Env->new();

  # create a linear programming object
  $lp = $cplex_env->createOP();

  # define if we want to minimize or maximize the objective function
  $lp->maximize();

  # define columns and objective function of linear program to be solved
  $cols = { num_cols  => 3,
            obj_coefs => [ 1.0,  0.5,  0.3],
            lower_bnd => [ 0.0,  1.0,  0.0],
            upper_bnd => [10.0,  9.0,  1.0],
            col_types => [ 'C',  'I',  'B'],
            col_names => ['c1', 'c2', 'c3'] };
  $lp->newcols( $cols );

  # add rows of linear program
  $newRows->[0][0] = -0.3;
  $newRows->[0][2] =  1.3;
  $newRows->[1][0] =  0.7;
  $newRows->[1][1] = -1.3;
  $newRows->[1][2] =  2.9;
  $newRows->[2][1] =  2.0;
  $newRows->[2][2] = -3.1;
  $rows = {num_rows  => 3,
           rhs       => [0.25, 1.33, 0.8],
           sense     => ['L', 'E', 'G'],
           row_names => ["row1", "row2", "row3"],
           row_coefs => $newRows};
  $lp->addrows($rows);

  # write linear program to file
  $lp->writeprob("/tmp/linear_program.lp", "LP");

  # solve linear program
  $lp->mipopt();

  # get solution status
  $lp->getstat();

  # retrieve optimal solution
  ($sol_status, $obj_val, @vals) = $lp->solution();

  # write solution to file
  $lp->solwrite("/tmp/lp_solution.txt");

  # free linear programming object
  $lp->free();

  # close CPLEX environment
  $cplex_env->close();
  

=head1 DESCRIPTION

C<Math::CPLEX::OP> is used to create, modify, solve, and free linear programs using
CPLEX's C library. C<Math::CPLEX::OP> uses C<Math::CPLEX::Base> to communicate with the
CPLEX C library. CPLEX is a commerical linear programming toolkit made by IBM.
Naturally, CPLEX must be installed on your system if you
want to use C<Math::CPLEX::OP>, C<Math::CPLEX::Env>, or C<Math::CPLEX::Base>.
At the time of writing IBM offers free academic licenses for CPLEX.

=head2 EXPORT

None by default.

=head2 addcols

Add columns to optimization problem. The method assumes the data to be
passed in form of a hash reference. The method returns C<undef> if an
error occurs. The following example adds to columns to an existing
system.

   my $cplex_unbounded = &Math::CPLEX::Base::CPX_INFBOUND;
   my $obj_coefs = [-0.3, 1.7];
   my $lower_bnd = [0.7, 0.2];
   my $upper_bnd = [$cplex_unbounded, 7.8];
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
   $lp->addcols($newcols);

=head2 addindconstr

Add an indicator constraint to the system. An indicator constraint is a linear constraint that is enforced only: 
(a) when an associated binary variable takes a value of 1, or
(b) when an associated binary variable takes the value of 0 (zero) if the binary variable is complemented.

The linear constraint may be a less-than-or-equal-to constraint, a greater-than-or-equal-to constraint, or an equality constraint.

   use Math::CPLEX::Env;
   use Math::CPLEX::Base;

   my $cplex_env = Math::CPLEX::Env->new();
   my $lp = $cplex_env->createOP();

   $lp->minimize();

   # define columns
   my $cols = { num_cols  => 12,
                lower_bnd => [ 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
                upper_bnd => [ $cplex_unbounded, $cplex_unbounded, $cplex_unbounded, $cplex_unbounded, $cplex_unbounded, $cplex_unbounded, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0],
                obj_coefs => [ 0.0, 0.0, 0.0, 0.0, 0.0, 5.0, 1.0, 1.0, 1.0, 10.0, 1.0, 1.0],
                col_types => [ 'C', 'C', 'C', 'C', 'C', 'C', 'B', 'B', 'B', 'B', 'B', 'B'],
                col_names => ['x01', 'x02', 'x13', 'x14', 'x23', 'x24', 'f01', 'f02', 'f13', 'f14', 'f23', 'f24']};
   die "ERROR: newcols() failed\n" unless $lp->newcols( $cols );

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

   my $filename = "/tmp/myCPLEX_indicator.lp";
   print "INFO: going to write lp-file '$filename'\n";
   die "ERROR: writeprob() failed\n" unless $lp->writeprob($filename);

The above code results in the following linear program which is written to the file '/tmp/myCPLEX_indicator.lp':

   \ENCODING=ISO-8859-1
   \Problem name: indicatorOP

   Minimize
    obj: 5 x24 + f01 + f02 + f13 + 10 f14 + f23 + f24
   Subject To
    c1: - x01 - x02 >= -1000001
    c2: x01 - x13 - x14 >= 0
    c3: x02 - x23 - x24 >= 0
    c4: x13 + x23 >= 1000000
    c5: x14 + x24 >= 1
    indicator0: f01 = 0 -> x01 <= 0
    indicator1: f02 = 0 -> x02 <= 0
    indicator2: f13 = 0 -> x13 <= 0
    indicator3: f14 = 0 -> x14 <= 0
    indicator4: f23 = 0 -> x23 <= 0
    indicator5: f24 = 0 -> x24 <= 0
   Bounds
    0 <= f01 <= 1
    0 <= f02 <= 1
    0 <= f13 <= 1
    0 <= f14 <= 1
    0 <= f23 <= 1
    0 <= f24 <= 1
   Binaries
    f01  f02  f13  f14  f23  f24
   End



=head2 addqconstr

Add a constraint to the system that has a quadratic part.
The method assumes that the data are passed in form of a has reference.
The method returns C<undef> if an error occurred.
The quadratic constraint I<new_quad: - 3 x1 + 1.5 x2 - 7.2 x3 + [ 0  * x1 - 2 x1 ^2 + 1.8 x1 * x2 - 1.5 x2 ^2 + 2.2 x2 * x3 - 1.3 x3 ^2 ] E<gt> = 0.31415>
can be added to the system as follows:

   my $linval  = [-3.0,  1.5, -7.2];
   my $quadval = [[-2.0,  0.9,  0.0],
                  [ 0.9, -1.5,  1.1],
                  [ 0.0,  1.1, -1.3]];
   my $quad_constr = {linear => $linval,
                      rhs    => 0.31415,
                      sense  => 'G',
                      name   => 'new_quad',
                      quad   => $quadval};
   $lp->addqconstr($quad_constr);


=head2 addrows

Add rows to the optimization problem. The data are passed in form of a hash reference
to the method. The method returns C<undef> if an error occurred. Note that
only the non-zero elements of the rows must be defined in the passed array containing
the row coefficients (hash key: C<row_coefs>).

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
   $lp->addrows($rows);


=head2 baropt

Optimize a given problem (linear, quadratic, or quadratic constraint) using the barrier algorithm.
The method returns C<undef> if an error occurred.

   $lp->baropt();

=head2 chgctype

Change the type of columns. The method expects an array reference as input. Undefined values
in the array are ignored by C<chgctype>. CPLEX Version 12.5 supports the following column types:

   CPX_CONTINUOUS   'C'    continuous
   CPX_BINARY       'B'    binary
   CPX_INTEGER      'I'    integer
   CPX_SEMICONT     'S'    semi-continuous
   CPX_SEMIINT      'N'    semi-integer

In order to change the type of the first and the third column can be achieved as follows:

   my $newctype = ['B', undef , 'C'];
   $lp->chgctype($newctype);

=head2 chgobj

Change the coefficients of the objective functions. The method expects an array reference as input.
Undefined elements of the array are ignored by C<chgobj>. The method returns C<undef> if
an error occurs. In order to change the second and third coefficient of the
objective function the following code could be used:

   my $newobjcoef->[1] = -0.7;
   my $newobjcoef->[2] =  2.1;
   $lp->chgobj($newobjcoef);

=head2 chgqpcoef

Change the quadratic part of the objective function. The method expects three input parameters:
a) row index, b) column index, and c) new coefficient. Note that if the row index C<i>
is not equal to the column index C<j>, both values of the quadratix coefficient matrix
(C<Q(i,j)> and C<Q(j,i)>) are changed to the new value. The method returns C<undef>
if an error occured.

   # set the quadratic value of x1*x1 to -6
   my $row_idx = 1;
   my $col_idx = 1;
   my $new_val = -6;
   $lp->chgqpcoef($row_idx, $col_idx, $new_val);

   # set the mixed quadratic values of (2,3) and (3,2) to 4:
   $lp->chgqpcoef(2, 3, 5);
   

=head2 chgrhs

Change the right hand side (rhs) of a set of constraints. The method expects the data to
be passed in form of an array reference. Undefined values of the array
are ignored by C<chgrhs>. If an error occurred, the C<undef> value is returned.

   # system before changing the right hand side
   # cstr1: 3*x1 -2*x4 + 4x6 <= 4
   # cstr2: -2*x2 + 3*x3 + 4*x4 >= 3
   # cstr3: 2*x1 + 2.5*x5 -1.5*x6 = 2.5

   $newrhs->[0] = 2;
   $newrhs->[2] = 3;
   $lp->chgrhs($newrhs);

   # system after executing chgrhs()
   # cstr1: 3*x1 -2*x4 + 4x6 <= 2
   # cstr2: -2*x2 + 3*x3 + 4*x4 >= 3
   # cstr3: 2*x1 + 2.5*x5 -1.5*x6 = 3

=head2 chgsense

Change the sense of a set of constraints. The method expects the data to
be passed in form of an array reference. Undefined values of the array
are ignored by C<chgrhs>. If an error occurred, the C<undef> value is returned.

   # system before changing the right hand side
   # cstr1: 3*x1 -2*x4 + 4x6 <= 4
   # cstr2: -2*x2 + 3*x3 + 4*x4 >= 3
   # cstr3: 2*x1 + 2.5*x5 -1.5*x6 = 2.5

   $newsense->[0] = 'E';
   $newsense->[1] = 'L';
   $lp->chgrhs($newrhs);

   # system after executing chgrhs()
   # cstr1: 3*x1 -2*x4 + 4x6 = 4
   # cstr2: -2*x2 + 3*x3 + 4*x4 <= 3
   # cstr3: 2*x1 + 2.5*x5 -1.5*x6 = 2.5

The CPLEX Version 12.5 supports the following values for the sense
of a column:

    'L'     the new sense is <=
    'E'     the new sense is =
    'G'     the new sense is >=
    'R'     the constraint is ranged

=head2 chglbs

Change lower bounds of columns. The method expects the data to be passed
in form of an array reference. Undefined values of the array
are ignored by C<chglbs>. If an error occurred, the C<undef> value is returned.

    # change lower bound of second column
    my $new_lower_bounds = [undef, 0.2];
    die "ERROR: chglbs() failed\n" unless $lp->chglbs($new_lower_bounds);

=head2 chgubs

Change upper bounds of columns. The method expects the data to be passed
in form of an array reference. Undefined values of the array
are ignored by C<chglbs>. If an error occurred, the C<undef> value is returned.

    # change upper bound of first and third column
    my $new_upper_bounds = [2.5, undef, 3.1415926];
    die "ERROR: chgubs() failed\n" unless $lp->chgubs($new_upper_bounds);

=head2 delcols

The delete a continuous set of columns. The method expects two parameters:
a) the first index of the columns to be deleted and b) the last index of
the columns to be deleted. The method returns C<undef> if an error occurred.

   # delete the second column of a system
   $lp->delcols(1,1);

   # delete the second and the third column
   $lp->delcols(1,2);

=head2 delrows

The delete a continuous set of rows. The method expects two parameters:
a) the first index of the rows to be deleted and b) the last index of
the rows to be deleted. The method returns C<undef> if an error occurred.

   # delete the first row of a system
   $lp->delrows(0,0);

=head2 dualopt

Find a solution to a optimization problem using the dual simplex algorithm.
The method returns C<undef> if an error occurred.

   $lp->dualopt();

=head2 free

Free the resource allocated by an optimization problem. The method returns
C<undef> if an error occured.

   $lp->free();

=head2 getnumbin

Get the number of binary variables of the system. The method returns zero
if an error occurred.

   my $num_bin = $lp->getnumbin();

=head2 getnumcols

Get number of columns of the system. The method returns zero
if an error occurred.

   my $num_cols = $lp->getnumcols();

=head2 getnumint

Get number of integer variables of the system. The method returns zero
if an error occurred.

   my $num_int = $lp->getnumint();

=head2 getnumnz

Get number of non-zero elemens in the constraint matrix. The method returns zero
if an error occurred. Note that the returned value does not include the objective function,
quadratic constraints, or the bounds constraints on the variables. 

   my $num_nonzero_elems = $lp->getnumnz();

=head2 getnumrows

Get number of rows in the constraint matrix. Note that the returned value does not include
the objective function, quadratic constraints, or the bounds constraints on the variables.
The method returns zero if an error occurred.

   my $num_rows = $lp->getnumrows();

=head2 getobjsen

Get the objective sense of the problem (minimization or maximization).
The returned value is either: a) CPX_MIN=1 for minimization,
b) CPX_MAX=-1 for maximization, or c) 0 if a problem occurred.

   my $obj_sense = $lp->getobjsen();

=head2 getobjval

Get the objective value of the solution. Returns C<undef> if an error occurred.

   my $obj_val = $lp->getobjval();

=head2 getqpcoef

Get a coefficient in the quadratic coefficient matrix of a CPLEX problem.
The method expects two input parameters: a) the row index and c) the column.
The method returns 0 if an error occurred.

   # objective function: x1 + 2 x2 + 3 x3 + [ - 33 x1 ^2 + 12 x1 * x2 - 22 x2 ^2 + 23 x2 * x3 - 11 x3 ^2 ] / 2
   # linear part: [1, 2, 3]
   # quadratic part: [[-33.0,   6.0,   0.0],
   #                  [  6.0, -22.0,  11.5],
   #                  [  0.0,  11.5, -11.0]];

   # obtained value of quadratic coefficient for x3^2:
   $row_idx = 2;
   $col_idx = 2;
   my $coef = $lp->getqpcoef($row_idx, $col_idx);
   print "coef=$coef\n" # prints: coef=-11

   # obtained value of mixed quadratic coefficient x2*x3 which is 11.5
   print "coef x2*x3: ", $lp->getqpcoef(1,2),"\n";

=head2 getsolnpoolnumreplaced

Get the number of solutions replaced in the solution pool. Returns 0 if an error occurred.

   my $replaced = $lp->getsolnpoolnumreplaced();

=head2 getsolnpoolnumsolns

Get number of solutions in the solution pool. Returns 0 if an error occurred.

   my $num_sols = $lp->getsolnpoolnumsolns();

=head2 getsolnpoolobjval

Get the objective value of a solution in the solution pool.
The method expects one input paramter: the index of the objective value
to be retrieved.  An index value of -1 specifies that the incumbent should be used
instead of a solution pool member. The method returns C<undef> if an
error occurred.

   for( my $i = 0; $i < $lp->getsolnpoolnumsolns(); $i++ )
   {
      my $objval = $lp->getsolnpoolobjval($i);
      ...
   }

=head2 getsolnpoolx

Get the solution vector for a solution in the solution pool.
The method expects one input paramter: the index of the objective value
to be retrieved.  An index value of -1 specifies that the incumbent should be used
instead of a solution pool member. The method returns a list that
contains the values of the problem variables for the specified solution.
The method returns C<undef> if an error occurred.

   for( my $i = 0; $i < $lp->getsolnpoolnumsolns(); $i++ )
   {
      my @sol_vector = $lp->getsolnpoolx($i);
      ...
   }

=head2 getstat

Get the solution status of the problem after a linear, quadratic, quadratic constraint, or mixed integer
optimization. Returns zero if an error occurred.

   my $stat = $lp->getstat();

=head2 lpopt

Find the solution of a linear problem. The parameter CPX_PARAM_LPMETHOD controls the choice of optimizer
(dual simplex, primal simplex, barrier, network simplex, sifting, or concurrent optimization).
The method returns C<undef> if an error occurred.

   $lp->lpopt();

=head2 maximize

Tell CPLEX that the objective function needs to be maximized.

=head2 minimize

Tell CPLEX that the objective function needs to be minimized.

   $lp->minimize();

=head2 mipopt

Solve a mixed integer program (MIP). Note that even if all columns are defined
as continuous ('C'), CPLEX assumes that it deals with a MIP problem and requires
to use C<mipopt()>.

   $lp->mipopt();

=head2 new

C<new()> is the constructor of the module C<Math::CPLEX::OP>. It assumed that this method
is not directly called, but via the method C<createOP> of a C<Math::CPLEX::Env>
object. The method C<Math::CPLEX::Env::createOP> calls the constructor C<new> of
C<Math::CPLEX::OP>. The method returns C<undef> if not successful.

   my $cplex_env = Math::CPLEX::Env->new();
   my $lp = $cplex_env->createOP();

=head2 newcols

Define the columns of an optimization problem. Data are passed to C<newcols> 
as a hash reference. The method returns C<undef> if not successful.

   my $cols = {num_cols  => 2,
               obj_coefs => [ 0.6,  0.5]};
   $lp->newcols($cols);

The method C<newcols> supports the folloing parameters: C<num_cols>, C<obj_coefs>,
C<lower_bnd>, C<upper_bnd>, C<col_types>, and C<col_types>:   

   my $cols = { num_cols  => 3,
                obj_coefs => [ 1.0,  0.5,  0.3],
                lower_bnd => [ 0.0,  1.0,  0.0],
                upper_bnd => [10.0,  9.0,  1.0],
                col_types => [ 'C',  'I',  'B'],
                col_names => ['c1', 'c2', 'c3']};
   $lp->newcols( $cols );

=head2 populate

Execute the CPLEX populate solver. The populate feature allows to generate/enumerate
multiple solutions via a single function call. The method returns C<undef> if not successful.

   $lp->populate();

=head2 primopt

Execute the primal simplex method of CPLEX to find a solution for the optimization
problem. The method returns C<undef> if not successful.

   $lp->primopt();

=head2 qpopt

Execute the quadratic solver of CPLEX. The method returns C<undef> if not successful.

   $lp->qpopt();

=head2 setqpcoef

Set the quadratic part of the objective function. The method returns C<undef> if not successful.
In oder to obtain an objective function I<x1 + 2 x2 + 3 x3 + [ - 33 x1 ^2 + 12 x1 * x2 - 22 x2 ^2 + 23 x2 * x3 - 11 x3 ^2 ] / 2>,
the linear and the quadratic parts must be set in two steps. First, the linear part
of the objective function is set via the C<newcols()> methods. Second, the quadratic
part is set:

   # linear part
   my $cols = {num_cols  => 3,
               obj_coefs => [ 1, 2, 3]};
   $lp->newcols($cols);

   # quadratic part
   my $quad_coef = [[-33.0,   6.0,   0.0],
                    [  6.0, -22.0,  11.5],
                    [  0.0,  11.5, -11.0]];
   $lp->setqpcoef($quad_coef);

=head2 solninfo

Get the solution information. The solution information is produced by 
C<lpopt>, C<primopt>, C<dualopt>, C<mipopt>, C<qpopt>, and C<baropt>.
The method returns a list of for values which represent the solution method,
the solution type, a variable indicating if the current solution is known
to be primal feasible, and a variable indicating if the current solution
is known to be dual feasible. See the CPLEX documention for further details.
The method returns C<undef> if not successful. 

   ($solnmethod, $solntype, $pfeasind, $dfeasind) = $lp->solninfo();


=head2 solution

Obtain the current solution of a performed optimization procedure.
The method returns the solution status, the optimal objective value,
and the values of the variables of the optimized problem.

   ($sol_status, $obj_val, @vals) = $lp->solution();

=head2 solwrite

Write the current solution to a text file. The input parameter of C<solwrite>
is the name of the file to be written. The method returns C<undef> if an error occurred.

   $lp->solwrite("/tmp/lp_solution.txt");

The content of the text file might look as follows:

   <?xml version = "1.0" encoding="UTF-8" standalone="yes"?>
   <CPLEXSolution version="1.2">
    <header
      problemName="perlOP"
      solutionName="incumbent"
      solutionIndex="-1"
      objectiveValue="12.2"
      solutionTypeValue="3"
      solutionTypeString="primal"
      solutionStatusValue="101"
      solutionStatusString="integer optimal solution"
      solutionMethodString="mip"
      primalFeasible="1"
      dualFeasible="1"
      MIPNodes="0"
      MIPIterations="1"
      writeLevel="1"/>
    <quality
      epInt="1e-05"
      epRHS="1e-06"
      maxIntInfeas="0"
      maxPrimalInfeas="1.33226762955019e-15"
      maxX="8.9"
      maxSlack="8.1"/>
    <linearConstraints>
     <constraint name="row1" index="0" slack="1.62"/>
     <constraint name="row2" index="1" slack="1.33226762955019e-15"/>
     <constraint name="row3" index="2" slack="-8.1"/>
    </linearConstraints>
    <variables>
     <variable name="c1" index="0" value="8.9"/>
     <variable name="c2" index="1" value="6"/>
     <variable name="c3" index="2" value="1"/>
    </variables>
   </CPLEXSolution>

=head2 solwritesolnpool

Write a solution file, using either the incumbent solution or a solution from the solution pool.
The method takes two parameters: a) the solution index and b) the name of the file to be written.
The incumbent solution is written if the solution index -1 is passed to the method.
The method returns C<undef> if an error occurred.

   $sol_idx = 3;
   $lp->solwritesolnpool($sol_idx, "/tmp/solution_$sol_idx.txt");

=head2 solwritesolnpoolall

Write all solution from a solution pool to a file. The method takes a single parameter: the name
of the file to be written.

   $lp->solwritesolnpoolall($sol_idx, "/tmp/all_solutions.txt");
   

=head2 writeprob

Write the optimization problem to a text file. The first parameter specifies the filename,
the second parameter the file format. If no file format is given, an 'LP' file is written.
The method returns 1 if sucessful, otherwise C<undef>.

   $lp->writeprob("/tmp/linprob.mps","MPS")
   $lp->writeprob("/tmp/linprob.lp")

CPLEX Version 12.5 supports the following file formats:

   "SAV"  Binary SAV file  
   "MPS"  MPS format, original format  
   "LP"  CPLEX LP format, original format  
   "RMP"  MPS file, generic names  
   "REW"  MPS file, generic names  
   "RLP"  LP file, generic names  

=head1 Examples

=head2 Simple linear program

A simple linear program where all columns are of 'continuous' type.
In order to optimize the sytem, lpopt() can be used. Note that
CPLEX assumes that a mixed integer problem (MIP) has to be solve,
if the column type is explicitely specified - even if all of them
are defined as continuous, e.g. col_types => [ 'C',  'C',  'C'].
If CPLEX thinks it is dealing a MIP system, then C<lpopt()> is not good
enough and C<mipopt()> needs to be used.

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

   my $unbounded = &Math::CPLEX::Base::CPX_INFBOUND;

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
   ################################################################################

   ################################################################################
   ################################################################################
   die "ERROR: free() failed\n" unless $lp->free();
   die "ERROR: close() failed\n" unless $cplex_env->close();
   ################################################################################


=head2 Mixed Integer Linear Program

A simple MIP problem that accesses some of CPLEX constants, sets and gets
CPLEX parameters, uses several functions to modify the systems, and prints
the non-default CPLEX parameters to a file. Note that the method C<mipopt()>
needs be used to optimize a MIP problem.

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
   die "ERROR: CPLEX couldn't find optimal solution" unless $lp->getstat() == &Math::CPLEX::Base::CPXMIP_OPTIMAL;
   ################################################################################

   ################################################################################
   # retrieve computed solution
   ################################################################################
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
   ################################################################################

   ################################################################################
   # write solution to file
   ################################################################################
   print "INFO: writing solution to '/tmp/lp_solution.txt'\n";
   die "ERROR: solwrite() failed\n" unless $lp->solwrite("/tmp/lp_solution.txt");
   ################################################################################

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
   my $lower_bnd = [0.7, 0.2];
   my $upper_bnd = [$cplex_unbounded, 7.8];
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

=head2 Linear program that utilizes CPLEX populate feature

CPLEX I<populate> feature allows to generate/enumerate multiple solutions
with just one subroutine call.

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
   die "ERROR:  populate() failed\n" unless $lp->populate();
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


=head2 Optimization problem with a quadratic objective function

A small example of an optimization problem that uses a quadratic objective
function.

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
   my $quad_coef = [[-33.0,   6.0,   0.0],
                    [  6.0, -22.0,  11.5],
                    [  0.0,  11.5, -11.0]];
   die "ERROR: setqpcoef() failed\n" unless $lp->setqpcoef($quad_coef);

   my $coef = $lp->getqpcoef($row_idx, $col_idx);
   die "ERROR: getqpcoef() failed\n" unless $coef;
   print "objective coefficient at ($row_idx, $col_idx): $coef\n";
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



=head2 Optimization problem with a quadratic constraint

The following example uses a) a quadratic objective function and 
b) a quadratic constraint.

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

   # set the entire quadratic coefficient matrix matrix
   # we want to obtain the following objective function:
   # x1 + 2 x2 + 3 x3 + [ - 33 x1 ^2 + 12 x1 * x2 - 22 x2 ^2 + 23 x2 * x3 - 11 x3 ^2 ] / 2
   # enhane we need to set to coefficients for x1*x2 to 6 and for x2*x3 to 11.5!
   my $quad_coef = [[-33.0,   6.0,   0.0],
                    [  6.0, -22.0,  11.5],
                    [  0.0,  11.5, -11.0]];
   die "ERROR: setqpcoef() failed\n" unless $lp->setqpcoef($quad_coef);

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
   die "ERROR: addqconstr() failed\n" unless $lp->addqconstr($quad_constr);
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

=head1 SEE ALSO

Further information can be found in the CPLEX documentation.

=head1 AUTHOR

Christian Jungreuthmayer, E<lt>christian.jungreuthmayer@boku.ac.atE<gt>

=head1 COPYRIGHT AND LICENSE

Copyright (C) 2013,2014 by Christian Jungreuthmayer

This library is free software; you can redistribute it and/or modify
it under the same terms as Perl itself, either Perl version 5.14.2 or,
at your option, any later version of Perl 5 you may have available.


=cut
