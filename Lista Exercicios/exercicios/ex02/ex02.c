/*Faça uma função para remover os n primeiros elementos de uma lista. A função
deve imprimir se a operação foi possível ou não.*/

#include "ex02.h"

void inicia_Lista(Lista *lista){
    lista->primeiro = INICIO;
    lista->ultimo = INICIO;
}

void insere_Final(Lista *lista, int x){
    if(lista->ultimo >= TAM_MAX){
        printf("A lista ja esta cheia.\n");
    }else{
        lista->item[lista->ultimo] = x;
        lista->ultimo++;
    }
}

void imprime(Lista lista){
    for(int aux = lista.primeiro; aux < lista.ultimo; aux++){
        printf("%d-", lista.item[aux]);
    }
}

void retira_Elementos(Lista *lista, int qtd){
    if(qtd > lista->ultimo || qtd <= 0){
        printf("Nao foi possivel realizar a operacao, essa posicao nao existe.\n");
    }else if(qtd == lista->ultimo){
        inicia_Lista(lista);
    }else{
        for(int i = 0; i<lista->ultimo-qtd; i++){
            lista->item[i] = lista->item[i+qtd];
        }
        lista->ultimo = lista->ultimo - qtd;
    }
}