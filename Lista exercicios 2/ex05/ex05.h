#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char modelo[50];
    int id;
    char destino[50];
}Aviao;

struct No{
    Aviao aviao;
    struct No *prox;
};
typedef struct No No;

typedef struct{
    No *inicio;
    No *final;
}Fila;

No *aloca_no(); //Aloca dinamicamente o no.

Fila *inicia_fila();   //Inicia a fila.

void adiciona_aviao(Fila *fila, Aviao aviao); //Adiciona um avião no final da lista de espera.

void autoriza_decolagem(Fila *fila);    //Autoriza a decolagem do primeiro avião da lista de espera.

void lista_avioes(Fila *fila);  //Lista todos os aviões na lista de espera.

void qtd_avioes_espera(Fila *fila); //Mostra q quantidade de aviões na lista de espera.

void primeiro_aviao(Fila *fila);    //Mostra as caracteristicas do primeiro avião da fila.

void limpa_buffer();

void libera_memoria(Fila *fila); //Libera a memoria que foi dinamicamente alocada.