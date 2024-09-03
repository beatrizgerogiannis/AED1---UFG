#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char cor[10];
    int valor;
}Carta;

struct No{
    Carta carta;
    struct No *prox;
};
typedef struct No No;

typedef struct{
    No *inicio;
    No *final;
}Lista;

No *aloca_No();
Lista *inicia_Lista();
void comprarCarta (Lista *lista, Carta carta);
int tamanho(Lista *lista);
void remove_Inicio(Lista *lista);
void remove_Final(Lista *lista);
void remove_Meio(Lista *lista, int posicao);
void jogarCarta(Lista* lista, Carta carta);
void mostrarCartas(Lista *lista);

