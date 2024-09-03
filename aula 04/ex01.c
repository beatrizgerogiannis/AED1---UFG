#include <stdio.h>

float retorna_menor(float num1, float num2);

int main(){

    float num1, num2, menor_num;
    printf("Insira dois numeros: ");
    scanf("%f %f", &num1, &num2);

    menor_num = retorna_menor(num1, num2);
    printf("O menor numero e: %.2f", menor_num);

    return 0;
}

float retorna_menor(float num1, float num2){
    if(num1 > num2){
        return num2;
    }else{
        return num1;
    }
}