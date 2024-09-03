#include "atv.h"

int main(){

    Pilha *pilha;
    pilha = inicia_pilha();

    int opcao;
    Produto produto;
    char nome_produto[50];

    do{
        printf("-----------------------------------------\n");
        printf("Insira uma opcao: \n");
        printf("1- Adicionar um produto no estoque.\n");
        printf("2- Vender um produto no estoque.\n");
        printf("3- Exibir o produto no topo da pilha.\n");
        printf("4- Exibir a quantidade total de produtos no estoque.\n");
        printf("5- Sair\n");
        printf("-----------------------------------------\n");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            printf("Insira as informacoes do produto:\n");
            
            printf("Codigo do produto: \n");
            scanf("%d", &produto.codigo_produto);
            limpa_buffer();
            
            printf("Nome do produto:\n");
            scanf("%s", nome_produto);
            strcpy(produto.nome_produto, nome_produto);
            limpa_buffer();
            
            printf("Quantidade em estoque:\n");
            scanf("%d", &produto.qtd_estoque);
            limpa_buffer();
            
            push(pilha, &produto);

            break;
        
        case 2:
            pop(pilha);
            break;
        
        case 3:
            exibe_topo(pilha);
            break;
        
        case 4:
            tamanho(pilha);
            break;

        case 5:
            break;

        default:
            printf("Insira uma opcao valida.");
            break;
        }
    }while(opcao != 5);
    
    free(pilha);

    return 0;
}