#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int id;
    int tempo_espera;
}Processo;

struct No{
    Processo processo;
    struct No *prox;
};
typedef struct No No;

typedef struct{
    No *inicio;
    No *final;
}Lista;

No *aloca_no(); //Aloca dinamicamente o nó.

Lista *inicia_lista();  //Inicia a fila.

void aumenta_tempo_espera(Lista *lista); //Aumenta em +1 o tempo de espera de todos os processos da fila.

void novo_processo(Lista *lista, Processo processo); //Adiciona um novo processo a fila.

int acha_maior_tempo_espera(Lista *lista); //Acha o processo com maior tempo de espera da fila.

void retira_inicio(Lista *lista); //Retira um processo do inicio da fila.

void retira_final(Lista *lista); //Retira um processo do final da fila.

void retira_meio(Lista *lista); //Retira um processo do meio da fila.

void retirar_maior_tempo_espera(Lista *lista); //Retira o processo com maior tempo de espera da fila.

void imprime(Lista *lista); //Imprime a fila.

void libera_memoria(Lista *lista); //Libera a memoria alocada dinamicamente.