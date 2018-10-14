//EXERCÍCIO 23:
//Ler 10 numeros inteiros, armazena-los em um vetor com 10 posiçoes. Criar 
//apenas com os numeros impares do primeiro vetor. Imprimir os dois vetores.

#include <stdio.h>
#define T 10
int main(){
	int v1[T],v2[T],i,j;
	j=0;
	printf("Digite 10 valores:\n");
	
	for(i=0;i<T;i++){
		scanf("%d",&v1[i]);		//Lendo 10 num. Digitados.
	}

	for(i=0;i<T;i++){
		if(v1[i]%2!=0){		//Recolhendo numeros impares.
			v2[j]=v1[i];
			j++;		//Acrecimo de contador J
		}	
	}
	
	printf("\nVetor lido:\n");
	for(i=0;i<T;i++){
		printf("%d ",v1[i]);	
	}
	
	printf("\nVetor gerado:\n");
	for(i=0;i<j;i++){
		printf("%d ",v2[i]);	
	}
	return 0;
}
