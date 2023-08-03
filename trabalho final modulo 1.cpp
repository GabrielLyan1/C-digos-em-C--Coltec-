#include <stdio.h>
#define SUCESSO  0
#include <ctype.h>
#include <cstdio>
#include <string.h>

// usei o compilador dev c++ e portanto  nao usei "&&" pois minha versao entende melhor & sozinho e tambem nao sei se no programa vs ira compilar ja que o compilador e diferente // 

void signo(int dia, int mes, int ano){
	
    
if ((dia >= 21) & (mes == 3) || (dia <= 20) & (mes == 4)){

    printf("Seu signo e Aries \n\n");
}

else if((dia >= 21) & (mes == 4) || (dia <= 20) & (mes == 5)){
    printf("Seu signo e Touro \n\n");   
}

else if((dia >= 21) & (mes == 5) || (dia <= 20) & (mes == 6)){
    printf("Seu signo e Gemeos \n\n");   
}

else if((dia >= 21) & (mes == 6) || (dia <= 21) & (mes == 7)){
    printf("Seu signo e Cancer \n\n");   
}

else if((dia >= 22) & (mes == 7) || (dia <= 22) & (mes == 8)){
    printf("Seu signo e Leao \n\n");   
}

else if((dia >= 23) & (mes == 8) || (dia <= 22) & (mes == 9)){
    printf("Seu signo e Virgem \n\n");   
}

else if((dia >= 23) & (mes == 9) || (dia <= 22) & (mes == 10)){
    printf("Seu signo e Libra \n\n");   
}

else if((dia >= 23) & (mes == 10) || (dia <= 21) & (mes == 11)){
    printf("Seu signo e Escorpiao \n\n");   
}

else if((dia >= 22) & (mes == 11) || (dia <= 21) & (mes == 12)){
    printf("Seu signo e Sargitario \n\n");   
}

else if((dia >= 22) & (mes == 12) || (dia <= 20) & (mes == 1)){
    printf("Seu signo e Capricornio \n\n");   
}

else if((dia >= 21) & (mes == 1) || (dia <= 19) & (mes == 2)){
    printf("Seu signo e Aquario \n\n");   
}

else if((dia >= 20) & (mes == 2) || (dia <= 20) & (mes == 3)){
    printf("Seu signo e Peixes \n\n");   
}

}


void triangulo_invertido(int altura){
	
	int i;
	
	while(altura>0){
		for(i=1; i<=altura; i++ ){
			printf(" . ");
		}
		printf("\n");
		altura--;
	}
	
}

float vendas(int opcao, int quantidade){
	
	float total;
	total = 0;
	
    float halls = 1.80, pingado = 1.30, pao_de_queijo = 2.50, pao_com_manteiga = 3.10, refrigerante = 5.50;
	 
	 
	if(opcao == 1){
			
		total = total + (refrigerante * quantidade);
	}
	else if(opcao == 2){
		
		total = total + (pao_com_manteiga * quantidade);
	}
	else if(opcao == 3){
		
		total = total + (pao_de_queijo * quantidade);
	}
	
	else if(opcao == 4){
		
		total = total + (pingado * quantidade);
	}
	
	else if(opcao == 5){
		
		total = total + (halls * quantidade);
	}
	
	return total;
}


int main (int argc, char ** argv){
	
	int questao, mesdeNascimento, diadeNascimento, anodeNascimento, altura_triangulo, quantidade=0, opcao;
    float  total_com_desconto, total, halls = 1.80, pingado=1.30, pao_de_queijo = 2.50, pao_com_manteiga=3.10, refrigerante=5.50, desconto;
    
	
   printf("+---------------------------------------+\n| Bem-vindo a Prova/Trabalho Trimestral |\n+---------------------------------------+ \n\n");
    
    do{
	    
    printf("digite: \n\n 1 para [questao 1/triangulo invertido em pontos] \n 2 para [questao 2/signo] \n 3 para [questao 3/vendas]\n\n");          
    scanf("%d", &questao); 
    
        
        printf("\n");
        
    	if(questao != 0 & questao != 1 & questao != 2 & questao != 3){
    	
    	printf("numero invalido! \n\n");
    	
		}
		else if(questao == 1){
			
			printf("Digite a altura do triangulo: ");
			scanf("%d", &altura_triangulo);
			
			triangulo_invertido(altura_triangulo);
			
			printf("\n\n");
			
		}
    
        else if(questao == 2){
        	
        	printf("Digite o dia em que voce nasceu: \n");
			scanf("%d", &diadeNascimento);
			printf("Digite o mes em que voce nasceu: \n");
			scanf("%d", &mesdeNascimento);
			printf("Digite o ano em que voce nasceu: \n");
			scanf("%d", &anodeNascimento);
			
			signo(diadeNascimento, mesdeNascimento, anodeNascimento);
			
        }
        
        else if(questao == 3){
             do {
             printf(" [1]Refrigerante.... R$ 5,50 \n [2]Pao com manteiga R$ 3,10 \n [3]Pao de queijo... R$ 2,50 \n [4]Pingado......... R$ 1,30 \n [5]Halls........... R$ 1,80 \n [0] Total\n");
             printf("\nDigite a opcao: ");
			 scanf("%d", &opcao);  
			 
			 printf("\n");
			 
			 if (opcao == 0){
			 	
			 	break;
			 }
			 
        	 printf("Digite a quantidade: ");
			 scanf("%d", &quantidade);
        	
        	 printf("\n");
        	 
        	 total = total + vendas(opcao, quantidade);
        	 
		     }while(opcao != 0 );
		     
		     desconto = (total/100)*7;
		     
		     total_com_desconto = total - desconto;
		     
	         printf("O total a pagar sem desconto eh: %.2f", total);
	         printf("\nO total a pagar com desconto eh: %.2f", total_com_desconto);
	         
	         printf("\n\n");
	         
	    }
        
    
    }while (questao != 0);
    
	return SUCESSO;
}
