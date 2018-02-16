#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

long int somaNaturais(int n)
{
	int sum = 0;

	if(n == 0) //condição de parada, se n for igual a 0, retorna o próprio n
	{
		printf("%d", n); //mostra o 0 na condição de parada

		return n;
	}

	else
	{
		printf("%d + ", n); //mostra os números em ordem decrescente, por conta da recursividade

		int sum = n + somaNaturais(n - 1); //recursividade

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
				printf(" = %ld\n", somaNaturais(number)); //mostra o resultado da soma
			}
		}

		else
		{
			printf("Programa encerrado\n"); //mensagem mostrada na tela quando o valor digitado é -1
		}
	}

	return 0;
}