#include <math.h>
#include <stdint.h>

double trapezoidal_rule(double (*fn)(double x), double i_start, double i_end, uint32_t n) {
        
        double res = 0.;
        double seg = (i_end - i_start) / n;
        res = fn(i_start) + fn(i_end);
        for(int i = 1; i <= n-1; ++i){
                res += 2*fn(i_start+i*seg);
        }
        res *= (seg/2);
        return fabs(res);
}

double rectangular_rule(double (*fn_ptr)(double x), double a, double b, uint32_t n) {
       double res = fn_ptr(a);
       double i = (b-a)/n;
       for(int j = 0; j <= n-1; ++j) {
                res += fn_ptr(a+i*j);
       }
       return fabs(res)*i;
}

double simpson(double (*f)(double x), double i_start, double i_end, uint32_t n) {
        double res = 0.;
        res = f(i_end) + f(i_start);
        double seg = (i_end - i_start) / n;
        for(int i = 1; i <= n-1; i+=2) {
                 res += 4*f(i_start+i*seg);
        }
        for( int i = 2; i <= n-2; i+=2) {
                res+=2*f(i_start+i*seg);
        }

        res *= (seg/3);
        return fabs(res);
}

