#include "ex10.h"

No* aloca_No(){
    No* p = (No*)malloc(sizeof(No));
    p->prox = NULL;
    return p;
}

Lista* inicia_Lista(){
    Lista* lista = (Lista*)malloc(sizeof(Lista));

    lista->inicio = NULL;
    lista->final = NULL;

    return lista;
}

void insere_Fim(Lista* lista, int x){
    
    No* p = aloca_No();
    p->item = x;

    if(lista->inicio == NULL){
        lista->inicio = p;
        lista->final = p; 
    }else{
        lista->final->prox = p;
        lista->final = p;
    }
}
void imprime(Lista* lista){
    if(lista->inicio == NULL){
        printf("A lista esta vazia.\n");
    }else{
        No* aux = lista->inicio;

        while(aux != NULL){
            printf("%d-", aux->item);
            aux = aux->prox;
        }
    }
}

int soma_Lista(Lista* lista){
    No* aux = lista->inicio;
    int cont=0;

    while(aux != NULL){
        cont = cont + aux->item;
        aux = aux->prox;
    }
    return cont;
}