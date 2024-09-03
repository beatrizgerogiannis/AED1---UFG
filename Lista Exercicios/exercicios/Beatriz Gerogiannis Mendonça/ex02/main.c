/*Faça uma função para remover os n primeiros elementos de uma lista. A função
deve imprimir se a operação foi possível ou não.*/

#include "ex02.h"

int main(){

    Lista lista;
    int qtd;

    inicia_Lista(&lista);

    insere_Final(&lista, 1);
    insere_Final(&lista, 2);
    insere_Final(&lista, 3);
    insere_Final(&lista, 4);
    insere_Final(&lista, 5);
    insere_Final(&lista, 6);
    insere_Final(&lista, 7);
    insere_Final(&lista, 8);
    insere_Final(&lista, 9);
    insere_Final(&lista, 10);

    printf("Lista antes: ");
    imprime(lista);

    printf("\nInsira a quantidade de itens que voce deseja remover: ");
    scanf("%d", &qtd);

    retira_Elementos(&lista, qtd);
    printf("\nLista depois: ");
    imprime(lista);

    return 0;
}