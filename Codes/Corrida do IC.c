#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, aux = 0;
	int n[5];
		
	for(i = 0 ; i < 5 ; i++)
	{
		scanf("%d", &n[i]); //escaneia a sequencia
	}

	for(i = 0 ; i < 5 ; i++)
	{
		for(j = i + 1 ; j < 5 ; j++)
		{
			if(n[i] < n[j]) //decrescente
			{
				aux = n[i];
				n[i] = n[j];
				n[j] = aux;
			}
		}

		printf("%d - %d km/h\n", i + 1, n[i]); //imprime a sequencia decrescente
	}
		
	return 0;
}