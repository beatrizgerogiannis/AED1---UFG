#include <stdio.h>

int main(){

    int tamanho_seq;
    float numero, maior_numero;

    printf("Insira a quantidade de numeros da sequencia: ");
    scanf("%d", &tamanho_seq);

    scanf("%f", &maior_numero);

    for(int i=1; i<tamanho_seq; i++){
        scanf("%f", &numero);
        if(numero > maior_numero){
            maior_numero = numero;
        }
    }

    printf("O maior numero da sequencia e: %.2f", maior_numero);

    return 0;
}