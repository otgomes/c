#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

#define TAM 200

struct PROJETO
{
	int codigo;
	char nome[100];
	char vacina[50];
	char cpf[40];
	char data[12];
	char numeroLote[50];
	
	
	
};

int menu(){
	int op;
	system("cls");
	printf("1 - Cadastrar Vacina\n2 - Listar Aplicacoes\n3 - Consultar por CPF\n4 - Sair\nOpcao: ");
	scanf("%d",&op);
	
	return op;
}
int main(){
	int op, cont = 0, aux,  i;
	struct PROJETO ficha[TAM];
	char cpfConsulta[40];
	
	setlocale(LC_ALL, "Portuguese");
	do{
		op = menu();
		switch(op){
			case 1:
				system("cls");
				
				if(cont <= 200){
					printf("Cadastro de Vacina: \n");
					
					printf("Codigo: %d\n", (cont+1));
					fflush(stdin);
					printf("Informe o nome: ");	
					gets(ficha[cont].nome);
					fflush(stdin);
					
					printf("Informe o nome da Vacina: ");	
					gets(ficha[cont].vacina);
					fflush(stdin);
					
					printf("Informe o cpf: ");	
					gets(ficha[cont].cpf);
					fflush(stdin);
					
					printf("Informe a Data: ");	
					gets(ficha[cont].data);
					fflush(stdin);
					
					printf("Informe o Lote: ");	
					gets(ficha[cont].numeroLote);
					fflush(stdin);
					
					printf("\nCadastro Realizado com Sucesso..\n");
					ficha[cont].codigo = cont+1;
					cont++;
					
					
				}else{
					printf("\nBase de Dados cheia: \n");
					
				}
				system("Pause");
				system("cls");			
			break;
			case 2:
				system("cls");
				if(cont > 0){
					for(i = 0; i < cont; i++){
						printf("Codigo: %d", ficha[i].codigo);
						printf("\nNome: %s", ficha[i].nome);
						printf("\nCpf: %s", ficha[i].cpf);
						printf("\nVacina: %s", ficha[i].vacina);
						printf("\nData: %s", ficha[i].data);
						printf("\nNumero do Lote: %s", ficha[i].numeroLote);
						printf("\n======================================\n");
					}
				}else{
					printf("\nLista de Cadastro Vazio..");
				}
				system("Pause");
				system("cls");
			break;
			case 3:
				system("cls");
				getchar();
				printf("Informe o cpf para Consultar: ");	
				gets(cpfConsulta);
				fflush(stdin);
				if(cont > 0){
					aux = 0;
					for(i = 0; i < cont; i++){
						if(strcmp(cpfConsulta, ficha[i].cpf) == 0){
							aux = 1;
							printf("Codigo: %d", ficha[i].codigo);
							printf("\nNome: %s", ficha[i].nome);
							printf("\nCpf: %s", ficha[i].cpf);
							printf("\nVacina: %s", ficha[i].vacina);
							printf("\nData: %s", ficha[i].data);
							printf("\nNumero do Lote: %s", ficha[i].numeroLote);
							printf("\n======================================\n");
						}
					}
					if(aux == 0){
						printf("Cpf: %s, nao foi encontrado nenhum Registro\n", cpfConsulta);
					}
				}else{
					printf("\nLista de Cadastro Vazio..");
				}
				system("Pause");
				fflush(stdin);
				getchar();
				system("cls");
			break;
			case 4:
				printf("\nFim...");
			break;
			default:
				printf("\nOpcao Invalida");
			break;
			
		}
	}while(op != 4);
	
	return 0;
}
