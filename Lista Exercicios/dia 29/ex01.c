#include "ex01.h"

No* aloca_No(){
    No* p = (No*)malloc(sizeof(No));
    p->prox = NULL;
    
    return p;
}

Lista* inicia_Lista(){
    Lista* lista;

    lista = (Lista*)malloc(sizeof(Lista));

    lista->inicio = NULL;
    lista->fim = NULL;

    return lista;
}

void insere_Fim(Lista* lista, int x){
    No* p = aloca_No();
    p->item = x;

    if(lista->inicio == NULL){
        lista->inicio = p;
        lista->fim = p;
    }else{
        lista->fim->prox = p;
        lista->fim = p;
    }
}

void imprime(Lista* lista){
    No* aux = lista->inicio;

    if(lista->inicio == NULL){
        printf("Essa lista esta vazia.\n");
    }else{
        while(aux != NULL){
            printf("%d-", aux->item);
            aux = aux->prox;
        }
    }
}

int conta_Impares(Lista* lista){
    No* aux = lista->inicio;
    int cont_impar=0;

    if(lista->inicio == NULL){
        printf("Essa lista esta vazia.\n");
    }else{
        while(aux != NULL){
            if((aux->item % 2) != 0){
                cont_impar++;
            }
            aux = aux->prox;
        }
    }
    return cont_impar;
}

int menor_Valor(Lista* lista){
    No* aux = lista->inicio;
    int menor_Valor = aux->item;

    while(aux != NULL){
        if(aux->item < menor_Valor){
            menor_Valor = aux->item;
        }
        aux = aux->prox;
    }
    return menor_Valor;
}