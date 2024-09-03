#include "ex03.h"

No *aloca_no(){ //Aloca dinamicamente o nó.
    No *p = (No*)malloc(sizeof(No));
    p->prox = NULL;

    return p;
}

Fila *inicia_fila(){ //Inicia a fila.
    Fila *fila; 
    fila = (Fila*)malloc(sizeof(Fila));
    
    fila->inicio = NULL;    
    fila->final = fila->inicio;

    return fila;
}

void insere(Fila *fila, Numero numero){ //Insere elementos no final da fila.
    No *aux = aloca_no();
    aux->numero.valor =numero.valor;
    aux->numero.prioridade = numero.prioridade;

    if(fila->inicio == NULL){
        fila->inicio = aux;
        fila->final = aux;
    }else{
        fila->final->prox = aux;
        fila->final = aux;
    }
    return;
}

void divide_fila(Fila *fila, Fila *fila2, Fila *fila3 ,int x){ //Divide a fila original em duas filas, uma com os elementos menor que o indice, e uma com os elementos maiores que o indice.
    if(fila->inicio == NULL){ //Checa se a fila esta vazia.
        printf("A lista esta vazia.\n");
    }else{
        No *aux = fila->inicio;

        while(aux != NULL){ //Enquanto o aux for diferente de NULL,
            if(aux->numero.prioridade <= x){ //Se a prioridade do numero for menor ou igual a x, insere na fila 2.
                if(fila2->inicio == NULL){
                    fila2->inicio = aux;
                    fila2->final = aux;
                }else{
                    fila2->final->prox = aux;
                    fila2->final = aux;
                }
            }else{  //Caso a prioridade seja maior que x, insere na fila 3.
                if(fila3->inicio == NULL){
                    fila3->inicio = aux;
                    fila3->final = aux;
                }else{
                    fila3->final->prox = aux;
                    fila3->final = aux;
                }
            }
            aux = aux->prox;
        }
    }
    
    fila2->final->prox = NULL; //Atualiza o valor final das filas 2 e 3.
    fila3->final->prox = NULL;
    
    return;
}

void imprime(Fila *fila){ //Imprime a fila.
    if(fila->inicio == NULL){
        printf("A lista esta vazia.\n");
    }else{
        No *aux = fila->inicio;

        while(aux != NULL){
            printf("-------------------------------\n");
            printf("Prioridade: %d\n", aux->numero.prioridade);
            printf("Numero: %d\n", aux->numero.valor);
            printf("-------------------------------\n");

            aux = aux->prox;
        }
    }
    return;
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