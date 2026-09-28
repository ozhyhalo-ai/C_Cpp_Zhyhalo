#include <stdio.h>
#include <math.h>

double area_ellipse(double a, double b) {
    return M_PI * a * b;
}

int main() {
    // Tests
    printf("%lf should be 3.141593\n", area_ellipse(1, 1));
    printf("%lf should be 18.849556\n", area_ellipse(2, 3));

    double x1, y1, x2, y2;
    printf("Enter the coordinates of the first radius (x1 y1): \n");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of the second radius (x2 y2): \n");
    scanf("%lf %lf", &x2, &y2);

    double a = hypot(x1, y1);
    double b = hypot(x2, y2);

    double area = area_ellipse(a, b);

    printf("Radius a = %g\n", a);
    printf("Radius b = %g\n", b);
    printf("Area of the ellipse: %g\n", area);
}