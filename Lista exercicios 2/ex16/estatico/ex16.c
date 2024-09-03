#include "ex16.h"

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

void tira_negativos(Fila *fila){
    if(fila->inicio == fila->final){
        printf("A fila esta vazia.\n");
    }else{
        for(int i = fila->inicio; i<fila->final; i++){
            if(fila->item[i] < 0){
                for(int j = i; j<fila->final - 1; j++){
                    fila->item[j] = fila->item[j+1];
                }
                fila->final--;
            }
        }
    }
    return;
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