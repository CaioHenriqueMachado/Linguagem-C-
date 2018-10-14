// EXERCÍCIO 17:Fazer um programa em C que lê um vetor de 50 
//posições de números inteiros e mostra somente os positivos.

#include<stdio.h>

#define T 50
int main(){
	int v[T],i;
	
 	printf("\nDigite 50 valores para o conjunto:\n");

	for(i=0;i<T;i++){
 	scanf("%d",&v[i]);	// Lendo os numero digitados.
 }
   printf("\nOs numeros positivos são:");
   	for(i=0;i<T;i++){
   		if(v[i]>=0){	//Vendo se o numero é maior que zero.
		   printf("%d ",v[i]);	// mostrando os numero positivos.
		}
 	}
   return 0;
}
