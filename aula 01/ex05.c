#include <stdio.h>

int main(){

    float seq1[4], seq2[4];

    printf("Insira a primeira sequencia de 4 numeros: ");
    for(int i=0; i<4; i++){
        scanf("%f", &seq1[i]);
    }

    printf("Insira a segunda sequencia de 4 numeros: ");
    for(int i=0; i<4; i++){
        scanf("%f", &seq2[i]);
    }

    for(int i=0; i<4; i++){
        printf("A soma dos %d numeros das sequencias e: %.2f\n", (i+1), (seq1[i]+seq2[i]));
    }

    return 0;
}