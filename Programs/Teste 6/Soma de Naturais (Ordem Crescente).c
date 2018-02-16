#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

long int somaNaturais(int n)
{
	int sum = 0;

	if(n == 0) //condição de parada, se n for igual a 0, retorna o próprio n
	{
		return n;
	}

	else
	{
		int sum = n + somaNaturais(n - 1); //recursividade

		//o print colocado antes do return (pré-ordem), faz com que o valor seja mostrado antes da execução da condição
		printf("%d + ", n - 1); //com a finalidade de mostrar os números em ordem crescente
		//o -1 serviu para mostrar de de n-1 até 0

		return sum;
	}
}

int main()
{
	long int number;

	while(number != -1) //condição de parada
	{
		setlocale(LC_ALL, "Portuguese");
		printf("Informe um número natural (-1 para encerrar):");
		scanf("%ld", &number);

		if(number != -1)
		{
			if(number == 0)
			{
				printf("%d\n", number);
			}

			else
			{
				printf("%d = %ld\n", number, somaNaturais(number)); //mostra o número e resultado da soma
			}
		}

		else
		{
			printf("Programa encerrado\n"); //mensagem mostrada na tela quando o valor digitado é -1
		}
	}

	return 0;
}