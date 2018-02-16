#include <stdio.h>
#include <stdlib.h>

int main()
{
	int o, n, m, dice;

	scanf("%d %d %d", &n, &m, &o);
	
	int i, j, k, board[n], until;
	int frog[m];

	for(i = 0 ; i < m ; i++)
	{
		frog[i] = 0;
	}

	for(i = 0 ; i < n ; i++)
	{
		scanf("%d", &board[i]);
	}

	for(i = 0 ; i < o ; i++)
	{
		for(j = 0 ; j < m ; j++)
		{
			scanf("%d", &dice);

			for(k = 0 ; k < dice ; k++)
			{
				frog[j]++;

				if(frog[j] > n - 1)
				{
					frog[j] = 0;
				}
			}

			until = board[frog[j]];

			if(until > 0)
			{
				for(k = 0 ; k < until ; k++)
				{
					frog[j]++;

					if(frog[j] > n - 1)
					{
						frog[j] = 0;
					}
				}
			}

			else if(until < 0)
			{
				until *= -1;

				for(k = 0 ; k < until ; k++)
				{
					frog[j]--;

					if(frog[j] < 0)
					{
						frog[j] = n - 1;
					}
				}
			}
		}
	}

	for(i = 0 ; i < m ; i++)
	{
		printf("%d\n", frog[i]);
	}

	return 0;
}