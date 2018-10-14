//EXERCÍCIO 2:
//Encontre e mostre o maior elemento de cada linha e depois
//Encontre e mostre o maior elemento de cada coluna:

#include<stdio.h>

int main(){
	int i , j;		//Contadores sempre declarados inteiros.
	float m[3][3], maior;	// caso a matriz tenha numero quebrado.
	
	printf("Digite os elementos para a matriz:\n");
		for(i=0;i<3;i++){			//Formatação para a montagem da matriz.
			for(j=0;j<3;j++){
				printf("\nLinha %d e Coluna %d =",i,j);
				scanf(" %f",&m[i][j]);//Leitura dos numeros digitados.
			}
		}
		printf("\n");
		
		for(i=0;i<3;i++){			//Formatação para a montagem da matriz.
		maior=m[i][0];				//Dizendo que o 1º espaço é o maior.
			for(j=0;j<3;j++){
				if(m[i][j]>maior){	//Comparando qual é o maior
					maior=m[i][j];
				}
			}
			printf("\nMaior da linha %d= %f\n",i,maior);
		}
	
		printf("\n");
		
		for(j=0;j<3;j++){			//Formatação para a montagem da matriz.
		maior=m[0][j];				//Dizendo que o 1º espaço é o maior.
			for(i=0;i<3;i++){
				if(m[i][j]>maior){	//Comparando qual é o maior
					maior=m[i][j];
				}
			}
			printf("\nMaior da coluna %d= %f\n",j,maior);
		}
		
	
	return 0;
}
