#include <stdio.h>

int main(){

    int num1=10, num2=20;

    if(&num1 > &num2){
        printf("num1 (%d) > num2(%d)", &num1, &num2);
    }else{
        printf("num1 (%d) < num2 (%d)", &num1, &num2);
    }

    return 0;
}