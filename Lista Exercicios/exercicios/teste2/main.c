#include "teste.h"

int main(){

    Lista *lista, *lista2, *lista3;

    lista = inicia_Lista();
    lista2 = inicia_Lista();

    insere_Fim(lista, 1);
    insere_Fim(lista, 2);
    insere_Fim(lista, 3);
    insere_Fim(lista, 4);
    insere_Fim(lista, 5);
    insere_Fim(lista2, 1);
    insere_Fim(lista2, 2);
    insere_Fim(lista2, 3);
    insere_Fim(lista2, 4);
    insere_Fim(lista2, 5);

    printf("Lista 1: ");
    imprime(lista);

    printf("\nLista 2: ");
    imprime(lista2);

    lista3 = intercala_listas(lista, lista2);
    printf("\nLista intercalada: ");
    imprime(lista3);

    return 0;
}