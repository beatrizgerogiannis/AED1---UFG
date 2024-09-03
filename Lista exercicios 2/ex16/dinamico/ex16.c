#include "ex16.h"

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

void retira_negativo(Fila *fila){
    if(fila->inicio == NULL){
        printf("A fila esta vazia.\n");
    }else{
        No *aux = fila->inicio;

        while(aux != NULL){
            if(aux == fila->inicio && aux->id < 0){
                No *aux2 = fila->inicio;
                fila->inicio = fila->inicio->prox;
                free(aux2);

                aux = fila->inicio;
            }else if(aux == fila->final && aux->id < 0 ){
                No *aux3 = fila->inicio;
                    
                while(aux3->prox != fila->final){
                    aux3 = aux3->prox;
                }

                aux3->prox = NULL;
                free(fila->final);
                fila->final = aux3;

                aux = NULL;

            }else{
                if(aux->id < 0 ){
                    No *aux4 = fila->inicio;

                    while(aux4->prox != aux){
                        aux4 = aux4->prox;
                    }

                    aux4->prox = aux->prox;
                    free(aux);
                    aux = aux4;
                }
            aux = aux->prox;
            }
        }
    }
    return;
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