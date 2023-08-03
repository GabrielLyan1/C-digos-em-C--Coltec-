#include <stdio.h>
#define SUCESSO  0

// escrevi a formula depois do for para nao dar problema //

int main(int argc, char ** argv) {

    float F, C;
    C = 0;
    for (F=50; F<=150; F++) {
        printf("\n");
        printf("Farenheit = %.f",F);
        C =(F-32)*5/9;
        printf("\n Convertido para graus celsius = %.2f \n ", C);
    }
    printf("\n\n");

  return SUCESSO;
}
