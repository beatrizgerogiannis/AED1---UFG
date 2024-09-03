#include "ex01.h"

int main(){
    Lista* lista;
    int qtd_impar, menor_valor;
    lista = inicia_Lista();

    insere_Fim(lista, 5);
    insere_Fim(lista, 2);
    insere_Fim(lista, 3);
    insere_Fim(lista, 4);
    insere_Fim(lista, 1);
    insere_Fim(lista, 6);
    insere_Fim(lista, 7);
    insere_Fim(lista, 8);
    insere_Fim(lista, 9);
    insere_Fim(lista, 10);

    printf("Lista 1: ");
    imprime(lista);

    qtd_impar = conta_Impares(lista);
    printf("\nImpares: %d", qtd_impar);

    menor_valor = menor_Valor(lista);
    printf("\nMenor valor: %d", menor_valor);
}