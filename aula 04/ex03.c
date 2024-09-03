#include <stdio.h>

int par_impar(int num);

int main(){

    int num;

    /*printf("Insira um numero: ");
    scanf("%d", &num);*/

    num = 3; // Caso de teste.

    if(par_impar(num)){
        printf("O numero e par.");
    }else{
        printf("O numero e impar.");
    }

    return 0;
}

int par_impar(int num){

    if(num % 2 == 0){
        return 1;
    }else{
        return 0;
    }

}