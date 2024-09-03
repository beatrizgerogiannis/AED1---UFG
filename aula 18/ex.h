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
}Lista;

void *aloca_no();
void *inicia_lista();
void insere_inicio(Lista *lista, int x);
void insere_final(Lista *lista, int x);
void remove_inicio(Lista *lista);
void remove_final(Lista *lista);
int buscar_elementos(Lista *lista, int x);
int qtd_elementos(Lista *lista);