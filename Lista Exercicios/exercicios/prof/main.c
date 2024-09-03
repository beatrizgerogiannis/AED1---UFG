#include "listaArranjo.h"
#include <stdio.h>
#include <stdlib.h>
// este exemplo ira inicializar a lista, inserir 5 elementos, imprimir os elementos, remover
//elementos e imprimir elementos da lista (se nao forem removidos todos os elementos)
int main() {
 
    TipoLista lista;
    // TipoItem item;
    
    int vetor[MAXTAM];
    int i, j, k, n, max, valor;
    max = 5;
    
    // inicializar a lista
    Inicializar(&lista);
    // inserir 5 valores na lista, digitados pelo usuario
    for (i = 0; i < max; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        Insere(valor, &lista);
    }
 
     // imprimir toda a lista
    Imprime(lista);
    // remover os elementos da lista enquanto o usuario nao digitar zero
    do {
        printf("Informe a posicao do valor a ser removido (digite 0 para sair): ");
        scanf("%d", &i);
        if (i != 0)
            Retira(i, &lista);
    } while (i != 0);
 
    // Se a lista nao estiver vazia, imprima a lista
    if (!Vazia(lista)) {
        printf("Impressao da lista final: \n");
        Imprime(lista);
    }
    
    return (0);
}