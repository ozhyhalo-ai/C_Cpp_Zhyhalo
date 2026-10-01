# include <stdio.h>
# include <float.h>

int main(){
    float a = 1.0F;
    do{
        a /= 2.0F;
    } while (a + 1.0F != 1.0F);
    printf("The smallest positive float a such that 1.0 + a == 1.0 is: %g, %g\n", a, FLT_EPSILON);

    double a1 = 1.0;
    do{
        a1 /= 2.0;
    } while (a1 + 1.0 != 1.0);
    printf("The smallest positive double a such that 1.0 + a == 1.0 is: %g, %g\n", a1, DBL_EPSILON);

    long double a2 = 1.0L;
    do{
        a2 /= 2.0L;
    } while (a2 + 1.0L != 1.0L);
    printf("The smallest positive long double a such that 1.0 + a == 1.0 is: %Lg, %Lg\n", a2, LDBL_EPSILON);
}