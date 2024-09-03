#include "ex01.h"

void inicia_Lista(Lista *lista){
    lista->primeiro = INICIO;
    lista->ultimo = lista->primeiro;
}

void insere_Fim(Lista* lista, int x){
    if(lista->ultimo >= TAM_MAX){
        printf("A lista esta cheia.\n");
    }else{
        lista->item[lista->ultimo] = x;
        lista->ultimo++;
    }
}

void imprime(Lista lista){    
    for(int aux = lista.primeiro; aux < lista.ultimo; aux++){
        printf("%d-", lista.item[aux]);
    }
}

Lista concatena_Listas(Lista lista1, Lista lista2){
    Lista lista3;
    inicia_Lista(&lista3);

    for(int i = lista1.primeiro; i < lista1.ultimo; i++){
        insere_Fim(&lista3, lista1.item[i]);
    }
    for(int i = lista2.primeiro; i < lista2.ultimo; i++){
        insere_Fim(&lista3, lista2.item[i]);
    }
    return lista3;
}
