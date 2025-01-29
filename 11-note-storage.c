#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {

    int qtd;
    printf("Digitar a quantidade de notas para armazenar\n");
    scanf("%d", &qtd);

    float notas[qtd];

    //leitura das notas para meu vetor
    int cont;
    for(cont = 0; cont < qtd; cont++){
        printf("Digite a nota numero %d\n", (cont+1));
        scanf("%f", &notas[cont]);
    }

    //escrever as notas na tela
    for(cont = 0; cont < qtd; cont++){
        printf("Nota na posicao %d e %f\n", (cont+1), notas [cont]);
    }

    char nome[100] = {"Otavio Gomes"};
    printf("Nome criado e %s\n", nome);

    int cont3 = 0;
    while(nome[cont3] != '\0'){
        printf("Letra na posicao %d e %c\n", (cont3+1), nome[cont3]);
        cont3 = cont3+1;
    }
}