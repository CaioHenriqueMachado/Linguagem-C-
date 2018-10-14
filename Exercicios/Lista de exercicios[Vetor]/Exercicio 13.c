// EXERCÍCIO 13:Fazer um programa em C que vai gerar um conjunto de 10 
//valores inteiros e verifica se algum dos valores
//é igual à média dos mesmos.

#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#define T 10
 int main (){
 	int v[T],i, total= 0, media=0;
 	
 	srand(time(0));
 	
 	for(i=0;i<T;i++){
 		v[i]=rand()%11;	// Gerando os numero até 10.
	 }
	 printf("\nConjunto gerado:\n");
	 
	 for(i=0;i<T;i++){
	 	printf("%d ",v[i]);
	 	total=total+v[i];	// somando os 10 numeros.
	 }
	 media=total/T;		//dando a media dos 10 valores.
	 
	 printf("\nA media eh : %d",media); //Exibindo a media.
	 
	 for(i=0;i<T;i++){
	 	if(media==v[i]){ 		//Vendo se media é igual á algum valor.
	 		printf("\nA media eh igual ao valor%d.",v[i]);
	 		printf("\n na posicao %d",i);
		 }
	 }
 	
 	
 	
 	return 0;
 }
