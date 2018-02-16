#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, tam, countNoVowel = 0;
	char word[50];
	char vowel[] = {'a', 'e', 'i', 'o', 'u'};

	scanf("%s", &word);

	tam = strlen(word);
	word[0] = tolower(word[0]);

	if(tam == 1)
	{
		for(i = 0 ; i < 5 ; i++)
		{
			if(word[0] == vowel[i])
			{
				printf("Eh vogal");
			}

			else
			{
				countNoVowel++;
			}
		}

		if(countNoVowel >= 5)
		{
			printf("Nao eh vogal");
		}
	}

	else
	{
		printf("1 caractere, por favor!");
	}

	return 0;
}