#ifndef _FONC_H_
#define _FONC_H_

double f(double x);
double resolution(double (*fn_ptr)(double x), double a, double b, double eps);
double g(double x);
double h(double x);
double integral_carre(double (*fn_ptr)(double x), double a, double b, double n);
double integral_trapeze(double (*fn)(double x), double interval_start, double \
		interval_end, double precision);

#endif
