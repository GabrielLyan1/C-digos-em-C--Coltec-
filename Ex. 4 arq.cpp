#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SUCESSO  0 
#include <string.h>
#define ERRO_ABRIR_ARQUIVO  (1)
#define NOME  (50)

 typedef struct s_dados{
	char nome [NOME];
	float notas[2];
	float media;
	float variancia;
	float desvio;
}dados;

void le_dados(FILE * arquivo, dados * turma, int n_Alunos){
	
	int i=0;
	char nome[NOME];
	float n1, n2;
	
	for(i=0; i < n_Alunos; i++){
		fscanf(arquivo, "%s %f %f", nome, &n1, &n2);
		
		strcpy(turma[i].nome, nome);
		turma[i].notas[0] = n1;
	    turma[i].notas[1] = n2 ;
		}
	
	}

void copia_imprimi_dados( FILE * arquivo2, dados * turma, int n_Alunos){
	
	int i = 0;
    float media;
    float soma;
    int numero_de_provas = 2;

    for (i = 0; i < n_Alunos; i++){

        soma = turma[i].notas[0] + turma[i].notas[1];

        media = soma / numero_de_provas;

        turma[i].media = media;
    }
	
	for(i=0; i < n_Alunos; i++){
		
		fprintf(arquivo2, "%s %.1f \n", turma[i].nome, turma[i].media);
		
	}
		
}

void variancia (FILE * arquivo2, dados * turma, int n_Alunos){
	
	int i=0, j=0;
    float desvio[2];
    float quadrado_desvio[2];
    float variancia;
	//primeiramente fazemos a subtracao da nota pela media do aluno
    
    for(i=0; i < n_Alunos; i++){
  	  desvio[0] = turma[i].notas[0] - turma[i].media;
   	 desvio[1] = turma[i].notas[1] - turma[i].media;
    
    	quadrado_desvio[0] = pow(desvio[0], 2);
    	quadrado_desvio[1] = pow(desvio[1], 2);
    
   // vamos entao clacular a variancia:  soma entre os quadrados dos desvios, divididos pelo numero de elementos.
    
   	 variancia = (quadrado_desvio[0] + quadrado_desvio[1]) / 2;
    
		turma[i].variancia = variancia; 
	
		fprintf(arquivo2 , "\n");
		fprintf(arquivo2, "\nVariancia aluno %d: %.1f \n", i+1, turma[i].variancia);
	     
	} 
 
}

void desvio(FILE * arquivo2, dados * turma, int n_Alunos){
    int i=0;
    float desvio_padrao;
    
    
    for(i=0; i<n_Alunos; i++){
    	
    	desvio_padrao = sqrt(turma[i].variancia);
        turma[i].desvio = desvio_padrao;   	
        fprintf(arquivo2, "\ndesvio padrao aluno %d: %.3f", i+1, turma[i].desvio);

	} 
     
}

void libera_memoria(dados * var){ 
	free(var);
}

void fecha_arquivo(FILE * arquivo){
	fclose(arquivo);
}


int main (int argc, char ** argv){


    dados * turma;
    FILE * arq;
    FILE * arq2;
    char texto[100];
    char nomes[NOME];
    int i , n_Alunos;
    
    arq = fopen ("texto.txt", "r");
	arq2 = fopen ("texto2.txt", "w");
	
	    if(arq == NULL){
    		printf("erro ao abrir arquivo!");
    		return ERRO_ABRIR_ARQUIVO;
  		} 
    
     	else{
  		
  			fscanf(arq, "numero de alunos: %i ", &n_Alunos);
  		
  			turma = (dados*)(malloc(n_Alunos * sizeof(dados)));
   		}  	
	
	le_dados(arq, turma, n_Alunos);
	copia_imprimi_dados(arq2, turma, n_Alunos);
	variancia(arq2, turma, n_Alunos);
	desvio(arq2, turma, n_Alunos);
	
	libera_memoria(turma);
	fecha_arquivo(arq);
	fecha_arquivo(arq2);
	

	return SUCESSO;
}
