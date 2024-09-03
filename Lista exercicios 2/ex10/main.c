#include "ex10.h"

int main(void){
    
    Pilha* pilha = inicia_pilha();
    
    insere(pilha, 'r');
    insere(pilha, 'a');
    insere(pilha, 'd');
    insere(pilha, 'a');
    insere(pilha, 'r');
    //insere(pilha, 'l');
    //insere(pilha, a);

    verifica_paliondromo(pilha);

    libera_memoria(pilha);

    return 0;
}