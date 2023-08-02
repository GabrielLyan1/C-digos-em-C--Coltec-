#include <stdio.h>
#define SUCESSO 0

int main(int agrc, char ** argv){
	
	
	float salario_atual, novo_salario, porcentagem_aumento, valor_aumento;
	
	printf("digite o valor do salario atual: ");
	scanf("%f", &salario_atual);
	printf("digite a porcentagem do aumento: ");
	scanf("%f", &porcentagem_aumento);
	
	valor_aumento = salario_atual * porcentagem_aumento/100; 
	
	novo_salario = valor_aumento + salario_atual;
	
    printf("Novo salario: %.2f",novo_salario);
	
	novo_salario = valor_aumento + salario_atual;
	
	printf("\nvalor do aumento %.2f", valor_aumento);
	
	return SUCESSO;
} 
