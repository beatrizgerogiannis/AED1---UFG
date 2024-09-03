#include <stdio.h>
#include <stdlib.h>

struct No{
    int item;
    struct No *prox;
};
typedef struct No No;

typedef struct{
    No *inicio;
    No *final;
}Pilha;

No *aloca_No();
Pilha *inicia_pilha();
int vazia(Pilha *pilha);
void empilha(Pilha *pilha, int x);
void desempilha(Pilha *pilha);
int tamanho_atual(Pilha *pilha);
void imprime(Pilha *pilha);