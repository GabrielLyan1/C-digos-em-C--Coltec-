#include <stdlib.h>
#include <stdio.h>
#define SUCESSO  0

int main (int argc, char ** argv){
	
	int * vetorMedia;
	int tamVet, i, media=0, soma=0;
	
	printf("Digite o tamanho do vetor: ");
	scanf ("%d", &tamVet);
	
	printf("\n");
	
	vetorMedia = (int*)(malloc(tamVet * sizeof(int)));
	
	for(i=0; i<tamVet; i++){
		printf("digite o valor da posicao[%d] do vetor: ", i);
		scanf("%d", &vetorMedia[i]);
	}
	
	for (i=0; i < tamVet; i++){
	      soma += vetorMedia[i];
	}
	
	media = soma / tamVet; 
	
	printf("\n");
	
	printf("A medias dessses valores eh: %d", media);
	
	printf("\n");
	
	free (vetorMedia); 
	
	return SUCESSO; 
}
