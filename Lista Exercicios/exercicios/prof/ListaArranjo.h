#include <stdio.h>
#include <stdlib.h>

#define INICIOARRANJO 0
#define MAXTAM 10

typedef struct { // definindo uma struct com as informacoes a serem armazenadas
     int Chave;
    /* outros componentes */
} TipoItem;

typedef struct { // definindo a struct que armazena o vetor
    int Item[MAXTAM]; // redefinindo o vetor Item como int
    int Primeiro, Ultimo;
} TipoLista;

void Inicializar(TipoLista *Lista);
int Vazia(TipoLista Lista);
void Insere(int x, TipoLista *Lista);
void Retira(int p, TipoLista *Lista);
void Imprime(TipoLista Lista);