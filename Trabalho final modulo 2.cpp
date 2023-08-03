/**
 * @file   prova2oT.c
 * @brief  Arquivo com a implementa��o da prova do 2o Trimestre de 2020.
 * @author <Gabriel Lyan Barbosa de Assis>
 * @date   2020-12-10
 */

/* Inclus�es */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>
/* Constantes */

/// Lista de erros
#define SUCESSO                 (0)

/// Defini��es de limites
#define NUMERO_ESTADOS_E_DF     (26 + 1)
#define TAMANHO_MAIOR_NOME      (19 + 1)
#define X  3
#define Y  4
// ------------------------
// - IN�CIO DO SEU C�DIGO -
// ------------------------

// INSIRA SEU C�DIGO AQUI

//questao 1

// Aloca um vetor com <nCaracteres> de tamanho
char * alocaVetorCaracteres(int nCaracteres) {
	 
  char * alocaVetorCaracter;
  
  alocaVetorCaracter = (char *)(malloc(nCaracteres * sizeof(char)));
  	
  if(alocaVetorCaracter == NULL){
  	
  printf("Erro na alocacao vo vetor!");
  system("pause");
  }
  
  return alocaVetorCaracter;
}

// Aloca um vetor de vetores onde cara linha do vetor tenha
// <tamLinhas[i]> caracteres
char ** alocaVetorBidimensional(int * tamLinhas, int nLinhas) {

   int i;
   char ** vetorBidimensional;
   
   vetorBidimensional = (char **)(malloc(nLinhas * sizeof(char*)));
   
   for(i=0; i<nLinhas; i++){
   vetorBidimensional[i] = (char*)(malloc(tamLinhas[i] * sizeof(char)));
   }
  
   return vetorBidimensional;
} 

// Imprime em cada linha o conte�do da linha da matriz
void imprimeMatrizDinamica(char ** matriz, int nLinhas) {
	
    int i;
    
    for(i=0;i<nLinhas; i++){
    	printf("%s", matriz[i]);
     	printf("\n"); 
	}	
}

// Libera a mem�ria alocada
void liberaMatriz(char ** matriz, int nLinhas) {
    int i;
     
    for(i=0; i<nLinhas; i++){
     	free(matriz[i]);
	
	}
   free(matriz);
    
}

// Imprime uma matriz como se fosse um vetor linear
// � importante saber o tamanho das colunas para fazer
// a quebra na posi��o correta. Isso est� explicado
// nos videos das Lives.
void imprimeMatriz(char * matriz, int nLinhas, int nColunas) {

  int i;

  for (i = 0; i < nLinhas; i++) {
    printf("%s\n", &matriz[i * nColunas]);
  }
}


// ------------------------
// - FIM DO SEU C�DIGO    -
// ------------------------

/**
 * Rotina que imprime o nome de cada um dos estados que est� no vetor.
 * Essa fun��o n�o � gen�rica no sentido de imprimir qualquer vetor.
 * Ela imprime unicamente um vetor de char * de dimens�es fixas.
 * @param vetor Endere�o do vetor com os endere�os das STRINGS que
 * ser�o impressas.
 */
 // questao 2
  char ** copiaMatrizCaracter(char matrizOriginal[X][Y]) {

  	 int i, j;
 	 char ** matrizCopia;
 	 int * tamanhoDeCadaLinha;
 	 
 	 tamanhoDeCadaLinha = (int *)(malloc(X * sizeof(int)));
  
  	 for(i=0; i<X; i++){
  		tamanhoDeCadaLinha[i] = strlen(matrizOriginal[i]);
  	 }
  
 	 matrizCopia = (char**)(malloc(X * sizeof(char *)));
  
	  for(i=0; i < X; i++){
 	 	matrizCopia[i] = (char*)(malloc(tamanhoDeCadaLinha[i] * sizeof(char)));
  	}

	  for(i=0; i<X; i++){
  		matrizCopia[i] = matrizOriginal[i];
	  }
	  
  return matrizCopia;
}

