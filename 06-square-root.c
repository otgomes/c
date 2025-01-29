/* Estrutura condicional composta em C */

#include <stdio.h>
#include <math.h>

/* Todo programa em C deve possuir a linha abaixo */
int main(){
    /* Delimitando o início das instruções */
    int quadrado, num;
    float raiz;

    printf("Digite um numero inteiro\n");
    scanf("%d", &num);
    if (num % 2 == 0){
        raiz = sqrt(num);
        printf("A raiz quadrada e: %.3f", raiz);
    }else{
        quadrado = num * num;
        printf("O numero e impar.\n");
        printf("O numero ao quadrado e: %d", quadrado);
    }
    return (0); /* Retorno sem erro */
}