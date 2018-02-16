#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, m, field = 1, i, j;

	while(scanf("%d %d", &n, &m))
	{
		if(n == m && m == 0)
		{
			break;
		}

		char tab[n][m];

		for(i = 0 ; i < n ; i++)
		{
			for(j = 0 ; j < m ; j++)
			{
				scanf(" %c", &tab[i][j]);

				if(tab[i][j] != '*')
				{
					tab[i][j] = '0';
				}
			}
		}

		for(i = 0 ; i < n ; i++)
		{
			for(j = 0 ; j < m ; j++)
			{
				if(tab[i][j] == '*')
				{
					if(tab[i - 1][j] != '*' && i - 1 >= 0)
					{
						tab[i - 1][j]++;
					}

					if(tab[i + 1][j] != '*' && i + 1 < n)
					{
						tab[i + 1][j]++;
					}

					if(tab[i - 1][j - 1] != '*' && i - 1 >= 0 && j - 1 >= 0)
					{
						tab[i - 1][j - 1]++;
					}

					if(tab[i - 1][j + 1] != '*' && i - 1 >= 0 && j + 1 < m)
					{
						tab[i - 1][j + 1]++;
					}

					if(tab[i + 1][j - 1] != '*' && i + 1 < n  && j - 1 >= 0)
					{
						tab[i + 1][j - 1]++;
					}

					if(tab[i + 1][j + 1] != '*' && i + 1 < n  && j + 1 < m)
					{
						tab[i + 1][j + 1]++;
					}

					if(tab[i][j - 1] != '*' && j - 1 >= 0)
					{
						tab[i][j - 1]++;
					}

					if(tab[i][j + 1] != '*' && j + 1 < m)
					{
						tab[i][j + 1]++;
					}
				}
			}
		}

		printf("Field #%d:\n", field);
		
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < m; j++)
			{
				printf("%c", tab[i][j]);
			}

			puts("");
		}

		puts("");

		field++;
	}

	return 0;
}