#include "ex06.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10] = {0,1,2,3,4,5,6,7,8,9};
    Lista* lista;

    lista = vetor_Lista(vetor, 10);
    imprime(lista);

    return 0;
}