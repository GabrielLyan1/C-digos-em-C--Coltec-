#include <stdio.h>
#include <stdlib.h> 
#define ERRO  (1)
#define SUCESSO  (0)


int busca(int *vetor, int num, int tam_vetor, int i){

     if(vetor[i] == num && i != tam_vetor){
     	printf("\nO valor %d esta no vetor na posicao %d\n\n", num, i);
	    return busca(vetor, num, tam_vetor, i+1);
	 }
	 if(i == tam_vetor ){
	 	return 1;
	 }
	 else{
	 	return busca(vetor, num, tam_vetor, i+1);
	 }
 
}

int main (int argc, char ** argv){

    //declaracao das variaveis e do vetor
    int *vetor;
    int tam_vetor, num_desejado, i;
    
    //usuario digita o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam_vetor);
    
    //alocacao do vetor
    vetor = (int *) malloc(tam_vetor * sizeof(int));
	
	// iteracao de valores do vetor
	for(i=0; i<tam_vetor; i++){
		printf("Digite o numero da posicao %d do vetor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	//teste para ver se vetor foi alocado corretamente(sem erros)
	if(vetor == NULL){
	    return ERRO;
	}
	
	//usuario digita o numero que sera procurado no vetor
	printf(" \n\nDigite um numero: ");
	scanf("\n%d", &num_desejado);
	
	//volta o valor de i para 0 ja que na ultima iteracao ele estava sendo igual ao numero desejado
	i=0;
	
	//Chama a funcao de verificacao 
	busca(vetor, num_desejado, tam_vetor, i);
	
	
	return SUCESSO;
} 
