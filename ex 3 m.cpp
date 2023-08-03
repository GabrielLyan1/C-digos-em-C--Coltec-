#include <stdio.h>
#include <stdlib.h>
#define SUCESSO 0

void multiplica ( int matriz[5][5], int vetor[5]){
	int j, i, vet[5] = {0,0,0,0,0};
	
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			vet[i] += (vetor[i] * matriz[i][j] ) ;
		}
		
	}
	
	printf("\n\nA multiplicacao eh \n");
	
	for(i=0; i<5; i++){
		printf("%d", vet[i]);
		printf("\n");
	}
	
}



int main (int argc, char ** argv){
	
	int matriz [5][5], vetor[5], i, j;
	
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf("digite o numero da posicao %d %d da matriz: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\n");
	
	for (i=0; i<5; i++){
		
			printf("Digite o numero da posicao %d do vetor: ", i);
			scanf("%d", &vetor[i]);
	}
	
 	
 	multiplica(matriz, vetor);
	
	// foi isso o que eu entendi da questao //
	
	return SUCESSO;
}
