#include "ex01.h"

No *aloca_No(){
    No *p = (No*)malloc(sizeof(No));
    p->prox = NULL;

    return p;
}

Pilha *inicia_pilha(){
    Pilha *pilha;
    pilha = (Pilha*)malloc(sizeof(Pilha));

    pilha->inicio = NULL;
    pilha->final = NULL;

    return pilha;
}

int vazia(Pilha *pilha){
    if(pilha->inicio == NULL){
        return 1;
    }else{
        return 0;
    }
}

void empilha(Pilha *pilha, int x){
    No *p = aloca_No();
    p->item = x;
    
    if(pilha->inicio == NULL){
        pilha->inicio = p;
        pilha->final = p;
    }else{
        p->prox = pilha->inicio;
        pilha->inicio = p;
    }
    return;
}

void desempilha(Pilha *pilha){
    if(pilha->inicio == NULL){
        printf("A fila ja esta vazia!\n");
    }else{
        No *p = pilha->inicio;
        pilha->inicio = pilha->inicio->prox;

        free(p);
    }
    return;
}

int tamanho_atual(Pilha *pilha){
    No *aux = pilha->inicio;
    int tamanho = 0;

    while(aux != NULL){
        tamanho++;
        aux = aux->prox;
    }
    return tamanho;
}

void imprime(Pilha *pilha){
    No *aux = pilha->inicio;

    while(aux != NULL){
        printf("%d\n", aux->item);
        aux = aux->prox;
    }
    return;
}