#include <stdio.h>
#define SUCESSO  0

float soma (float numero1, float numero2){
    	
  	
   	    return (numero1+numero2);
   }
    
float produto(float numero1, float numero2) {
	
	    
	    return (numero1*numero2);
}
    
float divisao(float numero1, float numero2) {
	
	
	    return (numero1/numero2);
}


int main (int agrc, char ** argv){
	
	float numero1, numero2;
	int operador;
	
	
	printf("escolha a operacao que deseja fazer: \n\n SOMA[1] \n\n MULTIPLICACAO[2] \n\n DIVISAO[3] \n\n SAIR[4]\n\n");
	scanf("%d", &operador);
	
	if((operador == 1)|| (operador == 2) || (operador == 3)){
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &numero1);
	
	printf("digite mais um numero: \n\n");
	scanf("%f", &numero2);
	

	
	if(operador == 1){
		printf("O valor da soma e: %.2f", soma(numero1, numero2));
	}
	
		if(operador == 2){
		printf("O valor da multiplicacao e:  %.2f", produto(numero1, numero2));
	}
	
		if(operador == 3){
		printf("O valor da divisao  e: %.2f", divisao(numero1, numero2));
	}
}
	return SUCESSO;
}
















