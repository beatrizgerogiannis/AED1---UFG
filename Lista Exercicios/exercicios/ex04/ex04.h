#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 10
#define INICIO 0

typedef struct{
    int item[TAM_MAX];
    int inicio;
    int final;
}Lista;

void inicia_Lista(Lista *lista);
void insere_Fim(Lista *lista, int x);
void imprime(Lista lista);
int numeros_Pares(Lista lista);
