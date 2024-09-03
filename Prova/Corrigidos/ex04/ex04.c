#include "ex04.h"

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

void comprarCarta (Lista *lista, Carta carta){
    No *p = aloca_No();
    strcpy(p->carta.cor, carta.cor);
    p->carta.valor = carta.valor;

    if(lista->inicio == NULL){
        lista->inicio = p;
        lista->final = p;
    }else{
        lista->final->prox = p;
        lista->final = p;
    }
}

int tamanho(Lista *lista){
    int tamanho=0;
    
    if(lista->inicio == NULL){
        return 0;
    }else{
        No *aux = lista->inicio;

        while(aux != 0){
            tamanho++;
            aux = aux->prox;
        }
    }
    return tamanho;
}

void remove_Inicio(Lista *lista){
    if(lista->inicio == NULL){
        printf("A mao ja esta vazia.\n");
    }else{
        No *aux = lista->inicio;

        lista->inicio = lista->inicio->prox;
        free(aux);
    }
}

void remove_Final(Lista *lista){
    if(lista->inicio == NULL){
        printf("A mao ja esta vazia.\n");
    }else{
        No *aux = lista->inicio;

        while(aux->prox != lista->final){
            aux = aux->prox;
        }
        aux->prox = NULL;
        free(lista->final);
        lista->final = aux;
    }
}

void remove_Meio(Lista *lista, int posicao){
    if(lista->inicio == NULL){
        printf("A mao ja esta vazia\n");

    }else if(posicao > tamanho(lista) || posicao < 0){
        printf("Essa posicao nao e valida!\n");

    }else if(posicao == tamanho(lista)){
        remove_Final(lista);

    }else if(posicao == 0){
        remove_Inicio(lista);

    }else{
        No *aux = lista->inicio;
        int t = 0;

        while(t != posicao - 1){
            aux = aux->prox;
            t++;
        }
        No *aux2 = aux->prox;

        aux->prox = aux2->prox;
        free(aux2);

    }
}

void jogarCarta(Lista* lista, Carta carta){
    if(lista->inicio == NULL){
        printf("A mao esta vazia.\n");
    }else{
        No *aux = lista->inicio;
        int cont = 0;

        while(aux != NULL){
            if(strcmp(aux->carta.cor, carta.cor) == 0 && aux->carta.valor == carta.valor){
                if(aux == lista->inicio){
                    remove_Inicio(lista);
                    printf("Carta jogada!\n");
                    return;
                }else if(aux == lista->final){
                    remove_Final(lista);
                    printf("Carta jogada!\n");
                    return;
                }else{
                    remove_Meio(lista, cont);
                    printf("Carta jogada!\n");
                    return;
                }
            }
            cont++;
            aux = aux->prox;
        }

        printf("A carta especificada nao existe na sua mao.\n");
        return;
    }
}

void mostrarCartas(Lista *lista){
    No *aux = lista->inicio;
    int tam = tamanho(lista);
    
    if(lista->inicio == NULL){
        printf("A lista esta vazia.\n");
    }else{
        printf("\nVoce possui %d cartas na mao.\n", tam);
        while(aux != NULL){
            printf("Carta: %s %d\n", aux->carta.cor, aux->carta.valor);
            aux = aux->prox;
        }
    }
}
