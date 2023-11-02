#ifndef _FONC_H_
#define _FONC_H_
#include <stdint.h>

double rectangular_rule(double (*fn_ptr)(double x), double a, double b, uint32_t n);
double trapezoidal_rule(double (*fn)(double x), double i_start, double i_end, uint32_t n);
double simpson(double (*f)(double x), double i_start, double i_end, uint32_t n);

#endif
