// г
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// check if a floating-point number is practically zero
bool is_zero(double x) {
    return fabs(x) < 1e-9;
}

// main function
double my_arctg(double x) {
    return atan(x);
}

// analytical derivative
double my_arctg_derivative(double x) {
    return 1.0 / (1.0 + x * x);
}

// numerical derivative calculated using the central difference formula
double numerical_derivative(double x, double h) {
    return (my_arctg(x + h) - my_arctg(x - h)) / (2.0 * h);
}

// Run basic tests for zero
int test_arctg() {
    if (!is_zero(my_arctg(0.0))) {
        printf("Test failed: my_arctg(0) != 0\n");
        return 1;
    }

    if (!is_zero(my_arctg_derivative(0.0) - 1.0)) {
        printf("Test failed: my_arctg_derivative(0) != 1.0\n");
        return 1;
    }

    return 0;
}

// TESTS
void print_test_table() {
    double h = 1e-5;
    double x, diff;

    printf("   x   |  arctg(x) | analyt_der|  num_der  |   diff\n");

    x = -10.00;
    diff = fabs(my_arctg_derivative(x) - numerical_derivative(x, h));
    printf("%6.2f | %9.6f | %9.6f | %9.6f | %9.2e\n", 
        x, my_arctg(x), my_arctg_derivative(x), numerical_derivative(x, h), diff);

    x = -1.00;
    diff = fabs(my_arctg_derivative(x) - numerical_derivative(x, h));
    printf("%6.2f | %9.6f | %9.6f | %9.6f | %9.2e\n", 
        x, my_arctg(x), my_arctg_derivative(x), numerical_derivative(x, h), diff);

    x = -0.50;
    diff = fabs(my_arctg_derivative(x) - numerical_derivative(x, h));
    printf("%6.2f | %9.6f | %9.6f | %9.6f | %9.2e\n", 
        x, my_arctg(x), my_arctg_derivative(x), numerical_derivative(x, h), diff);

    x = 0.00;
    diff = fabs(my_arctg_derivative(x) - numerical_derivative(x, h));
    printf("%6.2f | %9.6f | %9.6f | %9.6f | %9.2e\n", 
        x, my_arctg(x), my_arctg_derivative(x), numerical_derivative(x, h), diff);

    x = 0.50;
    diff = fabs(my_arctg_derivative(x) - numerical_derivative(x, h));
    printf("%6.2f | %9.6f | %9.6f | %9.6f | %9.2e\n", 
        x, my_arctg(x), my_arctg_derivative(x), numerical_derivative(x, h), diff);

    x = 1.00;
    diff = fabs(my_arctg_derivative(x) - numerical_derivative(x, h));
    printf("%6.2f | %9.6f | %9.6f | %9.6f | %9.2e\n", 
        x, my_arctg(x), my_arctg_derivative(x), numerical_derivative(x, h), diff);

    x = 10.00;
    diff = fabs(my_arctg_derivative(x) - numerical_derivative(x, h));
    printf("%6.2f | %9.6f | %9.6f | %9.6f | %9.2e\n", 
        x, my_arctg(x), my_arctg_derivative(x), numerical_derivative(x, h), diff);
}

int main() {
    test_arctg();
    print_test_table();
}
