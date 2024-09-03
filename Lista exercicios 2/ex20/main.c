#include "ex20.h"

int main(){

    Pilha *pilha1 = inicia_pilha();
    Pilha *pilha2 = inicia_pilha();

    insere(pilha1, 5);
    insere(pilha1, 4);
    insere(pilha1, 3);
    insere(pilha1, 2);
    insere(pilha1, 1);

    printf("Pilha 1: ");
    imprime(pilha1);
    printf("\n");

    copia(pilha1, pilha2);

    printf("Pilha 2: ");
    imprime(pilha2);

    libera_memoria(pilha1);
    libera_memoria(pilha2);

    return 0;
}