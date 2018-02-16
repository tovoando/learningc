#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n[5];
	int i, maior = 0, menor = 100000000, soma = 0;
	float media;

		for(i = 0 ; i < 5 ; i++)
		{
			scanf("%d", &n[i]);

			if(n[i] > maior)
			{
				maior = n[i];
			}

			if(n[i] < menor)
			{
				menor = n[i];
			}

			soma += n[i];
			media = soma / 5.0;
		}

		for(i = 0 ; i < 5 ; i++)
		{
			printf("O %d vetor e: %d\n", i + 1, n[i]);
		}

		for(i = 4 ; i >= 0 ; i--)
		{
			printf("O %d vetor e: %d\n", i + 1, n[i]);
		}

		printf("O primeiro numero e: %d\n", n[0]);
		printf("O ultimo numero e: %d\n", n[4]);
		printf("O maior numero e: %d\n", maior);
		printf("O menor numero e: %d\n", menor);
		printf("A soma dos numeros e: %d\n", soma);
		printf("A media dos numeros e: %.2f", media);

	return 0;
}