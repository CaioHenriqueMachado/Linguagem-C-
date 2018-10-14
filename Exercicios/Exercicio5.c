//PARTE 5:Criar um vetor com 10 posições, pedir para o usuário digitar uma 
//lista de números, encerrando ou quando o vetor estiver preenchido ou 
//quando o usuário digitar zero. Mostrar o vetor e dizer quantos
//elementos ele possui.

#include<stdlib.h>
#include<stdio.h>
#define T 10

int main(){	
	int v[T] ,i ,k ;         //Declaração das variaveis e vetores!
	printf("\n Digite %d valores ou digite zero para finalizar:\n",T); 
	  
	  for(i=0,k=0;i<T;i++){
	  	scanf("%d",&v[i]);	   			//Lendo valores digitados.
	  	k++;						//para saber qtd  de numeros.
		   if (v[i]==0){
		   	printf("\nVetor preechido: \n");
		   		k=k-1;   // Para que o 0 nao apareca como n.digitado
		   		for(i=0;i<k;i++){  //caso nao tenha 10 numeros.
	  			printf("%d ",v[i]);
		   		}
			printf("\nO vetor possui %d elementos",k);
			}						//lendo a qtd de numeros.
		}
		
printf("\nVetor preechido: \n");
	for(i=0;i<T;i++){ //Lendo todos os numeros.
	printf("%d ",v[i]);
}
	printf("\nO vetor possui %d elementos",T);

	return 0;	
}
