#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int D, vf, vg;

	while(scanf("%d %d %d", &D, &vf, &vg))
	{
		if(D == -1 && vf == -1 && vf == -1)
		{
			break;
		}

		double tf = 12.00 / vf;
		double tg = sqrt(144.00 + D * D) / vg;

		if(tg <= tf)
		{
			printf("S\n");
		}

		else
		{
			printf("N\n");
		}
	}

	return 0;
}