/*O programa abaixo (exm82a.c) mostra na tela o conteúdo de um arquivo de caracteres.
Observe-se que a operação consiste apenas em ler sequencialmente os caracteres do arquivo e
escrevê-los em seguida:*/

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
	while(!feof(p)) //enquanto não for o fim do arquivo...
	{
		putchar(c); //...mostra o caractere lido
		c = getc(p); //lê o próximo caractere
	}
	fclose(p);
	return 0;
}

/*O programa acima usa a função feof() para verificar a chegada ao fim do arquivo após cada
leitura. Essa função retorna um número diferente de zero (“verdadeiro”, portanto) quando encontra
o fim do arquivo (seja de texto ou binário).*/