#include "ex07.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    Lista *lista1, *lista2, *lista3; //Declarando as variáveis

    //Iniciando as listas
    lista1 = inicia_Lista(); 
    lista2 = inicia_Lista();

    //Atribuindo valores para fazer um caso de teste
    insere_Inicio(lista1, 3);
    insere_Inicio(lista1, 2);
    insere_Inicio(lista1, 1);
    printf("Lista 1: ");
    imprime(lista1);
    insere_Inicio(lista2, 6);
    insere_Inicio(lista2, 5);
    insere_Inicio(lista2, 4);
    printf("\nLista 2: ");
    imprime(lista2);

    lista3 = contatena_Listas(lista1, lista2);
    printf("\nLista 3: ");
    imprime(lista3);
    
    return 0;
}