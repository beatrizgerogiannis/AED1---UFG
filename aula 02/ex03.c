#include <stdio.h>

int somaDobro(int* A, int* B);

int main(){

    int A, B, dobro;

    printf("Insira dois valores inteiros: ");
    scanf("%d %d", &A, &B);

    dobro = somaDobro(&A, &B);

    printf("Soma do dobro = %d\n", dobro);
    printf("Dobro de A = %d\n", A);
    printf("Dobro de B = %d\n", B);

    return 0;
}

int somaDobro(int* A, int* B){
    int dobro;
    *A *= 2;
    *B *= 2;
    dobro = *A + *B;

    return dobro;
}