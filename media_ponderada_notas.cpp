#include <stdio.h>
#define SUCESSO 0

int main(int agrc, char ** argv){
	
    float nota1, nota2, nota3, media;
    
    printf("digite a primeira nota: ");
    scanf("%f", &nota1);
	printf("digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("digite a terceira nota: ");
    scanf("%f", &nota3);
    
    media = (nota1*4 + nota2*3 + nota3*3)/10;
    
    printf("A media do aluno foi: %.2f", media);
    
	return SUCESSO;
} 
