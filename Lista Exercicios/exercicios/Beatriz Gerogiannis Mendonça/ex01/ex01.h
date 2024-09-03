#include <stdio.h>
#include <stdlib.h>

#define INICIO 0
#define TAM_MAX 10

typedef struct{
    int item[TAM_MAX];
    int primeiro;
    int ultimo;
}Lista;

void inicia_Lista(Lista *lista);
void insere_Fim(Lista* lista, int x);
void imprime(Lista lista);
Lista concatena_Listas(Lista lista1, Lista lista2);
