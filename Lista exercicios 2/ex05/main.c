#include "ex05.h"

int main(){

    Fila *fila = inicia_fila();
    int opcao;

    Aviao aviao;
    Aviao aviao1 = {"Boeing 747", 78562, "Rio de Janeiro, RJ"};
    Aviao aviao2 = {"Airbus 320;", 45134, "Sao Paulo, SP"};
    Aviao aviao3 = {"ATR 42-500", 89613, "Goiania, Goias"};
    Aviao aviao4 = {"Embraer 190", 12358, "Paris, Franca"};
    Aviao aviao5 = {"Airbus 330", 51231, "Madrid, Espanha"};

    adiciona_aviao(fila, aviao1);
    adiciona_aviao(fila, aviao2);
    adiciona_aviao(fila, aviao3);
    adiciona_aviao(fila, aviao4);
    adiciona_aviao(fila, aviao5);

    do{
        printf("\n-------- Menu --------\n");
        printf("1- Listar o numero de avioes aguardando na fila de espera\n");
        printf("2- Autorizar a decolagem do primeiro aviao da fila\n");
        printf("3- Adicionar um aviao a fila de espera\n");
        printf("4- Listar todos os avioes na fila de espera\n");
        printf("5- Listar as características do primeiro aviao da fila\n");
        printf("6- Sair.\n");
        scanf("%d", &opcao);
        limpa_buffer();

        switch(opcao){
            case 1:
                qtd_avioes_espera(fila);
            break;

            case 2:
                autoriza_decolagem(fila);
            break;

            case 3:
                printf("Insira o modelo, id e destino do aviao:\n");
                scanf("%[^\n]s", aviao.modelo);
                limpa_buffer();
                
                scanf("%d", &aviao.id);
                limpa_buffer();

                scanf("%[^\n]s", aviao.destino);
                limpa_buffer();

                adiciona_aviao(fila, aviao);
            break;

            case 4:
                lista_avioes(fila);
            break;

            case 5:
                primeiro_aviao(fila);
            break;

            case 6:
            break;
        }

    }while(opcao != 6);

    libera_memoria(fila);

    return 0;
}