# include <stdio.h>

// find n : 1 + 1/2 ... 1/n > a)

int harm_max(double a){
    int i=1;
    double s=0;
    while(s<=a){
        s+=1.0/i;
        i++;
    }
    return i-1;
}

double harm_sum(double a){
    int i =1;
    double s=0.0;
    while(s<=a){
        s+=1.0/i;
        i++;
    }
    return s;
}

int main(){
    double a;
    printf("Enter a: ");
    scanf("%lf", &a);
    int n = harm_max(a);
    printf("n = %d\n", n);
    double sum = harm_sum(a);
    printf("Sum = %lf\n", sum);
}