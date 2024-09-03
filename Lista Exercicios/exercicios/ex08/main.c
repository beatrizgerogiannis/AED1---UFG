#include "ex08.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    Lista *lista;
    lista = inicia_Lista();
  
    insere_Inicio(lista, 1);
    insere_Inicio(lista, 2);
    insere_Inicio(lista, 5);
    insere_Inicio(lista, 9);
    insere_Inicio(lista, 1);
    insere_Inicio(lista, 9);
    insere_Inicio(lista, 9);
    insere_Inicio(lista, 4);
    insere_Inicio(lista, 3);
    printf("Lista: ");
    imprime(lista);
    printf("\nValores repetidos: ");
    localiza_Repetidos(lista);
    printf("\n");
    printf("Nova lista: ");
    imprime(lista);

    return 0;
}