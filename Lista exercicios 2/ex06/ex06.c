#include "ex06.h"

No *aloca_no(){
    No *p = (No*)malloc(sizeof(No));
    p->prox = NULL;

    return p;
}

Lista *inicia_lista(){
    Lista *lista = (Lista*)malloc(sizeof(Lista));
    
    lista->inicio = NULL;
    lista->final = NULL;

    return lista;
}

void insere(Lista *lista, int id){
    No *aux = aloca_no();
    aux->id = id;
    
    if(lista->inicio == NULL){
        lista->inicio = aux;
        lista->final = aux;
    }else{
        lista->final->prox = aux;
        lista->final = aux;
    }

    return;
}

void separa(Lista *lista1, Lista *lista2, Lista *lista3){ //põe os elementos da lista 1 e 2 e os bota em ordem crescente na lista 3.
    No *aux1 = lista1->inicio;
    No *aux2 = lista2->inicio;

    while(aux1 != NULL || aux2 != NULL){ //enquanto a lista 1 e 2 não estiverem vazias.
        if(aux1 == NULL){ //caso a lista 1 esteja vazia, poe os elementos restantes da lista 2 na lista 3.
            while(aux2 != NULL){
                insere(lista3, aux2->id);
                aux2 = aux2->prox;
            }
            return;
        }else if(aux2 == NULL){ //caso a lista 2 esteja vazia, poe os elementos restantes da lista 1 na lista 3.
            while(aux1 != NULL){
                insere(lista3, aux1->id);
                aux1 = aux1->prox;
            }
            return;
        }else{ //caso a lista 1 e 2 ainda tenham elementos:
            if(aux1->id <= aux2->id){ // se o elemento atual da lista 1 for menor ou igual ao elemento atual da lista 2
                insere(lista3, aux1->id); //insere o elemento 1 na lista 3.
                aux1 = aux1->prox;
            }else{ //se o elemento atual da lista 2 for menor que o elemento atual da lista 1:
                insere(lista3, aux2->id); //insere o elemento 2 na lista 3.
                aux2 = aux2->prox;
            }
        }
    }   
    return;
}

void imprime(Lista *lista){
    if(lista->inicio == NULL){
        printf("A fila esta vazia.\n");
    }else{
        No *aux = lista->inicio;

        while(aux != NULL){
            printf("%d -", aux->id);

            aux = aux->prox;
        }
    }
    return;
}

void libera_memoria(Lista *lista){
    No *aux = lista->inicio;
    No *aux2;

    while(aux != NULL){
        aux2 = aux;
        aux = aux->prox;
        free(aux2);
    }
    return;
}