/**
 * Rotina que imprime o nome de cada um dos estados que est� na matriz.
 * Essa fun��o n�o � gen�rica no sentido de imprimir qualquer matriz.
 * Ela imprime unicamente uma matriz de char de dimens�es fixas.
 * @param matriz Endere�o da matriz com os nomes dos estados que
 * ser�o impressos.
 */
void imprimeMatrizNomesEstados(char matriz[NUMERO_ESTADOS_E_DF][TAMANHO_MAIOR_NOME]) {

  int i;

  for (i = 0; i < NUMERO_ESTADOS_E_DF; i++) {
    printf("%s\n", matriz[i]);
  }

}

/**
 * Rotina que ordena um vetor de STRINGS.
 * Essa rotina � a implementa��o do algoritmo do BubbleSort em sua vers�o
 * mais simples. O objetivo aqui � simplesmente mapear de ALGORITMO para C.
 * Basicamente o que esse algoritmo faz � comparar cada posi��o com o
 * pr�ximo, se for maior, ent�o ele troca de posi��o, como se fosse uma
 * BOLHA subindo, da� o nome BubbleSort. Observe que como o vetor s�
 * cont�m endere�os, ele s� precisa trocar um endere�o com o outro. Caso
 * o algoritmo fosse implementado na matriz, ele teria que copiar a STRING
 * inteira de um lugar para o outro.
 * Essa fun��o � gen�rica no sentido de ordenar qualquer vetor.
 * @param vetor Endere�o do vetor com o endere�o das STRINGS a serem ordenadas.
 */
 
 //questao 3 
 void ordenaPorNome(char ** matriz, int nLinhas) {

  int i, j;
  char * tmp;

  for (i = 0; i < (nLinhas - 1); i++) {
    for (j = 0; j < (nLinhas - 1); j++) {
      // Se estiver fora de ordem...
      if (strcmp(matriz[j], matriz[j + 1]) > 0) {
        // ... troca de posicao
        tmp = matriz[j];
        matriz[j] = matriz[j + 1];
        matriz[j + 1] = tmp;
      }
    }
  }
}
// exemplo dado pelo professor abaixo
void ordenacaoPorNome(char * vetor[NUMERO_ESTADOS_E_DF]) {

  int i, j;
  char * tmp;

  for (i = 0; i < (NUMERO_ESTADOS_E_DF - 1); i++) {
    for (j = 0; j < (NUMERO_ESTADOS_E_DF - 1); j++) {
      // Se estiver fora de ordem...
      if (strcmp(vetor[j], vetor[j + 1]) > 0) {
        // ... troca de posicao
        tmp = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = tmp;
      }
    }
  }
}


/**
 * Fun��o principal.
 * @param argc N�mero de par�metros.
 * @param argv Vetor com os par�metros.
 * @return SUCESSO caso o programa rode normalmente, ou caso contr�rio,
 * o c�digo do erro ocorrido.
 */
 
// copia matriz estados 
 char ** copia_Estados_Matriz(const char matrizCaracter[NUMERO_ESTADOS_E_DF][TAMANHO_MAIOR_NOME]){
  
  int j, i;
  char ** matriz_Copia_Dinamica;
  
  matriz_Copia_Dinamica = (char **) malloc (NUMERO_ESTADOS_E_DF * sizeof(char *));
    
  int *tamanhoColunaLinha;
  tamanhoColunaLinha = (int *) malloc (NUMERO_ESTADOS_E_DF * sizeof(int));
    
  for(i = 0; i < NUMERO_ESTADOS_E_DF; i++){
      tamanhoColunaLinha[i] = strlen (matrizCaracter[i]);

  }
  for (i = 0; i < NUMERO_ESTADOS_E_DF; i++) {
		  matriz_Copia_Dinamica[i] = (char *) malloc (tamanhoColunaLinha[i] * sizeof(char));
	}

  for (i = 0; i < NUMERO_ESTADOS_E_DF; i++) {
      strcpy(matriz_Copia_Dinamica[i], matrizCaracter[i]);
  }
  return matriz_Copia_Dinamica;
}

