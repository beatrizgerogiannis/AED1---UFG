#include "ex01.h"

No *aloca_No(){
    No *p = (No*)malloc(sizeof(No));
    p->prox = NULL;

    return p;
}

Fila *inicia_fila(){
    Fila *fila;
    fila = (Fila*)malloc(sizeof(Fila));

    fila->inicio = NULL;
    fila->final = NULL;

    return fila;
}

int vazia(Fila *fila){
    if(fila->inicio == NULL){
        return 1;
    }
    return 0;
}

void enfileira(Fila *fila, Funcionarios funcionario){
    
    No *p = aloca_No();
    p->funcionario.codigo_funcionario = funcionario.codigo_funcionario;
    p->funcionario.salario = funcionario.salario;

    if(fila->inicio == NULL){
        fila->inicio = p;
        fila->final = fila->inicio;
    }else{
        fila->final->prox = p;
        fila->final = p;
    }
    return;
}

void desinfilera(Fila *fila){
    if(vazia(fila)){
        printf("A fila ja esta vazia!\n");
    }else{
        No *aux = fila->inicio;
        fila->inicio = fila->inicio->prox;

        free(aux);
    }
    return;
}

void imprime(Fila *fila){
    No *aux = fila->inicio;

    if(vazia(fila)){
        printf("A fila esta vazia!\n");
    }else{
        while(aux != NULL){
            printf("------------------------------\n");
            printf("Codigo do funcionario: %d\n", aux->funcionario.codigo_funcionario);
            printf("Salario: %.3f\n", aux->funcionario.salario);
            aux = aux->prox;
        }
    }
    return;
}

void menor_maior_media(Fila *fila){
    No *aux = fila->inicio;
    float menor = aux->funcionario.salario;
    float maior = aux->funcionario.salario;
    float soma = 0;
    float cont = 0;
    float media;

    while(aux != NULL){
        if(aux->funcionario.salario < menor){
            menor = aux->funcionario.salario;
        }
        if(aux->funcionario.salario > maior){
            maior = aux->funcionario.salario;
        }
        cont++;
        soma += aux->funcionario.salario;
        aux = aux->prox;
    }

    media = soma/cont;

    printf("\n\n Informacoes salarios:\n");
    printf("Maior salario: %.3f\n", maior);
    printf("Menor salario: %.3f\n", menor);
    printf("Media dos salarios: %.3f\n", media);

    return;
}

void qntd_paga(Fila *fila){
    No *aux = fila->inicio;
    int cont = 0;
    float salario_total = 0;

    while(aux != NULL){
        salario_total += aux->funcionario.salario;
        cont++;

        aux = aux->prox;
    }

    printf("\n\nValores salarios:\n");
    printf("Quantidade de salarios: %d\n", cont);
    printf("Quantidade total a ser paga: %.3f\n", salario_total);

    return;
}
