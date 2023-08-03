
#include<stdio.h>

int main (int argc, char ** argv){
    int i, n;
    float valor, resultado;

    printf("Digite um numero:\n");
    scanf("%d", &n);
    
    resultado = 0.0;
    valor = 1.0;
    for(i=1; i<=n; i++){
        valor = valor * 1.0/i;
        resultado = resultado + valor;
    }
    
    printf("valor de E igual a: %.4f\n", resultado);

    return 0;
}
