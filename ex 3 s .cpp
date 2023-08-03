#include <stdio.h>
#define SUCESSO  0
#include <string.h>
#define VALOR_MAXIMO (100001)

int main (int argc, char ** argv){
	
    char espaco[VALOR_MAXIMO];
	int i, contador = 0;
	
	
    printf("Digite uma string: ");
	fgets(espaco, VALOR_MAXIMO, stdin);
	
	for (i=0; i < strlen(espaco); i++){
		
		if(espaco[i] == 'a' || espaco[i] == 'e'|| espaco[i] == 'i'|| espaco[i] == 'o'|| espaco[i] == 'u'|| espaco[i] == 'A'|| espaco[i] == 'e'|| espaco[i] == 'i'|| espaco[i] == 'O'|| espaco[i] == 'U'){
		    contador = contador + 1; 
		        
		}
    }   

	printf("o numero de vogais dessa string e de: %d", contador);
	
	
	return SUCESSO;
}
