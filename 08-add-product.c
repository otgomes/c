#include <stdio.h>
#include <stdlib.h>

void main() {

    int cont = 1;
    while(cont <= 100){
        printf("Aguarde... \n");
        cont = cont + 1;
    }

    int opcao = 0;
    while (opcao != 3){
        printf("Digite uma opcao \n 1 - Cadastrar Produto, 2 - Consultar Produto, 3 - Sair");
        scanf("%d", &opcao);

        switch (opcao){
            case 1 : {
                system("pause");
                printf("Cadastrando produto... \n");
                break;
            }
            case 2 : {
                printf("Listando produto... \n");
                break;
            }
            case 3 : {
                printf("Saindo do programa... \n");
                break;
            }
            default: {
                printf("Opção Inválida... \n");
                break;
            }
        }
        system("cls");
    }
}