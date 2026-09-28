#include <stdio.h>
#include <math.h>

void solve_quadratic(double a, double b, double c){
    double epsilon = 1e-9; // Define a small threshold for floating-point compration

    if (fabs(a) < epsilon){
        if (fabs(b) < epsilon){
            if (fabs(c) < epsilon){
                printf("Infinite solution\n");
            } else {
                printf("No solutions (0 != %g)\n", c);
            } 
        } else {
            double x = -c/b;
            printf("One root: x = %g\n", x);
        }
        return;
    }

    double D = b * b - 4 * a * c;
    if (fabs(D) < epsilon){
        printf("One root: x = %g\n", -b / (2 * a));
    } else if (D < 0) {
        printf("No real solutions (D < 0)\n");
    } else {
        double sqrt_D = sqrt(D);
        double x1 = (-b + sqrt_D) / (2*a);
        double x2 = (-b - sqrt_D) / (2*a);
        printf("Two roots: x1 = %g, x2 = %g\n", x1, x2);
    }
}



void solve_biquadratic(double a, double b, double c) {
    double epsilon = 1e-9;

    if (fabs(a) < epsilon) {
        if (fabs(b) < epsilon) {
            if (fabs(c) < epsilon) {
                printf("Infinite solution\n");
            } else {
                printf("No solutions (0 != %g)\n", c);
            }
        } else {
            double y = -c / b;
            if (y > epsilon) {
                double x = sqrt(y);
                printf("Two roots: x1 = %g, x2 = %g\n", x, -x);
            } else if (fabs(y) < epsilon) {
                printf("One root: x = 0\n");
            } else {
                printf("No real solutions\n");
            }
        }
        return;
    }

    double D = b * b - 4 * a * c;
    if (D < -epsilon) {
        printf("No real solutions (D < 0)\n");
        return;
    }

    if (fabs(D) < epsilon) {
        double y = -b / (2 * a);
        if (y > epsilon) {
            double x = sqrt(y);
            printf("Two roots: x1 = %g, x2 = %g\n", x, -x);
        } else if (fabs(y) < epsilon) {
            printf("One root: x = 0\n");
        } else {
            printf("No real solutions\n");
        }
    } else {
        double sqrt_D = sqrt(D);
        double y1 = (-b + sqrt_D) / (2 * a);
        double y2 = (-b - sqrt_D) / (2 * a);

        // Sort y1 and y2 so y1 is always the bigger number
        if (y1 < y2) {
            double temp = y1;
            y1 = y2;
            y2 = temp;
        }

        // Check combinations starting from the biggest possible roots
        if (y1 > epsilon && y2 > epsilon) {
            double x1 = sqrt(y1);
            double x2 = sqrt(y2);
            printf("Four roots: x1 = %g, x2 = %g, x3 = %g, x4 = %g\n", x1, -x1, x2, -x2);
        } else if (y1 > epsilon && fabs(y2) < epsilon) {
            double x = sqrt(y1);
            printf("Three roots: x1 = %g, x2 = %g, x3 = 0\n", x, -x);
        } else if (y1 > epsilon && y2 < -epsilon) {
            double x = sqrt(y1);
            printf("Two roots: x1 = %g, x2 = %g\n", x, -x);
        } else if (fabs(y1) < epsilon && y2 < -epsilon) {
            printf("One root: x = 0\n");
        } else {
            printf("No real solutions\n");
        }
    }
}



int main() {
    double a, b, c;

    // Tests
    printf("a) Quadratic!\n");
    solve_quadratic(1, -3, 2); // Two roots: x1 = 2, x2 = 1
    solve_quadratic(1, 2, 1); // One root: x = -1
    solve_quadratic(1, 1, 1);  // No real solutions (D < 0)
    solve_quadratic(0, 2, -4); // One root: x = 2
    solve_quadratic(0, 0, 5);  // No solutions (0 != 5)
    solve_quadratic(0, 0, 0);  // Infinite solution

    // Tests for b)
    printf("b) Biquadratic!\n");
    solve_biquadratic(1, -5, 6);  // Four roots: x1 = 1.41421, x2 = -1.41421, x3 = 1.73205, x4 = -1.73205
    solve_biquadratic(1, -1, 0);  // Three roots: x1 = 1, x2 = -1, x3 = 0
    solve_biquadratic(1, 0, -1);  // Two roots: x1 = 1, x2 = -1
    solve_biquadratic(1, 1, 1);   // No real solutions (D < 0)
    solve_biquadratic(0, 1, -4);  // Two roots: x1 = 2, x2 = -2
}