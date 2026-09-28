#include <stdio.h>

unsigned sum_of_digits(unsigned x){
    unsigned units = x%10;
    unsigned tens = (x/10)%10;
    unsigned hundreds = (x/100); // intreger division to get the hundreds digit and beyond

    return units + tens + hundreds;
}

unsigned inverse(unsigned x){
    unsigned units = x%10;
    unsigned tens = (x/10)%10;
    unsigned hundreds = (x/100); // intreger division to get the hundreds digit and beyond

    return 100*units + 10*tens + hundreds;
}

void print_combination(unsigned x){
    printf("Combinations of digits for %u:\n", x);
    unsigned units = x%10;
    unsigned tens = (x/10)%10;
    unsigned hundreds = (x/100); // intreger division to get the hundreds digit and beyond

    if(units==tens || units==hundreds || tens==hundreds){
        printf("Not all the digits are unique.\n");
        return;
    }

    printf("%u %u %u\n", hundreds, tens, units);
    printf("%u %u %u\n", units, tens, hundreds);
    printf("%u %u %u\n", tens, hundreds, units);
    printf("%u %u %u\n", units, hundreds, tens);
    printf("%u %u %u\n", tens, units, hundreds);
    printf("%u %u %u\n", hundreds, units, tens);
}

void task1_2(unsigned x){
    if(x>99 && x<1000){
    
        unsigned char units = (unsigned char)(x % 10);
        printf("Units digit: %hhu\n", units);

        unsigned char tens = (unsigned char)((x / 10) % 10);
        printf("Tens digit: %hhu\n", tens);

        unsigned short hundreds = (unsigned short)(x / 100);
        printf("Hundreds digit: %hu\n", hundreds);

        /// Tests
        printf("Running tests...\n");
        printf("Sum of digits of 123: %u\n", sum_of_digits(123));
        printf("Inverse of 123: %u\n", inverse(123));
    
        unsigned sum = sum_of_digits(x);
        printf("Sum of digits: %u\n", sum);

        unsigned inv = inverse(x);
        printf("Inverse: %u\n", inv);

        print_combination(x);
    }

    else{
        printf("The entered number is not a three-digit unsigned intreger.\n");
    }
}

int main(){
    //tests
    task1_2(-3);
    task1_2(67);
    task1_2(1999);
    task1_2(123);
    task1_2(121);

    unsigned x;
    printf("Enter an unsigned intreger: ");
    scanf("%u", &x);
    printf("You entered: %u\n", x);

    task1_2(x);
}