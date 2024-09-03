#include "ex04.h"

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
    for(int i=0; i<lista.final; i++){
        printf("%d-", lista.item[i]);
    }
}

int numeros_Pares(Lista lista){
    int numeros_Pares=0;

    for(int i=0; i<lista.final; i++){
        if((lista.item[i] % 2) == 0){
            numeros_Pares++;
        }
    }
    return numeros_Pares;
}