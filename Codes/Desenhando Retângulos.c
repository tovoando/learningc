#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int i, j, h, w, p;
	int eX, eY, dX, dY;

	scanf("%d %d %d", &h, &w, &p);
	scanf("%d %d %d %d", &eX, &eY, &dX, &dY);

	for(i = 0 ; i <= h ; i++) //tamanho do retangulo sera sempre 1 a mais que o tamanho dado
	{
		for(j = 0 ; j <= w ; j++) //tamanho do retangulo será sempre 1 a mais que o tamanho dado
		{
			if(p) //retangulo preenchido (1)
			{
				if(i >= eX && i <= dX && j <= eY && j >= dY)
				{
					printf("*"); //a linha sera preenchida com valores entre eX e dX, e a coluna entre dY e eY
				}

				else
				{
					printf(".");
				}
			}

			else //retangulo vazio (0)
			{
				if(((i == eX || i == dX) && j <= eY && j >= dY) || ((j == eY || j == dY) && i >= eX && i <= dX))
				{
					printf("*"); //nesse caso so preenche na linha quando for igual aos cantos, do mesmo modo na coluna
				}

				else
				{
					printf(".");
				}
			}
		}

		printf("\n");
	}

	return 0;
}