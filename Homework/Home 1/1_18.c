#include <stdio.h>

int main() {
    char c1 = 'O';
    char c2 = 'X';
    char c3 = ' ';

    printf("%c | %c | %c\n", c1, c2, c3);
    printf("%c | %c | %c\n", c3, c2, c1);
    printf("%c | %c | %c\n", c2, c1, c3);
}