#include "ex07.h"

//Alocar um espaço de memoria para o nó
No* aloca_No(){ 
    No* p = (No*)malloc(sizeof(No));
    p->prox = NULL;
    return p;
}

//Inicia a lista
Lista* inicia_Lista(){
    Lista* lista;

    lista = (Lista*)malloc(sizeof(lista));

    lista->inicio = NULL; 
    lista->fim = lista->inicio; //Ambos apontam para o mesmo lugar

    return lista;
}

//Checa o tamanho da lista
int tamanho_Lista(Lista* lista){
    if(lista->inicio == NULL){
        return 0;
    }else{
        No* aux = lista->inicio;
        int cont=0;
        while(aux != NULL){
            cont++;
            aux = aux->prox;
        }
        return cont;
    }
}

//Insere no inicio da lista
void insere_Inicio(Lista* lista, int x){
    
    No* p = aloca_No();
    p->item = x;

    if(lista->inicio == NULL){//Checa se a lista esta vazia
        lista->inicio = p;
        lista->fim = p;
    }else{ //Adiciona no inicio da lista
        p->prox = lista->inicio;
        lista->inicio = p;
    }
}

//Insere no final da lista
void insere_Fim(Lista* lista, int x){ 
    No* p = aloca_No();
    p->item = x;

    if(lista->inicio == NULL){ //Checa se a lista esta vazia
        lista->inicio = p;
        lista->fim = p;
    }else{ // Insere o termo no final
        lista->fim->prox = p;
        lista->fim = p;

    }
}

//Imprime os elementos da lista
void imprime(Lista* lista){
    if(lista->inicio == NULL){ // Checa se a lista esta vazia
        printf("Essa lista esta vazia!\n");
    }else{
        No* aux;
        aux = lista->inicio;; 
        while(aux != NULL){ // Enquanto a lista != NULL, imprime o item.
            printf("%d-", aux->item);
            aux = aux->prox;
        }
    }
}

//Junta as duas listas em uma terceira lista
Lista* contatena_Listas(Lista* lista1, Lista* lista2){
    Lista* lista3;
    lista3 = inicia_Lista();
    No* aux2 = lista2->inicio;

    lista3->inicio = lista1->inicio; 
    lista3->fim = lista1->fim;

    while(aux2 != NULL){
        insere_Fim(lista3, aux2->item);
        aux2 = aux2->prox;
    }
    return lista3;
}
