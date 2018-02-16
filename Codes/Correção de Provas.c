#include <stdio.h>
#include <stdlib.h>

/*void zerar(int *a)
{
	int i;

	for(i = 0 ; i < 10 ; i++)
	{
		a[i] = 0;
	}
}*/

void maior(int *a)
{
	int i, armazenador = 0;

	for(i = 1 ; i <= 10 ; i++)
	{
		if(a[i] > a[armazenador])
		{
			armazenador = i;
		}
	}

	printf("%d.0\n", armazenador);
}

int main()
{
	int i, id, notas = 0, acima = 0, total = 0;
	//int array[10000], k = 0, anal[10];
	int array[10000], k = 0, anal[10] = {0}; //mesma coisa que usar a funcao zerar
	char gabarito[10], prova[10];

	scanf("%s", gabarito);
	scanf("%d", &id);
	//zerar(anal);

		while(id != 9999)
		{
			scanf("%s", prova);

			for(i = 0 ; i < 10 ; i++)
			{
				if(gabarito[i] == prova[i])
				{
					notas++;
				}
			}

			anal[notas]++;
			array[k] = notas;
			k++;

			printf("%d %d.0\n", id, notas);
			
			total++;

				if(notas >= 6)
				{
					acima++;
				}

			scanf("%d", &id);
			notas = 0;
		}

	printf("%.1f%%\n", (acima * 100.00) / total);
	maior(anal);

	return 0;
}