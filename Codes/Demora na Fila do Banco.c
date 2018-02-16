#include <stdio.h>
#include <stdlib.h>

int freeCashier(int *cashier, int qtdCashier)
{
	int smallTime = cashier[0];
	int i, position = 0;

	for(i = 1 ; i < qtdCashier ; i++)
	{
		if(smallTime > cashier[i])
		{
			position = i;
			smallTime = cashier[i];
		}
	}

	return position;
}

int main()
{
	int c, n;
	int t, d;
	int i, answer = 0;

	scanf("%d %d", &c, &n);

	int *cashier = calloc(c, sizeof(int));

	for(i = 0 ; i < n ; i++)
	{
		scanf("%d %d", &t, &d);

		int free = freeCashier(cashier, c);

		if((cashier[free] - t) > 20)
		{
			answer++;
		}

		if(cashier[free] < t)
		{
			cashier[free] = t;
		}

		cashier[free] += d;
	}

	printf("%d\n", answer);

	return 0;
}