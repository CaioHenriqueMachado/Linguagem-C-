//EXERCÍCIO 11: Ler 2 vetores com 5 posicoes cada.
//Criar um terceiro vetor com os maiores valores de cada posicao 
//Mostrar o vetor criado.

#include<stdio.h>

#define T 5
int main(){
	int v1[T],v2[T],v3[T], i;
	
	printf("\nDigite 5 valores para o primeiro vetor:\n");
	for(i=0;i<T;i++){
		scanf("%d",&v1[i]);
	}
	
	printf("\nDigite 5 valores para o segundo vetor:\n");
	for(i=0;i<T;i++){
		scanf("%d",&v2[i]);
	}
	
	for(i=0;i<T;i++){
		if(v1[i]>=v2[i]){
			v3[i]=v1[i];
		}else{
			v3[i]=v2[i];
		}
	}
	printf("\nVetor criado\n");
	for(i=0;i<T;i++){
		printf("%d ",v3[i]);
	}
	
	
	return 0;
}
