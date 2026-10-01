#include <stdio.h>
#include <math.h>

int main() {
    double value, sum = 0.0, product = 1.0;
    unsigned int count = 0;

    while(1) {
        printf("a[%u]=", count);
        scanf("%lf", &value);
        if (value == 0.0) {
            break;
        }
        sum += value;
        product *= value;
        count++;
    }
    if (count > 0) {
        double arithmetic_mean = sum / count;
        double geometric_mean = pow(product, 1.0 / count);
        printf("Sum: %lf\n", sum);
        printf("Arithmetic Mean: %lf\n", arithmetic_mean);
        printf("Geometric Mean: %lf\n", geometric_mean);
        } else {
            printf("No values were entered.\n");
        }
}