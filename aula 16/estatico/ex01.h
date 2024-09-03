#include <stdio.h>

#define TAM_MAX 10
#define INICIO 0

typedef struct{
    int item[TAM_MAX];
    int inicio;
}Pilha;

void inicia_pilha(Pilha *pilha);
int vazia(Pilha *pilha);
void empilha(Pilha *pilha, int x);
void desempilha(Pilha *pilha);
int tamanho_atual(Pilha *pilha);
void imprime(Pilha *pilha);