#include "ex06.h"

No *aloca_No(){
    No *p = (No*)malloc(sizeof(No));
    p->prox = NULL;
    return p; 
}

Lista *inicia_Lista(){
    Lista *lista;

    lista = (Lista*)malloc(sizeof(Lista));

    lista->inicio = NULL;
    lista->final = lista->inicio;

    return lista;
}

void insere_Inicio(Lista *lista, int x){
    No* p = aloca_No();
    p->item = x;

    if(lista->inicio == NULL){
        lista->inicio = p;
        lista->final = p;
    }else{
        p->prox = lista->inicio;
        lista->inicio = p;
    }
}

void insere_Final(Lista *lista, int x){
    No *p = aloca_No();
    p->item = x;

    if(lista->inicio == NULL){
        lista->inicio = p;
        lista->final = p;
    }else{
        lista->final->prox = p;
        lista->final = p;
    }
}

void imprime(Lista *lista){
    if(lista->inicio == NULL){
        printf("A lista esta vazia.\n");
    }else{
        No* aux = lista->inicio;
        while(aux != NULL){
            printf("%d-", aux->item);
            aux = aux->prox;
        }
    }
}

Lista *vetor_Lista(int vetor[], int tamanho){
    Lista* lista;
    lista = inicia_Lista();

    for(int i=0; i<tamanho; i++){
        insere_Inicio(lista, vetor[i]);
    }
    return lista;
}

int tamanho_Lista(Lista* lista){
    int tamanho=0;
    No *aux = lista->inicio;

    if(lista->inicio == NULL){
        return 0;
    }else{
        while(aux != NULL){
            tamanho++;
            aux = aux->prox;
        }
    }
    return tamanho;
}


void inserir_Meio(Lista *lista, int x, int pos){
    int tam_lista = tam_Lista(lista);
    No *p = aloca_No();
    p->prox = x;

    if(pos > tam_lista+1 || pos <= 0){
        printf("Posicao nao existe.\n");
    }else if(pos == 1){
        p->prox = lista->inicio;
        lista->inicio = p;
    }else if(pos == tam_lista+1){
        lista->final->prox = p;
        lista->final = p;
    }else{
        No *aux = lista->inicio;
        int t = 1;

        while(t != pos-1){
            aux = aux->prox;
            t++;
        }
        p->prox = aux->prox;
        aux->prox = p;
    }


}