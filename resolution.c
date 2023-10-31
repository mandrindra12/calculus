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
// df= dy/dx
double newton_raphson(double (*fn)(double), double (*dfn)(double), double aprox, double eps){
        double ans = 0.;
        while(fabs(fn(ans)) > eps){
                ans = aprox - (fn(aprox)/dfn(aprox));
                aprox = ans;
        }
        return ans;
}
//secant
double secant_method(double (*fn)(double x), double i_start, double i_end, double eps){
        double ans = 0., x0 = 0.;
        while(fabs(fn(x0))>eps) {
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
