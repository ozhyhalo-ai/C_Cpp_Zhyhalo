# include <stdio.h>

int main(){

    /*
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);

    int y = x*x;
    y *= y;
    printf("x^4 = %d\n", y);*/

    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);

    int y = x*x; //2
    y *= y; //4
    y *= y; //8
    y *= x; //9


    printf("x^9 = %d\n", y);
}