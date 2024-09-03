
#include <stdio.h>
#include <stdlib.h>

struct No{
    int item;
    struct No* prox;
};

typedef struct No No;

typedef struct{
    No* inicio;
    No* fim;
}Lista;

No* aloca_No();
Lista* inicia_Lista();
int tamanho_Lista(Lista* lista);
void insere_Inicio(Lista* lista, int x);
void insere_Fim(Lista* lista, int x);
void retira(Lista* lista);
void imprime(Lista* lista);
Lista* contatena_Listas(Lista* lista1, Lista* lista2);
