#include "ex21.h"

int main(){

    Pilha *pilha = inicia_pilha();

    insere(pilha, 11);
    insere(pilha, 34);
    retira(pilha);
    retira(pilha);
    insere(pilha, 23);
    insere(pilha, 45);
    retira(pilha);
    insere(pilha, 121);
    insere(pilha, 22);
    retira(pilha);
    retira(pilha);

    imprime(pilha);

    libera_memoria(pilha);

    return 0;
}