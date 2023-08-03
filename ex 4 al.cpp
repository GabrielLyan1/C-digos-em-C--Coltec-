#include <stdio.h>
#include <stdlib.h>
#define SUCESSO  0

int main (int agrc, char ** argv){
	
    float * vetor;
    float menor = INT_MAX, maior = 0;
	int num, tam, i, indiceMaior, indiceMenor; 
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	
	vetor = (float *)(malloc( tam * sizeof(float)));
	
	for(i=0; i<tam; i++){
		
		printf("digite o valor da posicao [%d] do vetor: ", i);
		scanf("%f", &vetor[i]);
		
		if(vetor[i] < menor){
			menor = vetor[i];
			indiceMenor = i;
		}
		
		if(vetor[i] > maior){
			maior = vetor[i];
			indiceMaior = i;
		}
	}
	printf("\n");
	printf("O maior numero digitado eh: %.1f", maior);
	printf("\n");
	printf("O menor numero digitado eh: %.1f", menor);
	
	return SUCESSO;
}











