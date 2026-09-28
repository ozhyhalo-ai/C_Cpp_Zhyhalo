#include <stdio.h>
#include <math.h>

void check_triangle(double a, double b, double c) {
    // Check if the sides are positive numbers
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Error: Sides of a triangle must be positive numbers.\n");
        return;
    }

    // Triangle inequality theorem: the sum of any two sides must be greater than the third
    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Triangle with sides %g, %g, %g does NOT exist.\n", a, b, c);
        return;
    }

    // Find the longest side to check the angles
    double max_side = a;
    double side1 = b;
    double side2 = c;

    if (b > max_side) {
        max_side = b;
        side1 = a;
        side2 = c;
    }
    if (c > max_side) {
        max_side = c;
        side1 = a;
        side2 = b;
    }

    // Determine the type of the triangle using the law of cosines corollary
    // diff = (side1^2 + side2^2) - max_side^2
    double diff = (side1 * side1 + side2 * side2) - (max_side * max_side);
    
    double epsilon = 1e-7;

    printf("Triangle with sides %g, %g, %g EXISTS. Type: ", a, b, c);

    if (fabs(diff) < epsilon) {
        printf("Right\n");
    } else if (diff > 0) {
        printf("Acute\n");
    } else {
        printf("Obtuse\n");
    }
}

void test_cases() {
    printf("Running tests:\n");
    check_triangle(3, 4, 5);       // Right
    check_triangle(4, 4, 4);       // Acute
    check_triangle(3, 4, 6);       // Obtuse
    check_triangle(1, 2, 3);       // Does not exist
    check_triangle(-5, 4, 3);      // Error
    printf("\n");
}

int main() {
    test_cases();

    double a, b, c;
    printf("Enter three sides of a triangle separated by space: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    check_triangle(a, b, c);
}