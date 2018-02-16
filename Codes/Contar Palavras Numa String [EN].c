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

int main()
{
	int i, j, n = 0, flag, tamString;
	char string[500], stringFinal[500];
	char remove[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ', '.'};

		scanf(" %[^\n]", string);
		
		tamString = strlen(string);

		for(i = 0 ; i < tamString  ; i++)
		{
			flag = 0;

			for(j = 0 ; j < 54 ; j++)
			{

				if(string[i] == remove[j])
				{
					flag = 1;
					break;
				}
			}

			if(flag == 1)
			{
				stringFinal[n] = string[i];
				n++;
			}
		}

		printf("%d", count(stringFinal));

	return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
{

	int i, flag = 0, total = 0;
	char string[500];

	fgets(string, 51, stdin);

		for(i = 0 ; string[i] ; i++)
		{
			if(!flag && string[i] != ' ' && string[i] != '.' && string[i] >= 65 && string[i] <= 122)
			{
				flag = 1;
				total++;
			}

			else if(flag && string[i] == ' ')
			{
				flag=0;
			}
		}

		printf("%d\n", total);

	return 0;
}
*/