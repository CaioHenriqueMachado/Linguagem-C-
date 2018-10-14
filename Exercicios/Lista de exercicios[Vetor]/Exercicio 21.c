// EXERCÍCIO 21:Preencher um vetor de 20 posições 
//com os 20 primeiros números primos.

#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#define T 20
 int main (){
 	int v[T],primo,d=2,i;
 	
 	primo=1;
srand(time(0));		//valores aleatorios com base no tempo.
 	
 	printf("\nVetor gerado:\n");
 	
 	for(i=0;i<T;i++){
 		v[i]=rand()%101;	//Gerando valores de 0 á 100
	 	printf("%d ",v[i]);
	 }
	 	printf("\nNumeros primos do vetor:\n");
		 
 		for(i=0;i<T;i++){		// Separando primos nos laços.
 			if (v[i] <= 1){
				primo=0;
			}
	 		while(primo == 1 && d <= v[i]/2) {
				if (v[i] % d == 0){
					primo=0;
 				}
			d=d+1;
			}
			
		if(primo==1){
			printf("%d ",v[i]);
			}
		}



	return 0;
}
	

		


