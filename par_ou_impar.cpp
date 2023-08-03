#include <stdio.h>
#define SUCESSO 0

int main(int agrc, char ** argv){
	
    int numero;
    
    printf("digite um numero: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0){
    	printf("o numero e par");	
    }else{
	    printf("o numero e impar");
	}
	
	return SUCESSO;
} 




































