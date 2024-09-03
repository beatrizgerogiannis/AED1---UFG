#include <stdio.h>
#include <math.h>

typedef struct{
    double altura;
    double raio;
}
str_cilindro;

double area_base(str_cilindro c);
double area_face(str_cilindro c);
double volume(str_cilindro c);

int main(){

    str_cilindro c;
    c.altura = 5;
    c.raio = 2;

    printf("Altura do cilindro: %.2f\n", c.altura);
    printf("Raio do cilindro: %.2f\n", c.raio);
    printf("Área da base do cilindro: %.2f\n", area_base(c));
    printf("Área da face do cilindro: %.2f\n", area_face(c));
    printf("Volume do cilindro: %.2f\n", volume(c));

    return 0;
}

double area_base(str_cilindro c){
    return 3.14 * pow(c.raio, 2);
}

double area_face(str_cilindro c){
    return (2*3.14*c.raio) * c.altura;    
}

double volume(str_cilindro c){
    return 3.14 * pow(c.raio, 2) * c.altura;
}