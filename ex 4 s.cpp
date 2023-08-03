#include <stdio.h>
#define SUCESSO  0
#include <string.h>
#include <ctype.h>
#define VALOR_MAXIMO (100)

// o comando toupper com a biblioteca ctype.h faz com que o caracter fique maiusculo //

int main (int argc, char ** argv){
	
	char palin[VALOR_MAXIMO];
	int i; 

	printf("digite uma string com mais de uma palavra: ");
	fgets(palin, VALOR_MAXIMO, stdin);
	
	for(i=0; i<strlen(palin)+1; i++){
		if (i == 0 || palin[i - 1] == ' ')
        palin[i] = toupper(palin[i]);
        else
            palin[i] = palin[i];
			
	}
	
	printf("nova frase: %s", palin);
	
	return SUCESSO;
}
