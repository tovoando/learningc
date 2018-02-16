/*Em particular, no caso de arquivo de texto, como o
�ltimo caractere � o EOF, este pode ser considerado tal como na seguinte vers�o (exm82b.c):*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char nomearq[30], c;
	FILE *p;
	printf("Nome do arquivo a ser visualizado: ");
	gets(nomearq);
	if((p = fopen(nomearq, "r")) == NULL)
	{
		printf("Erro na abertura de '%s'\n",nomearq);
		exit(0);
	}
	c = getc(p); //tenta ler um caractere do arquivo
	while(c != EOF) //enquanto c n�o for a marca do fim do arquivo...
	{
		putchar(c); //...mostra o caractere lido
		c = getc(p); //l� o pr�ximo caractere
	}
	fclose(p);
	return 0;
}