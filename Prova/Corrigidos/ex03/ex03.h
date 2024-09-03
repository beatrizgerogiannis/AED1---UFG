#include <stdio.h>

#define MAX_CARTAS 10
#define INICIO 0

typedef struct{
    int cor;
    int numero;
} CartaUno;

typedef struct{
    CartaUno meuConjunto[MAX_CARTAS];
    int inicio;
    int final;
}Lista;

void inicia_Lista(Lista *lista);
void insere_Carta(Lista *lista, CartaUno carta);
int conta_cartas_verdes(CartaUno *meuConjunto, int posicao, int final);
void imprime(Lista lista);