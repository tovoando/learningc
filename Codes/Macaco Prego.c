#include <stdio.h>
#include <stdlib.h>

int min(int a, int b)
{
	if(a < b)
	{
		return a;
	}

	else
	{
		return b;
	}
}

int max(int a, int b)
{
	if(a > b)
	{
		return a;
	}

	else
	{
		return b;
	}
}

int main()
{
	int i, n;
	int tc = 0;

	while(scanf("%d", &n), n) //escaneio enquanto n for diferente de 0
	{
		/*if(n == 0)
		{
			break;
		}*/

		printf("Teste %d\n", ++tc);

		int x1, x2, y1, y2;
		int ansx1 = -10000, ansy1 = 10000, ansx2 = 10000, ansy2 = -10000;

		for (i = 0 ; i < n ; i++)
		{
			scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
			ansx1 = max(ansx1, x1); //primeiro ponto dado sempre tera que ser o maior
			ansy1 = min(ansy1, y1); //segundo ponto dado sempre tera que ser o menor
			ansx2 = min(ansx2, x2); //terceiro ponto dado sempre tera que ser o menor			
			ansy2 = max(ansy2, y2); //quarto ponto dado sempre tera que ser o maior
		}

		if(ansx1 < ansx2 && ansy1 > ansy2) //x superior menor que o inferior e o y superior maior que o inferior
		{
			printf("%d %d %d %d\n", ansx1, ansy1, ansx2, ansy2);
		}

		else
		{
			printf("nenhum\n");
		}

		printf("\n");
	}

	return 0;
}