#include <stdio.h>

int main() {
    unsigned int n;
    printf("Enter a value for n (n<25): ");
    scanf("%u", &n);

    //Base case
    unsigned long long subfactorial = 1;

    for (unsigned int i = 1; i <= n; i++){
        if (i%2==0){
            subfactorial = i * subfactorial + 1;
        } else {
            subfactorial = i * subfactorial - 1;
        }
    }
    printf("!%u = %llu\n", n, subfactorial);
}   