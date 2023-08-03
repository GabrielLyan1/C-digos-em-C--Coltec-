#include <stdio.h>
#define SUCESSO  0

int idade(int anos, int meses, int dias){
	
	return((anos*365) + (meses*30) + dias);
}


int main() {
  
  int anos, meses, dias;
  
    printf("digite a quantidade de anos: ");
    scanf("%d", &anos);
  
    printf("digite a quantidade de meses: ");
    scanf("%d", &meses);
  
  
    printf("digite a quantidade de dias: ");
    scanf("%d", &dias);
    
    printf("O numero total de dias da idade informada eh: \n %d", idade(anos, meses, dias) );

    return SUCESSO;
}
