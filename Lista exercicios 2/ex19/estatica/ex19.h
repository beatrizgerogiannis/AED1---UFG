#include <stdio.h>

#define TAM_MAX 10
#define INICIO 0

typedef struct{
    int item[TAM_MAX];
    int inicio;
}Pilha;

void inicia_pilha(Pilha *pilha);

void insere(Pilha *pilha, int id);

Pilha inverte(Pilha *pilha);

void imprime(Pilha pilha);