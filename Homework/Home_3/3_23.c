// б

#include <stdio.h>
#include <math.h>
#include <float.h>

// ReLU function implementation: max(0, x)
double ReLu(double x) {
    if (x < 0.0) {
        return 0.0;
    } else {
        return x;
    }
}

// Derivative of ReLU function
// Undefined at x = 0, returning DBL_MAX to represent infinity
double ReLu_derivative(double x) {
    if (x > 0.0) {
        return 1.0;
    } else if (x < 0.0) {
        return 0.0;
    } else {
        return DBL_MAX;
    }
}

// Test function
int test_ReLu(void) {
    double epsilon = 1e-9;

    if (fabs(ReLu(-2.0) - 0.0) >= epsilon) return 1;
    if (fabs(ReLu(0.0) - 0.0) >= epsilon) return 1;
    if (fabs(ReLu(2.0) - 2.0) >= epsilon) return 1;

    if (fabs(ReLu_derivative(-2.0) - 0.0) >= epsilon) return 1;
    if (fabs(ReLu_derivative(2.0) - 1.0) >= epsilon) return 1;
    
    // Testing the undefined point (x = 0)
    if (ReLu_derivative(0.0) != DBL_MAX) return 1;

    return 0;
}

int main(void) {
    if (test_ReLu() == 0) {
        printf("All tests passed.\n");
    } else {
        printf("Tests failed.\n");
    }
    
    double x;
    printf("Enter a value for x: ");
    scanf("%lf", &x);
    
    printf("ReLu(%g) = %g\n", x, ReLu(x));
    
    double deriv = ReLu_derivative(x);
    if (deriv == DBL_MAX) {
        printf("ReLu_derivative(%g) = Infinity (DBL_MAX)\n", x);
    } else {
        printf("ReLu_derivative(%g) = %g\n", x, deriv);
    }
}