#include "ex08.h"

No *aloca_No(){
    No *p = (No*)malloc(sizeof(No));
    p->prox = NULL;
    
    return p;
}

Lista *inicia_lista(){
    Lista *lista;
    
    lista = (Lista*)malloc(sizeof(Lista));

    lista->inicio = NULL;
    lista->final = NULL;

    return lista;
}

void insere_Fim(Lista* lista, int x){
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

void insere_Inicio(Lista* lista, int x){
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

void remove_Repetido(Lista* lista){
    if (lista->inicio == NULL) {
        printf("Lista vazia");
        return;
    }

    No* aux = lista->inicio;
    No* prev = NULL;
    int valores[100] = {0}; // Assumindo um tamanho máximo de 100 para o vetor valores
    int tam = 0;

    while (aux != NULL) {
        if (valores[aux->item] == 1) {
            // O nó já foi encontrado antes, então é um nó duplicado
            if (prev == NULL) {
                // Nó duplicado é o primeiro da lista
                lista->inicio = aux->prox;
                free(aux);
                aux = lista->inicio;
            } else {
                // Nó duplicado está no meio ou no final da lista
                prev->prox = aux->prox;
                free(aux);
                aux = prev->prox;
            }
        } else {
            // Nó não duplicado
            valores[aux->item] = 1;
            prev = aux;
            aux = aux->prox;
        }
    }
}


