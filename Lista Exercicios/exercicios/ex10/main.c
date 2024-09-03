#include "ex10.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    Lista* lista;
    int soma;

    lista = inicia_Lista();

    insere_Fim(lista, 1);
    insere_Fim(lista, 2);
    insere_Fim(lista, 3);
    insere_Fim(lista, 4);
    insere_Fim(lista, 5);
    insere_Fim(lista, 6);
    insere_Fim(lista, 7);
    insere_Fim(lista, 8);
    insere_Fim(lista, 9);
    insere_Fim(lista, 10);
    imprime(lista);
    soma = soma_Lista(lista);
    printf("\nSoma da lista: %d", soma);


    return 0;
}