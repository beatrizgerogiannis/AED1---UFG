#include "ex04.h"

int main(){

    Lista *lista;
    lista = inicia_Lista();

    Carta carta1 = {"Vermelho", 2};
    Carta carta2 = {"Amarelo", 9};
    Carta carta3 = {"Azul", 4};
    Carta carta4 = {"Amarelo", 5};
    Carta carta5 = {"Verde", 7};
    Carta carta_removida = {"Amarelo", 9};

    comprarCarta(lista, carta1);
    comprarCarta(lista, carta2);
    comprarCarta(lista, carta3);
    comprarCarta(lista, carta4);
    comprarCarta(lista, carta5);

    printf("Inicio do jogo: \n");
    mostrarCartas(lista);
    printf("\n\n---------------------------------\n\n");

    jogarCarta(lista, carta_removida);
    printf("Apos retirar uma carta: \n");
    mostrarCartas(lista);
    printf("\n\n---------------------------------\n\n");

    return 0;
}