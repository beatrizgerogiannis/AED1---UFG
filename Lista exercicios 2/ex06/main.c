#include "ex06.h"

int main(){

    Lista *lista1, *lista2, *lista3;

    lista1 = inicia_lista();
    lista2 = inicia_lista();
    lista3 = inicia_lista();

    insere(lista1, 1);
    insere(lista1, 5);
    insere(lista1, 59);
    insere(lista1, 63);
    insere(lista1, 87);
    insere(lista2, 2);
    insere(lista2, 3);
    insere(lista2, 61);
    insere(lista2, 62);
    insere(lista2, 98);

    separa(lista1, lista2, lista3);

    imprime(lista3);

    void libera_memoria(Lista *lista);

    return 0;
}