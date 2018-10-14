//PARTE 6:Gerar um vetor randômico de 100 posições, com valores de 0 a 1000. 
//Calcular e mostrar a média dos elementos. Refazer o procedimento para o vetor
// com 1000 posições e 10000 posições. O que se pode dizer sobre as médias
// calculadas.

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define T 100

	int main(){	
	  int v[T],soma, i ;          //Declaração das variaveis e vetores!
	  float media;				// Declarando media em numero real.
	  srand(time(0));			// gerando Valores com base no tempo.
	  	
	  	for(i=0;i<T;i++){
	  		v[i]=rand()%1001;	// aplicando  1000 valores aleatorios.
	  		soma=soma+v[i];		// somando os valores de cada posição.
	    }
	    
	    media=(float)soma/T; 	//Tirando media dos valores.
	    
	    printf("\n Valores: \n");
	    	for(i=0;i<T;i++){		//Exibindo valores.
	    		printf("%d ",v[i]);
	        }
	        
	        
	        printf("\n Media dos valores: %.3f\n",media); 	//OBS:%.3f serve para...
	        									// ...só mostrar 3 numeros após a virgula.
	 return 0;
	}
