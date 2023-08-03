#include <stdio.h>
#define SUCESSO  0
#include <strings.h>
#include <ctype.h>
#include <cstdio>
#define VALOR_MAXIMO (100000)

//usei o scanf para ler a string pois o fgets nao estava dando certo // 

int main (int argc, char ** argv){
	
    char frase[VALOR_MAXIMO];
    char inverso[VALOR_MAXIMO];
    int x, y, a=0, i;
    
    printf("digite uma frase: \n");
    gets(frase);
    
    printf("\n");
    
    for(x=0; x < strlen(frase); x++)
        if(frase[x] == ' ') {
            for(y=x; y < strlen(frase); y++)
                frase[y] = frase[y+1];
        }
    
    printf("%s", frase);
    
    printf("\n\n");
    
    for(i=strlen(frase)-1;i>=0; i--){
		inverso[a] = frase[i];
		a++;
	}
	
	inverso[a] ='\0';
	
	if(strcmp(frase,inverso)==0){
		printf("esta frase e um palindromo!");
		
	}else{
		printf("esta frase nao e um palindromo.\n");
	
	}
		
	return SUCESSO;
}
