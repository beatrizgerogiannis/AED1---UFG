#include "ex16.h"

int main(){

    Fila *fila = inicia_fila();
    int pos;

    insere(fila, -1);
    insere(fila, 2);
    insere(fila, -3);
    insere(fila, 1);
    insere(fila, 7);
    insere(fila, -4);

    retira_negativo(fila);

    imprime(fila);

    libera_memoria(fila);

    return 0;
}