#include <stdio.h>
#include <stdlib.h>
#define SUCESSO  0

int * alocaVetores (int numeroVetor){
	 int * v;
	v = (int *) (malloc (numeroVetor * sizeof (int)));
	return v;
}


int main (int argc, char** argv){
	
	int TamanhoVetor;
	int * vetor;
	
	printf("digite o tamanho do vetor: ");
	scanf("%d", &TamanhoVetor);
	
	vetor = alocaVetores(TamanhoVetor);
	
	free(vetor);
	
	return SUCESSO;
}
