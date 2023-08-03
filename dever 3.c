#include <stdio.h>
#define SUCESSO  0

float segundos(float segundos){
	
	float horas = segundos/3600;
	float minutos = segundos/60;
	
	return printf("O numero de segundos foi de: \n \n %.2f segundos\n %.2f minutos \n %.2f horas", segundos, minutos, horas);
}



int main(){
	
	float n;
	
	printf("escreva o tempo do experimento em segundos: ");
	scanf("%f", &n);
	
    segundos(n);
	
    return SUCESSO;
}
