#include <stdio.h>

void selection_sort(int vetor[], int tamanho){
    int ind_menor;
    int aux;

    for(int i=0; i<tamanho-1; i++){
        ind_menor = i;
        for(int j=1; j<tamanho; j++){
            if(vetor[j] < vetor[ind_menor]){
                ind_menor = j;
            }
        }

        aux = vetor[i];
        vetor[i] = vetor[ind_menor];
        vetor[ind_menor] = aux;
        
    }
}

int main(){
    
}