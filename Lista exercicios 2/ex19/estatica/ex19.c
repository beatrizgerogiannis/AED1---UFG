#include "ex19.h"


void inicia_pilha(Pilha *pilha){
    pilha->inicio = INICIO;

    return;
}

void insere(Pilha *pilha, int id){
    if(pilha->inicio == TAM_MAX - 1){
        printf("A pilha ja esta cheia.\n");
    }else{
        pilha->item[pilha->inicio] = id;
        pilha->inicio++;
    }
}

Pilha inverte(Pilha *pilha){
    Pilha aux;

    inicia_pilha(&aux);

    while(pilha->inicio != 0){
        insere(&aux, pilha->item[pilha->inicio-1]);
        pilha->inicio--;
    }

    return aux;
}

void imprime(Pilha pilha){
    for(int i=pilha.inicio-1; i>=0; i--){
        printf("%d ", pilha.item[i]);
    }
    return;
}