# include <stdio.h>
# include <math.h>

double calc_expression(double x, double y, unsigned n){
    double result = 1.0;
    for (unsigned k = 1; k <= n; k++){
        result += pow(x, pow(2, k)) * pow(y, k);
    }
    return result;
}

int main(){
    double x, y;
    unsigned n;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of y: ");
    scanf("%lf", &y);
    printf("Enter the number of terms n: ");
    scanf("%u", &n);
    printf("The result is: %lf\n", calc_expression(x, y, n));
    return 0;
}