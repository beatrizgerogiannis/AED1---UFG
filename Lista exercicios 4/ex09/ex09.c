#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int Matricula;
    float Nota;
} Aluno;

void troca(Aluno *a, Aluno *b) {
    Aluno temp = *a;
    *a = *b;
    *b = temp;
}

int particiona(Aluno vetor[], int inicio, int final) {
    float pivo = vetor[final].Nota;
    int i = (inicio - 1);

    for (int j = inicio; j <= final - 1; j++) {
        if (vetor[j].Nota > pivo) {
            i++;
            troca(&vetor[i], &vetor[j]);
        }
    }
    troca(&vetor[i + 1], &vetor[final]);
    return (i + 1);
}

void quickSort(Aluno vetor[], int inicio, int final) {
    if (inicio < final) {
        int pi = particiona(vetor, inicio, final);
        quickSort(vetor, inicio, pi - 1);
        quickSort(vetor, pi + 1, final);
    }
}

void merge(Aluno vetor[], int inicio, int meio, int final) {
    int n1 = meio - inicio + 1;
    int n2 = final - meio;

    Aluno L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = vetor[inicio + i];
    for (int j = 0; j < n2; j++)
        R[j] = vetor[meio + 1 + j];

    int i = 0, j = 0, k = inicio;

    while (i < n1 && j < n2) {
        if (L[i].Matricula <= R[j].Matricula) {
            vetor[k] = L[i];
            i++;
        } else {
            vetor[k] = R[j];
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
        vetor[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(Aluno vetor[], int inicio, int final) {
    if (inicio < final) {
        int meio = inicio + (final - inicio) / 2;

        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio + 1, final);

        merge(vetor, inicio, meio, final);
    }
}

int main() {
    int N;
    printf("Digite o numero de alunos: ");
    scanf("%d", &N);

    Aluno *alunos = (Aluno*)malloc(N * sizeof(Aluno));

    for (int i = 0; i < N; i++) {
        printf("Digite a matricula e a nota do aluno %d: ", i + 1);
        scanf("%d %f", &alunos[i].Matricula, &alunos[i].Nota);
    }

    quickSort(alunos, 0, N - 1);

    printf("Alunos ordenados por nota final:\n");
    for (int i = 0; i < N; i++) {
        printf("Matricula: %d, Nota: %.2f\n", alunos[i].Matricula, alunos[i].Nota);
    }

    mergeSort(alunos, 0, N - 1);

    printf("\nAlunos ordenados por numero de matricula:\n");
    for (int i = 0; i < N; i++) {
        printf("Matricula: %d, Nota: %.2f\n", alunos[i].Matricula, alunos[i].Nota);
    }

    free(alunos);

    return 0;
}
