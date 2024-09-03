#include <stdio.h>

#define TAM_MAX 10
#define INICIO 0

typedef struct{
    int item[TAM_MAX];
    int inicio;
    int final;
    int tamanho;
}Lista;

void enfileira(Lista *lista, int id){
    if(lista->final == TAM_MAX - 1){
        for (int i = 0; i < lista->tamanho; i++) {
            lista->item[i] = lista->item[lista->inicio + i];
        }
        lista->inicio = 0;
        lista->final = lista->tamanho - 1;
    }
    
    lista->final++;
    lista->item[lista->final] = id;
    lista->tamanho++;

    return;
}

void desinfileira(Lista *lista){
    if(lista->tamanho == 0){
        printf("Ja esta vazia.\n");
        return;
    }

    lista->inicio++;
    lista->final--;

    return;
}
