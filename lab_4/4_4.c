#include <stdio.h>

double calc_series(double x, unsigned n){
    double sum = 0.0;
    double current_x_power = x;
    for (unsigned i = 1; i <= n; i++){
        sum += i * current_x_power;
        current_x_power *= x;
    }
    return sum;
}

int main(){
    double x;
    unsigned n;
    
    printf("Enter a value for x: ");
    scanf("%lf", &x);
    printf("Enter a value for n: ");
    scanf("%u", &n);
    
    double result = calc_series(x, n);
    printf("Result for series(%lf, %u) = %lf\n", x, n, result);
}