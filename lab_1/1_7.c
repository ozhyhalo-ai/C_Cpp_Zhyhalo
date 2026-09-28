#include <stdio.h>
#include <math.h> // fabs() for floatinf-point absolute value
/*
mach.h:
    floor - returns the rargest integer less than or equal to a given number
    fabs - returns the absolute value of a floating-point number
    ceil - returns the smallest integer greater than or equal to a given number
    round - returns the nearest integer to a given number
*/

int main(){
    double x;
    printf("Enter a real number: ");
    scanf("%lf", &x);

    int integer_part = (int)x; //integer cast - extracts part of the real number
    printf("Integer part: %d\n", integer_part);

    double fraction_value = x - integer_part;
    printf("Fractional value: %.6f\n", fraction_value); // 6 digits after coma

    double floor_value = floor(x);
    printf("Floor value: %.6f\n", floor_value);

    double ceil_value = ceil(x);
    printf("Ceil value: %.6f\n", ceil_value);
    
    double round_value = round(x);
    printf("Round value: %.6f\n", round_value);
    double abs_value = fabs(x);

    double abs_value = fabs(x);
    printf("Absolute value: %.6f\n", abs_value);

    return 0;
    
}