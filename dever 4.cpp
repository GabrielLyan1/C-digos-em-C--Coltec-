#include <stdio.h>
#define SUCESSO  0

int primo(int numero){
	
	int num_divisores = 0;
	int i;
	
	for(i = 1; i<=numero; i++){
		if(numero % i == 0){
			num_divisores++;
		}
	}
	
	
	return(num_divisores);
}


int main (int argc, char ** argv){
	
	int numero;
	
	printf("DIGITE UM NUMERO INTEIRO POSITIVO: ");
	scanf("%d", &numero);
	  
	printf("este numero tem %d divisores\n\n", primo(numero));
	
	if(primo(numero) == 2){
		printf("este numero e primo!");
	}else{  
	    printf("este numero nao e primo!");
	}
		
    return SUCESSO;	
}

