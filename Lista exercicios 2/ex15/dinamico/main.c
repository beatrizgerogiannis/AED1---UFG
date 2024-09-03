#include "ex15.h"

int main(){

    Fila *fila = inicia_fila();

    insere(fila, 1);
    insere(fila, 2);
    insere(fila, 3);
    insere(fila, 4);
    insere(fila, 5);

    imprime(fila);
    inverte(fila);
    printf("\n");
    imprime(fila);

    libera_memoria(fila);

    return 0;
}