#include "ex.h"

void *aloca_no(){
    No *p = (No*)malloc(sizeof(No));
    p->prox = NULL;

    return p;
}

void *inicia_lista(){
    Lista *lista = (Lista*)malloc(sizeof(Lista));

    lista->inicio = NULL;
    lista->final = lista->inicio;

    return lista;
}

void insere_inicio(Lista *lista, int x){
    No *p = aloca_no();

    p->item = x;

    if(lista->inicio == NULL){
        lista->inicio = p;
        lista->final = p;
        p->prox = p;
    }else{
        p->prox = lista->inicio;
        lista->inicio = p;
        lista->final->prox = p;
    }

    return;
}

void insere_final(Lista *lista, int x){
    No *p = aloca_no();

    p->item = x;

    if(lista->inicio == NULL){
        lista->inicio = p;
        lista->final = p;
        p->prox = p;
    }else{
        lista->final->prox = p;
        p->prox = lista->inicio;
        lista->final = p;
    }
    return;
}

void remove_inicio(Lista *lista){
    if(lista->inicio == NULL){
        printf("A lista esta vazia!\n");
    }else{
        No *aux = lista->inicio;

        if(lista->inicio->prox == lista->inicio){
            lista->inicio = NULL;
            lista->final = NULL;
        }else{
            lista->inicio = lista->inicio->prox;
            lista->final->prox = lista->inicio;
        }
        free(aux);
    }
    return;
}

void remove_final(Lista *lista){
    if(lista->inicio == NULL){
        printf("A lista esta vazia!\n");
    }else{
        No *aux = lista->inicio;

        while(aux->prox != lista->final->prox){
            aux = aux->prox;
        }

        if(lista->inicio == lista->inicio->prox){
            lista->inicio = NULL;
            lista->final = NULL;
        }else{
            lista->final;
        }
    }
}

int buscar_elementos(Lista *lista, int x){
    if(lista->inicio == NULL){
        printf("A lista esta vazia!\n");
    }else{
        No *aux = lista->inicio;
        while(aux != NULL){
            if(aux->item == x){
                return 1;
                aux = aux->prox;
            }
            return 0;
        }
    }
    return;
}

int qtd_elementos(Lista *lista){
    if(lista->inicio == NULL){
        printf("A lista esta vazia.\n");
    }else{
        No *aux = lista->inicio;
        int cont = 0;

        while(aux != NULL){
            cont++;
            aux = aux->prox;
        }
    }
}