#include <stdio.h>
#include <stdlib.h>

struct No{
    int item;
    struct No* prox;
};
typedef struct No No;

typedef struct{
    No* inicio;
    No* final;
}Lista;

No* aloca_No();
Lista* inicia_Lista();
void insere_Inicio(Lista* lista, int x);
int tamanho_Lista(Lista* lista);
void imprime(Lista* lista);
int verifica_Vetor(int item, int *valores, int* tam);
void localiza_Repetidos(Lista* lista);
void removee(Lista* lista, int item);