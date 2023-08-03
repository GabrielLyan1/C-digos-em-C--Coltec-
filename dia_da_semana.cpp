#include <stdio.h>
#define SUCESSO 0

int main(int agrc, char ** argv){
	
	int dia;
	
    printf("digite o dia da semana atual: ");
    scanf("%d", &dia);
	
    if (dia == 1 ) {
    printf("Hoje e domingo!");
    }
    else if(dia == 2 ){
    	printf("Hoje e segunda!");
	}
	else if (dia == 3 ){
		printf("Hoje e terca! ");
	}
	else if (dia ==4){
		printf("Hoje e quarta! ");	
	}
	else if (dia == 5 ){
		printf("Hoje e quinta");
	}
	else if (dia == 6 ){
		printf ("Hoje e sexta ");
	}
	else if(dia == 7){
		printf("Hoje e sabado ");
	}else{
		printf("dia invalido");
	}
	
    return SUCESSO;
}
