// Task в

#include <stdio.h>

double get_z(double y){
    if (y < 10.0){
        return y;
    } else {
        return 1.0;
    }
}


// Test 1: Checks the loop logic with mixed numbers
void run_test_1() {
    double sum = 0.0;
    unsigned n = 3;
    double current_y;
    
    for (unsigned i = 1; i <= n; i++) {
        if (i == 1) current_y = 5.0;
        else if (i == 2) current_y = 12.0;
        else if (i == 3) current_y = 8.0;
        
        // The core logic inside the loop
        if (current_y < 10.0) {
            sum += current_y;
        } else {
            sum += 1.0;
        }
    }
    
    printf("Test 1. Result: %lf (Expected: 14.000000)\n", sum);
}

// Test 2: Checks the loop logic when all numbers are >= 10
void run_test_2() {
    double sum = 0.0;
    unsigned n = 2;
    double current_y;
    
    for (unsigned i = 1; i <= n; i++) {
        if (i == 1) current_y = 10.0;
        else if (i == 2) current_y = 25.0;
        
        if (current_y < 10.0) {
            sum += current_y;
        } else {
            sum += 1.0;
        }
    }
    
    printf("Test 2. Result: %lf (Expected: 2.000000)\n\n", sum);
}

int main() {
    run_test_1();
    run_test_2();

    unsigned n;
    printf("Enter the number of elements n: ");
    scanf("%u", &n);

    double sum = 0.0, current_y;
    for (unsigned i = 1; i <= n; i++) {
        printf("y%u = ", i);
        scanf("%lf", &current_y);
        if (current_y < 10.0){
            sum += current_y;
        } else {
            sum += 1.0;
        }
    }
    printf("Result: %lf\n", sum);
}