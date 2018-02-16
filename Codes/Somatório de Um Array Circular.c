#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, pos, quant, desloc;

	scanf("%d", &quant);

	int array[quant];

		for(i = 0 ; i < quant ; i++)
		{
			scanf("%d", &array[i]);
		}

		scanf("%d%d", &pos, &desloc);

		pos %= quant; //declaro a posicao inicial como um circular

	int sum = 0;

		while(desloc--) //todo numero diferente de 0 e verdadeiro
		{
			sum += array[pos]; //ele ira somar os arrays comecando da posicao inicial o numero de vezes do tamanho escaneado 
			pos = (pos + 1) % quant; //array rotacionando para a direita de 1 em 1
		}

		printf("%d\n", sum);

	return 0;
}