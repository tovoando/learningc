#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float fatorial(int n)
{
	if ((n == 1) || (n == 0)) //condição de parada, se n for menor ou igual a 1, retorna 1
	{
		return 1;
	}

	else
	{
		return fatorial(n - 1) * n; //recursividade
	}
}

float calcSerie(int x)
{
	int i;
	float serie = 0;

	for(i = 0 ; i <= x ; i++)
	{
		serie += (x - i) / fatorial(i); //soma da série
	}

	return serie;
}

int main()
{
	int number;
	
	while(number != -1) //condição de parada
	{		
		printf("Informe um inteiro positivo (-1 para encerrar):");
		scanf("%d", &number);
		
		if(number != -1)
		{
			setlocale(LC_ALL, "Portuguese");
			printf("O resultado da série é = %.2f\n", calcSerie(number)); //mostra o resultado da série
		}
		
		else
		{
			printf("Programa encerrado\n"); //mensagem mostrada na tela quando o valor digitado é -1
		}	
	}
	
	return 0;
}