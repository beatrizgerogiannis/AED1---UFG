#include <stdio.h>

int main(){

    float salario_min, salario_usuario, qtd_sm;
    salario_min = 1320; 

    printf("Insira o seu salario: ");
    scanf("%f", &salario_usuario);

    qtd_sm = salario_usuario / salario_min;

    printf("Voce recebe %.2f salario(s) minimo(s)", qtd_sm);

    return 0;
}