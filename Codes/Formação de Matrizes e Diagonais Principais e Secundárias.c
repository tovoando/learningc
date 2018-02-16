#include <stdio.h>
#include <stdlib.h>

int main()
{
	int l, c;
	
	scanf("%d%d", &l, &c); //escaneio o numero de linhas e colunas
	
	int numeros[l][c], diagp = 0, diags = 0, maior = 0, menor = 0;
	int linhas, colunas;
	
		for(linhas = 0 ; linhas < l ; linhas++)
		{
			for(colunas = 0 ; colunas < c ; colunas++)
			{
				scanf("%d", &numeros[linhas][colunas]); //escaneio a matriz
					
				if(numeros[linhas][colunas] > 0) //conto para cada numero maior que zero
				{
					maior++;
				}
				
				if(numeros[linhas][colunas] < 0) //conto para cada numero menor que zero
				{
					menor++;
				}
			}
		}

		printf("Matriz formada:\n");
			
		for(linhas = 0 ; linhas < l ; linhas++)
		{
			for(colunas = 0 ; colunas < c ; colunas++)
			{
				if(colunas == c - 1) //se estiver na ultima coluna imprime o numero sem espaco
				{
					printf("%d", numeros[linhas][colunas]);
				}

				else //senao imprime com espaco
				{
					printf("%d ", numeros[linhas][colunas]);
				}
			}

			printf("\n");
		}

		if(l == c) //so existe diagonais se a matriz for quadrada, portando numero de linhas e colunas iguais
		{
			for(linhas = 0 ; linhas < l ; linhas++)
			{
				for(colunas = 0 ; colunas < c ; colunas++)
				{
					if(linhas == colunas) //diagonal principal possui linhas e colunas iguais
					{
						diagp += numeros[linhas][colunas];
					}

					if((linhas + colunas) == (c - 1)) //diagonal secundaria tem a soma de linhas e colunas igual a diferenca entre o indice da matriz por 1
					{
						diags += numeros[linhas][colunas];
					}
				}
			}

			printf("A diagonal principal e secundaria tem valor(es) %d e %d respectivamente.\n", diagp, diags);
		}

		else //se a matriz nao for quadrada nao possui diagonais, ou seja, possui linhas diferentes de colunas
		{
			printf("A diagonal principal e secundaria nao pode ser obtida.\n");
		}

		printf("A matriz possui %d numero(s) menor(es) que zero.\n", menor);
		printf("A matriz possui %d numero(s) maior(es) que zero.\n", maior);
		
	return 0;
}