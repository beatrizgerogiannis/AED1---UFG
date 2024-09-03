#include <stdio.h>

void limpa_buffer();
float media(float nota1, float nota2, float nota3, char opcao);

int main(){

    float nota1, nota2, nota3, resultado;
    char opcao;

    printf("Insira as notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    limpa_buffer();

    printf("Insira 'A' para receber a media aritimetica.\n");
    printf("Insira 'P' para receber a media ponderada.\n");
    scanf("%c", &opcao);

    resultado = media( nota1, nota2, nota3, opcao);

    if(opcao == 'A'){
        printf("A media aritimetica e de: %.2f", resultado);
    }else{
        printf("A media ponderada e de: %.2f", resultado);
    }

    return 0;
}

void limpa_buffer(){
    scanf("%*[^\n]");
    scanf("%*c");
}

float media(float nota1, float nota2, float nota3, char opcao){

    float media = 0;

    if(opcao == 'A'){
        media = (nota1 + nota2 + nota3) / 3;
        return media; 
    }else if(opcao == 'P'){
        media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;
        return media;
    }

    return media;
}