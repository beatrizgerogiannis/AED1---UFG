#include "ex11.h"

int main(){

    Fila *fila_par = inicia_fila();
    Fila *fila_impar = inicia_fila();
    Pilha *pilha = inicia_pilha();

    le_numeros(fila_par, fila_impar);

    removeFila_inserePilha(fila_par, fila_impar, pilha);

    imprime(pilha);

    libera_memoria_pilha(pilha);
    libera_memoria_fila(fila_par);
    libera_memoria_fila(fila_impar);

    return 0;
}