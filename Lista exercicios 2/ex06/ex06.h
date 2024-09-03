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
}Lista;

No *aloca_no();

Lista *inicia_lista();

void insere(Lista *lista, int id);

int tamanho(Lista *lista);

void separa(Lista *lista1, Lista *lista2, Lista *lista3);

void imprime(Lista *lista);

void libera_memoria(Lista *lista);