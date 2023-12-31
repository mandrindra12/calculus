#include "resolution.h"
#include "function.h"
#include "calculus.h"
#include <stdio.h>
#include <stdint.h>
#define EPS 1e-12 

int main(int argc, char **argv) {

        double a = 0., res = 0.0, b = 0.0;
        uint32_t n = 0.;
        printf("a, b, n: ");
        scanf("%lf%lf%d", &a, &b, &n);
        // res = dichotomie(f, a, b, EPS);
        // printf("dich: %lf %e %g\n", res, res, res);
        // res = secant_method(f, a, b, EPS);
        // printf("sec: %lf %e %g\n", res, res, res);
        // res  = newton_raphson(f, df, a, EPS);
        // printf("n-r: %lf %e %g\n", res, res, res);
        res = trapezoidal_rule(h, a, b, n);
        printf("trap: %lf %e %g\n", res, res, res);
        res = rectangular_rule(h, a, b, n);
        printf("rect: %lf %e %g\n", res, res, res);
        res = simpson(h, a, b, n);
        printf("simp: %lf %e %g\n", res, res, res);
        
        return 0;

}

