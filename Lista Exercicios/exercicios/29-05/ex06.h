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

No *aloca_No();
Lista *inicia_Lista();
void insere_Inicio(Lista *lista, int x);
void insere_Final(Lista *lista, int x);
void imprime(Lista *lista);
Lista *vetor_Lista(int vetor[], int tamanho);
int tamanho_Lista(Lista* lista);
void inserir_Meio(Lista *lista, int x, int p);