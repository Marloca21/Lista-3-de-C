#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int escolha,metros,tab,tam,i,resul,valor,inf,F,C;

	printf ("Salve\nQual programa deseja executar ?\n");
	scanf ("%d",&escolha);

	while (escolha != 0) {
		switch (escolha) {
			
			case 1 :
				printf ("\n------Programa 01------");
				printf ("\nDigite um Valor em metros:  ");
				scanf ("%d",&metros);
				printf ("\nBom, %d Metros são %d Decímetros, %d Centímetros e %d Milímetros !",metros,metros*10,metros*100,metros*1000);
				printf ("\nQual programa deseja executar ?(0 para parar)\n");
				scanf ("%d",&escolha);
				break;
			case 2 :
				printf ("\n------Programa 02------");
				printf ("\nPor favor, digite o número que você deseja a tabuada: ");
				scanf ("%d",&tab);
				printf ("Ate quantos X você deseja a tabuada ? : ");
				scanf ("%d",&tam);
				tam = tam + 1 ;
				for (i=0; i<tam; i++) {
					resul = tab * i;
					printf ("\n%d x %d = %d",tab,i,resul);
				}
				printf ("\nQual programa deseja executar ?(0 para parar)\n");
				scanf ("%d",&escolha);
				break;
			case 3:
				printf ("\n------Programa 03------");
				printf ("\nDigite o valor do produto: ");
				scanf ("%d",&valor);
				if (valor >= 100) {
					inf = valor * 0.2 ;
					valor = valor + inf ;
					printf ("O valor (%d) é igual/maior que 100, ficando %d após o inflacionamento. ",valor-inf,valor);
				}
				if (valor < 100) {
					inf = valor * 0.1 ;
					valor = valor + inf ;
					printf ("O valor (%d) é menor que 100, ficando %d após o inflacionamento. ",valor-inf,valor);
				}
				printf ("\nQual programa deseja executar ?(0 para parar)\n");
				scanf ("%d",&escolha);
				break;
			case 4 :
				printf ("\n------Programa 04------");
				printf ("\nDigite o valor em °F:  ");
				scanf ("%d",&F);
				C = (F-32.0)*(5.0/9.0) ;
				printf ("\nBom , %d ° Fahrenheit são %d ° graus Celsius",F,C);
				printf ("\nQual programa deseja executar ?(0 para parar)\n");
				scanf ("%d",&escolha);
				break;
		}
	}
	
	printf ("\nPrograma Finalizado !");
	
}
