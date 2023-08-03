#include <stdio.h>
#include <stdlib.h>
#define SUCESSO  0 
#define LOJA 7 
#define PRODUTO 5

 void loja_menos_produtos(int matriz[LOJA][PRODUTO]){
 	
 	int menor = INT_MAX;
 	int i=0, j, resultado= 0, soma=0; 
 	
 	for(i=0; i<LOJA; i++){
 		for(j=0; j<PRODUTO; j++){
 			soma+=matriz[i][j];
 			
 			if(j==PRODUTO-1 && soma<=menor){
 				menor=soma;
 				resultado = i+1;
 				soma=0;
			 }
		 }
 		
 		
	 }
	 printf("A loja com menor quantidade de produtos e a loja : %d", resultado);
	 printf("\n");
 }

void total_produtos_loja(int matriz[LOJA][PRODUTO]){
	
	int i, j, k, total=0;
	
	for (j=0; j<PRODUTO; j++){
		for(i=0; i<LOJA; i++){
			total += matriz[i][j];
			if(i == LOJA-1){
				
				k = j + 1;
				
				printf("O total de produtos %d nas lojas e de: ", k);
				
				printf("\n");
				
				printf("%d", total);
				
				printf("\n");
				
				total = NULL;
			}
		}
	}
	
}


int main (int argc, char ** argv){
	
    int i, j, matriz_original[LOJA][PRODUTO];
	
	for(i=0; i < LOJA; i++){
		for(j=0; j < PRODUTO; j++){
			scanf("%d", &matriz_original[i][j]);
		
		}
	printf("\n\n");
	
	}
	
	loja_menos_produtos(matriz_original);
	
	total_produtos_loja(matriz_original);
	
	return  SUCESSO; 
}










