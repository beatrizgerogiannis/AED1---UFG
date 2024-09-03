#include "ex03.h"

int main(){

    int indice;
    Fila *fila, *fila2, *fila3;
    fila = inicia_fila();
    fila2 = inicia_fila();
    fila3 = inicia_fila();

    Numero numero1 = {1,1};
    Numero numero2 = {2,2};
    Numero numero3 = {3,8};
    Numero numero4 = {4,5};
    Numero numero5 = {5,6};
    Numero numero6 = {6,1};
    Numero numero7 = {7,4};
    Numero numero8 = {8,3};
    Numero numero9 = {10,0};
    Numero numero10 = {9,7};

    insere(fila, numero1);
    insere(fila, numero2);
    insere(fila, numero3);
    insere(fila, numero4);
    insere(fila, numero5);
    insere(fila, numero6);
    insere(fila, numero7);
    insere(fila, numero8);
    insere(fila, numero9);
    insere(fila, numero10);
    
    printf("Insira o indice: ");
    scanf("%d", &indice);

    divide_fila(fila, fila2, fila3, indice);

    printf("Fila com valores menores ou iguais que o indice: \n");
    imprime(fila2);
    printf("\n\nFila com valores maiores que o indice: \n");
    imprime(fila3);

    libera_memoria(fila);
    libera_memoria(fila2);
    libera_memoria(fila3);

    return 0;
}