int main(int argc, char * argv[]) {

  
  // Matriz com o nome dos estados do Brasil e DF
    const char NOMES_ESTADOS[NUMERO_ESTADOS_E_DF][TAMANHO_MAIOR_NOME] = {
    "Roraima", "Amapa", "Tocantins", "Alagoas", "Paraiba", "Mato Grosso", "Piaui",
    "Bahia", "Acre", "Goias", "Sao Paulo", "Pernambuco", "Santa Catarina",
    "Espirito Santo", "Rio Grande do Sul", "Rondonia", "Mato Grosso do Sul", "Maranhao",
    "Para", "Minas Gerais", "Parana", "Distrito Federal", "Rio Grande do Norte",
    "Ceara", "Rio de Janeiro", "Sergipe", "Amazonas"
  };

  // Vetor com a posi��o de cada estado presente em NOMES_ESTADOS em rela��o 
  // a popula��o do Brasil.
  const int POSICOES_POPULACAO[NUMERO_ESTADOS_E_DF] = {
    27, 26, 24, 18, 14, 17, 19,
    4, 25, 12,  1,  7, 10,
    15,  6, 23, 21, 11,
    9,  2,  5, 20, 16,
    8,  3, 22, 13
  };

  // Vetor com a popu��o de cada estado presente em NOMES_ESTADOS.
  const int POPULACAO[NUMERO_ESTADOS_E_DF] = {
    576568, 829494, 1555229, 3322820, 3996496, 3441998, 3264531,
    14812617, 869265, 6921161, 45538936, 9496294, 7075494,
    3972388, 11329605, 1757589, 2748023, 7035055,
    8513497, 21040662, 11348937, 2974703, 3479010,
    9075649, 17159960, 2278308, 4080611
  };

  // ------------------------
  // - IN�CIO DO SEU C�DIGO -
  // ------------------------

  // Insira seu c�digo aqui
  
  char ** matriz_Estados_Main;
  
  // Exemplo de uso do imprimeMatriz
  // Apague para a resolu��o da prova. Est� aqui apenas como dica ;-)
  
  //Imprimi constante matriz 
  imprimeMatriz((char *)NOMES_ESTADOS, NUMERO_ESTADOS_E_DF, TAMANHO_MAIOR_NOME);
  
  //copia a matriz para uma alocada dinamicamente | recebe o retorno da funcao 
  matriz_Estados_Main = copia_Estados_Matriz(NOMES_ESTADOS);
  
  printf("\n"); 
  printf("\n"); 
  printf("\n");
  
  //imprimi a matriz que teve os parametros copiados para ela
  imprimeMatrizDinamica(matriz_Estados_Main, NUMERO_ESTADOS_E_DF);
  
  // Ordena a matriz alfabeticamente
  ordenaPorNome(matriz_Estados_Main, NUMERO_ESTADOS_E_DF);

  printf("\n"); 
  printf("\n"); 
  printf("\n"); 
  
  // imprimi a matriz ordenada 
  imprimeMatrizDinamica(matriz_Estados_Main, NUMERO_ESTADOS_E_DF);
  
  printf("\n"); 
  printf("\n"); 
  printf("\n"); 
  
  //imprimi a matriz original
  imprimeMatriz((char *)NOMES_ESTADOS, NUMERO_ESTADOS_E_DF, TAMANHO_MAIOR_NOME);
  
  // Libere a mem�ria alocada AQUI
  liberaMatriz(matriz_Estados_Main, NUMERO_ESTADOS_E_DF);
  
  // ------------------------
  // - FIM DO SEU C�DIGO    -
  // ------------------------
  if(matriz_Estados_Main != NULL){
  	printf("Tomei no cu ");
  }
  // Se chegou at� aqui � porque correu tudo bem
  return SUCESSO;
}

