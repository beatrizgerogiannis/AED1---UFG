#include "ex02.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    float var;
    Cubo *teste;

    var = 5;

    teste = criar_cubo(var);
    printf("%f \n", retorna_aresta(teste));
    printf("%f \n", face_area(teste));
    printf("%f \n", area_total(teste));
    printf("%f \n", volume_cubo(teste));

    finaliza_cubo(teste);

    return 0;
}