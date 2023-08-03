#include <stdlib.h>
#include <stdio.h>
#define SUCESSO  0
#define CURSO  30
#define NOME  50
#define NOTAS  3
#define SITUACAO  10

typedef struct s_alunos{
	char nome [NOME];
	char curso [CURSO];
	int idade;
	int notas[NOTAS];
	int media;
	char situacao[SITUACAO];
	
}aluno;

void clearStdin(void){  

    int c;

    while(( c = getchar() ) != '\n' && ( c != EOF ));
}




int main (int argc, char ** argv){
	
   aluno * Media_Alunos;
   int qntdAlunos, i=0, j=0, comp=0;
   int  media_turma, soma=0, soma_turma=0;
   
   
   printf("Digite o numero de alunos:  ");
   scanf("%d", &qntdAlunos);
	
   Media_Alunos = (aluno *) (malloc (qntdAlunos * sizeof(aluno)));
    
   while(i != qntdAlunos){
   	
    printf("Digite o nome do aluno %d : \n", i+1);   
	scanf(" %49[^\n]s", &Media_Alunos[i].nome);      																										   
    clearStdin();
    
     printf("\n");
    
    printf("Digite o curso do aluno %d : \n", i+1);   
	scanf(" %30[^\n]s", &Media_Alunos[i].curso);      																										   
    clearStdin();
    
    printf("\n");
    
    printf("Digite a idade do aluno %d : ", i+1);
    scanf("%d", &Media_Alunos[i].idade);
    
    for (j=0; j < NOTAS; j++){
    	printf("Digite a nota %d: ", j+1);
    	scanf("%d", &Media_Alunos[i].notas[j]);
    	
    	soma += Media_Alunos[i].notas[j];
	
	}
   
    Media_Alunos[i].media = soma/3;
    
    printf("A media do aluno eh: %d ", Media_Alunos[i].media);
    printf("\n");
    printf("\n");
	
	soma_turma += soma;
	
    
	
	printf("\n");

	i++;
	j++;
	soma=0;
}
    
    
    media_turma = soma_turma / (qntdAlunos * 3);
    
    printf("A media da sala eh: %d", media_turma);
    
    printf("\n");
    printf("\n");
    
	return SUCESSO;
}



















