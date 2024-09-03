#include <stdio.h>

#define TAM_MAX 10
#define INICIO 0

typedef struct{
    int item[TAM_MAX];
    int inicio;
    int final;
}Fila;

void inicializar(Fila *fila);

void insere(Fila *fila, int id);

void tira_negativos(Fila *fila);

void imprime(Fila fila);