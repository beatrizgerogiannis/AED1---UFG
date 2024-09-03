#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int valor;
    int prioridade;
}Numero;

struct No{
    Numero numero;
    struct No *prox;
};
typedef struct No No;

typedef struct{
    No *inicio;
    No *final;
}Fila;

No *aloca_no(); //Aloca dinamicamente um espaço para o nó.

Fila *inicia_fila(); //Inicia a Fila.

void insere(Fila *fila, Numero numero); // Insere elementos no final da fila.

void divide_fila(Fila *fila, Fila *fila2, Fila *fila3 ,int x); //Divide a fila original em duas filas, uma com os elementos menor que o indice, e uma com os elementos maiores que o indice.

void imprime(Fila *fila); //Imprime a fila.

void libera_memoria(Fila *fila);