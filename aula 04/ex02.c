#include <stdio.h>
#include <math.h>

float dist_euclidiana(float x1, float y1, float x2, float y2);

int main(){

    float x1, y1, x2, y2, dist;

    printf("Insira os pontos: ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    dist = dist_euclidiana(x1, y1, x2, y2);

    printf("A distancia euclidiana e: %.2f", dist);

    return 0;
}

float dist_euclidiana(float x1, float y1, float x2, float y2){

    float dist;
    dist = sqrt((pow((x1 - x2), 2) + pow((y1 - y2), 2)));

    return dist;
}