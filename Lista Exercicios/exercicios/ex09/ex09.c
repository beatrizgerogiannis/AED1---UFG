#include "ex09.h"

//Aloca espaço na memória
No* aloca_No(){
    No* p = (No*)malloc(sizeof(No));
    p->prox = NULL;
    
    return p;
}

//Inicia a lista
Lista* inicia_Lista(){
    Lista* lista;
    lista = (Lista*)malloc(sizeof(Lista));
    
    lista->inicio = NULL;
    lista->final = NULL;
}

//Insere o termo no final da lista
Lista* insere_Fim(Lista* lista, int x){
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

//Imprime  a lista
void imprime(Lista* lista){
    if(lista->inicio == NULL){
        printf("Essa lista esta vazia!\n");
    }else{
        No* aux = lista->inicio;    
        
        while(aux != NULL){
            printf("%d-", aux->item);
            aux = aux->prox;
        }
    }
}

//Intercala os termos de 2 listas em uma terceira lista
Lista* intercala_Listas(Lista* lista1, Lista* lista2){
    Lista* lista3;
    lista3 = inicia_Lista();

    No* aux1 = lista1->inicio;
    No* aux2 = lista2->inicio;

    while(aux2 != NULL){
        insere_Fim(lista3, aux1->item);
        aux1 = aux1->prox;
        insere_Fim(lista3, aux2->item);
        aux2 = aux2->prox;
    }

    return lista3;
}

//Libera os espaços de memoria alocados para as listasa
void libera(Lista* lista){
    No* aux = lista->inicio;
    while(aux != NULL){
        lista->inicio = lista->inicio->prox;
        free(aux);
        aux = lista->inicio;
    }
}