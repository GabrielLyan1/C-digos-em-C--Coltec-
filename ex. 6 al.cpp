#include <stdio.h>
#include <stdlib.h>
#define SUCESSO  0 

void total_produtos_loja(int Lojas, int Produtos, int ** matriz){
	
	int i, j, k, total=0;
	
	for (j=0; j<Produtos; j++){
		for(i=0; i<Lojas; i++){
			total += matriz[i][j];
			if(i == Lojas-1){
				
				k = j + 1;
				
				printf("O total de produtos %d nas lojas e de: %d", k, total);
				
				printf("\n");
				
				total = NULL;
			}
		}
	}
	
}

 void loja_menos_produtos(int Lojas, int Produtos, int ** matriz){
 	
 	int menor = INT_MAX;
 	int i, j, resultado= 0, soma=0; 
 	
 	for(i=0; i<Lojas; i++){
 		for(j=0; j<Produtos; j++){
 			soma+=matriz[i][j];
 			
 			if(j==Produtos-1 && soma<=menor){
 				menor=soma;
 				resultado = i+1;
 				soma=0;
			}
		}
 			
	 }
	 printf("A loja com menor quantidade de produtos e a loja : %d", resultado);
	 printf("\n");
 }

int main (int argc, char ** argv){
	
    int ** matriz;
    int  i, j, QntLojas, QntProdutos; 
    
	printf("Digite o numero de Lojas: ");
	scanf("%d", &QntLojas);
	printf("Digite a quantidade de produtos em cada loja: ");
	scanf("%d", &QntProdutos);
	
	matriz = (int **)(malloc (QntLojas * sizeof (int*))); 
	
	for (i = 0; i < QntLojas; i++){
		matriz[i] = (int*)(malloc(QntProdutos * sizeof(int)));
	}   
	
	for(i=0; i < QntLojas; i++){
		for(j=0; j < QntProdutos; j++){
			printf("loja %d produto %d: ", i+1, j+1);
			scanf("%d", &matriz[i][j]); 
    }
	}
	
	printf("\n");
	
	total_produtos_loja(QntLojas, QntProdutos, matriz);
	loja_menos_produtos(QntLojas, QntProdutos, matriz);
	
	return  SUCESSO; 
}










