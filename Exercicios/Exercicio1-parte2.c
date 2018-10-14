// Parte 1(lista 2):Fazer um programa em C que lê um conjunto de 10 
//valores inteiros e verifica se algum dos valores
//é igual à média dos mesmos.

#include<stdio.h>

#define T 10
 int main (){
 	int v[T],i, total= 0, media=0;
 	
 	printf("\nDigite 10 valores para o conjunto:\n");
 	
 	for(i=0;i<T;i++){
 		scanf("%d",&v[i]);	// Lendo os numero digitados.
	 }
	 
	 for(i=0;i<T;i++){
	 	total=total+v[i];	// somando os 10 numeros.
	 }
	 media=total/T;		//dando a media dos 10 valores.
	 
	 printf("\nA media eh : %d",media); //Exibindo a media.
	 
	 for(i=0;i<T;i++){
	 	if(media==v[i]){ 		//Vendo se media é igual á algum valor.
	 		printf("\nA media eh igual ao valor%d.",v[i]);
		 }
	 }
 	
 	
 	
 	return 0;
 }
