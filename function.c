#include <math.h>
#include "function.h"

double f(double x) {
       double result = log(x) - 1;
       return result;
}
double g(double x) {
        return exp(x)-2;
}
double h(double x) {
        return x*x;
}

double df(double x) {
        return 1/x;
}
double dg(double x) {
        return exp(x);
}
