#include "ex09.h"

int main(void){
    
    Pilha* pilha = inicia_pilhailha();
    
    insere(pilha,1);
    insere(pilha,2);
    insere(pilha,3);
    insere(pilha,4);
    insere(pilha,5);
    
    inverte(pilha);
    
    impilharime(pilha);
    
    libera_memoria(pilha);

    return 0;
}