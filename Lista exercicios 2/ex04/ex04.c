#include "ex04.h"

No *aloca_no(){
    No *p = (No*)malloc(sizeof(No));
    p->prox = NULL;

    return p;
}

Lista *inicia_lista(){
    Lista *lista = (Lista*)malloc(sizeof(Lista));

    lista->inicio = NULL;
    lista->final = NULL;

    return lista;
}

void aumenta_tempo_espera(Lista *lista){
    No *aux = lista->inicio;

    while(aux != NULL){
        aux->processo.tempo_espera++;

        aux = aux->prox;
    }
    return;
}

void novo_processo(Lista *lista, Processo processo){ //Adiciona um processo na fila e aumenta o tempo dos outros processos em +1.
    No *aux = aloca_no();
    aux->processo.id = processo.id;
    aux->processo.tempo_espera = processo.tempo_espera;

    if(lista->inicio == NULL){
        lista->inicio = aux;
        lista->final = aux;
    }else{
        lista->final->prox = aux;
        lista->final = aux;
    }

    aumenta_tempo_espera(lista);

    return;
}

int acha_maior_tempo_espera(Lista *lista){
    int tempo_espera;

    if(lista->inicio == NULL){
        printf("A ja esta vazia.\n");
    }else{
        No *aux = lista->inicio;
        tempo_espera = aux->processo.tempo_espera;

        while(aux != NULL){
            if(tempo_espera < aux->processo.tempo_espera){
                tempo_espera = aux->processo.tempo_espera;   
            }
            aux = aux->prox;
        }
    }
    return tempo_espera;
}

void retira_inicio(Lista *lista){
    No *aux = lista->inicio;
    
    lista->inicio = lista->inicio->prox;
    free(aux);
}

void retira_final(Lista *lista){
    No *aux = lista->inicio;

    if(aux->prox == NULL){ //caso so tenha um elemento
        free(aux);
        lista->inicio = NULL;
        lista->final = NULL;
        return;
    }

    while(aux->prox != lista->final){ //pecorre a lista até aux = penúltimo e aux.prox = ultimo
        aux = aux->prox;
    }

    aux->prox = NULL; //próx nó aponta pra NULL
    free(lista->final); //libera a memória do ultimo da fila
    lista->final = aux; //ultimo da fila aponta pro aux(aux = penultimo)
}

void retira_meio(Lista *lista){
    No *aux = lista->inicio;
    int tempo_espera = acha_maior_tempo_espera(lista); //acha o parâmetro de parada

    while(aux->prox->processo.tempo_espera != tempo_espera){ //enquanto o próx for diferente do q a gente quer tirar 
        aux = aux->prox;
    }

    No *aux2 = aux->prox; //aux2 aponta pro que a gente quer tirar

    aux->prox = aux2->prox; //agr o aux aponta pro prox do q a gente quer tirar, ou seja, se a gente quer tirar o 3, o 2 ta apontando pro 4
    free(aux2); //libera a memoria do q a gente quer tirar
}

void retirar_maior_tempo_espera(Lista *lista){
    int tempo_espera = acha_maior_tempo_espera(lista);
    No *aux = lista->inicio;

    while(aux != NULL){
        if(aux->processo.tempo_espera == tempo_espera){
            if(aux == lista->inicio){
                retira_inicio(lista);
            }else if(aux == lista->final){
                retira_final(lista);
            }else{
                retira_meio(lista);
            }
        }
        aux = aux->prox;
    }
    return;
}

void imprime(Lista *lista){
    if(lista->inicio == NULL){
        printf("A fila esta vazia.\n");
    }else{
        No *aux = lista->inicio;
        int cont = 1;

        printf("Lista de processos:\n");
        while(aux != NULL){
            printf("\nProcesso %d- %d\n", cont, aux->processo.id);
            printf("Tempo de espera: %d\n", aux->processo.tempo_espera);

            aux = aux->prox;
            cont++;
        }
    }
    return;
}

void libera_memoria(Lista *lista){
    No *aux = lista->inicio;
    No *aux2;

    while(aux != NULL){
        aux2 = aux;
        aux = aux->prox;
        free(aux2);
    }
    return;
}