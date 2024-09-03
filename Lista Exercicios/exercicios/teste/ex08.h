#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int item;
    struct No *prox;
};
typedef struct No No;

typedef struct{
    No* inicio;
    No* final;
}Lista;

No *aloca_No();
Lista *inicia_lista();
void insere_Fim(Lista* lista, int x);
void insere_Inicio(Lista* lista, int x);
void imprime(Lista *lista);
void remove_Repetido(Lista* lista);