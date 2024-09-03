#include <stdio.h>
#include <stdlib.h>
#define MAX 5

//estrutura da celula
typedef struct TipoCelula {
    int Item;
    struct TipoCelula *ptr_prox;
} TipoCelula;

//definicao do ponteiro TipoApontador
typedef struct TipoCelula *TipoApontador;

//estrutura da lista
typedef struct {
    TipoApontador ptr_primeiro, ptr_ultimo;
} TipoLista;

void Inicializar(TipoLista *Lista);
int Vazia(TipoLista Lista);
void Insere(int x, TipoLista *Lista);
void Retira(TipoApontador p, TipoLista *Lista);
void Imprime(TipoLista Lista);