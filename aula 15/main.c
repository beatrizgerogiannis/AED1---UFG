#include "ex01.h"

int main(){

    Fila *fila;

    Funcionarios funcionario1 = {123456, 2000};
    Funcionarios funcionario2 = {452145, 1200};
    Funcionarios funcionario3 = {789562, 5000};
    Funcionarios funcionario4 = {652315, 3500};
    Funcionarios funcionario5 = {298741, 1500};

    fila = inicia_fila();

    enfileira(fila, funcionario1);
    enfileira(fila, funcionario2);
    enfileira(fila, funcionario3);
    enfileira(fila, funcionario4);
    enfileira(fila, funcionario5);

    imprime(fila);

    desinfilera(fila);

    printf("\n\nApos desinfileirar: \n");
    imprime(fila);

    menor_maior_media(fila);
    qntd_paga(fila);

    free(fila);

    return 0;
}
