// Parte 8(lista 2):Ler um número inteiro positivo e verificar 
//quais são os seus divisores.

#include<stdio.h>

int main(){
	int numero,i;
	printf("\nDigite um numero para ter seus divisores:\n");
	
	scanf("%d",&numero); // Lendo numero 
	
	printf("\nOs divisores de %d sao:\n",numero);
	for(i=numero;i!=0;i--){	//Buscando valores .
		if(numero%i == 0){	//separando os divisores.
   			printf("%d ",i);
   		}
 
	}
	
	
	
	
	return 0;
}
