#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int codigo_funcionario;
    float salario;
}Funcionarios;

struct No{
    Funcionarios funcionario;
    struct No *prox;
};
typedef struct No No;

typedef struct{
    No *inicio;
    No *final;
}Fila;

No *aloca_No();
Fila *inicia_fila();
void enfileira(Fila *fila, Funcionarios funcionario);
void desinfilera(Fila *fila);
int vazia(Fila *fila);
void imprime(Fila *fila);
void menor_maior_media(Fila *fila);
void qntd_paga(Fila *fila);
void libera(Fila *fila);