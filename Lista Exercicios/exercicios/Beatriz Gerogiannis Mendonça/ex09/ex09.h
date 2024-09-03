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
Lista* insere_Fim(Lista* lista, int x);
void imprime(Lista* lista);
Lista* intercala_Listas(Lista* lista1, Lista* lista2);
void libera(Lista* lista);