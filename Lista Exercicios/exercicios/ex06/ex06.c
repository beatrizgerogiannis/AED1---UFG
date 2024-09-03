#include "ex06.h"

No* aloca_No(){
    No* p = (No*)malloc(sizeof(No));
    p->prox = NULL;
    
    return p;
}

Lista* inicia_Lista(){
    Lista*  lista;

    lista = (Lista*)malloc(sizeof(Lista));

    lista->inicio = NULL;
    lista->final = NULL;

    return lista;
}

void insere_Fim(Lista* lista, int x){
    No* p = aloca_No();
    p->item = x;

    if(lista->inicio == NULL){
        lista->inicio = p;
        lista->final = p;
    }else{
        lista->final->prox = p;
        lista->final = p;
    }
}

void imprime(Lista* lista){
    if(lista->inicio == NULL){
        printf("Essa lista esta vazia!\n");
    }else{
        No* aux = lista->inicio;

        while(aux != NULL){
            printf("%d-", aux->item);
            aux = aux->prox;
        }
    }
}

Lista* vetor_Lista(int vetor[], int tamanho_vetor){
    Lista* lista;
    lista = inicia_Lista();

    for(int i=0; i<tamanho_vetor; i++){
        insere_Fim(lista, vetor[i]); 
    }

    return lista;
}