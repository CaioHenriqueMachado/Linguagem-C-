//EXERC�CIO 1:
//Considere uma matriz da matematica 3x3,na qual a 1� dimens�o � linha e a 2�
//� a coluna.O trexo do codigo a seguir faz a leitura da matriz.

#include<stdio.h>

int main(){
	int i , j;		//Contadores sempre declarados inteiros.
	float m[3][3];	// caso a matriz tenha numero quebrado.
	
	printf("Digite os elementos para a matriz:\n");
		for(i=0;i<3;i++){			//Formata��o para a montagem da matriz.
			for(j=0;j<3;j++){
				printf("\nLinha %d e Coluna %d =",i,j);
				scanf(" %f",&m[i][j]);//Leitura dos numeros digitados.
			}
		}

	printf("\nMatriz:\n");	//Exibi��o dos resultados digitados.
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%7.2f",m[i][j]);//Exibi��o com espa�amentos
			}
		}
	printf("\nMatriz formatada:\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%7.2f",m[i][j]);
			}
			printf("\n");
		}// Exibi��o com formata��o de matriz e espa�amento
		
	return 0;
}
