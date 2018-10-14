//EXERCÍCIO 9:Gere um vetor que tenha 100 posiçoes que tenham valores 
// de 0 ate 1000, depois  mostre a posicao e quantas vezes 
// aparece o valor 500.

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define T 100

int main(){
	int v[T],i, k=0;
	
	srand(time(0));
	
	for(i=0;i<T;i++){
		v[i]=rand()%1001;	//atribuindo valores ate 1000.
		printf("%d ",v[i]);
	}
	
	for(i=0;i<T;i++){
		if(v[i]== 500){		// Separando as posicoes com valor de 500.
		
		k++; 				// Contador 
		printf("\nO 500 esta na posicao %d",i);// Mostrando posicao.
		}
	}
		
	if(k==0){
		printf("\n O numero 500 nao apareceu");
	}
	printf("\n O valor apareceu %d vezes",k);
	
	
	return 0;
}
