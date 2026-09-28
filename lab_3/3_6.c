# include <stdio.h>
# include <stdlib.h>
#include <math.h> // Required for fabs()

int absolute(int a){
    return (a < 0) ? -a : a;
}

double max3(double a, double b, double c) {
    double result = a; 
    
    if (fabs(b) > fabs(result)) {
        result = b;
    }
    if (fabs(c) > fabs(result)) {
        result = c;
    }
    return result;
}

double min3(double a, double b, double c) {
    double result = a;
    
    if (fabs(b) < fabs(result)) {
        result = b;
    }
    if (fabs(c) < fabs(result)) {
        result = c;
    }
    return result;
}

int maximum(int a, int b){
    if(a>b) return a;
    return b;
}

int minimum(int a, int b){
    return (a < b) ? a : b; // Python: return a if a<b else b
}

void task3_5(){
    int x, y;
    printf("Enter two intregers: ");
    scanf("%d %d", &x, &y);

    printf("Max(%d, %d) = %d, Min(%d, %d) = %d\n", x, y, maximum(x,y), x, y, minimum(x,y));
}

void task3_6() {
    double x, y, z;
    printf("Enter three real numbers: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    printf("Max by mod: %g, Min by mod: %g\n", max3(x, y, z), min3(x, y, z));
}

int main() {
    task3_6();
}