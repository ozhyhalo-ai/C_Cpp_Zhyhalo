# include <stdio.h>

int kollatz(int a, int n){
    int a0 = a, a1;
    for(int k=0; k<=n; k++){
        if(a0%2==0){a=a0/2; a0=a;}
        else{a=3*a0+1; a0=a;}
    }
    return a;
}

int count_till_one(int a){
    int count = 0, b=a;
    while(b!=1){
        b = kollatz(a, count);
        count++;
    }
    return count;
}

int main(){
    int max = 0;
    int max_n=1;
    for(int i=1; i<=1000; i++){
        int current = count_till_one(i);
        if(current > max) {
            max = current;
            max_n = i;
        }
    }
    printf("Maximum steps to reach 1: %d\n", max);
    printf("Number of iterations: %d\n", max_n);
}