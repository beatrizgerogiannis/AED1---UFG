#include "ex08.h"

int main(){

    Pilha *pilha = inicia_pilha();
    int maior = 0, menor = 0;
    float media = 0;

    insere(pilha, 1);
    insere(pilha, 2);
    insere(pilha, 3);
    insere(pilha, 4);
    insere(pilha, 5);

    menor_maior_media(pilha, &menor, &maior, &media);

    printf("O menor valor da pilha e: %d\n", menor);
    printf("O maior valor da pilha e: %d\n", maior);
    printf("O media valor da pilha e: %.2f\n", media);

    libera_memoria(pilha);

    return 0;
}