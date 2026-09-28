#include <stdio.h>

void test_cases() {
    printf("Running tests...\n");
    
    // Test A: numbers up to 2^10 (approx 1000)
    int a1 = 1000, b1 = 500, c1 = 2;
    int prod1 = a1 * b1 * c1;
    printf("Test A (1000 * 500 * 2): %d\n", prod1);

    // Test B: numbers up to 2^21 (approx 2 million)
    // We use LL suffix to explicitly define large numbers in C
    long long a2 = 2000000LL, b2 = 2000000LL, c2 = 2LL;
    long long prod2 = a2 * b2 * c2;
    printf("Test B (2000000 * 2000000 * 2): %lld\n", prod2);
    
    printf("\n");
}

int main() {
    test_cases();

    //Task a
    printf("Task a (Numbers < 2^10)\n");
    int a_small, b_small, c_small;
    
    printf("Enter three integers: ");
    scanf("%d %d %d", &a_small, &b_small, &c_small);
    
    int product_small = a_small * b_small * c_small;
    printf("Product A: %d\n\n", product_small);

    //Task б
    printf("Task b (Numbers < 2^21)\n");
    long long a_large, b_large, c_large;
    
    printf("Enter three large integers: ");
    scanf("%lld %lld %lld", &a_large, &b_large, &c_large);
    
    long long product_large = a_large * b_large * c_large;
    printf("Product B: %lld\n", product_large);
}