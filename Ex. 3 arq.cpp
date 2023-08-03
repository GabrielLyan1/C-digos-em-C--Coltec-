#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SUCESSO  0 
#define ERRO_ABRIR_ARQUIVO  (1)
#define NOME (50)

 typedef struct s_dados{
	char nome [NOME];
	float nota_1;
    float nota_2;

}dados;

void le_dados_arquivo(FILE * arquivo, dados * turma, int n_Alunos){
	
	int i=0;
	char nome[NOME];
	float n1, n2;
	
	for(i=0; i < n_Alunos; i++){
		fscanf(arquivo, "%s %f %f", nome, &n1, &n2);
		
		strcpy(turma[i].nome, nome);
		turma[i].nota_1 = n1;
	    turma[i].nota_2 = n2 ;
	}
	
	for(i=0; i<n_Alunos; i++){
	printf("%s %.1f %.1f \n\n", turma[i].nome, turma[i].nota_1, turma[i].nota_2);
	}
	
	}

void copia_imprimi_dados(FILE * arquivo, FILE * arquivo2, dados * turma, int n_Alunos){
	
	int i;
	float media[n_Alunos];
	
	for(i=0; i<n_Alunos; i++){
		media[i] = (turma[i].nota_1 + turma[i].nota_2) / 2;
	}
	
	for(i=0; i < n_Alunos; i++){
		
		fprintf(arquivo2, "%s %.1f \n", turma[i].nome, media[i]);
		
	}
		
}

int main (int argc, char ** argv){


    dados * turma;
    FILE * arq;
    FILE * arq2;
    char texto[100];
    char nomes[NOME];
    int i , n_Alunos;
    
    arq = fopen ("texto.txt", "w");
	arq2 = fopen ("texto2.txt", "w");
	
	fprintf(arq, "numero de alunos: 3 \nFelipe 5 9 \nSergio 6 8\nCarlos 4 7 ");    
		
	fclose(arq);
	
	arq = fopen("texto.txt", "r");	
		
	if(arq == NULL){
    	printf("erro ao abrir arquivo!");
    	return ERRO_ABRIR_ARQUIVO;
  	} 
    
     	else{
  		
  		fscanf(arq, "numero de alunos: %i ", &n_Alunos);
  		
  		turma = (dados*)(malloc(n_Alunos * sizeof(dados)));
    }  
	
	le_dados_arquivo(arq, turma, n_Alunos);
	copia_imprimi_dados(arq, arq2, turma, n_Alunos);
	
    fclose(arq);
	fclose(arq2);
		
	return SUCESSO;
}
