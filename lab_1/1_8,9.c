#include <stdio.h>

double avg(float a, float b){
    return (a + b) / 2.0;
}

double harmonic_mean(float a, float b){
    return 2.0 / (1.0/a + 1.0/b);
}

int main(){
    float x,y;
    printf("Enter two real numbers: \n");
    // scanf("%f", &x);
    // scanf("%f", &y);
    scanf("%f %f", &x, &y);
    float sum = x + y;
    float diff = x- y;
    float prod = x * y;
    float quot = x / y;

    printf("Sum = %f\n", sum);
    printf("Difference = %f\n", diff);
    printf("Product = %f\n", prod);
    printf("Quotient = %f\n", quot);

    printf("Average = %f\n", avg(x, y));
    printf("Harmonic Mean = %f\n", harmonic_mean(x, y));
}