//EXERCÍCIO 1:
//Considere uma matriz da matematica 3x3,na qual a 1º dimensão é linha e a 2º
//é a coluna.O trexo do codigo a seguir faz a leitura da matriz.

#include<stdio.h>

int main(){
	int i , j;		//Contadores sempre declarados inteiros.
	float m[3][3];	// caso a matriz tenha numero quebrado.
	
	printf("Digite os elementos para a matriz:\n");
		for(i=0;i<3;i++){			//Formatação para a montagem da matriz.
			for(j=0;j<3;j++){
				printf("\nLinha %d e Coluna %d =",i,j);
				scanf(" %f",&m[i][j]);//Leitura dos numeros digitados.
			}
		}

	printf("\nMatriz:\n");	//Exibição dos resultados digitados.
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%7.2f",m[i][j]);//Exibição com espaçamentos
			}
		}
	printf("\nMatriz formatada:\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%7.2f",m[i][j]);
			}
			printf("\n");
		}// Exibição com formatação de matriz e espaçamento
		
	return 0;
}
