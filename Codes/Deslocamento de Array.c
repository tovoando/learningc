#include <stdio.h>
#include <stdlib.h>

int main()
{
	int quant, i, desl;
	
	scanf("%d", &quant); //escaneia a quantidade de numeros a serem escaneados (5)
	
	int array_1[quant], array_2[quant];

		for(i = 0 ; i < quant ; i++)
		{
			scanf("%d", &array_1[i]); //escaneia os n numeros
		}

		scanf("%d", &desl); //escaneia o tamanho do deslocamento (2 ou -2)

		for(i = 0 ; i < quant ; i++)
		{
			printf("%d\n", array_1[((i - desl) % quant + quant) % quant]); //deslocamento para a esquerda (-) ou direita (+)
			/*
			0 + 2 % 5 + 5 % 5 = 2
			1 + 2 % 5 + 5 % 5 = 3
			2 + 2 % 5 + 5 % 5 = 4
			3 + 2 % 5 + 5 % 5 = 0
			4 + 2 % 5 + 5 % 5 = 1
			*/
			/*
			0 - 2 % 5 + 5 % 5 = 3
			1 - 2 % 5 + 5 % 5 = 4
			2 - 2 % 5 + 5 % 5 = 0
			3 - 2 % 5 + 5 % 5 = 1
			4 - 2 % 5 + 5 % 5 = 2
			*/
		}

	return 0;
}