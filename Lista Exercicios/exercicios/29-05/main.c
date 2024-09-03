#include "ex06.h"

int main(){

    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int tam = 10;
    Lista *lista;

    lista = vetor_Lista(vetor, 10);
    imprime(lista);

    return 0;
}