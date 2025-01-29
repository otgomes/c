#include <stdlib.h>
#include <stdio.h>

//Poderia colocar #define TAM 3 ao invés de declarar [3][3] e vice versa

#define TAM 3

//Lendo os dados
int main (void){
    int mat[TAM][TAM];
    int i, j;

    for(i=0; i<TAM; i++){ //linhas
        for(j=0; j<TAM; j++){ //colunas
            printf("Usuario, insira um numero:\n");
            scanf("%d", &mat[i][j]);
        } 
    }

//Imprimir os dados
    printf("\n");
    for(i=0; i<TAM; i++){ //linha
        for(j=0; j<TAM; j++){ //colunas
            if(i==j){
                    printf("%d", mat[i][j]);
            } else{
                printf("0");
            }
        } 
        printf("\n");
    }
}