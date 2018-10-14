//EXERCÍCIO 10:Gerar um vetor de 10 posicoes com valores aleatórios de 0 50 
//Onde ele mostra todas as posicoes com valores entre 10 30(C/Extremos).

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define T 10

int main(){
	int v[T],i;
	
	srand(time(0));
	
	printf("\nValores gerados:\n");
	
	for(i=0;i<T;i++){
		v[i]=rand()%50;	//atribuindo valores ate 50.
		printf("%d ",v[i]);
	}
	for(i=0;i<T;i++){
		if(v[i]>=10 &&v[i]<=30){	//Limite para ser mostrado (de 10 até 30).
		printf("\n A posicao dos valor entre 10 e 30 tem indice %d e valor: %d",i,v[i]);
		}
	}

	
	return 0;
}
