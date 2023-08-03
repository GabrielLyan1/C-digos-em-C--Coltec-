#include <stdio.h>
#include <stdlib.h>
#define SUCESSO  0 
#define tamanho  10

int main(int argc, char * * argv) {

    int i, produto, vetor1[tamanho], vetor2[tamanho];
    produto = 0;
    for (i=0; i<10;i++){
    	
    	printf("vetor um valor %d: ", i);
    	scanf("%d", &vetor1[i]);
    	printf("vetor dois valor %d: ", i);
    	scanf("%d", &vetor2[i]);
    	
    	printf("\n");
    	
    	produto = produto + (vetor1[i]*vetor2[i]);
	}
    
    printf("O escalar e: %d", produto);
    
	return SUCESSO;
}
