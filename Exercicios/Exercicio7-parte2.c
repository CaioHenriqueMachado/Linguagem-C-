// Parte 7(lista 2):Gerar e mostrar um vetor de 10 posições com valores			t
//de 0 a 99, calcular a média e depois substituir os elementos abaixo 
//da média por 0 e os acima por 1. Mostrar o novo vetor.

#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#define T 10
 int main (){
 	int v[T],i,media=0,soma=0;
 	
srand(time(0));		//valores aleatorios com base no tempo.
 	
 	printf("\nVetor gerado:\n");
 	
 	for(i=0;i<T;i++){
 		v[i]=rand()%100;	//Gerando valores de 0 á 99
	 	printf("%d ",v[i]);
		 soma=soma+v[i]; //Somando os valores gerados.
	 }
media= soma/T;
	 printf("\n A media dos valores gerados eh: %d\n",media);
	 
	 for(i=0;i<T;i++){
	 	if(media>=v[i]){
	 		v[i]=0;		//Substituindo com base na media
		 }else{
		 	v[i]=1;
		 }
	 }
	 printf("\nVetor gerado com base na media:\n");
	 	for(i=0;i<T;i++){
	 		printf("%d ",v[i]);
	 	}
	 
	 return 0;
}
	 
