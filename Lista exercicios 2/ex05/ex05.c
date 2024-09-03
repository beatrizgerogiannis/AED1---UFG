#include "ex05.h"

No *aloca_no(){
    No *p = (No*)malloc(sizeof(No));
    p->prox = NULL;

    return p;
}

Fila *inicia_fila(){
    Fila *fila = (Fila*)malloc(sizeof(Fila));
    
    fila->inicio = NULL;
    fila->final = NULL;

    return fila;
}

void adiciona_aviao(Fila *fila, Aviao aviao){
    No *aux = aloca_no();

    strcpy(aux->aviao.modelo, aviao.modelo);
    aux->aviao.id = aviao.id;
    strcpy(aux->aviao.destino, aviao.destino);
    
    if(fila->inicio == NULL){
        fila->inicio = aux;
        fila->final = aux;
    }else{
        fila->final->prox = aux;
        fila->final = aux;
    }
    return;
}

void autoriza_decolagem(Fila *fila){
    if(fila->inicio == NULL){
        printf("Nao tem nenhum avião em espera.\n");
    }else{
        No *aux = fila->inicio;
        
        fila->inicio = fila->inicio->prox;
        free(aux);
    }
    return;
}

void lista_avioes(Fila *fila){
    if(fila->inicio == NULL){
        printf("Nao tem nenhum aviao em espera.\n");
    }else{
        No *aux = fila->inicio;
        int cont = 1;

        while(aux != NULL){
            printf("--------- Aviao %d ---------\n", cont);
            printf("Modelo: %s\n", aux->aviao.modelo);
            printf("Id: %d\n", aux->aviao.id);
            printf("Destino: %s\n\n", aux->aviao.destino);

            cont++;
            aux = aux->prox;
        }
    }
    return;
}

void qtd_avioes_espera(Fila *fila){
    if(fila->inicio == NULL){
        printf("Nao tem nenhum aviao em espera.\n");
    }else{
        No *aux = fila->inicio;
        int cont = 0;

        while(aux != NULL){
            cont++;
            aux = aux->prox;
        }
        printf("Tem %d avioes em espera.\n", cont);
    }
    return;
}

void primeiro_aviao(Fila *fila){
    No *aux = fila->inicio;

    printf("Informacoes do primeiro aviao na lista de espera:\n\n");
    printf("Modelo: %s\n", aux->aviao.modelo);
    printf("Id: %d\n", aux->aviao.id);
    printf("Destino: %s\n", aux->aviao.destino);

    return;
}

void limpa_buffer(){
    scanf("%*[^\n]");
    scanf("%*c");
}

void libera_memoria(Fila *fila){
    No *aux = fila->inicio;
    No *aux2;

    while(aux != NULL){
        aux2 = aux;
        aux = aux->prox;
        free(aux2);
    }
    return;
}