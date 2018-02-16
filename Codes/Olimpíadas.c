#include <stdio.h>
#include <stdlib.h>

struct countries
{
	int gold;
	int silver;
	int bronze;
};

void swap(float *v1, float *v2)
{
	float aux = *v1;
	*v1 = *v2;
	*v2 = aux;
}

int main()
{
	int i, j, n, m, g, s, b;

	scanf("%d %d", &n, &m);
	struct countries country[n];
	int placing[n];

	for(i = 0 ; i < n ; i++)
	{
		placing[i] = i + 1;
	}

	for(i = 0 ; i < n ; i++)
	{
		country[i].gold = 0;
		country[i].silver = 0;
		country[i].bronze = 0;
	}

	for(i = 0 ; i < m ; i++)
	{
		scanf("%d %d %d", &g, &s, &b);

		country[g - 1].gold++;
		country[s - 1].silver++;
		country[b - 1].bronze++;
	}

	int proceed = 1;
	
	j = 0;

	while(proceed)
	{
		proceed = 0;
		j++;

		for(i = 0 ; i < n - j ; i++)
		{
			if(country[i].gold < country[i + 1].gold)
			{
				swap(&country[i].gold, &country[i + 1].gold);
				swap(&country[i].silver, &country[i + 1].silver);
				swap(&country[i].bronze, &country[i + 1].bronze);
				swap(&placing[i], &placing[i + 1]);
				proceed = 1;
			}

			else if(country[i].silver < country[i + 1].silver && country[i].gold == country[i + 1].gold)
			{
				swap(&country[i].gold, &country[i + 1].gold);
				swap(&country[i].silver, &country[i + 1].silver);
				swap(&country[i].bronze, &country[i + 1].bronze);
				swap(&placing[i], &placing[i + 1]);
				proceed = 1;
			}

			else if(country[i].bronze < country[i + 1].bronze && country[i].gold == country[i + 1].gold && country[i].silver == country[i + 1].silver)
			{
				swap(&country[i].gold, &country[i + 1].gold);
				swap(&country[i].silver, &country[i + 1].silver);
				swap(&country[i].bronze, &country[i + 1].bronze);
				swap(&placing[i], &placing[i + 1]);
				proceed = 1;
			}

			else if(country[i].gold == country[i + 1].gold && country[i].silver == country[i + 1].silver && country[i].bronze == country[i + 1].bronze)
			{
				if(placing[i] > placing[i + 1])
				{
					swap(&placing[i], &placing[i + 1]);
					proceed = 1;
				}
			}
		}
	}

	for(i = 0 ; i < n ; i++)
	{
		printf("%d\n", placing[i]);
	}

	return 0;
}