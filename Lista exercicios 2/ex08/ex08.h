#include <stdio.h>
#include <stdlib.h>

struct No{
    int id;
    struct No *prox;
};
typedef struct No No;

typedef struct{
    No *inicio;
}Pilha;

No *aloca_no();

Pilha *inicia_pilha();

void insere(Pilha *pilha, int id);

void menor_maior_media(Pilha *pilha, int *menor, int *maior, float *media);

void imprime(Pilha *pilha);

void libera_memoria(Pilha *pilha);