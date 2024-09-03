#include "ex05.h"

void inicia_Lista(Lista *lista){
    lista->inicio = INICIO;
    lista->final = INICIO;
}

void insere_Fim(Lista *lista, int x){
    if(lista->final == TAM_MAX){
        printf("A lista ja atingiu a capacidade maxima.\n");
    }else{
        lista->item[lista->final] = x;
        lista->final++;
    }
}

void imprime(Lista lista){
    for(int i=lista.inicio; i<lista.final; i++){
        printf("%d-", lista.item[i]);
    }
}

float retorna_Media(Lista lista){
    float soma=0, qtd=0;
    
    for(int i=lista.inicio; i<lista.final; i++){
        soma += lista.item[i];
        qtd++;
    }
    return soma/qtd;
}