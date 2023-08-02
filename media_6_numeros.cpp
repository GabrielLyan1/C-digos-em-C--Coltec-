#include <stdio.h>
#define sucesso  0
int main (int agrc, char ** argv){
	
	float num1, num2, num3, num4, num5, num6, media;
		
	printf ("digite o primeiro numero ");
	scanf("%f", &num1);
	printf ("digite o segundo numero ");
	scanf("%f", &num2);
	printf ("digite o terceiro numero ");
	scanf("%f", &num3);
	printf ("digite o quarto numero ");
	scanf("%f", &num4);
	printf ("digite o quinto numero ");
	scanf("%f", &num5);
	printf ("digite o sexto numero ");
	scanf("%f", &num6);
	
	media = (num1 + num2 + num3 + num4 + num5 + num6)/6;
	
	printf ("o valor da media desses numeros e: %.1f", media);
	
	return sucesso;
}
