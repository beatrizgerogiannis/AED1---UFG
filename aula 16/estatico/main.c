#include "ex01.h"

int main(){

    Pilha pilha;

    inicia_pilha(&pilha);

    empilha(&pilha, 1);
    empilha(&pilha, 2);
    empilha(&pilha, 3);
    empilha(&pilha, 4);
    empilha(&pilha, 5);
    empilha(&pilha, 6);
    empilha(&pilha, 7);
    empilha(&pilha, 8);
    empilha(&pilha, 9);
    empilha(&pilha, 10);

    imprime(&pilha);

    desempilha(&pilha);
    desempilha(&pilha);

    printf("\n\n\n");
    imprime(&pilha);

    return 0;
}