#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, matrix[3][3], delta, sumDiagonal = 0, sumAll = 0, difDiagonal;
	double sumPositive = 0, countPositive = 0, mediaPositive;

	for(i = 0 ; i < 3 ; i++)
	{
		for(j = 0 ; j < 3 ; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}

	int small = matrix[0][0]; //declaro o menor
	int big = matrix[0][0]; //declaro o maior

	for(i = 0 ; i < 3 ; i++)
	{
		for(j = 0 ; j < 3 ; j++)
		{
			if(matrix[i][j] > 0) //coleto os valores positivos e conto
			{
				sumPositive += matrix[i][j];
				countPositive++;
			}

			if(matrix[i][j] < small) //acho o menor valor
			{
				small = matrix[i][j];
			}

			if(matrix[i][j] > big) //acho o maior valor
			{
				big = matrix[i][j];
			}

			sumAll += matrix[i][j]; //somo todos os valores

			if(i == j) //somo a diagonal principal
			{
				sumDiagonal += matrix[i][j];
			}
		}
	}

	mediaPositive = sumPositive / countPositive; //media dos numeros positivos

	if(big % 2 == 0) //encontro delta caso seja par
	{
		delta = 1;
	}

	else //encontro delta caso seja impar
	{
		delta = 0;
	}

	difDiagonal = sumAll - sumDiagonal; //diferenca da soma total e diagonal principal

	printf("%.2lf %d %d %d", mediaPositive, small, delta, difDiagonal);

	return 0;
}