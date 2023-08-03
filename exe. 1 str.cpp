#include <stdlib.h>
#include <stdio.h>
#define SUCESSO  0
#define CURSO  30
#define NOME  50

typedef struct s_alunos{
	char nome [NOME];
	char curso [CURSO];
	int idade;
}aluno;

int main (int argc, char ** argv){
	
    aluno aluno;
    
    printf("Digite o nome do aluno: ");
    fgets (aluno.nome, NOME, stdin);
    
    printf("\n");
    
    printf("Digite o curso do aluno: ");
    fgets (aluno.curso, CURSO, stdin);
    
    printf("\n");
    
    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);
     
    printf("\n");
     
    printf("O nome do aluno eh: %s", aluno.nome);
    
    printf("\n");
    
    printf("O curso do aluno eh: %s", aluno.curso);
    
    printf("\n");
    
    printf("A idade do aluno eh: %d", aluno.idade);
    
	return SUCESSO;
}



















