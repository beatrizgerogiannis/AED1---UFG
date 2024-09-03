#include <stdio.h>
#include <string.h>

void troca(char *a, char *b){
    char aux = *a;
    *a = *b;
    *b = aux;
}

int particiona(char vetor[], int inicio, int final){
    char pivo = vetor[final];
    int i = (inicio - 1);

    for(int j = inicio; j <= final - 1; j++){
        if(vetor[j] < pivo){
            i++;
            troca(&vetor[i], &vetor[j]);
        }
    }

    troca(&vetor[i + 1], &vetor[final]);
    return (i + 1);
}

void quicksort(char vetor[], int inicio, int final){
    if(inicio < final){
        int pi = particiona(vetor, inicio, final);
        quicksort(vetor, inicio, pi - 1);
        quicksort(vetor, pi + 1, final);
    }
}

int main(){
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    quicksort(palavra, 0, tamanho - 1);

    printf("palavra ordenada: %s\n", palavra);

    return 0;
}
