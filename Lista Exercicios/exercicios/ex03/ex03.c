#include "ex03.h"

void inicia_Lista(Lista *lista){
    lista->inicio = INICIO;
    lista->final = INICIO;
}

void insere_Final(Lista *lista, int x){
    if(lista->final == TAM_MAX){
        printf("Essa lista ja esta na capacidade maxima.\n");
    }else{
        lista->item[lista->final] = x;
        lista->final ++;
    }
}

void imprime(Lista lista){
    for(int i=0; i<lista.final; i++){
        printf("%d-", lista.item[i]);
    }
}

void retorna_Maior(Lista lista, int *maior, int *posicao){
    if(lista.inicio == lista.final){
        printf("A lista esta vazia, nao foi possivel realizar a operacao");
    }else{
        *maior = lista.item[lista.inicio];
        *posicao = lista.inicio;

        for(int i=lista.inicio; i<lista.final; i++){
            if(lista.item[i] > *maior){
                *maior = lista.item[i];
                *posicao = i;
            }
        }
    }
}