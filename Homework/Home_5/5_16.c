// Task з

#include <stdio.h>
#include <math.h>

double sum(double x, double eps){
    if (fabs(x) >= 1.0){
        printf("Error: |x| must be less than 1.\n");
        return 0.0;
    }

    double sum = 0.0;
    double term = 1.0;
    int k = 1;

    while (fabs(term) >= eps){
        sum += term;
        k++;
        term = term *(-x) *k/(k-1.0);
    }
    return sum;
}

void run_tests(){
    double x2 = 0.5, eps2 = 0.0001;
    // We calculate the exact expected value manually: 1 / (1+x)^2
    double expected = 1.0 / ((1.0 + x2) * (1.0 + x2));
    printf("Task 16 z) 1/(1+x)^2 for x=0.5, eps=0.0001:\n");
    printf("Expected: %lf (math formula)\n", expected);
    printf("Got:      %lf\n", sum(x2, eps2));
}

int main(){
    run_tests();

    double x, eps = 0.0;
    printf("Enter x (|x| < 1): ");
    scanf("%lf", &x);
    while (eps <= 0.0) {
        printf("Enter precision eps (> 0): ");
        scanf("%lf", &eps);
    }
    printf("Result: %lf\n", sum(x, eps));
}