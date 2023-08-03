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
	
	int nLinhas, nColunas;
	float ** matriz;
	
	printf("Digite o numero de linhas da matriz: ");
	scanf("%d", &nLinhas);
	
	printf("digite o numero de colunas da matriz: ");
	scanf("%d", &nColunas);
	
	matriz = AlocaMatriz (nLinhas, nColunas);
	
    free(matriz);
	
	return SUCESSO;
}
