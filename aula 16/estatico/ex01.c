#include "ex01.h"

void inicia_pilha(Pilha *pilha){
    pilha->inicio = -1;
}

int vazia(Pilha *pilha){
    if(pilha->inicio == -1){
        return 1;
    }else{
        return 0;
    }
}

void empilha(Pilha *pilha, int x){
    if(pilha->inicio == TAM_MAX - 1){
        printf("A pilha ja esta cheia.\n");
    }else{
        pilha->inicio++;
        pilha->item[pilha->inicio] = x;
    }
}

void desempilha(Pilha *pilha){
    if(pilha->inicio == -1){
        printf("A pilha ja esta vazia!\n");
    }else{
        pilha->inicio--;
    }
}

int tamanho_atual(Pilha *pilha){
    int cont = 0;
    if(pilha->inicio == -1){
        return 0;
    }else{
        while(pilha->inicio != -1){
            cont++;
            pilha->inicio--;
        }
    }
    return cont;
}
void imprime(Pilha *pilha){
    int aux = pilha->inicio;
    if(pilha->inicio == 0){
        printf("A pilha esta vazia!\n");
        return;
    }else{
        while(aux != -1){
            printf("%d\n", pilha->item[aux]);
            aux--;
        }
    }
    return;
}