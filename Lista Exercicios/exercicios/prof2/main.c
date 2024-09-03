#include "lista_ponteiro.h"
#include <stdio.h>
#include <stdlib.h>
// este exemplo ira inicializar a lista, inserir 5 elementos, imprimir os
// elementos, remover elementos e imprimir elementos da lista (se nao forem
// removidos todos os elementos)
int main() {
    TipoLista lista;
    int item;
    int *valor;
    TipoApontador p;
    int i, j, k, n, max;
    float tamanho = 0;
    max = 5;
 
    // inicializar a lista
    Inicializar(&lista);
    /*Insere cada chave na lista, ate max elementos (5 elementos neste caso) */
    for (i = 0; i < max; i++) {
        printf("Digite um valor: ");
        scanf("%d", &item);
        Insere(item, &lista);
        printf("Inseriu: %d \n", item);
    }
    // imprimir toda a lista
    
    Imprime(lista);
    /*Retira cada chave da lista */
    for (i = 0; i < 5; i++) {
        p = lista.ptr_primeiro;
        Retira(p, &lista);
    }
 
    // imprimir toda a lista
    Imprime(lista);
    
    return (0);
}