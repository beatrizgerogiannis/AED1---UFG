#include "ex15.h"

void inicializar(Fila *fila){
   
    fila->inicio = INICIO;
    fila->final = fila->inicio;

    return;
}

void insere(Fila *fila, int id){
    if(fila->final == TAM_MAX){
        printf("A lista ja esta cheia.\n");
        return;
    }else{
        fila->item[fila->final] = id;
        fila->final++;
    }
    return;
}

void inverte_fila(Fila *fila){
    int aux[TAM_MAX];
    int j = fila->final-1;

    for(int i=0; i<=fila->final; i++){
        aux[i] = fila->item[i];
    }

    for(int i=0; i<=fila->final; i++){
        fila->item[i] = aux[j];
        j--;
    }
}

void imprime(Fila fila){
    if(fila.inicio == fila.final){
        printf("A fila esta vazia.\n");
    }else{
        int aux;
        for(aux = fila.inicio; aux < fila.final; aux++){
            printf("%d ", fila.item[aux]);
        }
    }
    return;
}