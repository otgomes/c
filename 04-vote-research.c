#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {

    char pergunta[300];

    printf("Digite a pergunta da pesquisa \n");
    gets(pergunta);

    int opcao = 0;
    double totalsim = 0;
    double totalnao = 0;
    double totalvotos = 0;

    double percentualsim = 0.0;
    double percentualnao = 0.0;

        do{
            printf("Digite 1 - SIM, 2 - NAO, 3 - ENCERRAR PESQUISA \n");
            scanf("%d", &opcao);

            switch (opcao){
            case 1 : {
                totalsim = totalsim + 1;
                totalvotos = totalvotos + 1;
                break;  
            }
            case 2 : {
                totalnao = totalnao + 1;
                totalvotos = totalvotos + 1;
                break;
            }
            case 3 : {
                totalsim = (totalsim * 100) / totalvotos;
                totalnao = (totalnao * 100) / totalvotos;

                printf("Resultado da pesquisa \n");
                printf("%s \n", pergunta);
                printf("SIM -> %.2f \n", percentualsim);
                printf("NAO -> %.2f \n", percentualnao);
                break;
            }
            default: {
                printf("Opcao invalida \n");
                break;
            }
        }
    }while(opcao != 3);
}