#include "main_utils.h"
#include <stdio.h>
#include <math.h>
#define EPSILON pow(10, -6)

int main(int argc, char **argv) {

        double a = 0., res = 0.0, b = 0.0, n = 0.;
        printf("a, b, n: ");
        scanf("%lf%lf%lf", &a, &b, &n);
        res = integral_carre(g, a, b, n);
        printf("%e\n", res);
        res = integral_trapeze(g, a, b, n);
        printf("%lf\n %e %g", res, res, res);
        return 0;

}

