#include <stdio.h>

int main(){

    int seq[5], matriz[2][2], contador=0;

    printf("Insira os numeros do vetor: ");
    for(int i=0; i<5; i++){
        scanf("%d", &seq[i]);
    }

    printf("Insira os numeros da matriz: ");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<2; k++){
                if(seq[i] == matriz[j][k]){
                    contador++;
                    break;
                }
            }
        }
    }

    printf("%d", contador);

    return 0;
}