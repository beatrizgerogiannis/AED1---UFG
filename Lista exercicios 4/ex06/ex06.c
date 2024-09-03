#include <stdio.h>
#include <string.h>

void insertionSort(char matriz[][50], int n) {
    for(int i = 1; i < n; i++){
        char chave[50];
        strcpy(chave, matriz[i]);
        
        int j = i - 1;
        while(j >= 0 && strlen(matriz[j]) > strlen(chave)){
            strcpy(matriz[j + 1], matriz[j]);
            j--;
        }
        strcpy(matriz[j + 1], chave);
    }
}

void selectionSort(char matriz[][50], int n) {
    for(int i = 0; i < n - 1; i++){
        int aux = i;
        for(int j = i + 1; j < n; j++){
            if(strlen(matriz[j]) < strlen(matriz[aux])){
                aux = j;
            }
        }
        if(aux != i){
            char temp[50];
            strcpy(temp, matriz[i]);
            strcpy(matriz[i], matriz[aux]);
            strcpy(matriz[aux], temp);
        }
    }
}

int main(){
    int n;

    printf("Digite o numero de nomes:\n");
    scanf("%d", &n);

    char nomes[n][50];
    for(int i = 0; i < n; i++) {
        printf("Digite o nome %d: ", i + 1);
        scanf("%s", nomes[i]);
    }

    char insertionSorted[n][50];
    char selectionSorted[n][50];

    for (int i = 0; i < n; i++) {
        strcpy(insertionSorted[i], nomes[i]);
        strcpy(selectionSorted[i], nomes[i]);
    }

    insertionSort(insertionSorted, n);
    printf("Nomes ordenados pelo algoritmo de insercao:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", insertionSorted[i]);
    }

    selectionSort(selectionSorted, n);
    printf("Nomes ordenados pelo algoritmo de selecao:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", selectionSorted[i]);
    }

    return 0;
}
