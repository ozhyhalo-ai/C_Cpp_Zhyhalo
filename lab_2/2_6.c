#include <stdio.h>
#include <math.h> 

double area_heron(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    // Test Heron's formula for the area of a triangle
    printf("%lf should be 6\n", area_heron(3, 4, 5));
    printf("%lf should be 14.69\n", area_heron(5, 6, 7));



    double x1,y1,x2,y2,x3,y3;
    printf("Enter the coordinates of the first point (x1 y1): \n");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of the second point (x2 y2): \n");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter the coordinates of the third point (x3 y3): \n");
    scanf("%lf %lf", &x3, &y3);

    double a = hypot(x2 - x1, y2 - y1);
    double b = hypot(x3 - x2, y3 - y2);
    double c = hypot(x1 - x3, y1 - y3);

    printf("Lengths of the sides of the triangle:\n");
    printf("a = %g\n", a);
    printf("b = %g\n", b);
    printf("c = %g\n", c);

    double area = area_heron(a, b, c);
    printf("Area of the triangle: %g\n", area);
}