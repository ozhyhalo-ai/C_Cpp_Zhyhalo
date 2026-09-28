#include <stdio.h>
#include <math.h> // hypot

int main() {
    double a, b;
    printf("Enter leg a and leg b:\n");
    scanf("%lf %lf", &a, &b);
    double c = hypot(a, b);
    printf("Hypotenuse c = %g\n", c);
}