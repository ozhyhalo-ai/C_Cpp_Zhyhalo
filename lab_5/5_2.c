# include <stdio.h>

// find Fk = Fk-1 + Fk-2

unsigned long long fib(int n){
    unsigned long long F0, F1, F; int k=0;
    F0 = 0L; F1 = 1L;
    for(k=2; k<=n; k++){
        F = F0 + F1;
        F0=F1; F1=F;
    }
    return F;
}

int fib_index_max(unsigned long long a){
    unsigned long long F0, F1, F; int k=1;
    F0 = 0L; F1 = 1L;
    if(a==0) return 0;
    while(1){
        F = F0 + F1;
        if(F > a) break;
        F0=F1; F1=F;
        k++;
    }
    return k;
}

int fib_index_min(unsigned long long a){
    unsigned long long F0, F1, F; int k=1;
    F0 = 0L; F1 = 1L;
    if(a==0) return 0;
    while(F1<=a){
        F = F0 + F1;
        F0=F1; F1=F;
        k++;
    }
    return k;
}

unsigned long long fib_sum_1000(){
    unsigned long long F0=0L, F1=1L, F, sum=F0+F1;
    while(1){
        F = F0 + F1;
        if(F>1000) break;
        sum+=F;
        F0=F1; F1=F;
    }
    return sum;
}

int main(){
    int n;
    unsigned long long a;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("F(n) = %llu\n", fib(n));
    printf("Enter a: ");
    scanf("%llu", &a);
    int k_max = fib_index_max(a);
    printf("k_max = %d\n", k_max);
    int k_min = fib_index_min(a);
    printf("k_min = %d\n", k_min);
    printf("Sum of Fibonacci numbers <= 1000 = %llu\n", fib_sum_1000());
}