//EXERCÍCIO 22:
//Ler dois vetores de 10 posioes cada um, Calcular a média dos elementos de
//mesmo resultado em um terceiro vetor, e mostrar o vetor resultante somente.
#include<stdio.h>
#define T 10

int main(){

	int i;							//Declarando variavel em inteiro.
	float v3[T],v1[T], v2[T];		//Declarando variavel em real.
	printf("\nDigite 10 valores para o primeiro vetor:\n");
		for(i=0;i<T;i++){				//Obtendo os valores do 1°vetor.
			scanf("%f", &v1[i]);
		}
		

	printf("\nDigite 10 valores para o segundo vetor:\n");
		for(i=0;i<T;i++){				//Obtendo os valores do 2°vetor.
			scanf("%f",&v2[i]);
		}
		
		for(i=0;i<T;i++){				//Tirando a media de cada posição.. 
			v3[i] = (v1[i]+v2[i])/2;	//..dos dois vetores.
		}
		
	printf("Vetor resultante:\n");
		for(i=0;i<T;i++){		//Mostrando apenas o ultimo vetor
			printf("%f ",v3[i]);
		}
	
	
	return 0;
}
