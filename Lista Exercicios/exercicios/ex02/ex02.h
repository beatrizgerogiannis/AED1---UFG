/*Faça uma função para remover os n primeiros elementos de uma lista. A função
deve imprimir se a operação foi possível ou não.*/

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
void insere_Final(Lista *lista, int x);
void imprime(Lista lista);
void retira_Elementos(Lista *lista, int qtd);