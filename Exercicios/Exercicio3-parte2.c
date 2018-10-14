//Parte 3(lista 2):Fazer um programa em C que lê dois vetores de
//10 posições e faz a multiplicação dos elementos de mesmo índice, 
//colocando o resultado em um terceiro vetor. Mostrar o vetor resultante.

#include<stdio.h>

#define T 10
int main(){
	int v1[T],v2[T],v3[T],i;
	
 	printf("\nDigite 10 valores para o conjunto:\n");

	for(i=0;i<T;i++){
 	scanf("%d",&v1[i]);	// Lendo os numero digitados.
 }
	printf("\nDigite 10 valores para o conjunto:\n");
 	
 	for(i=0;i<T;i++){
 		scanf("%d",&v2[i]);	// Lendo os numero digitados.
	 }
	 for(i=0;i<T;i++){
	 	v3[i]=v1[i]*v2[i]; //Multiplicando os vetores.
	 }
	printf("O vetor criado foi:");
	
	for(i=0;i<T;i++){
		printf("%d ",v3[i]);// lendo vetor 3.
	}
	
	return 0; 
}
