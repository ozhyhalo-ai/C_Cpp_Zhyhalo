// Task в

#include <stdio.h>
#include <math.h>

double calc_poly_squares(double x, unsigned n) {
    double sum = 0.0;

    for (unsigned i = 1; i <= n; i++){
        // Multiply i by itself to get the square (i^2)
        sum += pow(x, i*i);
    }
    return sum;
}

int main(){
    double x;
    unsigned n;

    // TESTS!
    printf("Test 1: x=2, n=2 Result: %lf (Expected: 18.000000)\n", 
        calc_poly_squares(2.0, 2));
    printf("Test 2: x=1, n=5 Result: %lf (Expected: 5.000000)\n", 
        calc_poly_squares(1.0, 5));
    printf("Test 3: x=3, n=3 Result: %lf (Expected: 19767.000000)\n", 
        calc_poly_squares(3.0, 3));


    printf("Enter a value for x: ");
    scanf("%lf", &x);

    printf("Enter a value for n: ");
    scanf("%u", &n);

    double result = calc_poly_squares(x, n);
    printf("Result for poly(%lf, %u) = %lf\n", x, n, result);
}