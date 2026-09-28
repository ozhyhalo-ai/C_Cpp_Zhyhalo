#include <stdio.h>
#include <math.h>

double cylinder_volume(double radius, double height) {
    return M_PI * radius * radius * height;
}

int main() {
    // Tests
    printf("%lf should be 3.141593\n", cylinder_volume(1, 1));
    printf("%lf should be 62.831853\n", cylinder_volume(2, 5));

    double radius, height;
    printf("Enter the base radius and height of the cylinder:\n");
    scanf("%lf %lf", &radius, &height);

    double volume = cylinder_volume(radius, height);

    printf("Volume of the cylinder = %g\n", volume);

}