// EXERCÍCIO 20:Ler um número inteiro positivo e
// verificar se ele é primo.

#include<stdio.h>

int main(){
	int numero,d=2,primo;
	printf("\nDigite um numero para ter seus valores primos:\n");
	
	scanf("%d",&numero); // Lendo numero 

	printf("Inteiro dado: %d \n", numero);
	primo=1;
	
	if (numero <= 1){
		primo=0;
	}
	
	while(primo == 1 && d <= numero/2) {
		if (numero % d == 0){
  		  primo = 0;
  		}
			d=d+1;	
	}

    if (primo == 1){
	printf("%d e' primo \n", numero);
	}else{
	printf(" %d nao e' primo \n", numero);
	}

    return 0;
}
