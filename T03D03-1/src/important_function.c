#include <math.h>
#include <stdio.h>

double calculate_function(double x) {
    if (!isfinite(x)) {
        return NAN;
    }

    if (x == 0) {
        return NAN;
    }

    // Calculate the function
    double result = 7e-3 * pow(x, 4) + ((22.8 * pow(x, 1.0 / 3) - 1e3) * x + 3) / (x * x / 2) -
                    x * pow(10 + x, 2 / x) - 1.01;

    return result;
}

int main() {
    double x;
    if (scanf("%lf", &x) != 1) {
        printf("n/a\n");
        return 1;
    }

    double result = calculate_function(x);

    if (isnan(result)) {
        printf("n/a\n");
    } else {
        printf("%.1f\n", result);
    }

    return 0;
}