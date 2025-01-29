#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int idade;

    printf("Digite sua idade \n");
    scanf("%d", &idade);

    printf("A idade digitada foi %d \n", idade);

    if(idade >= 18 && idade <= 20) {
        printf("A idade esta entre 8 e 20 \n");
    }else{
        if(idade < 18){
            printf("A idade e menor que 18 \n");
        }
        if(idade > 18){
            printf("A idade e maior que 20 \n");
        }      
    }
    int numSemana;
    printf("Digite um numero da semana \n");
    scanf("%d", &numSemana);

        switch(numSemana){
            case 1 : {
                printf("Domingo");
                break;
            }
            case 2 : {
                printf("Segunda-feira");
                break;
            }
            case 3 : {
                printf("Terça-feira");
                break;
            }
            case 4 : {
                printf("Quarta-feira");
                break;
            }
            case 5 : {
                printf("Quinta-feira");
                break;
            }
            case 6 : {
                printf("Sexta-feira");
                break;
            }
            case 7 : {
                printf("Sabado");
                break;
            }
            default : {
                printf("Numero invalido \n");
                break;
            }
        }
    return 0;
}