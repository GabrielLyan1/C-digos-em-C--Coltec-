#include <stdio.h>
#include <stdlib.h>
#define SUCESSO  0 
#define ERRO  1

 /*

Autor: Gabriel Lyan

Exercício 1 Slide 15

Questao: Seja S um vetor de inteiros. Descreva funções recursivas para
calcular:

1 o elemento máximo de S;
2 a soma dos elementos de S;
3 média aritmética dos elementos de S.

Data: 11/02/2021

*/

int somaValoresVetor(int *vet, int tam_vetor){
	
	if(tam_vetor == 0){
    	return SUCESSO;
	}
	else{
		return vet[0] + somaValoresVetor(&vet[1], tam_vetor - 1);
	}
    
}

float media_vetor(int *vetor, int tam_vetor){
	
	float media, soma;
	
	soma = somaValoresVetor(vetor, tam_vetor);
	
	media = soma  / tam_vetor;
	
	return media;
}

int numero_maximo(int *vetor, int tam_vetor){

    int maior;
    if (tam_vetor == 0){
    	return SUCESSO;
	}
	
	maior = numero_maximo(&vetor[1], tam_vetor - 1);
	
	if(vetor[0] > maior){
    	return vetor[0];
	}
	else{
		return maior;
	}
	
	
}


int main (int argc, char ** argv){
	
    int *vetor;
	int soma_dos_valores = 0, i=0, qntd_elementos, maior=0;
	float media;
	
	printf("Digite a quantidade de elementos do vetor: ");
	scanf("%d", &qntd_elementos);
	
	vetor = (int *)malloc(qntd_elementos * sizeof(int));
	
    for(i = 0; i<qntd_elementos; i++){
    	printf("Digite o elemenso da posicao [%d] do vetor: ", i+1);
    	scanf("%d", &vetor[i]);
	}
	
	soma_dos_valores = somaValoresVetor(vetor, qntd_elementos);

    printf("\nSoma: %i", soma_dos_valores);

	media = media_vetor(vetor, qntd_elementos);
	
	printf("\n\nmedia: %.2f", media);
	
	maior = numero_maximo(vetor, qntd_elementos);
	
	printf("\n\nO maior numero do vetor eh: %d", maior);
	
	return SUCESSO;
}



