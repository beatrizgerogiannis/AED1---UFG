#include "ex09.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    Lista* lista1, *lista2, *lista3;
    lista1 = inicia_Lista();
    lista2 = inicia_Lista();

    insere_Fim(lista1, 1);
    insere_Fim(lista1, 2);
    insere_Fim(lista1, 3);
    insere_Fim(lista1, 4);
    insere_Fim(lista1, 5);
    insere_Fim(lista2, 1);
    insere_Fim(lista2, 2);
    insere_Fim(lista2, 3);
    insere_Fim(lista2, 4);
    insere_Fim(lista2, 5);
    printf("Lista 1: ");
    imprime(lista1);
    printf("\nLista 2: ");
    imprime(lista2);
    
    lista3 = intercala_Listas(lista1, lista2);
    printf("\nLista 3: ");
    imprime(lista3);

    libera(lista1);
    libera(lista2);
    libera(lista3);

    return 0;
}
