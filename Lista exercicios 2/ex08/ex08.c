#include "ex08.h"


No *aloca_no(){
    No *p = (No*)malloc(sizeof(No));
    p->prox = NULL;

    return p;
}

Pilha *inicia_pilha(){
    Pilha *pilha = (Pilha*)malloc(sizeof(Pilha));

    pilha->inicio = NULL;

    return pilha;
}

void insere(Pilha *pilha, int id){
    No *aux = aloca_no();
    aux->id = id;

    if(pilha->inicio == NULL){
        pilha->inicio = aux; 
    }else{
        aux->prox = pilha->inicio;
        pilha->inicio = aux;
    }
    return;
}

void menor_maior_media(Pilha *pilha, int *menor, int *maior, float *media){
    No *aux = pilha->inicio;
    float cont=0;
    (*menor) = aux->id;
    (*maior) = aux->id;

    while(aux != NULL){
        if(aux->id > (*maior)){
            *maior = aux->id;
        }
        if(aux->id < (*menor)){
            *menor = aux->id;
        }
        (*media) += aux->id;    
        cont++;
        aux = aux->prox;
    }
    (*media) = (*media) / cont;
    
    return;
}

void imprime(Pilha *pilha){
    if(pilha->inicio == NULL){
        printf("A pilha esta vazia.\n");
    }else{
        No *aux = pilha->inicio;

        while(aux != NULL){
            printf("%d\n", aux->id);

            aux = aux->prox;
        }
    }
    return;
}

void libera_memoria(Pilha *pilha){
    No *aux = pilha->inicio;
    No *aux2;

    while(aux != NULL){
        aux2 = aux;
        aux = aux->prox;
        free(aux2);
    }
    return;
}