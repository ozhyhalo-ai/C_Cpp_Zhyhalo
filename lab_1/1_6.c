#include <stdio.h>

int main() {
    double C, F;
    printf("Input C: ");
    scanf("%lf", &C);
    F = 1.8 * C + 32.0; 
    printf("F=%g\n", F);
}