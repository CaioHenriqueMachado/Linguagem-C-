//PARTE 1 :Criar um vetor para armazenar números pares e outro para armazenar 
//números ímpares.Pedir para o usuário digitar 10 números, armazenando-os nos
// vetores criados, conforme a sua paridade. Mostrar os vetores obtidos.

#include<stdio.h>
#define T 10  
	int main(){	
	  int v[T], par[T], impar[T],i ,j ,k ;//Declaração das variaveis e vetores!
	  printf("\n Digite %d valores:\n",T);
	  
	  for(i=0;i<T;i++){
	  	scanf("%d",&v[i]); //Lendo os 10 numeros digitados pelo cliente. 
	  }
	  
	  for(i=0,j=0,k=0;i<T;i++){
	  	if(v[i]%2==0){            // Vendo se o numero digitado é par
	  		par[j]=v[i];     
	  		j++;
		  }
	  	else{
			impar[k]=v[i];       // Vendo se o numero digitado é impar
			k++;
		}
		}
			printf("\nValores pares:\n");
			for(i=0;i<j;i++){             // mostrando os valores pares.
				printf("%d ",par[i]);
			}
			
			printf("\nValores impares:\n");
			for(i=0;i<k;i++){                 // mostrando os valores impares.
				printf("%d ",impar[i]);
			}	
		return 0;
		}
