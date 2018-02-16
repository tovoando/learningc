#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main()
{
	int i, prod = 1, cont = 0;
	int n[4]; //numero a ser lido e testado
	int d; //candidato a divisor
	int primo; //para indicar se o numero dado n e primo ou nao
	//primo = TRUE se o numero dado e primo
	//primo = FALSE se o numero dado nao e primo

	for(i = 0 ; i < 4 ; i++)
	{
		scanf("%d", &n[i]);

		if(n[i] <= 1 || (n[i] != 2 && n[i] % 2 == 0))
		{
			primo = FALSE; //nenhum numero inteiro <= 1 ou par > 2 e primo
		}

		else
		{
			primo = TRUE; //o numero e primo ate que se prove o contrario
		}

		d = 3;
		
		while(primo && d <= n[i] / 2)
		{
			if(n[i] % d == 0)
			{
				primo = 0;
			}

			d = d + 2; // testamos so os impares: 3, 5, 7...
		}

		if(primo)
		{
			cont++;
		}

		prod *= n[i];
		
	}

	if(cont == 4)
	{
		printf("%d\n", prod);
	}
	
	else
	{
		printf("SEM PRODUTO\n");
	}

	return 0;
}