#include "ex11.h"

No *aloca_no(){ //Aloca dinamicamente o nó.
    No *p = (No*)malloc(sizeof(No));
    p->prox = NULL;

    return p;
}

Fila *inicia_fila(){ //Inicia a fila.
    Fila *fila = (Fila*)malloc(sizeof(Fila));

    fila->inicio = NULL;
    fila->final = NULL;

    return fila;
}

Pilha *inicia_pilha(){ //Inicia a pilha.
    Pilha *pilha = (Pilha*)malloc(sizeof(Pilha));

    pilha->inicio = NULL;

    return pilha;
}

void insere_fila(Fila *fila_par, Fila *fila_impar, int id){ //Checa se o numero é par ou impar e insere na fila correspondente.
    No *aux = aloca_no(); //Aloca o no.
    aux->id = id;

    if(id != 0){ //Checa se o numero é diferente de zero.
        if(id % 2 == 0){ //Checa se o numero é par.
            if(fila_par->inicio == NULL){ //Se for par, o insere na fila par.
                fila_par->inicio = aux;
                fila_par->final = aux;
            }else{
                fila_par->final->prox = aux;
                fila_par->final = aux;
            }
        }else{ //Caso seja impar, o insere na fila impar.
            if(fila_impar->inicio == NULL){
                fila_impar->inicio = aux;
                fila_impar->final = aux;
            }else{
                fila_impar->final->prox = aux;
                fila_impar->final = aux;
            }
        }
    }
    return;
}

void insere_pilha(Pilha *pilha, int id){ //Insere na pilha.
    No *aux = aloca_no();
    aux->id = id;

    if(pilha->inicio == NULL){
        pilha->inicio = aux;
    }else{
        aux->prox = pilha->inicio;
        pilha->inicio = aux;
    }
    return;
}

void remove_pilha(Pilha *pilha){ //Remove o item da pilha.
    if(pilha->inicio == NULL){
        return;
    }else{
        No *aux2 = pilha->inicio;

        pilha->inicio = pilha->inicio->prox;
        free(aux2);
    }
    return;
}

void remove_fila(Fila* fila){ //Remove o item da fila.
    if(fila->inicio == NULL){
        return;
    }else{
        No *aux = fila->inicio;
        
        fila->inicio = fila->inicio->prox;
        free(aux);
    }
    return;
}

void removeFila_inserePilha(Fila *fila_par, Fila *fila_impar, Pilha *pilha){  //Remove o item da fila. Se o item for >0 insere na pilha, caso contrario, retira um item da pilha.
    No *aux_par = fila_par->inicio;
    No *aux_impar = fila_impar->inicio;
    
    while(aux_par != NULL || aux_impar != NULL){ //O loop continua enquanto ambos forem diferentes de NULL.
        if(aux_par == NULL){ //Se a fila de pares já estiver vazia:
            while(aux_impar != NULL){ //Enquanto a fila impar nao estiver vazia:
                if(aux_impar->id >= 0){ //Se o item da fila impar for >0, então o insere na pilha.
                    insere_pilha(pilha, aux_impar->id);
                }else{ //Caso o item seja <0, remove um item da pilha.
                    remove_pilha(pilha);
                }

                aux_impar = aux_impar->prox; 
                remove_fila(fila_impar); //Remove o item da fila impar.

            }
            return;
        }else if(aux_impar == NULL){ //Se a fila de impares ja estiver vazia:
            while(aux_par != NULL){ //Enquanto a fila par nao estiver vazia:
                if(aux_par->id >= 0){ //Caso o item seja >0, então o insere na pilha.
                    insere_pilha(pilha, aux_par->id);
                }else{ //Caso seja <0, remove um item da pilha.
                    remove_pilha(pilha);
                }

                aux_par = aux_par->prox;
                remove_fila(fila_par); //Remove o item da fila par.

            }
            return;
        }else{ //Caso nenhuma das duas listas estejam vazias:
            if(aux_impar->id >= 0){ //Checa primeiro a fila impar.
                insere_pilha(pilha, aux_impar->id);
            }else{
                remove_pilha(pilha);
            }
            
            aux_impar = aux_impar->prox;
            remove_fila(fila_impar);


            if(aux_par->id >= 0){//Depois faz a checagem na fila par.
                insere_pilha(pilha, aux_par->id);
            }else{
                remove_pilha(pilha);
            }

            aux_par = aux_par->prox;
            remove_fila(fila_par);

        }
    }
    return;
}

void le_numeros(Fila *fila_par, Fila *fila_impar){ //Le os numeros do usuario e chama a função para inseri-los na fila.
    int opcao;

    printf("Insira os numeros:\n");
    do{
        scanf("%d", &opcao);
        insere_fila(fila_par, fila_impar, opcao);
    }while(opcao != 0);

    return;
}

void imprime(Pilha *pilha){ //Imprime a pilha.
    No *aux = pilha->inicio;

    while(aux != NULL){
        printf("%d ", aux->id);
        aux = aux->prox;
    }
    return;
}

void libera_memoria_pilha(Pilha *pilha){
    No *aux = pilha->inicio;
    No *aux2;

    while(aux != NULL){
        aux2 = aux;
        aux = aux->prox;
        free(aux2);
    }
    return;
}

void libera_memoria_fila(Fila *fila){
    No *aux = fila->inicio;
    No *aux2;

    while(aux != NULL){
        aux2 = aux;
        aux = aux->prox;
        free(aux2);
    }
    return;
}