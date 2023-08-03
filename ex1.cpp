#include <stdio.h>
#define SUCESSO 0

// calculei o fatorial do numero usando o numero como base e i como contador menor que numero 
//fatoria inicial e 1 pois se o numero digitado for 0 o fatorial sera 1 

int main(int agrc, char ** argv){
	
	int numero, i, fatorial;
	
	fatorial=1;
	
	
	printf("digite um numero: ");
	scanf("%d", &numero);
	
	i = numero-1;
	
    for(; numero>=1;--numero){
    	fatorial=fatorial*numero;
	}
    

    printf("o fatorial do numero digitado e: %d", fatorial);
    
    return SUCESSO;
}
