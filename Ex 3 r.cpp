#include <stdio.h>
#define SUCESSO   0 

int fibo(int x){

    if( x == 1 || x == 2){
		return 1;
	}

	else{
	return fibo(x - 1) + fibo(x - 2);	
}
 
}

int main (int argc, char ** argv){
	
    int num;
    int fibonacci;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    fibonacci = fibo(num);    
    
    printf("O %d da sequencia de fibonacci eh: %d", num, fibonacci);
    
	return SUCESSO;
}
