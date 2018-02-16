#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, tam;
	char string[15], cont;
	
	scanf("%s", string);
	tam = strlen(string);

		for (i = 0 ; i < (tam / 2) ; i++) //for com metade do tamanho da string
		{
			if(string[i] == string[tam - 1 - i]) //conferir as letras iniciais com as finais e ir contando
			{
				cont++;
			}
		}

		if(tam % 2 == 0) //caso o tamanho seja par
		{
			if(cont == ((tam / 2) - 1)) //mike e obrigado a mudar um caractere, logo o contador tem que ser -1
			{
				printf("YES\n");
			}

			else
			{
				printf("NO\n");
			}
		}

		else //caso o tamanho seja impar
		{
			if(cont == (tam / 2) || cont == ((tam / 2) - 1)) //nesse caso pode dar igual, pois se for impar pode ser automaticamente palindromo, mesmo mudando uma letra
			{
				printf("YES\n");
			}

			else
			{
				printf("NO\n");
			}
		}

	return 0;
}