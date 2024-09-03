#include <stdio.h>

int main(){

    float num1, num2;

    printf("Insira dois numeros: ");
    scanf("%f %f", &num1, &num2);

    if(num1 > num2){
        printf("Maior = %.2f", num1);
        printf("Menor = %.2f", num2);
    }else{
        printf("Maior = %.2f\n", num2);
        printf("Menor = %.2f", num1);
    }

    return 0;
}