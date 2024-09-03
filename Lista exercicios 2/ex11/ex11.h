#include <stdio.h>
#include <stdlib.h>

struct No{
    int id;
    struct No *prox;
};
typedef struct No No;

typedef struct{
    No *inicio;
    No *final;
}Fila;

typedef struct{
    No *inicio;
}Pilha;

No *aloca_no(); //Aloca dinamicamente o nó.

Fila *inicia_fila(); //Inicia a fila.

Pilha *inicia_pilha();  //Inicia a pilha.

void insere_fila(Fila *fila_par, Fila *fila_impar, int id);  //Checa se o numero é par ou impar e insere na fila correspondente.

void insere_pilha(Pilha *pilha, int id); //Insere na pilha.

void remove_pilha(Pilha *pilha); //Remove o item da pilha.

void remove_fila(Fila* fila); //Remove o item da fila.

void removeFila_inserePilha(Fila *fila_par, Fila *fila_impar, Pilha *pilha); //Remove o item da fila. Se o item for >0 insere na pilha, caso contrario, retira um item da pilha.

void le_numeros(Fila *fila_par, Fila *fila_impar); //Le os numeros do usuario e chama a função para inseri-los na fila.

void imprime(Pilha *pilha); //Imprime a pilha.

void libera_memoria_pilha(Pilha *pilha);

void libera_memoria_fila(Fila *fila);

