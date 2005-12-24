C 
C CPP flags controlling which code is included in the files that
C will be compiled.
C
C ********************************************************************
C ***                         ECCO Package                         ***
C ********************************************************************
C
#undef  ALLOW_ECCO_FORWARD_RUN
#undef  ALLOW_ECCO_DIAGNOSTICS_RUN
#undef  ALLOW_ECCO_OPTIMIZATION

C       >>> Do a long protocol.
#undef ECCO_VERBOSE

C ********************************************************************
C ***                  Adjoint Support Package                     ***
C ********************************************************************

C o Include/exclude code in order to be able to automatically
C   differentiate the MITgcmUV by using the Tangent Linear and
C   Adjoint Model Compiler (TAMC).
cph#define INCLUDE_AUTODIFF_PACKAGE
C
#define ALLOW_AUTODIFF_TAMC
C       >>> Checkpointing as handled by TAMC
#define ALLOW_TAMC_CHECKPOINTING

C ********************************************************************
C ***                     Calender Package                         ***
C ********************************************************************
C
C CPP flags controlling which code is included in the files that
C will be compiled.
C
C o Include the calendar tool.
#undef ALLOW_CALENDAR
#undef ALLOW_CAL_NENDITER

C ********************************************************************
C ***                Cost function Package                         ***
C ********************************************************************
C 
C       >>> Cost function contributions
#define ALLOW_COST
#define ALLOW_COST_TEST
#undef ALLOW_COST_TRACER
#undef ALLOW_COST_ATLANTIC_HEAT
#undef ALLOW_COST_VECTOR

C ********************************************************************
C ***               Control vector Package                         ***
C ********************************************************************
C 
#undef  ALLOW_NONDIMENSIONAL_CONTROL_IO
C       >>> Initial values.
#define ALLOW_THETA0_CONTROL
#define ALLOW_SALT0_CONTROL
#define ALLOW_TR10_CONTROL
#undef ALLOW_TAUU0_CONTROL
#undef ALLOW_TAUV0_CONTROL
#undef ALLOW_SFLUX0_CONTROL
#undef ALLOW_HFLUX0_CONTROL
#undef ALLOW_SSS0_CONTROL
#undef ALLOW_SST0_CONTROL
#undef ALLOW_DIFFKR_CONTROL
#undef ALLOW_KAPGM_CONTROL
