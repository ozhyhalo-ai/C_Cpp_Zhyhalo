#include <stdio.h>
#include <math.h> // sqrt, hypot

double area_heron(double a, double b, double c){
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s -c));
}

int main(){
    double a, b, c;
    printf("Enter the three sides of the triangle: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    double area = area_heron(a, b, c);
    printf("Area = %g\n", area);
}