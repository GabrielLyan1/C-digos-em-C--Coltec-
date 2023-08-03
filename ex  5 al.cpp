#include <stdlib.h>
#include <stdio.h>
#define SUCESSO  0

float ** AlocaMatriz (int NumLinhas, int NumColunas){
	float ** matriz;
	int i;
	
	matriz = (float**)(malloc (NumLinhas * sizeof(float*)));
	
	for (i = 0; i < NumLinhas; i++){
		
		matriz[i] = (float*)(malloc(NumColunas * sizeof(float)));
		
	}
	return matriz;
}


int main (int argc, char ** argv){
	
	int nLinhas, nColunas, i, j;
	float ** matriz;
	float soma;
	
	printf("Digite o numero de linhas da matriz: ");
	scanf("%d", &nLinhas);
	
	printf("digite o numero de colunas da matriz: ");
	scanf("%d", &nColunas);
	
	printf("\n");
	
	matriz = AlocaMatriz (nLinhas, nColunas);
	
    for (i=0; i<nLinhas; i++){
		for (j=0; j<nColunas; j++){
			printf("digite o numero da posicao %d %d da matriz: ", i, j);
			scanf("%f", &matriz[i][j]);
			soma += matriz[i][j];
		}
          	
	}
	printf("\n");
	printf("A soma dos elementos da matriz eh: %.1f ", soma);
	
	for(i=0 ; i<nLinhas; i++){
		free(matriz[i]);
	}
	
	free (matriz);
	
	return SUCESSO;
}
