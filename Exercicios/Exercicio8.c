//PARTE 8:Gerar um vetor randômico de 10 posições, com valores de 0 a 1000.
//Encontrar o menor elemento e colocar na primeira posição. 
//Encontrar o maior elemento e colocar na última posição. 
//Mostrar o vetor antes e depois da troca.

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define T 10

int main(){	
  int v[T],menor, i, maior, posicao; //Declaração das variaveis e vetores!
  srand(time(0));			// gerando Valores com base no tempo.
  
  	for(i=0;i<T;i++){
  		v[i]=rand()%1001;	// aplicando valores aleatorios até 1000.
    }
	  	
maior=v[0];					//aplicando vetor para maior.
posicao=0;      

printf("\n Vetor gerado: \n");
	for(i=0;i<T;i++){		//mostrando os 10 valores.
		printf("%d ",v[i]);
	}
  	for(i=0;i<T;i++){
  		if(v[i]>maior){		//procurando o maior vetor e  sua posicao.
  			maior=v[i];
  			posicao=i;
		}
	}

v[posicao]=v[T-1];//colocando o vetor da posicao X para o ultimo lugar. 
v[T-1]=maior;     //aplicando o valor do ultimo vetor.
menor=v[1000];      // aplicando valor do vetor .
posicao=0; 		// resetando a posicao.

	for(i=0;i<T;i++){
		if(v[i]<menor){	  //procurando o menor vetor e  sua posicao.
			menor=v[i];
			posicao=i;
		}
	}

v[posicao]=v[0];  // colocando ele na primeira posicao.
v[0]=menor;			// colocando o valor dele

	printf("\n Vetor Alterado: \n");
		for(i=0;i<T;i++){
			printf("%d ",v[i]);
		}	
  	
return 0;
}

