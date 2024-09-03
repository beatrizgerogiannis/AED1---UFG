#include <stdio.h>

int max_elemento(int v[], int inicio, int fim){
    if (inicio == fim){
        return v[inicio];
    }
    int meio = (inicio + fim) / 2;
    int max1 = max_elemento(v, inicio, meio);
    int max2 = max_elemento(v, meio+1, fim);
    if (max1 > max2){
        return max1;
    } else {
        return max2;
    }
}

int main(){
    int v[] = {1, 3, 5, 2, 4, 6, 8, 7};
    int tamanho = sizeof(v) / sizeof(v[0]);
    int maximo = max_elemento(v, 0, tamanho-1);
    printf("O elemento máximo do vetor é %d", maximo);
    return 0;
}