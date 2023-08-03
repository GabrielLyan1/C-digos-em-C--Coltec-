#include <stdio.h>
#include <stdlib.h>
#define SUCESSO  0 
#define NUM_COLUNAS 3
#define NUM_LINHAS 3

float soma(float soma[NUM_LINHAS][NUM_COLUNAS]){
	
	int i, j;
	float somatorio=0;
	
	for (i=0; i<NUM_LINHAS; i++){
		for(j=0; j<NUM_COLUNAS; j++){
			somatorio += soma[i][j];
		}
		
	}
	return (somatorio);
}


int main (int argc, char ** argv){
	
	float soma_total[3][3], total;
 	int i, j;
    	
    for (i=0; i<NUM_LINHAS; i++){
    	for(j=0; j<NUM_COLUNAS; j++){
    		scanf("%f", &soma_total[i][j]);
		}
	}	
	
	printf("A soma eh: %.2f", soma(soma_total));
	
	return SUCESSO; 
}



