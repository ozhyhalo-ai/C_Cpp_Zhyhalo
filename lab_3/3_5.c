# include <stdio.h>
# include <math.h>

int absolute(int a){
    return (a < 0) ? -a : a;
}

int maximum(int a, int b){
    if(a>b) return a;
    return b;
}

int minimum(int a, int b){
    return (a < b) ? a : b; // Python: return a if a<b else b
}

void task3_5(){
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Max(%d, %d) = %d, Min(%d, %d) = %d\n", x, y, maximum(x,y), x, y, minimum(x,y));
}

int main(){
    task3_5();
}