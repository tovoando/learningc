#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b)
{
	if(b == 0)
	{
		return a;
	}

	else
	{
		return mdc(b, a % b);
	}
}

int mmc(int a, int b)
{
	return a * b / mdc(a, b);
}

/*int mmc(int num1, int num2)
{
	int a = num1, b = num2, resto;

	do
	{
		resto = a % b;
		a = b;
		b = resto;
	}

	while (resto != 0);

	return (num1 * num2) / a;
}*/

int main()
{
	int i, loop;

	printf("Digite a repeticao:");
	scanf("%d", &loop);

	int number1[loop], number2[loop];

	for(i = 0 ; i < loop ; i++)
	{
		printf("Digite os numeros para calcular o MDC e MMC:");
		scanf("%d%d", &number1[i], &number2[i]);

		printf("MDC(%d, %d) = %d\n", number1[i], number2[i], mdc(number1[i], number2[i]));
		printf("MMC(%d, %d) = %d\n", number1[i], number2[i], mmc(number1[i], number2[i]));
	}
	
	return 0;
}