#include "ex15.h"

No *aloca_no(){
    No *p = (No*)malloc(sizeof(No));
    p->prox = NULL;

    return p;
}

Fila *inicia_fila(){
    Fila *fila = (Fila*)malloc(sizeof(Fila));
    
    fila->inicio = NULL;
    fila->final = NULL;

    return fila;
}

void insere(Fila *fila, int id){
    No *aux = aloca_no();
    aux->id = id;
    
    if(fila->inicio == NULL){
        fila->inicio = aux;
        fila->final = aux;
    }else{
        fila->final->prox = aux;
        fila->final = aux;
    }

    return;
}

void inverte(Fila *fila){
    No *aux1 = fila->inicio;
    No *aux2 = fila->inicio;
    
    int cont1 = 0;
    int cont2=0;
    
    while(aux2->prox != NULL){
        aux2 = aux2->prox;
        cont2++;
    }
    
    while(cont1 != cont2){
        int aux3 = aux1->id;
        
        aux1->id = aux2->id;
        aux2->id = aux3;
        
        aux1 = aux1->prox;
        
        int cont3 = 0;
        
        cont1++;
        cont2--;
        
        aux2=fila->inicio;
        
        while(cont3 < cont2){
            aux2 = aux2->prox;
            cont3++;
        }
    }
}

void imprime(Fila *fila){
    if(fila->inicio == NULL){
        printf("A fila esta vazia.\n");
    }else{
        No *aux = fila->inicio;

        while(aux != 0){
            printf("%d ", aux->id);
            aux = aux->prox;
        }
    }
    return;
}

void libera_memoria_fila(Fila *fila){
    No *aux = fila->inicio;
    No *aux2;

    while(aux != NULL){
        aux2 = aux;
        aux = aux->prox;
        free(aux2);
    }
    return;
}