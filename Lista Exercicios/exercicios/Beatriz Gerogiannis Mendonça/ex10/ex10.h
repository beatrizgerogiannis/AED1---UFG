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
void insere_Fim(Lista* lista, int x);
void imprime(Lista* lista);
int soma_Lista(Lista* lista);