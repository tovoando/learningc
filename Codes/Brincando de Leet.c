#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define DEBUG if(0)

int main()
{
	int i, len, count = 0, countWord = 0;
	char string[200];

	scanf(" %[^\n]", string);

	len = strlen(string); //tamanho da string

	DEBUG
	{
		printf("%d\n", len);
	}

	for(i = 0 ; i < len ; i++) //passo a string inteira para minusculo
	{
		string[i] = tolower(string[i]);
	}

	for(i = 0 ; i < len ; i++) //busco se existe numero na string
	{
		if(string[i] >= 48 && string[i] <= 57)
		{
			count++;
		}
	}

	for(i = len - 1 ; i >= 0 ; i--)
	{
		DEBUG
		{
			printf("%c", string[i]);
		}
	}

	if(count > 0 || string[0] == '\0') //se houver numero ou string vazia, ja imprimo a mensagem
	{
		printf("numeros\n0\n");
	}

	else
	{
		for(i = len - 1 ; i >= 0 ; i--) //substituo os simbolos pelas letras e imprimo
		{
			if(string[i] == 'a')
			{
				string[i] = '@';
				countWord++;
			}

			else if(string[i] == 'e')
			{
				string[i] = '3';
				countWord++;
			}

			else if(string[i] == 'i')
			{
				string[i] = '1';
				countWord++;
			}

			else if(string[i] == 'o')
			{
				string[i] = '0';
				countWord++;
			}

			else if(string[i] == 't')
			{
				string[i] = '7';
				countWord++;
			}

			else if(string[i] == 's')
			{
				string[i] = '5';
				countWord++;
			}

			printf("%c", string[i]);
		}

		printf("\n%d", countWord); //imprimo quantas letras foram modificadas
	}

	return 0;
}