#include "teste.h"

No *aloca_No(){
    No *p = (No*)malloc(sizeof(No));
    p->prox = NULL;

    return p;
}

Lista *inicia_Lista(){
    Lista *lista;

    lista = (Lista*)malloc(sizeof(Lista));

    lista->inicio = NULL;
    lista->final = lista->inicio;

    return lista;
}

void insere_Fim(Lista *lista, int x){
    No *p = aloca_No();
    p->item = x;
    
    if(lista->inicio == NULL){
        lista->inicio = p;
        lista->final = p;
    }else{
        lista->final->prox = p;
        lista->final = p;
    }
}

void insere_Inicio(Lista *lista, int x){
    No *p = aloca_No();
    p->item = x;

    if(lista->inicio == NULL){
        lista->inicio = p;
        lista->final = p;
    }else{
        p->prox = lista->inicio;
        lista->inicio = p;
    }
}

void imprime(Lista *lista){
    if(lista->inicio == NULL){
        printf("A lista esta vazia.\n");
    }else{
        No *aux = lista->inicio;
        while(aux != NULL){
            printf("%d-", aux->item);
            aux = aux->prox;
        }
    }
}

Lista *intercala_listas(Lista *lista, Lista *lista2){
    No *aux1 = lista->inicio;
    No *aux2 = lista2->inicio;
    Lista *lista3;

    lista3 = inicia_Lista();

    while(aux2 != NULL){
        insere_Fim(lista3, aux1->item);
        aux1 = aux1->prox;

        insere_Fim(lista3, aux2->item);
        aux2 = aux2->prox;
    }
    return lista3;
}