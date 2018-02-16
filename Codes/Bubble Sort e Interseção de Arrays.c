/*BUBBLE SORT*/

void bubbleSort(int vector[], int size)
{
	int i, j, aux;

	for(i = 0 ; i < size ; i++)
	{
		for(j = 0 ; j < size - 1 ; j++)
		{
			if(vector[j] > vector[j + 1])
			{
				aux = vector[j];
				vector[j] = vector[j + 1];
				vector[j + 1] = aux;
			}
		}
	}
}

/*INTERSECAO DE ARRAYS*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int size, i, j, k = 0, aux = 0;

	scanf("%d", &size);

	int array_1[10000], array_2[10000], intersection[10000], new_intersection[10000];

		for(i = 0 ; i < size ; i++)
		{
			scanf("%d", &array_1[i]);
		}

		for(i = 0 ; i < size ; i++)
		{
			scanf("%d", &array_2[i]);
		}

		for(j = 0 ; j < size ; j++)
		{
			for(i = 0 ; i < size ; i++)
			{
				if(array_1[j] == array_2[i])
				{
					intersection[j] = array_1[j];
				}
			}
		}

		for(i = 0 ; i < j ; i++)
		{
			if(intersection[i] != 0)
			{
				new_intersection[k] = intersection[i];
				k++;
			}
		}

		for(i = 0 ; i < k ; i++)
		{
			for(j = 0 ; j < k - 1 ; j++)
			{
				if(new_intersection[j] > new_intersection[j + 1])
				{
					aux = new_intersection[j];
					new_intersection[j] = new_intersection[j + 1];
					new_intersection[j + 1] = aux;
				}
			}
		}

		for(i = 0 ; i < k ; i++)
		{
			if(new_intersection[i] != new_intersection[i + 1])
			{
				printf("%d\n", new_intersection[i]);
			}
		}

	return 0;
}