#include <stdio.h>
#define SUCESSO  0
#include <string.h>
#include <cstdio>
#define VALOR  100


int main (int argc, char ** argv){
	
    char string[VALOR];
    int x, y;
    
    printf("Digite uma string: ");
    fgets(string, VALOR, stdin );
    
     for(x=0; x < strlen(string); x++)
        if(string[x] == ' ') {
            for(y=x; y < strlen(string); y++)
                string[y] = string[y+1];
        }
    
    printf("Frase sem espacos: %s", string);
    
	return SUCESSO;
}
