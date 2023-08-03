#include <stdio.h>
#include <stdlib.h>
#define SUCESSO  0 
#include <string.h>
#define ERRO_ABRIR_ARQUIVO  (1)
#define QNTD_CARACTERES  (500)

int main (){

    FILE * arq = fopen("texto1.txt", "r+"); //ponteiro = abre o arquivo utilizando a função fopen e informa o o tipo de abertura, "read" 'r' apenas para leitura 
    int i = 0;
    char c = 'v';  
    
    if(arq == NULL){ //se nao conseguiu abrir o arquivo o ponteiro ainda nao aponta para nada, logo ocorreu erro na abertura do arquivo 
    	printf("erro ao abrir arquivo!");
    	return ERRO_ABRIR_ARQUIVO; 
	}
 
    while(!feof(arq)){ //enquanto não chegar no fim do arquivo... ()
         fscanf(arq, "%c", &c);
         if(c == '\n'){
         i++;
         }
    }
    
    printf("O numero de linhas do arquivo eh: %d", i);
    
    fclose(arq);
		
	return SUCESSO;
}










