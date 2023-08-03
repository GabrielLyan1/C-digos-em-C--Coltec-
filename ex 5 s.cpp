#include <stdio.h>
#define SUCESSO  0
#include <string.h>
#include <ctype.h>
#define VALOR_MAXIMO (100)

//usei o scanf para ler a string pois o fgets nao estava dando certo // 

int main (int argc, char ** argv){
	
    char palavra[VALOR_MAXIMO], inverso[VALOR_MAXIMO];
    int i, a;
	
	printf("Digite uma string ");
	scanf("%[^\n]", palavra);
	
	a=0;
	
	for(i=strlen(palavra)-1;i>=0; i--){
		inverso[a] = palavra[i];
		a++;
	}
	
	inverso[a] ='\0';
	
	if(strcmp(palavra,inverso) == 0){
		printf("A palavra digitada e um palindromo! \n\n");
	}else{
		printf("Nao e um palindromo.\n");
	}
		
	return SUCESSO;
}
