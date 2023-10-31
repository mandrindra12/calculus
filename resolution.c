#include "resolution.h"
#include <math.h>
#include <stdio.h>

double dichotomie(double (*fn_ptr)(double x), double a, double b, double epsilon) {
       double res = 0.2;
       while((fabs(a-b)) > epsilon){
              double center = 0.0;
              center = (b+a) / 2;
              if(fn_ptr(a)*fn_ptr(center) <= 0) {
                      b = center;
                      res = center;
              }else{    
                      a = center;
                      res = center;
              }
        }
       return res;
}
// dfn= dy/dx
double newton_raphson(double (*fn)(double), double (*dfn)(double), double first_aprox, double eps){
        double ans = 0.;
        while(fabs(first_aprox - ans) > eps){

        }
        return ans;
}

double secant_method(double (*fn)(double x), double i_start, double i_end, double eps){
        double ans = 0., x0 = 0.;
        while(fabs(fn(x0))>eps) {
                //printf("x0: %lf, ans: %lf, start:%lf, end: %lf\n", x0 , ans, i_start, i_end);
                x0 = i_start - ((i_end-i_start)*fn(i_start))/(fn(i_end)-fn(i_start));
                if(fn(x0)*fn(i_start)<=0) {
                        ans = x0;
                        i_end = x0;
                }else if(fn(x0)*fn(i_end)<=0) {
                        ans = x0;
                        i_start = x0;
                }
        }
        return ans;
}
