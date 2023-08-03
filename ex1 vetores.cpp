#include <stdio.h>
#include <stdlib.h>
#define SUCESSO  0 
#define tamanho  20
int main(int argc, char * * argv) {
	
	int valores[tamanho], menor = 9999999, indice;
	for(int i = 0; i < tamanho; i++) {
		printf("Informe um numero: ");
		scanf("%d", & valores[i]);
		if(valores[i] < menor) {
			menor = valores[i];
			indice = i;
		}
	}
	printf("\nMenor numero: %d\n", menor);
	printf("Indice: %d \n\n", indice);

	return SUCESSO;
}
