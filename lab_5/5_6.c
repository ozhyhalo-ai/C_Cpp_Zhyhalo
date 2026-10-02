#include <stdio.h>

double cont_frac_a(double b, int n){
    double res = b;
    for (int i = 0; i < n; i++){
        res = b+1.0/res;
    }
    return res;
}

double cont_frac_b(double b, int n){
    double b_k = 4.0 * n + 2.0;
    for (int k = 1; k <= n; k++){
        b_k = 4.0 * (n-k) + 2.0 + 1.0/b_k;
    }
    return b_k;
}

double cont_frac_c(double b, int n){
    double res = 2.0;
    for (int i = 1; i < 2 * n; i++){
        double current_term;
        if (i % 2 != 0){
            current_term = 1.0;
        } else {
            current_term = 2.0;
        }
        res = current_term + 1.0/res;
    }
    return res;
}

int main(){
    int n;
    double b;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter b: ");
    scanf("%lf", &b);
    double result_a = cont_frac_a(b, n);
    double result_b = cont_frac_b(b, n);
    double result_c = cont_frac_c(b, n);
    printf("Result of cont_frac_a: %lf\n", result_a);
    printf("Result of cont_frac_b: %lf\n", result_b);
    printf("Result of cont_frac_c: %lf\n", result_c);
}