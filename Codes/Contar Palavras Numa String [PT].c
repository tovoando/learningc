#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count(char string[])
{
	int i = 1;

		if(strtok(string, " \t") == NULL)
		{
			return 0;
		}

		while(strtok(NULL, " \t"))
		{
			i++;
		}

	return i;
}

	/*
	1. strtok(s, " \t") devolve a primeira palavra da string s
	2. strtok(NULL, " \t") devolve a segunda palavra
	3. enquanto continuar chamando (ate a string acabar) ela devolve as proximas palavras
	4. quando o strtok devolver NULL significa que acabou a string
	5. \t garante que os delimitadores sao espacos e tabs
	*/

int main()
{
	char string[500];

		scanf(" %[^\n]", string);

		printf("%d", count(string));

	return 0;
}