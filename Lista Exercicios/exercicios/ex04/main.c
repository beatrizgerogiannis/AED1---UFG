#include "ex04.h"

int main(){
    
    Lista lista;
    int qtd_Pares;

    inicia_Lista(&lista);

    insere_Fim(&lista, 1);
    insere_Fim(&lista, 2);
    insere_Fim(&lista, 3);
    insere_Fim(&lista, 4);
    insere_Fim(&lista, 5);
    insere_Fim(&lista, 6);
    insere_Fim(&lista, 7);
    insere_Fim(&lista, 8);
    insere_Fim(&lista, 9);
    insere_Fim(&lista, 10);
    imprime(lista);

    qtd_Pares = numeros_Pares(lista);
    printf("\nA lista tem %d numeros pares", qtd_Pares);

    return 0;
}