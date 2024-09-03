#include "ex19.h"

int main(){

    Pilha pilha;

    inicia_pilha(&pilha);

    insere(&pilha, 1);
    insere(&pilha, 2);
    insere(&pilha, 3);
    insere(&pilha, 4);
    insere(&pilha, 5);

    printf("Antes de inverter: ");
    imprime(pilha);
    printf("\n");

    pilha = inverte(&pilha);
    printf("Depois de inverter: ");
    imprime(pilha);

    return 0;
}