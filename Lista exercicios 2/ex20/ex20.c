#include "ex20.h"


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
  
void copia(Pilha *pilha1, Pilha *pilha2){
    No *aux = pilha1->inicio;
    
    Pilha *pilha_aux = inicia_pilha(pilha_aux);

    while(aux != NULL){
        insere(pilha_aux, aux->id);
        aux = aux->prox;
    }

    No *aux2 = pilha_aux->inicio;

    while(aux2 != NULL){
        insere(pilha2, aux2->id);
        aux2 = aux2->prox;
    }

    libera_memoria(pilha_aux);
    return;
}

void imprime(Pilha *pilha){
    if(pilha->inicio == NULL){
        printf("A pilha esta vazia.\n");
    }else{
        No *aux = pilha->inicio;

        while(aux != NULL){
            printf("%d ", aux->id);

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

