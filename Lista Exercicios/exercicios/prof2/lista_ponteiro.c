#include "lista_ponteiro.h"
#include <stdio.h>
#include <stdlib.h>

// inicializacao da lista
void Inicializar(TipoLista *Lista) {
    Lista->ptr_primeiro =(TipoApontador)malloc(sizeof(TipoCelula)); // alocar memoria
    Lista->ptr_ultimo = Lista->ptr_primeiro; // ultimo ptr aponta para o primeiro ptr
    Lista->ptr_primeiro->ptr_prox = NULL; // o ptr do primeiro NO aponta para null
}/* Inicializar fim*/

// verificar se a lista esta vazia
int Vazia(TipoLista Lista){
    return (Lista.ptr_primeiro == Lista.ptr_ultimo); 
}
/* Vazia fim*/

// inserir elementos
void Insere(int x, TipoLista *Lista) {
    Lista->ptr_ultimo->ptr_prox = (TipoApontador)malloc(sizeof(TipoCelula));
    Lista->ptr_ultimo = Lista->ptr_ultimo->ptr_prox; // atualiza o ptr_ultimo
    Lista->ptr_ultimo->Item = x; // insere o item
    Lista->ptr_ultimo->ptr_prox = NULL; // o ponteiro aponta para NULL
} /* Insercao fim*/
 
 // retirar elementos
 void Retira(TipoApontador p,TipoLista * Lista) { /* --- Obs.: o item a ser retirado e o seguinte ao apontado por p ---*/
    int valor;
    TipoApontador q;
    if (Vazia(*Lista) || p == NULL ||
        p->ptr_prox == NULL) // se lista vazia ou p
    {
    printf("Erro - Lista vazia ou posicao nao existe!\n");
    }else{
        q = p->ptr_prox;
        valor = q->Item;
        printf("O valor removido foi: %d\n", valor);
        p->ptr_prox = q->ptr_prox;
        if (p->ptr_prox == NULL)
            Lista->ptr_ultimo = p;
            free(q);
        }
    }
 /* Retira fim */

// imprimir elementos
 void Imprime(TipoLista Lista) {
    TipoApontador Aux;
    Aux = Lista.ptr_primeiro->ptr_prox;
    while (Aux != NULL) {
        printf("%d\n", Aux->Item);
    Aux = Aux->ptr_prox;
    }
 } /* Imprime fim */