#include <stdio.h>
#include <math.h>

double chain_sqrt(double x, unsigned n){
    double result = 0;    
    for (unsigned i=1; i<n; i++){
        result = sqrt(result + x);
    }
    return result;
}

int main(){
    double x, y;
    unsigned n;
    printf("Enter a value for x: ");
    scanf("%lf", &x);
    printf("Enter a value for n: ");
    scanf("%u", &n);

    y = chain_sqrt(x, n);
    printf("chain_sqrt(%lf, %u) = %lf\n", x, n, y);
}