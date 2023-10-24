#include "main_utils.h"
#include <math.h>
#include <stdio.h>

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

double f(double x) {
       double result = log(x) - 1;
       return result;
}
double g(double x) {
        return exp(x)-2;
}
double resolution(double (*fn_ptr)(double x), double a, double b, double epsilon) {
       double res = 0.2;
       do{
              double center = 0.0;
              center = (b+a) / 2;
              if(fn_ptr(a)*fn_ptr(center) <= 0) {
                      b = center;
                      res = center;
              }else{
                      a = center;
                      res = center;
              }
       }while((fabs(a-b)) > epsilon);
       return res;
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
double newtons_method(double (*fn_ptr)(double x), double int_start, double int_end, double prec){
        double res = 0.;
        
        return res;
}
