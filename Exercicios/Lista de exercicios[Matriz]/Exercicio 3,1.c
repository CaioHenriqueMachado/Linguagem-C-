//EXERC�CIO 3.1: Mostrando maiores de cada linha e coluna. (RESULTADO FORMATADO)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define T 4
int main (){
	int m[T][T] , ml[T] , mc[T] , diagonal[T];
	int i,j;
	srand(time(0));

//Gera��o da matriz e exibi��o.
	printf("\nResultado gerado:\n");
		for(i=0;i<T;i++){
			for(j=0;j<T;j++){
				m[i][j]=rand()%17; //gerando valores.
				printf("%2d ",m[i][j]);
			}
			printf("\n");
		}

//Maior de cada linha.
		for(i=0;i<T;i++){			//Formata��o para a montagem da matriz.
		ml[i]=m[i][0];				//Dizendo que o 1� espa�o � o maior.
			for(j=1;j<T;j++){
				if(m[i][j]>ml[i]){	//Comparando qual � o maior
					ml[i]=m[i][j];
				}
			}
		}
		
//Maior de cada coluna.
		for(j=0;j<T;j++){			//Formata��o para a montagem da matriz.
		mc[j]=m[0][j];				//Dizendo que o 1� espa�o � o maior.
			for(i=1;i<T;i++){
				if(m[i][j]>mc[j]){	//Comparando qual � o maior
					mc[j]=m[i][j];
				}
			}
		}

//Diagonal da matriz.
	for(i=0;i<T;i++){
		diagonal[i]=m[i][i];
	}
//Resultado.
	printf("\nResultado formatado:\n");
	for(i=0;i<T;i++){
		for(j=0;j<T;j++){
			printf("%.2d ",m[i][j]);
		}
		printf(" %2d\n",ml[i]);
	}
printf("\n");
	
	for(j=0;j<T;j++){
		printf("%.2d ",mc[j]);
	}
	printf("\n\n");
//Resultado em diagonal
for(i=0;i<T;i++){
	for(j=0;j<i*4;j++){
		printf(" ");
	}
	printf("%.2d\n",diagonal[i]);
}
printf("\n");
	
	return 0;
}
