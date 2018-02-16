#include <stdio.h>
#include <stdlib.h>

int cycleSize(int x)
{
	int cycle = 1;

	while(x != 1)
	{
		if(x % 2 == 0)
		{
			x = x / 2;
		}

		else
		{
			x = 3 * x + 1;
		}

		cycle++;
	}

	return cycle;
}

int maxCycle(int a, int b)
{
	int x, temp, max = 0;

	if(a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	for(x = a ; x <= b ; x++)
	{
		int currentCycle = cycleSize(x);

		if(currentCycle > max)
		{
			max = currentCycle;
		}
	}

	return max;
}

int main()
{
	int a, b;
	
	while(scanf("%d%d", &a, &b) != EOF)
	{
		printf("%d %d %d\n", a, b, maxCycle(a, b));
	}

	return 0;
}