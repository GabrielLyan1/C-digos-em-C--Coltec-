#include <stdio.h>
#define SUCESSO 0
#include <limits.h>

// limites para tipos inteiros em C e C ++, para mostra los uso o comando INT_MAX

int main(int argc, char** argv)
{
	int numero, maiornumero, menornumero;
	numero = 1;
	maiornumero = -1;
	menornumero = INT_MAX;
	
	while (numero != 0) {
		printf("Digite um numero: \n");
		scanf("%d", &numero);
		if ((numero > maiornumero) && (numero != 0)) {
			maiornumero = numero;
		}
		else if ((numero < menornumero) && (numero != 0)) {
			menornumero = numero;
		}
	}
	printf("O maior numero digitado e: %d \n", maiornumero);
	printf("O menor numero digitado e: %d", menornumero);

	return SUCESSO;
}
