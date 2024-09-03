#include "listaArranjo.h"
// inicializacao da lista
void Inicializar(TipoLista *Lista){
    Lista->Primeiro = INICIOARRANJO; // apontar para o primeiro elemento
    Lista->Ultimo = Lista->Primeiro; // atribuir o ultimo elemento para o primeiro
} /* Inicializar fim*/

// verificar se a lista esta vazia
int Vazia(TipoLista Lista){
    return (Lista.Primeiro == Lista.Ultimo);
} /* Vazia fim*/

// realizar a insercao de elementos na ultima posicao
void Insere(int x, TipoLista *Lista){
    if (Lista->Ultimo >= MAXTAM)
        printf("Lista esta cheia\n"); // se a lista estiver cheia
    else {
        Lista->Item[Lista->Ultimo] = x; // caso a lista nao estiver cheia
        Lista->Ultimo++;
    }
} /* Insere fim*/
// realizar a remocao de elementos dada uma posicao
// a funcao considera que o usuario ira inserir valores de 1 ate a ultima posicao (de 1 ate n)
void Retira(int p, TipoLista *Lista){
    int Aux;
    if (Vazia(*Lista) || (p - 1) >= Lista->Ultimo ||p < 0){ // se lista vazia ou p maior que ultimo ou p menor que zero
        printf("Erro - Lista vazia ou posicao nao existe!\n");
    }
    else{ // se a posicao for valida
        Aux = Lista->Item[p - 1];
    printf("O valor removido e: %d.\n",Aux); // imprime o elemento a ser removido
    for (Aux = p; Aux < Lista->Ultimo; Aux++) // reordenar o vetor
        Lista->Item[Aux - 1] = Lista->Item[Aux];
        Lista->Ultimo--;
    }
} /* Retira fim*/

// imprime todos os elementos da lista
void Imprime(TipoLista Lista) {
    int Aux;
    for (Aux = Lista.Primeiro; Aux <= (Lista.Ultimo - 1); Aux++)
        printf("%d\n", Lista.Item[Aux]);
} /* Imprime fim*/