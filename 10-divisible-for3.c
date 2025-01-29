#include <stdio.h>
//Código que deve ser inserido aqui
void identificarDivisivelPor3(int m[5][5]){
	int i, x;
	
	printf("\nNumeros Divisivel por 3\n");
	for(i = 0; i < 5; i++){
		for(x = 0; x < 5; x++){
			if(m[i][x] % 3 == 0){
				printf("Numero divisivel por 3 encontrado na linha %d, coluna %d, numero [%d] \n",(i+1), (x+1), m[i][x]);
			}
		}
	}
	
}

int main(int argc, char const *argv[])
{
//Matriz com valores fixo para nao fazer a leitura
    int matriz[5][5] = {{15,9,23,43,49},
                        {3,36,55,53,18},
                        {12,42,51,57,34},
                        {6,32,28,25,62},
                        {72,91,81,16,41}};
    
    identificarDivisivelPor3(matriz);

    return 0;
}