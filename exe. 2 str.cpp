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
    int Vetor_Media_Aluno[3];
    int i, somaNotas=0;
    
    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, NOME, stdin);
    
    printf("\n");
    
    printf("Digite o curso do aluno: ");
    fgets(aluno.curso, CURSO, stdin);
    
    printf("\n");
    
    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);
     
    printf("\n");
     
    printf("O nome do aluno eh: %s", aluno.nome);
    
    printf("\n");
    
    printf("O curso do aluno eh: %s", aluno.curso);
    
    printf("\n");
    
    printf("A idade do aluno eh: %d", aluno.idade);
    
    printf("\n");
    printf("\n");
    
    for(i=0; i<3; i++){
    	printf("Digite as notas do aluno: ");
    	scanf("%d", &Vetor_Media_Aluno[i]);
	}
    
    for(i=0; i<3; i++){
    	somaNotas += Vetor_Media_Aluno[i];
	}
    
    if(somaNotas >= 60){
    	printf("O aluno foi aprovado!");
	} 
	if(somaNotas < 60){
		printf("O aluno foi reprovado!");
	}
    
	return SUCESSO;
}



















