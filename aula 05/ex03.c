#include <stdio.h>
#include <math.h>

int eleva(int x, int n);

int main(){

    int x, n;

    x = 2; // Caso de teste
    n = 3; // Caso de teste

    printf("%d elevado a %d e: %d", x, n, eleva(x, n));

    return 0;
}

int eleva(int x, int n){

    if(n == 0){
        return 1;
    }else{
        return (x * eleva(x, n-1));
    }

}