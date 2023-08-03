#include <stdio.h>
#define SUCESSO  0
#include <string.h>
#define VALOR_MAXIMO (100 + 1)

int main (int argc, char ** argv){
	
    char espaco[VALOR_MAXIMO];
	int i, contador=0;
	
	
    printf("Digite uma string:");
	fgets(espaco, VALOR_MAXIMO, stdin);
	
	for (i=0; espaco[i] != '\0'; i++){
		if(espaco[i] == ' '){
			contador  = contador+1; 
	    }
}

	printf("o numero de espacos nessa string e de: %d", contador);
	
	return SUCESSO;
}
