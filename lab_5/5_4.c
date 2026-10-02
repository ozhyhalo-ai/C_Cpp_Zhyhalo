#include <stdio.h>
#include <math.h>

double produkt_a(int n){
    double P=1.0, fact=1.0;
    for (int i=1; i<=n; i++){
        fact*=i;
        double a_i=1.0+(1.0/fact);
        P*=a_i;
    }
    return P;
}

double produkt_b(int n){
    double P=1.0;
    for (int i=1; i<=n; i++){
        double minus_one_power = pow(-1.0, i+1);
        double two_power = pow(2.0, i);
        double a_i = 1.0 + (minus_one_power * (i * i))/two_power;
        P*=a_i;
    }
    return P;
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    double P_a = produkt_a(n);
    double P_b = produkt_b(n);
    printf("P_a = %lf\n", P_a);
    printf("P_b = %lf\n", P_b);
}