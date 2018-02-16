#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n;
	int i, j, k, l, m;
	int flag = 1, single = 1, t = 0, u = 0;

	scanf("%d", &n);
	
	int *vector = malloc (n*sizeof(int));

	for(i = 0 ; i < n ; i++)
	{
		scanf("%d", &vector[i]);

		if(vector[i] < 0)
		{
			flag = 0;

			printf("-1");
			
			break;
		}
	}

	int aux = pow(n, 3);
	int *sum = malloc(aux*sizeof(int));

	if(flag)
	{
		for(i = 0 ; i < n - 2 ; i++)
		{
			for(j = i + 1 ; j < n - 1 ; j++)
			{
				for(k = j + 1 ; k < n ; k++)
				{
					sum[t] = vector[i] + vector[j] + vector[k];
					t++;
				}
			}
		}

		for(i = 0 ; i < n - 2 ; i++)
		{
			for(j = i + 1 ; j < n - 1 ; j++)
			{
				for(k = j + 1 ; k < n ; k++)
				{
					for(l = u, m = 0 ; m < t ; m++)
					{
						if(sum[l] == sum[m] && m != l)
						{
							single = 0;
							break;
						}
					}

					if(single)
					{
						printf("{%d,%d,%d} = %d\n", vector[i], vector[j], vector[k], sum[u]);
					}

					single = 1;
					u++;
				}
			}
		}
	}

	return 0;
}