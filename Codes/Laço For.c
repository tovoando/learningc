#include <stdio.h>
#include <stdlib.h>

int main()
{

	int i;

		for(i = 0 ; i <= 10 ; i++) //conta de 0 a 10
		{
			printf("%d\n", i);
		}

		for(i = 10 ; i >= 0 ; i--) //conta de 10 a 0
		{
			printf("%d\n", i);
		}

		for(i = 0 ; i <= 10 ; i += 2) //conta de 0 a 10 de 2 em 2
		{
			printf("%d\n", i);
		}

		for(i = 10 ; i >= 0 ; i -= 2) //conta de 10 a 0 de 2 em 2
		{
			printf("%d\n", i);
		}

	return 0;
}