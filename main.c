#include "resolution.h"
#include "function.h"
#include "calculus.h"
#include <stdio.h>
#include <math.h>
#define EPS 1e-12 

int main(int argc, char **argv) {

        double a = 0., res = 0.0, b = 0.0, n = 0.;
        printf("a, b, n: ");
        scanf("%lf%lf%lf", &a, &b, &n);
        res = dichotomie(f, a, b, EPS);
        printf("dich: %lf %e %g\n", res, res, res);
        res = secant_method(f, a, b, EPS);
        printf("sec: %lf %e %g\n", res, res, res);
        res  = newton_raphson(f, df, a, EPS);
        printf("n-r: %lf %e %g\n", res, res, res);
        return 0;

}

