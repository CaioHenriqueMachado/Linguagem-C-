// EXERC�CIO 17:Fazer um programa em C que l� um vetor de 50 
//posi��es de n�meros inteiros e mostra somente os positivos.

#include<stdio.h>

#define T 50
int main(){
	int v[T],i;
	
 	printf("\nDigite 50 valores para o conjunto:\n");

	for(i=0;i<T;i++){
 	scanf("%d",&v[i]);	// Lendo os numero digitados.
 }
   printf("\nOs numeros positivos s�o:");
   	for(i=0;i<T;i++){
   		if(v[i]>=0){	//Vendo se o numero � maior que zero.
		   printf("%d ",v[i]);	// mostrando os numero positivos.
		}
 	}
   return 0;
}
