#include "ex19.h"

int main(void){
    Pilha* pilha = inicia_pilha();
    
    insere(pilha,1);
    insere(pilha,2);
    insere(pilha,3);
    insere(pilha,4);
    insere(pilha,5);
    
    inverte(pilha);
    
    imprime(pilha);
    
    libera_memoria(pilha);

    return 0;
}