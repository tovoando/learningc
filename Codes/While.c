/*THE HUXLEY PROBLEM 396
Devido aos altos indices de poluicao, uma cidade resolveu multar as casas
que possuem mais de 2 veiculos em R$ 12.89 por mes por cada veiculo extra.
Escreva um programa que receba como entrada a quantidade de veiculos de
varias residencias, ate que seja informado o valor 999, e exiba o total
mensal arrecadado com as multas, e a quantidade de casas multadas.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, cont = 0;
	float multa = 0;

	while(num != 999)
	{
		scanf("%d", &num);

		if(num > 2 && num != 999)
		{
			cont++;
			multa += (num - 2) * 12.89;
		}
	}

	printf("%.2f\n%d\n", multa, cont);

	return 0;
}