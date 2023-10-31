#ifndef _FONC_H_
#define _FONC_H_

double rectangular_rule(double (*fn_ptr)(double x), double a, double b, double n);
double trapezoidal_rule(double (*fn)(double x), double interval_start, double \
		interval_end, double precision);

#endif
