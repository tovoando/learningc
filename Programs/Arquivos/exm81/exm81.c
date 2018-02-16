/*O programa abaixo (exm81.c) tenta abrir um arquivo no modo texto dado pelo usuário. Se
não conseguir, aborta a execução do programa. Conseguindo abrir, fecha o mesmo em seguida.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char nomearq[30];
	FILE *p;
	printf("Nome do arquivo a ser aberto: ");
	gets(nomearq);
	if((p = fopen(nomearq, "r")) == NULL) //usa a fopen(), encerra se p==NULL
	{
		printf("Erro na abertura de '%s'\n",nomearq);
		exit(0);
	}
	printf("'%s' aberto com sucesso!\n", nomearq);
	printf("Agora, sendo fechado...\n");
	fclose(p);
	return 0;
}