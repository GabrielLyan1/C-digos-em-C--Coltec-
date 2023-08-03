#include <stdio.h>
#define SUCESSO 0

int main(int agrc, char ** argv){
	
	int num1, num2;
    
    printf("digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("digite o segundo numero: ");
    scanf("%d", &num2);
    
    if(num1 > num2){
    printf("O MAIOR NUMERO FOI O PRIMEIRO DIGITADO: %d",num1);
	}
	if(num1 < num2 ){
		printf("o primeiro numero e menor que o segundo: %d", num2);	
	}
    if(num1 == num2){
    	printf("os numeros digitados sao iguais ");
	}
	
    return SUCESSO;
}
