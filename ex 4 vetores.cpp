#include <stdio.h>
#define SUCESSO  0

int main (int argc, char ** argv){
	
	int i, media, soma, numero;
	
	soma = 0;
	media = 0;  
	
	printf("Digite o numero que correspondera ao tamanho do vetor: ");
	scanf("%d", &i);
	
	int vetor[i];
	
	for(numero=0; numero<i; numero++){
		
		printf("vetor posicao %d: ", numero);
		scanf("%d", &vetor[numero]);
		
		soma = soma + vetor[numero];
		
	}
	
	media = soma/i;
	
	printf("\nA media e: %d", media);
	
	return SUCESSO;
}
