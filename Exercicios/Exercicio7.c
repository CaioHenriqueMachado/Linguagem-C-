//PARTE 7:Gerar um vetor rand�mico de 100 posi��es, com valores
//de 0 a 1000. Verificar e mostrar quantos s�o os pares.
//Calcular e mostrar a soma dos �mpares.

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define T 100

int main(){	
  int v[T],totalpar, i, somaimpar ; //Declara��o das variaveis e vetores!
  srand(time(0));			// gerando Valores com base no tempo.
  

	for(i=0,totalpar=0,somaimpar=0;i<T;i++){
  		v[i]=rand()%1001;	// aplicando valores aleatorios at� 1000.
  			if(v[i]%2==0) {  // separando os pares .
			  totalpar=totalpar+1;  //contando os pares.
	    	}else{
	    		somaimpar=somaimpar+v[T];
			}             // somando os impares.
	  	}		
  
  
  	printf("\nTodos os %d valores gerados:\n",T);
  
  	 for(i=0;i<T;i++){       // mostrando os valores gerados aleatorios.
	   printf("%d ",v[i]);
  		}

  
  	printf("\n\n Foram gerados %d valores pares\n",totalpar);
  
  	printf("\n A soma dos numeros impares foi %d\n",somaimpar);
  	  
  
  
  
 return 0; 
}
  
  
