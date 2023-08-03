#include <stdio.h>
#include <stdlib.h>
#define SUCESSO  0 

void transporta_imprime_matriz(int matriz[5][5]){
	
	int i, j, matriz_transporta[5][5];
	
	for (i=0; i < 5; i++){
		for(j=0; j < 5; j++){
           
			printf("%d", matriz[j][i]);
			printf(" ");
			}
			printf("\n");
    }
}

int main (int argc, char ** argv){
	
	int i, j, matriz_original[5][5];
	
	for(i=0; i<5; i++){
		for(j=0; j < 5; j++){
			scanf("%d", &matriz_original[i][j]);
		}
		
	}
	
     transporta_imprime_matriz(matriz_original);
		
	return SUCESSO;
}










