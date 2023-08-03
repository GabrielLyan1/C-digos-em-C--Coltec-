#include <stdio.h>
#include <stdlib.h>
#define SUCESSO  0

int  digitos(int N){

    int cont=1;

    if(N>10){
       N = N/10;
       cont = cont + digitos(N);
	}
	
    return cont;
}



int main (int argc, char ** argv){

    int numero, N_digitos=0;
    
    printf("Digite um numero: ");
    scanf ("%d", &numero);
    
    N_digitos = digitos(numero);

    printf("O numero de digitos do numero %d eh: %d", numero, N_digitos);

	return SUCESSO; 
	
}
