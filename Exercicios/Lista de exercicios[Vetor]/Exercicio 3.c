//EXERCÍCIO 3:Pedir para o usuário preencher um vetor com 10 posições,
//mostrar os elementos que são múltiplos de 3 e as suas respectivas posições.

#include<stdio.h>
#define T 10  
	int main(){	
	  int v[T], m3[T],i ,j ;     //Declaração das variaveis e vetores!
	  printf("\n Digite %d valores:\n",T);
	  
	  
	  
	  for(i=0;i<T;i++){
	  	scanf("%d",&v[i]); //Lendo os 10 numeros digitados pelo cliente. 
	  }
	  
	  
	  
	  for(i=0,j=0;i<T;i++){
	  	if(v[i]%3==0){          // Vendo se o numero digitado é múltiplo de 3.
	  		m3[j]=v[i];     
	  		j++;
		  }
		}
		
		
			printf("\nValores multiplos de 3:\n");
			for(i=0;i<j;i++){          // mostrando os valores múltiplos de 3.
				printf("%d ",m3[i]);
			}		
				  
		return 0;
		}
