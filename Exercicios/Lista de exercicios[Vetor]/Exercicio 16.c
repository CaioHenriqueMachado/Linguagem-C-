// EXERCÍCIO 16:Fazer um programa em C que gera e mostra um vetor de
//20 posições.Em seguida, troca o primeiro elemento com o último, o 
//segundo com o penúltimo, o terceiro com o antepenúltimo, e assim 
//sucessivamente. Mostrar o novo vetor depois das trocas. 

#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#define T 20
 int main (){
 	int v[T],i,aux,j;
 	
 	srand(time(0));		//valores aleatorios com base no tempo.
 	
 	printf("\nVetor gerado:\n");
 	
 	for(i=0;i<T;i++){
 		v[i]=rand()%101;		//Gerando valores
	 printf("%d ",v[i]);
	 }
	 
	 for(i=0,j=T-1;i<T/2;i++,j--){
	 	aux=v[i];
	 	v[i]=v[j];		// invertendo valores.
	 	v[j]=aux;
	 }
	
	printf("\nVetor invertido:\n");
 	for(i=0;i<T;i++){
	 printf("%d ",v[i]);	
	 }
	
	return 0;
}
