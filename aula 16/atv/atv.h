#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int codigo_produto;
    char nome_produto[50];
    int qtd_estoque;
}Produto;

struct No{
    Produto produto;
    struct No *prox;
};
typedef struct No No;

typedef struct{
    No *inicio;
}Pilha;

No *aloca_No();
Pilha *inicia_pilha();
void push(Pilha *pilha, Produto *produto); //Empilha um novo produto na pilha.
void pop(Pilha *pilha); //Desempilha o produto no topo da pilha e retorna-o.
int isEmpty(Pilha *pilha); //Retorna 1 se a pilha estiver vazia, caso contrário, retorna 0
void imprime(Pilha *pilha);
void exibe_topo(Pilha *pilha);
void tamanho(Pilha *pilha);
void limpa_buffer();