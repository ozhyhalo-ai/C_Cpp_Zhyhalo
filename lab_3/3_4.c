# include <stdio.h>
# include <stdint.h>
#include <inttypes.h>


uint16_t mult(uint8_t a, uint8_t b) {
    return (uint16_t)a * b;
}


int main(){
    uint64_t x, y, z;
    printf("Enter tree intregers: ");
    scanf("%" SCNu64 ",%" SCNu64 ",%" SCNu64 "", &x, &y, &z);

    printf("You entered: %" PRIu64 ", %" PRIu64 ", %" PRIu64 "\n", x, y, z);

    uint64_t d = x*y*z;
    printf("Product: %" PRIu64 "\n", d);

    uint8_t a, b;
    printf("Enter two 8-bit intregers: ");
    scanf("%" SCNu8 ",%" SCNu8 "", &a, &b);
    printf("You entered: %" PRIu8 ", %" PRIu8 "\n", a, b);
    int16_t result = mult(a, b);

    printf("Product: %" PRId16 "\n", result);


}