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

void retira_inicio(Fila *fila);

void retira_meio(Fila *fila, int pos);

void retira_final(Fila *fila);

void retira_negativo(Fila *fila);

void removee(Fila *fila);

void imprime(Fila *fila);

void libera_memoria(Fila *fila);