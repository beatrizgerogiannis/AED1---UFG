#include <stdio.h>
#include <stdlib.h>

void limpa_buffer();

struct Aluno{
    char nome[100];
    int matricula;
    char curso[50];
};
typedef struct Aluno str_A;

int main(){

    int qtd_alunos;
    str_A *A;

    printf("Informe a quantidade de alunos que quer cadastrar: ");
    scanf("%d", &qtd_alunos);
    limpa_buffer();

    A = (str_A *)calloc(qtd_alunos, sizeof(str_A));

    for(int i=0; i<qtd_alunos; i++){
        printf("Insira as informacoes do aluno %d\n", i+1);
        
        printf("Nome: ");
        scanf("%[^\n]s", &A[i].nome);
        limpa_buffer();
        
        printf("Numero de matricula: ");
        scanf("%d", &A[i].matricula);
        limpa_buffer();
        
        printf("Curso: ");
        scanf("%[^\n]s", &A[i].curso);
        limpa_buffer();
    }

    for(int i=0; i<qtd_alunos; i++){
        printf("------------ Aluno %d ------------\n", i+1);
        printf("Nome: %s\n", A[i].nome);
        printf("Numero de matricula: %d\n", A[i].matricula);
        printf("Curso: %s\n", A[i].curso);
    }

    free(A);

    return 0;
}

void limpa_buffer(){
    scanf("*[^\n]");
    scanf("%*c");
    return;
}