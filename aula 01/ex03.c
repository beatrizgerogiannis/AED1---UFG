#include <stdio.h>

void mostraMenu();
int valores(int num1, int num2);

int main(){

    int opcao;
    float num1, num2;
    
    mostraMenu();
    scanf("%d", &opcao);

    if(opcao == 5){
        return 0;
    }else{
        while(opcao != 5){

            if(opcao < 5 && opcao > 0){
                printf("Informe dois numeros: ");
                scanf("%f %f", &num1, &num2);
            }

            switch (opcao){
                case 1:
                    printf("Resultado = %.2f\n", (num1+num2));
                break;
                case 2:
                    printf("Resultado = %.2f\n", (num1-num2));
                break;
                case 3:
                    printf("Resultado = %.2f\n", (num1*num2));
                break;
                case 4:
                    printf("Resultado = %.2f\n", (num1/num2));
                break;
                default:
                    printf("Insira uma opcao valida!\n");
            }
            mostraMenu();
            scanf("%d", &opcao);
        }
    }

    return 0;
}

void mostraMenu(){
    printf("Digite a operacao desejada: --------\n");
    printf("1- Adicao\n");
    printf("2- Subtracao\n");
    printf("3- Multiplicacao\n");
    printf("4- Divisao\n");
    printf("5- Sair\n");
    return;
}