#include <stdio.h>
#define SUCESSO 0

int main(int agrc, char ** argv){

    float x, y, z;
    
    printf("digite o valor do primeiro comprimento:" );
    scanf("%f", &x);
    
    printf("digite o valor do segundo comprimento:" );
    scanf("%f", &y);
    
    printf("digite o valor do terceiro comprimento:" );
    scanf("%f", &z);
    
    if ((x < y + z) & (y < x + z) & (z < x + y)){
    	printf("estes comprimentos formam um triangulo!");
	}else{
		printf("estes comprimentos nao formam um triangulo.");
	}
    
    return SUCESSO;
}
