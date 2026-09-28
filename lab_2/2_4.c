#include <stdio.h>

// Task 'е'
double polinomial(double x) {
    double x2 = x * x;
    return x * (x2 * (x2 + 1) + 1);
}

int main() {
    double x;
    printf("Enter x: \n");
    scanf("%lf", &x);

    double y = polinomial(x);
    printf("y = %g\n", y);
    
    return 0;
}