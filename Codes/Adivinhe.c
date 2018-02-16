#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void unit(char *a, char *b, int *E, int *B)
{
	int i, j;
	char aux_a[8], aux_b[8];

	strcpy(aux_a, a);
	strcpy(aux_b, b);

	for(i = 0 ; b[i] ; i++)
	{
		if(a[i] == b[i])
		{
			(*E)++;
			aux_a[i]  = '.';
			aux_b[i] = '&';
		}
	}

	for(i = 0 ; b[i] ; i++)
	{
		for(j = 0 ; a[j] ; j++)
		{
			if(aux_b[i] == aux_a[j])
			{
				(*B)++;
				aux_a[j]  = '.';
				aux_b[i] = '&';
				break;
			}
		}
	}
}

void stringEnd(char *a, int len)
{
	int i;

	for(i = 0 ; i < len ; i++)
	{
		a[i] = '0';
	}
	
	a[i] = '\0';
}

int main()
{
	int i;
	int E = 0, B = 0;
	int games, len;
	char *pass, *shot, *comparator;

	pass = malloc(1);
	shot = malloc(1);
	comparator = malloc(1);

	scanf("%d", &games);

	for(i = 0 ; i < games ; i++)
	{
		scanf("%d",&len);

		pass = realloc(pass, len);
		shot = realloc(shot, len);
		comparator = realloc(comparator, len);

		stringEnd(comparator, len);

		scanf("%s", pass);

		while(1)
		{
			E = 0;
			B = 0;

			scanf("%s", shot);

			if(strcmp(shot, pass) == 0)
			{
				printf("(%d,0)\n", len);
				break;
			}

			else if(strcmp(comparator, shot) == 0)
			{
				break;
			}

			unit(pass, shot, &E, &B);
			printf("(%d,%d)\n", E, B);
		}
	}

	return 0;
}