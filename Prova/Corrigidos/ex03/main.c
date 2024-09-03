#include "ex03.h"

int main(){

    Lista lista;
    int cartas_verdes;

    CartaUno carta1 = {1, 10};
    CartaUno carta2 = {2, 4};
    CartaUno carta3 = {3, 10};
    CartaUno carta4 = {2, 6};
    CartaUno carta5 = {1, 7};
    CartaUno carta6 = {3, 8};
    CartaUno carta7 = {3, 9};

    inicia_Lista(&lista);

    insere_Carta(&lista, carta1);
    insere_Carta(&lista, carta2);
    insere_Carta(&lista, carta3);
    insere_Carta(&lista, carta4);
    insere_Carta(&lista, carta5);
    insere_Carta(&lista, carta6);
    insere_Carta(&lista, carta7);

    imprime(lista);

    cartas_verdes = conta_cartas_verdes(lista.meuConjunto, 0, lista.final);
    printf("\nVoce tem %d cartas verdes.\n", cartas_verdes);

    return 0;
}