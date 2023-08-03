#include <stdio.h>
#define SUCESSO 0

// %.1 para mostrar uma casa apos a virgula

int main(int agrc, char ** argv){
	
	float numero1, numero2, resultado, multiplicacao, divisao, soma, subtracao;
    char operador;
    
    printf("digite a operacao que voce quer fazer: {+, =, /, *} ");
    scanf("%c", &operador);
    
   printf("digite o primeiro numero: \n");
   scanf("%f", &numero1);
   printf("digite outro numero: \n");
   scanf("%f", &numero2);
   
   multiplicacao = numero1 * numero2;
   soma = numero1 + numero2;
   subtracao = numero1 - numero2;
   divisao = numero1/numero2;
   
   if (operador == '+'){
   	printf("A soma dos numeros e: %.1f", soma);
   }
   else if(operador == '*'){
   printf("A multiplicacao dos numeros e: %.1f", multiplicacao);
   } 
   else if(operador == '/'){
   	printf("A divisao desses numeros e: %.1f", divisao);
   }
   else if (operador == '-'){
   printf("A subtracao desses valores e: %.1f", subtracao);
}  
    return SUCESSO;
}
