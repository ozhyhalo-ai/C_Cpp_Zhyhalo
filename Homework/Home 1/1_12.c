#include <stdio.h>

int main() {
    // Calculate the period using floating-point literals
    double T = 365.0 + 1.0 / (4.0 + 1.0 / (7.0 + 1.0 / (1.0 + 1.0 / 3.0)));

    printf("T = %f\n", T);
}
