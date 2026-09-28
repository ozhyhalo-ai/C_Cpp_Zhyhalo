#include <stdio.h>
#include <math.h>

int main() {
    double x;
    
    printf("Enter x: ");
    scanf("%lf", &x);
    
    double trig_cos = cos(x);
    double hyp_cos = cosh(x);
    
    printf("trigonometric cos: %g\n", trig_cos);
    printf("hyperbolic cos: %g\n", hyp_cos);
    
    return 0;
}