//PARTE 4:Pedir para o usuário preencher dois vetores com 5 posições cada um. 
//Criar um vetor com 10 posições, intercalando os elementos dos dois vetores
//anteriores.Mostrar os três vetores.

#include<stdio.h>
#define T 5  


	int main(){	
	  int v1[T], v2[T],i, v3[2*T] ;  //Declaração das variaveis e vetores!
	  printf("\n Digite %d valores para o vetor 1:\n",T);
	  	for(i=0;i<T;i++){
	  		scanf("%d", &v1[i]); //Lendo os 5 numeros digitados pelo...
	  	}							//..cliente para o vetor 1.
	  
	  printf("\n Digite %d valores para o vetor 2:\n",T);
	  	for(i=0;i<T;i++){
	  		scanf("%d", &v2[i]); //Lendo os 5 numeros digitados pelo... 
	  	}							// ...cliente para o vetor 2.
	  
	  for(i=0;i<T;i++){
	  	v3[2*i]=  v1[i];
	  	v3[2*i+1]=v2[i];
	  }
	  	
		printf("\nValores intercalados:\n");
		for(i=0;i<2*T;i++){             // mostrando os valores intercalados
			printf("%d ",v3[i]);
		}		

	  return 0;
	}
