// Task a

#include <stdio.h>
#include <math.h>

double sum(int n){
    if (n < 1) return 0;
    double a1 = 0.0;
    double sum = 2.0 * a1;
    if (n==1) return sum;

    double a2 = 1.0;
    sum += 4.0 * a2;
    if (n==2) return sum;

    double a_prev_prev = a1, a_prev = a2, ak,
        power_of_2 = 4.0;

    for (int k=3; k <= n; k++){
        ak = a_prev + k * a_prev_prev;
        power_of_2 *= 2.0;
        sum += power_of_2 * ak;
        a_prev_prev = a_prev;
        a_prev = ak;
    }
    return sum;
}

void run_tests(){
    printf("Test n=1: Expected 0.000000, Got %lf\n", sum(1));
    printf("Test n=2: Expected 4.000000, Got %lf\n", sum(2));
    printf("Test n=3: Expected 12.000000, Got %lf\n", sum(3));
    printf("Test n=4: Expected 92.000000, Got %lf\n", sum(4));
}

int main(){
    run_tests();

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    double result = sum(n);
    printf("Sum for n=%d: %lf\n", n, result);
}