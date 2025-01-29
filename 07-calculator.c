/* Estrutura case em C */

#include <stdio.h>
#include <math.h>

int main(){
    float num1, num2, resultado;
    int op;

    printf("Digite o primeiro numero:\n");
    scanf("%f", &num1);
    printf("Digite o segundo numero:\n");
    scanf("%f", &num2);
    printf("Escolha a operacao:\n 1 - soma \n 2 - subtracao \n 3 - multiplicacao \n 4 - divisao \n");
    scanf("%d", &op);

    switch (op){
        case 1:
            resultado = num1 + num2;
            printf("A soma e: %.3f\n", resultado);
            break;

        case 2:
            resultado = num1 - num2;
            printf("A subtracao e: %.3f", resultado);
            break;

        case 3:
            resultado = num1 * num2;
            printf("A multiplicacao e: %.3f", resultado);
            break;

        case 4:
            resultado = num1 / num2;
            printf("A divisao e: %.3f", resultado);
            break;

        default:
            printf("Opcao invalida\n");
            break;
    }
    return (0);
}