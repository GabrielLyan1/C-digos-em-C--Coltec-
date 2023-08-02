#include <stdio.h>
#define sucesso  0
int main(int agrc, char ** argv){
	int num1, num2, num3, num4, num5, soma;
	
	printf ("digite o primeiro numero ");
	scanf("%d", &num1);
	printf ("digite o segundo numero ");
	scanf("%d", &num2);
	printf ("digite o terceiro numero ");
	scanf("%d", &num3);
	printf ("digite o quarto numero ");
	scanf("%d", &num4);
	printf ("digite o quinto numero ");
	scanf("%d", &num5);
	
	soma = num1 + num2 + num3 + num4 + num5;
	
	printf("A soma desses valores e: %d", soma);

return sucesso;	
}
