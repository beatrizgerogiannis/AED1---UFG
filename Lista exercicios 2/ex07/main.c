#include "ex07.h"

int main(){

    Pilha *pilha = inicia_pilha();
    int topo;

    insere(pilha, 1);
    insere(pilha, 2);
    insere(pilha, 3);
    insere(pilha, 4);
    insere(pilha, 5);

    printf("Pilha antes de ser retirado o item do topo:\n");
    imprime(pilha);


    topo = retira(pilha);
    printf("\nO elemento no topo era %d\n", topo);
    printf("\nPilha apos o elemento do topo ter sido retirado.\n");
    imprime(pilha);

    libera_memoria(pilha);

    return 0;
}