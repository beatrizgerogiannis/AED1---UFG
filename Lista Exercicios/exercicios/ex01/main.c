#include "ex01.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    Lista lista1, lista2, lista3;
    
    inicia_Lista(&lista1);
    inicia_Lista(&lista2);

    insere_Fim(&lista1, 1);
    insere_Fim(&lista1, 2);
    insere_Fim(&lista1, 3);
    printf("Lista 1: ");
    imprime(lista1);
    
    insere_Fim(&lista2, 4);
    insere_Fim(&lista2, 5);
    insere_Fim(&lista2, 6);
    printf("\nLista 2: ");
    imprime(lista2);

    lista3 = concatena_Listas(lista1, lista2);
    printf("\nLista 3: ");
    imprime(lista3);

    return 0;
}
