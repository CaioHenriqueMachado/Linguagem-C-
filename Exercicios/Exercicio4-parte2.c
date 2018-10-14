//Parte 4(lista 2):Fazer um programa em C que gera um vetor de 
//100 posições e mostra-o ordenado em ordem decrescente.

#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#define T 100
 int main (){
 	int v[T],i,cont,aux,j;
 	
 	srand(time(0));
 	
 	printf("\nVetor gerado:\n");
 	for(i=0;i<T;i++){
 		v[i]=rand()%101;		//Gerando valores
	 printf("%d ",v[i]);
	 }
	 
	 
	 for(i=0;i<T;i++){
	 	for(j=i+1;j<T;j++){
	 		if(v[i]<v[j]){ //OBS: para ordem crescente mude o sinal.
	 			aux=v[i]; 	
	 			v[i]=v[j];
	 		   	v[j]=aux;
	 		}
		}
	}
		printf("\nVetor em ordem decrecente:\n");
	 for(i=0;i<T;i++){	 
		printf("%d ",v[i]);
	}
		return 0;
}
	 
