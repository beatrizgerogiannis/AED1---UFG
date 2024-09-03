#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct No{
    char id;
    struct No *prox;
};
typedef struct No No;

typedef struct{
    No *inicio;
}Pilha;

No *aloca_no();

Pilha *inicia_pilha();

void insere(Pilha *pilha, char id);

void verifica_paliondromo(Pilha *pilha);

void imprime(Pilha *pilha);

void libera_memoria(Pilha *pilha);