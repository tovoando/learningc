#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, consultas, x0, y0, x, y;

	while(scanf("%d%d%d", &consultas, &x0, &y0))
	{
		if(consultas == 0)
		{
			break;
		}

		for(i = 0; i < consultas; i++)
		{
			scanf("%d%d", &x, &y);

			if(x == x0 || y == y0)
			{
				printf("divisa\n");
			}

			else if(x > x0 && y > y0)
			{
				printf("NE\n");
			}

			else if(x > x0 && y < y0)
			{
				printf("SE\n");
			}

			else if(x < x0 && y > y0)
			{
				printf("NO\n");
			}

			else
			{
				printf("SO\n");
			}
		}
	}

	return 0;
}