#include <stdio.h>
#include <math.h>

int main() {
    //1
    printf("Task 1!\n");
    printf("2 + 31 = %d\n", 2 + 31);
    printf("45 * 54 - 11 = %d\n", 45 * 54 - 11);
    printf("15 / 4 = %d\n", 15 / 4);
    printf("15.0 / 4 = %f\n", 15.0 / 4);
    printf("67 %% 5 = %d\n", 67 % 5);
    printf("(2 * 45.1 + 3.2) / 2 = %f\n", (2 * 45.1 + 3.2) / 2);

    //2
    printf("\nTask 2!\n");
    // 1. float
    float f_pow = 1e-4f;
    float f_sci = 24.33e5f;
    float f_pi = M_PI;
    float f_e = M_E;
    float f_sqrt = sqrtf(5.0f);
    float f_ln = logf(100.0f);

    // 2. double
    double d_pow = 1e-4;
    double d_sci = 24.33e5;
    double d_pi = M_PI;
    double d_e = M_E;
    double d_sqrt = sqrt(5.0);
    double d_ln = log(100.0);

    // 3. long double
    long double ld_pow = 1e-4L;
    long double ld_sci = 24.33e5L;
    long double ld_pi = M_PI;
    long double ld_e = M_E;
    long double ld_sqrt = sqrtl(5.0L);
    long double ld_ln = logl(100.0L);

    printf("float:\n");
    printf("10^-4: %.2f\n24.33E5: %.2f\nPi: %.2f\ne: %.2f\nsqrt(5): %.2f\nln(100): %.2f\n\n", 
           f_pow, f_sci, f_pi, f_e, f_sqrt, f_ln);

    printf("double:\n");
    printf("10^-4: %.2lf\n24.33E5: %.2lf\nPi: %.2lf\ne: %.2lf\nsqrt(5): %.2lf\nln(100): %.2lf\n\n", 
           d_pow, d_sci, d_pi, d_e, d_sqrt, d_ln);

    printf("long double:\n");
    printf("10^-4: %.2Lf\n24.33E5: %.2Lf\nPi: %.2Lf\ne: %.2Lf\nsqrt(5): %.2Lf\nln(100): %.2Lf\n", 
           ld_pow, ld_sci, ld_pi, ld_e, ld_sqrt, ld_ln);

    //3
    printf("\nTask 3!\n");
    int a;
    printf("Enter a digit: ");
    scanf("%d", &a);
    printf("- %d - %d - %d\n", a, a, a);
    printf("%d | %d | %d\n", a, a, a);
    printf("- %d - %d - %d\n", a, a, a);
    
}