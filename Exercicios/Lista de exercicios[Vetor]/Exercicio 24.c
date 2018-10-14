//EXERCÍCIO 24:
//Gerar um vetor de 20 posiçoes com valores randômicos entre 0 e 199 e exibir o
//vetor  os valores do vetor da seguinte maneira: os pares por 0 e os Ímpares por 1
//mostrar o novo vetor.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define T 20
int main(){
	int v1[T],i;
	srand(time(0));		//geração com base no tempo.
	
	printf("\nVetor Gerado:\n");	
	for(i=0;i<T;i++){
		v1[i]=rand()%200;			//Gerando valores até 199.
		printf("%d ",v1[i]);		//Mostrando valores na tela.
	}

	for(i=0;i<T;i++){
		if(v1[i]%2==0){
			v1[i]=0; 		//Caso seja par,substitua por 0.
		}else{
			v1[i]=1;		//Caso seja impar, substitua por 1.
		}	
	}
	
	printf("\nVetor Obtido:\n");
		for(i=0;i<T;i++){
			printf("%d ",v1[i]);
		}
	
	return 0;
}
