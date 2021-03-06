#ifndef NEWTON_COTES_SOLVER_H
#define NEWTON_COTES_SOLVER_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "../solver/newton-cotes.h"

// Number of subintervals (Needs to be multiple of 6 to work with all the 3 methods ...)
const int NSUBINTERVAL = 3600;              

// Newton-Cotes rules
double Trapezium (const double a, const double b, set_analit_fn *f, const int i, const int j);
double Simpson13 (const double a, const double b, set_analit_fn *f, const int i, const int j);
double Simpson38 (const double a, const double b, set_analit_fn *f, const int i, const int j);

// Auxiliary functions


#endif