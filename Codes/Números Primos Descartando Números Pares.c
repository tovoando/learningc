#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main()
{
	int n; //numero a ser lido e testado
	int d; //candidato a divisor
	int primo; //para indicar se o numero dado 'n' e primo ou nao
	//primo = TRUE se o numero dado e primo
	//primo = FALSE se o numero dado nao e primo

	printf("Forneca um numero inteiro positivo: ");
	scanf("%d", &n);

		if(n <= 1 || (n != 2 && n % 2 == 0))
		{
			primo = FALSE; //nenhum numero inteiro <= 1 ou par > 2 e primo
		}

		else
		{
			primo = TRUE; //o numero e primo ate que se prove o contrario
		}

		d = 3;
		
		while(primo && d <= n / 2)
		{
			if(n % d == 0)
			{
				primo = 0;
			}

			d = d + 2; // testamos so os impares: 3, 5, 7...
		}

	if(primo)
	{
		printf("%d e primo\n", n);
	}
	
	else
	{
		printf("%d nao e primo\n", n);
	}

	return 0;
}