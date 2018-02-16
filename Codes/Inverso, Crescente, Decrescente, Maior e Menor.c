#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, a, maior, menor, aux = 0;
	
	scanf("%d", &a); //escaneia o numero de repeticoes
	
	int n[a];
	
	scanf("%d", &n[0]); //escaneio um numero separado
	
	maior = n[0]; //declaro o primeiro numero lido como maior
	maior = n[0]; //declaro o primeiro numero lido como menor
		
		for(i = 1 ; i < a ; i++) //loop iniciando do numero seguinte
		{
			scanf("%d", &n[i]); //escaneia a sequencia
			
			if(n[i] < menor)
			{
				menor = n[i]; //a cada numero digitado ele compara com o menor e substitui pelo menor absoluto
			}

			if(n[i] > maior)
			{
				maior = n[i]; //a cada numero digitado ele compara com o maior e substitui pelo maior absoluto
			}
		}

		for(i = a - 1 ; i >= 0 ; i--) //inverso
		{
			printf("%d ", n[i]); //imprime a sequencia inversa
		}

		printf("\n");
		
		for(i = 0 ; i < a ; i++) //crescente ou decrescente
		{
			for(j = i + 1 ; j < a ; j++)
			{
				if(n[i] > n[j]) //crescente
				{
					aux = n[i];
					n[i] = n[j];
					n[j] = aux;
				}
			}

			printf("%d ", n[i]); //imprime a sequencia crescente
		}
		
		printf("\n");
		
		for(i = 0 ; i < a ; i++) //crescente ou decrescente
		{
			for(j = i + 1 ; j < a ; j++)
			{
				if(n[i] < n[j]) //decrescente
				{
					aux = n[i];
					n[i] = n[j];
					n[j] = aux;
				}
			}

			printf("%d ", n[i]); //imprime a sequencia decrescente
		}

		printf("\n");
		printf("%d\n", maior); //imprime o maior numero
		printf("%d", menor); //imprime o menor numero
		
	return 0;
}