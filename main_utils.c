#include "main_utils.h"
#include <math.h>
#include <stdio.h>

double integral_trapeze(double (*fn)(double x), double interval_start,\
                        double interval_end, double precision) {
        
        double res = 0.;
        double inc = (interval_end - interval_start) / precision;
        do{
                res += ((fn(interval_start+inc)+fn(interval_start))*inc) / 2;
                interval_start += inc;
        }while(interval_start < (interval_end-inc));

        /* 
        for(int t = 1; t < n-1; ++t){
                res += 
        }
         */


        return fabs(res);
}

double f(double x) {
       double result = log(x) - 1;
       return result;
}
double g(double x) {
        return exp(x)-2;
}
double h(double x) {
        return x;
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
       }while((fabs(fn_ptr(a)-fn_ptr(b))) > epsilon);
       return res;
}
double integral_carre(double (*fn_ptr)(double x), double a, double b, double n) {
       double res = 0.;
       double i = (b-a)/n;
       printf("INCREMENT: %.19lf\n", i);
       while(a < b) {
                res += fn_ptr(a)*i;
                a += i;
       }
       return fabs(res);
}
