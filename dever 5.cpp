#include<stdio.h>
#define SUCESSO  0
 
 int fatorial(int numero){
 	
    int i = numero-1;
    int fatorial = 1;
	
    for(; numero>=1;--numero){
    	fatorial=fatorial*numero;
	}
 }
 
int main(int argc, char ** argv) {

    int numero;

    printf("digite o numero desejado: ");
    scanf("%d", &numero);
    
    printf("\no fatorial do numero %d e: %d",numero ,fatorial(numero));
 
    return SUCESSO;
}








