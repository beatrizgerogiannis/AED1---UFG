#include "ex16.h"

int main(){

    Fila fila;

    inicializar(&fila);

    insere(&fila, -1);
    insere(&fila, 2);
    insere(&fila, 9);
    insere(&fila, -4);
    insere(&fila, 2);
    insere(&fila, -1);

    tira_negativos(&fila);

    imprime(fila);

    return 0;
}