#include <stdio.h>
#include <stdlib.h>
#define SUCESSO 0
#include <string.h>
#define TAMANHO_TEXTO (200)
#define ERRO_ABRIR_ARQUIVO (1)

int main(int argc, char **argv)
{

	FILE *arq;
	char texto[TAMANHO_TEXTO];
	int i = 0;
	int caracteres = 0;

	arq = fopen("texto.txt", "r");

	if (arq == NULL)
	{
		printf("erro ao abrir arquivo!");
		return ERRO_ABRIR_ARQUIVO;
	}

	fread(&texto, sizeof(char), 200, arq);

	// contagem de letras

	for (i = 0; i < strlen(texto); i++)
	{
		if (texto[i] != '\n' && texto[i] != ' ')
		{
			caracteres++;
		}
	}

	//caracteres++;

	printf("Numero de caracteres: %d", caracteres);

	fclose(arq);

	return SUCESSO;
}
