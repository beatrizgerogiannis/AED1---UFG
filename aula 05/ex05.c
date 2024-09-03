#include <stdio.h>

int maxr (int v[], int n);

int main () {

    int vet[10] = {1100,258,13,445,58,67,700,8,9,10};
    int x, n=10;

    x = maxr(vet, n);

    printf("Maior: %d\n", x);

    return 0;
}

int maxr (int v[], int n) { 
   if(n == 1){
        return v[0];
   }else{
        if(v[n-1] > maxr(v, n-1)){
            return v[n-1];
        }else{
            return maxr(v, n-1);
        }
        
   }
}