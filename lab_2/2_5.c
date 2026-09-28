#include <stdio.h>

double sqr(double x) {
    return x*x;
}

// Rosenbrock function in 2D: f(x, y) = (1 - x)^2 + 100 * (y - x^2)^2
double Rosenblock2D(double x, double y){
    return sqr(1 - x) + 100 * sqr(y - sqr(x));
}

int main() {
    // Tests to check Rosenbrock function in 2D
    printf("Testing Rosenbrock2D function:\n");
    printf("Rosenbrock2D(1, 1) = %g should be 0\n", Rosenblock2D(1, 1));
    printf("Rosenbrock2D(0, 0) = %g should be 1\n", Rosenblock2D(0, 0));
    printf("Rosenbrock2D(1, 2) = %g should be 100\n", Rosenblock2D(1, 2));
    printf("Rosenbrock2D(-2, 4) = %g should be 9\n", Rosenblock2D(-2, 4));

    double x, y;
    printf("Enter the values of x and y: \n");
    scanf("%lf %lf", &x, &y);

    double result = Rosenblock2D(x, y);
    printf("Rosenbrock2D(x, y) = %g\n", result);
}