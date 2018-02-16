#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int measure, i = 0, i2, i3, j;
	float money;

	scanf("%f %d", &money, &measure);

	char list[measure][27], aux[27], list_aux[measure][27];
	float price_aux[measure], swap, price[measure];

	for(i3 = 0 ; i3 < measure ; i3++)
	{
		scanf("%s %f", list_aux[i3], &price_aux[i3]);
	}

	for(i2 = 0 ; i2 < i3 ; i2++)
	{
		for(j = i2 + 1 ; j < i3 ; j++)
		{
			if(price_aux[i2] > price_aux[j])
			{
				strcpy(aux, list_aux[i2]);
				strcpy(list_aux[i2], list_aux[j]);
				strcpy(list_aux[j], aux);
				swap = price_aux[i2];
				price_aux[i2] = price_aux[j];
				price_aux[j] = swap;
			}
		}
	}

	while(money - price_aux[i] >= 0 && i < measure)
	{
		strcpy(list[i], list_aux[i]);
		price[i] = price_aux[i];
		money -= price[i];
		i++;
	}

	for(i2 = 0 ; i2 < i ; i2++)
	{
		for(j = i2 + 1 ; j < i ; j++)
		{
			if(strcmp(list[i2], list[j]) > 0)
			{
				strcpy(aux, list[i2]);
				strcpy(list[i2], list[j]);
				strcpy(list[j], aux);
				swap = price[i2];
				price[i2] = price[j];
				price[j] = swap;
			}
		}
	}

	for (i2 = 0 ; i2 < i ; i2++)
	{
		printf("%s %.2f\n", list[i2], price[i2]);
	}

	printf("%.2f", money);

	return 0;
}