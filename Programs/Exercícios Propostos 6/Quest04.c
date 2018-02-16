#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float salario(float x)
{
	if(x <= 600)
	{
		return 0;
	}

	else if(x > 600 && x <= 1200)
	{
		return x * 0.2;
	}

	else if(x > 1200 && x <= 2000)
	{
		return x * 0.25;
	}

	else
	{
		return x * 0.3;
	}
}

int main()
{
	float sal;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o valor do salário: ");
	
	while(scanf("%f", &sal) != EOF)
	{
		setlocale(LC_ALL,"Portuguese");
		printf("O valor de contribuição é de: R$ %.2f\n", salario(sal));

		setlocale(LC_ALL,"Portuguese");
		printf("Digite o valor do salário: ");
	}

	return 0;
}