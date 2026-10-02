# include <stdio.h>
# include <math.h>

int sum_of_something(int n){
    double a1=0, a2=1, b1=1, b2=0, k=3, ak, bk,
        sum = 2/(a1+b1)+4/(a2+b2);
    for(; k<=n; k++){
        bk=b2+a2;
        ak=a2/k+a1*bk;
        sum+=pow(2, k)/(ak + bk);
        a1=a2; a2=ak; b1=b2; b2=bk;
    }
    return sum;
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    double result = sum_of_something(n);
    printf("The sum Sn = %lf\n", result);
}