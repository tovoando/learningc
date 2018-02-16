#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main()
{
	int i, a, b, d, primo, maior, menor;
		
	scanf("%d%d", &a, &b);

	if(a < b) //define o maior e menor
	{
		menor = a;
		maior = b;

	}

	else
	{
		menor = b;
		maior = a;
	}
	
	for(i = maior ; i >= menor ; i--) //sequencia descrescente
	{
		if(i <= 1 || (i != 2 && i % 2 == 0))
		{
			primo = FALSE; //nenhum numero inteiro <= 1 ou par > 2 e primo
		}

		else
		{
			primo = TRUE; //o numero e primo ate que se prove o contrario
		}

		d = 3;
		
		while(primo && d <= i / 2)
		{
			if(i % d == 0)
			{
				primo = 0;
			}

			d = d + 2; // testamos so os impares: 3, 5, 7...
		}

		if(primo) //imprime o numero primo
		{
			printf("%d\n", i);
		}
	}

	return 0;
}