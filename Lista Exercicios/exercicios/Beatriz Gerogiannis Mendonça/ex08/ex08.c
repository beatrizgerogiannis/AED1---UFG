#include "ex08.h"

//Aloca espaço 
No* aloca_No(){
    No* p = (No*)malloc(sizeof(No));
    p->prox = NULL;
    return p;
}

//Inicia a lista
Lista* inicia_Lista(){
    Lista* lista;
    lista = (Lista*)malloc(sizeof(Lista));

    //Ambos apomtam para o mesmo lugar
    lista->inicio = NULL;   
    lista->final = NULL;

    return lista;
}

//Insere itens no inicio
void insere_Inicio(Lista* lista, int x){
    
    No* p = aloca_No();
    p->item = x;

    if(lista->inicio == NULL){//Checa se a lista esta vazia
        lista->inicio = p;
        lista->final = p;
    }else{ //Adiciona no inicio da lista
        p->prox = lista->inicio;
        lista->inicio = p;
    }
}

//Checa o tamanho da lista
int tamanho_Lista(Lista* lista){
    
    if(lista->inicio == NULL){//Checa se a lista esta vazia
        printf("Esta lista esta vazia.\n");
    }else{
        No* aux = lista->inicio;
        int tamanho=0;
        
        while(aux != NULL){ //Conta quantos itens tem na lista
            tamanho++;
            aux = aux->prox;
        }
        return tamanho;
    }
}

//Imprime a lista
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

//Checa se o vetor tem elementos iguais
int verifica_Vetor(int item, int *valores, int* tam){
    for(int i=0; i<(*tam); i++){
        if(valores[i] == item){ //Caso se repita, retorna verdadeiro
            return 1;
        }
    }
    valores[*tam] = item; //Guarda os que não se repetem
    (*tam)++;
    return 0;
}

//Põe os itens repetidos no vetor "itens_Repetidos"
void localiza_Repetidos(Lista* lista){ 
    if(lista->inicio == NULL){//Checa se a lista esta vazia
        printf("A lista esta vazia.\n");
    }else{
        No* aux = lista->inicio;
        int verifica;
        int valores[tamanho_Lista(lista)], valores_repetidos[tamanho_Lista(lista)];
        int tam=0, tam_rep = 0;

        while(aux != NULL){ //Verifica se a lista contem valores repetidos e os guarda em "valores"
            verifica = verifica_Vetor(aux->item, valores, &tam);
            if(verifica == 1){ //Retira os elementos repetidos da lista "valores" e os guarda em "valores_Repetidos" 
                verifica = verifica_Vetor(aux->item, valores_repetidos, &tam_rep);
            }
            aux = aux->prox;
        }

        for(int i=0; i<tam_rep; i++){
            printf("%d-", valores_repetidos[i]); //Printa os valores repetidos
            removee (lista, valores_repetidos[i]); //Retira os valores repetidos da lista
        }
    }
}

//Remove os itens iguais aos itens do vetor "valores_Repetidos"
void removee(Lista* lista, int item){ 

    No* aux = lista->inicio;

    while(aux != NULL){ //Enquanto não chega no fim da lista
        if(aux->item == item && aux == lista->inicio){//Caso o item repetido esteja no inicio
            No* p = lista->inicio;
            lista->inicio = lista->inicio->prox;
            free(p);
            aux = lista->inicio;
        }else if(aux->item == item && aux == lista->final){//Caso o item repetido esteja no final
            No* aux2 = lista->inicio;
            while(aux2->prox != lista->final){
                aux2 = aux2->prox;
            }
            aux2->prox = NULL;
            free(lista->final);
            lista->final = aux2;
            aux = NULL;
        }else{ // Caso o item esteja no meio
            if(aux->item == item){
                No* aux3 = lista->inicio;
                while(aux3->prox != aux){
                    aux3 = aux3->prox;
                }
                aux3->prox = aux->prox;
                free(aux);
                aux = aux3;
            }
            aux = aux->prox;
        }
    }
}