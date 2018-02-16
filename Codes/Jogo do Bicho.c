#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long int n, m, tag1, tag2;

	long double v;

	scanf("%Lf %lld %lld", &v, &n, &m);

	while(m || n || v)
	{
		if(m > 100)
		{
			tag2 = m % 100;
		}

		else
		{
			tag2 = m;
		}

		if(n > 100)
		{
			tag1 = n % 100;
		}

		else
		{
			tag1 = n;
		}

		if(tag1 % 4 == 0)
		{
			if(tag1 == 0)
			{
				tag1 = 25;
			}

			else
			{
				tag1 = tag1 / 4;
			}
		}

		else
		{
			tag1 = tag1 / 4;
			++tag1;
		}

		if(tag2 % 4 == 0)
		{
			if(tag2 == 0)
			{
				tag2 = 25;
			}
			else
			{
				tag2 = tag2 / 4;
			}
		}

		else
		{
			tag2 = tag2 / 4;
			++tag2;
		}


		if(n % 10000 == m % 10000)
		{
			printf("%.2Lf\n", v * 3000.0);
		}

		else if(n % 1000 == m % 1000 )
		{
			printf("%.2Lf\n", v * 500.0);
		}

		else if(n % 100 == m % 100)
		{
			printf("%.2Lf\n", v * 50.0);
		}

		else if(tag1 == tag2)
		{
			printf("%.2Lf\n", v * 16.0);
		}

		else
		{
			printf("0.00\n");
		}

		scanf("%Lf %lld %lld", &v, &n, &m);
	}

	return 0;
}