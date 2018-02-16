/*O programa abaixo (exm82a.c) mostra na tela o conte�do de um arquivo de caracteres.
Observe-se que a opera��o consiste apenas em ler sequencialmente os caracteres do arquivo e
escrev�-los em seguida:*/

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
	c = getc(p); //tenta ler um caract do arquivo
	while(!feof(p)) //enquanto n�o for o fim do arquivo...
	{
		putchar(c); //...mostra o caractere lido
		c = getc(p); //l� o pr�ximo caractere
	}
	fclose(p);
	return 0;
}

/*O programa acima usa a fun��o feof() para verificar a chegada ao fim do arquivo ap�s cada
leitura. Essa fun��o retorna um n�mero diferente de zero (�verdadeiro�, portanto) quando encontra
o fim do arquivo (seja de texto ou bin�rio).*/