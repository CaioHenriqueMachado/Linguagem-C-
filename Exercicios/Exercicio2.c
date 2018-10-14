//PARTE 2:Preencher um vetor com 10 números quaisquer digitados pelo usuário. 
//Criar um segundo vetor com os elementos que são maiores que 10 do primeiro. 
//Mostrar os dois vetores.

#include<stdio.h>
#define T 10  
	int main(){	
	  int v[T], m10[T],i ,j ;     //Declaração das variaveis e vetores!
	  printf("\n Digite %d valores:\n",T);
	  
	  
	  
	  for(i=0;i<T;i++){
	  	scanf("%d",&v[i]); //Lendo os 10 numeros digitados pelo cliente. 
	  }
	  
	  
	  
	  for(i=0,j=0;i<T;i++){
	  	if(v[i]>10){            // Vendo se o numero digitado é maior que 10
	  		m10[j]=v[i];     
	  		j++;
		  }
		}
		
		
			printf("\nValores maiores que 10:\n");
			for(i=0;i<j;i++){             // mostrando os valores maior que 10.
				printf("%d ",m10[i]);
			}		
				  
		return 0;
		}
