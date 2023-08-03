#include <stdio.h>
#include <stdlib.h>
#define SUCESSO  0 

void intervalo(int num1, int num2){
	
	if(num1 > num2){
		printf("OS NUMEROS DIGITADOS SAO INVALIDOS! ");
		return;
	}
	
	if(num1 == num2){
		return;
	}else{

	printf("%d\n", num1);
	
    intervalo(num1 + 1, num2);
    
	}
}

int main (int argc, char ** argv){
	
	int num1, num2;
	
	printf("Digite o menor numero: ");
	scanf("%d", &num1);
	
	printf("Digite o maior numero: ");
	scanf("%d", &num2);
	
	intervalo(num1, num2);
	
	return SUCESSO;
}
