#include <stdio.h>
#include <stdlib.h>

struct No{
    int id;
    struct No *prox;
};
typedef struct No No;

typedef struct{
    No *inicio;
    No *final;
}Fila;

No *aloca_no();

Fila *inicia_fila();

void insere(Fila *fila, int id);

void inverte(Fila *fila);

void imprime(Fila *fila);

void libera_memoria(Fila *fila);