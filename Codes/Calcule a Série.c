#include <stdio.h>
#include <stdlib.h>

void calcSerie(int a)
{
	int i, j, num = 0, den = 0;
	double num2 = 0, den2 = 0, total[a], sum = 0;

	for(i = 0 ; i < a ; i++)
	{
		if(i == a - 1)
		{
			printf("%d/%d", num += 1, den += 3);
		}

		else
		{
			printf("%d/%d + ", num += 1, den += 3);
		}
	}

	for(j = 0 ; j < a ; j++)
	{
		num2 += 1;
		den2 += 3;
		total[j] = num2 / den2;
		sum += total[j];
	}

	printf("\n%.2lf", sum);
}

int main()
{
	int num;

	scanf("%d", &num);

	if(num == 0)
	{
		printf("0.0\n");
	}

	else
	{
		calcSerie(num);
	}	

	return 0;
}