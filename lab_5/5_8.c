# include <stdio.h>
# include <math.h>

double exp_tailor(double x, double eps){
    double term = 1, y = term; int k = 1;
    while (fabs(term)>=eps){
        term = term*x/k;
        y+=term; k++;
    }
    return y;
}

int main(){
    double x, eps, y;
    printf("x=");
    scanf("%lf", &x);
    while(eps<=0){
        printf("eps=");
        scanf("%lf", &eps);
    }
    y = exp_tailor(x, eps);
    printf("y=%lf %lf", y, exp(x));
}