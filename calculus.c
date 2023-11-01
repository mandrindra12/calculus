#include "calculus.h"
#include <math.h>
double trapezoidal_rule(double (*fn)(double x), double i_start, double i_end, double n) {
        
        double res = 0.;
        double seg = (i_end - i_start) / n;
        res = fn(i_start) + fn(i_end);
        for(int i = 1; i < n-1; ++i){
                res += 2*fn(i_start+i*seg);
        }
        res *= (seg/2);

        return fabs(res);
}

double rectangular_rule(double (*fn_ptr)(double x), double a, double b, double n) {
       double res = fn_ptr(a);
       double i = (b-a)/n;
       for(int j = 0; j < n-1; ++j) {
                res += fn_ptr(a+i*j);
       }
       return fabs(res)*i;
}

