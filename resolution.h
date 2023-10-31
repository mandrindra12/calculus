#ifndef __RES__
#define __RES__
double dichotomie(double (*fn_ptr)(double x), double a, double b, double epsilon);double newton_raphson(double (*fn)(double), double (*dfn)(double), double first_aprox, double eps);
double secant_method(double (*fn)(double), double i_start, double i_end, double eps);

#endif
