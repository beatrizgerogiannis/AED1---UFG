#include "ex03.h"

int main(){

    Lista lista;
    int maior, posicao;

    inicia_Lista(&lista);

    insere_Final(&lista, 1);
    insere_Final(&lista, 2);
    insere_Final(&lista, 3);
    insere_Final(&lista, 4);
    insere_Final(&lista, 15);
    insere_Final(&lista, 6);
    insere_Final(&lista, 7);
    insere_Final(&lista, 8);
    insere_Final(&lista, 9);
    insere_Final(&lista, 10);

    printf("Lista: ");
    imprime(lista);

    retorna_Maior(lista, &maior, &posicao);
    
    printf("\nMaior: %d", maior);
    printf("\nPosicao do maior: %d", posicao+1);
    
    return 0;
}