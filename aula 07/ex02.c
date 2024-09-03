#include <stdio.h>
#include <stdlib.h>
#include "ex02.h"

struct tad_cubo{
    float aresta;
};

Cubo* criar_cubo(float valor){
    Cubo* novo_cubo = (Cubo*)malloc(sizeof(Cubo*));
    novo_cubo->aresta = valor;

    return novo_cubo;
}

void finaliza_cubo(Cubo *c1){
    free(c1);
}

float retorna_aresta(Cubo *c1){
    return c1->aresta;
    //return (*c1).aresta;
};

float face_area(Cubo *c1){
    return (c1->aresta * c1->aresta);
}

float area_total(Cubo *c1){
    float variavel=0;
    variavel = 6 * face_area(c1);
    
    return variavel;
}

float volume_cubo(Cubo *c1){
    return c1->aresta * c1->aresta * c1->aresta;
}
