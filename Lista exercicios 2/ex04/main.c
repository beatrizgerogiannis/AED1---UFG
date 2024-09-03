#include "ex04.h"

int main(){

    Lista *lista = inicia_lista();
    int opcao;

    Processo processo;
    Processo processo1 = {123, 4};
    Processo processo2 = {234, 7};
    Processo processo3 = {6475, 67};
    Processo processo4 = {1897, 334};
    Processo processo5 = {15235, 90};
    Processo processo6 = {1635, 86};
    Processo processo7 = {1654, 23};
    Processo processo8 = {1789, 987};
    Processo processo9 = {4890, 97};
    Processo processo10 = {3420, 12};

    novo_processo(lista, processo1);
    novo_processo(lista, processo2);
    novo_processo(lista, processo3);
    novo_processo(lista, processo4);
    novo_processo(lista, processo5);
    novo_processo(lista, processo6);
    novo_processo(lista, processo7);
    novo_processo(lista, processo8);
    novo_processo(lista, processo9);
    novo_processo(lista, processo10);

    do{
        printf("----------Menu-----------\n");
        printf("1- Incluir um novo processo.\n");
        printf("2- Retirar o processo com maior tempo de espera\n");
        printf("3- Imprimir lista de processos.\n");
        printf("4- Sair.\n");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                printf("Insira o id e tempo de espera do processo!\n");
                scanf("%d %d", &processo.id, &processo.tempo_espera);

                novo_processo(lista, processo);
            break;

            case 2:
                retirar_maior_tempo_espera(lista);
                printf("Processo retirado.\n");
            break;

            case 3:
                imprime(lista);
            break;

        default:
            break;
        }
    }while(opcao != 4);

    libera_memoria(lista);

    return 0;
}