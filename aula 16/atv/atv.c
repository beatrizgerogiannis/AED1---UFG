#include "atv.h"

No *aloca_No(){
    No *p = (No*)malloc(sizeof(No));
    p->prox = NULL;

    return p;
}

Pilha *inicia_pilha(){
    Pilha *pilha;

    pilha = (Pilha*)malloc(sizeof(Pilha));

    pilha->inicio = NULL;

    return pilha;
}

int isEmpty(Pilha *pilha){
    if(pilha->inicio == NULL){
        return 1;
    }else{
        return 0;
    }
} //Retorna 1 se a pilha estiver vazia, caso contrário, retorna 0

void push(Pilha *pilha, Produto *produto){
    No *aux = aloca_No();

    aux->produto.codigo_produto = produto->codigo_produto;
    strcpy(aux->produto.nome_produto, produto->nome_produto);
    aux->produto.qtd_estoque = produto->qtd_estoque;
    
    aux->prox = pilha->inicio;
    pilha->inicio = aux;
} //Empilha um novo produto na pilha.

void pop(Pilha *pilha){
    if(isEmpty(pilha)){
        printf("A pilha ja esta vazia.\n");
    }else{
        No *aux = pilha->inicio;
        pilha->inicio = pilha->inicio->prox;
        free(aux);
    }
    return;
} //Desempilha o produto no topo da pilha e retorna-o.

void imprime(Pilha *pilha){
    if(isEmpty(pilha)){
        printf("A pilha ja esta vazia.\n");
    }else{
        No *aux = pilha->inicio;

        while(aux != NULL){
            printf("Codigo do produto: %d\n", aux->produto.codigo_produto);
            printf("Nome do produto: %s\n", aux->produto.nome_produto);
            printf("Quantidade do produto em estoque %d\n", aux->produto.qtd_estoque);

            aux = aux->prox;
        }
    }

    return;
}

void exibe_topo(Pilha *pilha){
    No *aux = pilha->inicio;

    printf("Codigo do produto: %d\n", aux->produto.codigo_produto);
    printf("Nome do produto: %s\n", aux->produto.nome_produto);
    printf("Quantidade do produto em estoque %d\n", aux->produto.qtd_estoque);
    
    return;
}

void tamanho(Pilha *pilha){
    No *aux = pilha->inicio;
    int tamanho = 0;

    while(aux != NULL){
        tamanho += aux->produto.qtd_estoque;
        aux = aux->prox;
    }

    printf("Tamanho total do estoque: %d\n", tamanho);

    return;
}

void limpa_buffer(){
    scanf("%*[^\n]");
    scanf("%*c");
}