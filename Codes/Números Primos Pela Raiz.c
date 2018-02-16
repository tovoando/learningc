#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, sequency, found = 0;

	scanf("%d", &sequency);

	for(j = 2 ; j <= sequency ; j++)
	{
		for(i = 2 ; i * i <= j ; i++)
		{
			if(j % i == 0 || j % 2 == 0)
			{
				found = 1;
				break;
			}
		}

		if(j >= 2)
		{
			if (found == 0)
			{
				printf("%d\n", j);
			}
		}

		found = 0;
	}
	
	return 0;
}