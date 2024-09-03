#include <stdio.h>
#include <stdlib.h>

#define INICIO 0
#define TAM_MAX 10

typedef struct{
    int item[TAM_MAX];
    int inicio;
    int final;
}Lista;

void inicia_Lista(Lista *lista);
void insere_Final(Lista *lista, int x);
void imprime(Lista lista);
void retorna_Maior(Lista lista, int *maior, int *posicao);