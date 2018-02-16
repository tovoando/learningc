#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, tam, cont = 0, flag = 0;
	char string[100];

	scanf("%s", string);
	tam = strlen(string);

		for (i = 1 ; i < tam ; i++)
		{
			if(string[i - 1] == 'V' && string[i] == 'K') //conta quantos VK tem
			{
				cont++;
				i++;
			}

			else if(string[i - 1] == 'V' && string[i] == 'V' && string[i + 1] != 'K') //analisa quando tem VVK
			{
				flag = 1;
				i++;
			}

			else if(string[i - 1] == 'K' && string[i] == 'K') //analisa quando tem VKK
			{
				flag = 1;
				i++;
			}
		}

		printf("%d\n", cont + flag);

	return 0;
}