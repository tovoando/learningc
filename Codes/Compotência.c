#include <stdio.h>
#include <stdlib.h>

int mod(int x, unsigned int y, int p)
{
	int res = 1;

	x = x % p;

	while(y > 0)
	{
		if(y & 1)
		{
			res = (res * x) % p;
		}

		y = y >> 1; // y = y / 2
		x = (x * x) % p;  
	}

	return res;
}

int main()
{
	int n1, n2;
	double var1, var2;
	
	while(scanf("%d%d", &n1, &n2) != EOF)
	{
		var1 = (double)mod(n1, n1, 100) / 100 - (int)mod(n1, n1, 100) / 100;
		var2 = (double)mod(n2, n2, 100) / 100 - (int)mod(n2, n2, 100) / 100;

		if(var1 > var2)
		{
			printf("%d\n", n1);
		}

		else if(var1 == var2)
		{
			printf("0\n");
		}

		else
		{
			printf("%d\n", n2);
		}
	}

	return 0;
}