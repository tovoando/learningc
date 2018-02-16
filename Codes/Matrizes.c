#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, n, m;

	scanf("%d%d", &n, &m);

	while(n != 0 || m != 0)
	{

		if(n == 0 || m == 0)
		{
			printf("0.00\n");
		}

		else
		{
			float matrix[n][m], k = 1, t = 0, a = 0, b = 0, c = 0, d = 0, x = 0, y = 0, expression;

			for(i = 0 ; i < n ; i++)
			{
				for(j = 0 ; j < m ; j++)
				{
					matrix[i][j] = k++;
				}
			}

			for(i = 0 ; i < n ; i++)
			{
				for(j = 0 ; j < m ; j++)
				{
					t += matrix[i][j]; //somo todos os elementos da matriz

					if(j == 0)
					{
						a += matrix[i][j]; //somo os elementos da primeira coluna
					}

					if(j == m - 1)
					{
						b += matrix[i][j];  //somo os elementos da ultima coluna
					}

					if(i == 0)
					{
						c += matrix[i][j]; //somo os elementos da primeira linha
					}

					if(i == n - 1)
					{
						d += matrix[i][j]; //somo os elementos da ultima linha
					}

					if(i == j)
					{
						x += matrix[i][j]; //somo os elementos da diagonal "00"
					}

					if(j == m - n + i)
					{
						y += matrix[i][j]; //somo os elementos da diagonal "nm"
					}
				}
			}

			expression = (t - (x + y) + (a * b) - (c * d)) / (n * m);
			
			printf("%.2f\n", expression);
		}

		scanf("%d%d", &n, &m);
	}

	return 0;
}