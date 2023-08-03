#include <stdio.h>
#define SUCESSO  0

int main (int argc, char ** argv){
	
	int i, vetor[i];
	
	int numero, escalar, produto=0;
	
	printf("Quantos numeros voce ira digitar: ");
	scanf("%d", &i);
	
	printf("digite o valor de escalar: ");
	scanf("%d", &escalar);
	
	for (numero = 0; numero<i; numero++){
		
		printf("digite o valor do indice %d do vetor: ", numero);
		scanf("%d", &vetor[numero]); 
		
		produto = produto + (vetor[numero]*escalar);
		
	}
	
	printf("o valor da multiplicacao do vetor pelo escalar e: %d", produto);
	
	return SUCESSO;
}
