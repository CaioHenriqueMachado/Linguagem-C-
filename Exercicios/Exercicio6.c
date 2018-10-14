//PARTE 6:Gerar um vetor rand�mico de 100 posi��es, com valores de 0 a 1000. 
//Calcular e mostrar a m�dia dos elementos. Refazer o procedimento para o vetor
// com 1000 posi��es e 10000 posi��es. O que se pode dizer sobre as m�dias
// calculadas.

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define T 100

	int main(){	
	  int v[T],soma, i ;          //Declara��o das variaveis e vetores!
	  float media;				// Declarando media em numero real.
	  srand(time(0));			// gerando Valores com base no tempo.
	  	
	  	for(i=0;i<T;i++){
	  		v[i]=rand()%1001;	// aplicando  1000 valores aleatorios.
	  		soma=soma+v[i];		// somando os valores de cada posi��o.
	    }
	    
	    media=(float)soma/T; 	//Tirando media dos valores.
	    
	    printf("\n Valores: \n");
	    	for(i=0;i<T;i++){		//Exibindo valores.
	    		printf("%d ",v[i]);
	        }
	        
	        
	        printf("\n Media dos valores: %.3f\n",media); 	//OBS:%.3f serve para...
	        									// ...s� mostrar 3 numeros ap�s a virgula.
	 return 0;
	}
