#include "ex15.h"

int main(){

    Fila fila;

    inicializar(&fila);

    insere(&fila, 1);
    insere(&fila, 2);
    insere(&fila, 3);
    insere(&fila, 4);
    insere(&fila, 5);

    imprime(fila);
    inverte_fila(&fila);
    printf("\n");
    imprime(fila);

    return 0;
}