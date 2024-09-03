#include "ex19.h"


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

void inverte(Pilha *pilha){
    No *aux1 = pilha->inicio;
    No *aux2 = pilha->inicio;
    
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
        
        aux2=pilha->inicio;
        
        while(cont3 < cont2){
            aux2 = aux2->prox;
            cont3++;
        }
    }
}