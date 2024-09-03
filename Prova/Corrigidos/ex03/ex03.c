#include "ex03.h"

void inicia_Lista(Lista *lista){
    lista->inicio = INICIO;
    lista->final = lista->inicio;
}

void insere_Carta(Lista *lista, CartaUno carta){
    if(lista->final > MAX_CARTAS){
        printf("A mao ja esta cheia.\n");
    }else{
        lista->meuConjunto[lista->final] = carta;
        lista->final++;
    }
}

int conta_cartas_verdes(CartaUno *meuConjunto, int posicao, int final){
    if (posicao >= final) {
        return 0;  // Caso base: chegamos ao final do conjunto
    }

    int cont = 0;
    if (meuConjunto[posicao].cor == 2) {
        cont = 1;  // Incrementa o contador se a carta for verde
    }
   
    // Chama recursivamente a função para o próximo elemento do conjunto
    return cont + conta_cartas_verdes(meuConjunto, posicao+1, final);
}

void imprime(Lista lista){
    for(int i=0; i<lista.final; i++){
        printf("Carta: %d %d\n", lista.meuConjunto[i].cor, lista.meuConjunto[i].numero);
    }
}