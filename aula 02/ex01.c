#include <stdio.h>

int main(){

    int num1, *p1;
    float num2, *p2;

    num1 = 10;
    num2 = 20;

    p1 = &num1;
    p2 = &num2;

    printf("%d %.2f\n", num1, num2);

    *p1 = 50;
    *p2 = 60;

    printf("%d %.2f", num1, num2);

    return 0;
}