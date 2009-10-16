C $Header$
C $Name$

#ifndef GCHEM_OPTIONS_H
#define GCHEM_OPTIONS_H
#include "PACKAGES_CONFIG.h"
#ifdef ALLOW_GCHEM

#include "CPP_OPTIONS.h"

CBOP
C    !ROUTINE: GCHEM_OPTIONS.h
C    !INTERFACE:

C    !DESCRIPTION:
C options for biogeochemistry package
CEOP

#define GCHEM_SEPARATE_FORCING

#endif /* ALLOW_GCHEM */
#endif /* GCHEM_OPTIONS_H */