#include "calculus.h"
#include <math.h>
double trapezoidal_rule(double (*fn)(double x), double interval_start,\
                        double interval_end, double precision) {
        
        double res = 0.;
        double inc = (interval_end - interval_start) / precision;
        do{
                res += ((fn(interval_start+inc)+fn(interval_start))*inc) / 2;
                interval_start += inc;
        }while(interval_start < (interval_end-inc));

        return fabs(res);
}

double rectangular_rule(double (*fn_ptr)(double x), double a, double b, double n) {
       double res = 0.;
       double i = (b-a)/n;
       while(a < (b-i)) {
                res += fn_ptr(a)*i;
                a += i;
       }
       return fabs(res);
}

