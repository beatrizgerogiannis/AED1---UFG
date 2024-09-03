#include <stdio.h>

int recorrencia(int T, int n);

int main(){

    int T = 5, n = 5, x;

    x = recorrencia(T, n);
    printf("%d", x);

    return 0;
}

int recorrencia(int T, int n){

    if(n == 1){
        return 1;
    }else{
        return ((2*T) + recorrencia(T, n/2));  
    }

}

2*equacao(numero/2) + numero