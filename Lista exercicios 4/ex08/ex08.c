#include <stdio.h>
#include <stdlib.h>

void merge(int vetor[], int inicio, int meio, int fim) {
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;
    
    int L[n1], M[n2], R[n2];
    
    for (i = 0; i < n1; i++)
        L[i] = vetor[inicio + i];
    for (j = 0; j < n2; j++)
        M[j] = vetor[meio + 1 + j];
    
    i = 0;
    j = 0;
    k = inicio;
    
    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            vetor[k] = L[i];
            i++;
        } else {
            vetor[k] = M[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        vetor[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        vetor[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;
        
        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio + 1, fim);
        
        merge(vetor, inicio, meio, fim);
    }
}

int* merge_tres_vetores(int vetor1[], int vetor2[], int vetor3[], int n1, int n2, int n3) {
    int *vetor_arranjado = (int*)malloc((n1 + n2 + n3) * sizeof(int));
    
    int i;
    for (i = 0; i < n1; i++)
        vetor_arranjado[i] = vetor1[i];
    for (i = 0; i < n2; i++)
        vetor_arranjado[n1 + i] = vetor2[i];
    for (i = 0; i < n3; i++)
        vetor_arranjado[n1 + n2 + i] = vetor3[i];
    
    mergeSort(vetor_arranjado, 0, n1 + n2 + n3 - 1);
    
    return vetor_arranjado;
}

int main() {
    int vetor1[] = {1, 3, 5};
    int vetor2[] = {2, 4, 6};
    int vetor3[] = {0, 7, 8};
    
    int n1 = sizeof(vetor1) / sizeof(vetor1[0]);
    int n2 = sizeof(vetor2) / sizeof(vetor2[0]);
    int n3 = sizeof(vetor3) / sizeof(vetor3[0]);
    
    int* vetor_arranjado = merge_tres_vetores(vetor1, vetor2, vetor3, n1, n2, n3);
    
    printf("Vetor ordenado: ");
    for (int i = 0; i < n1 + n2 + n3; i++)
        printf("%d ", vetor_arranjado[i]);
    
    free(vetor_arranjado);
    
    return 0;
}
