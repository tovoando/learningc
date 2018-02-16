/*O programa abaixo (exm85.c) apenas lê o arquivo de alunos do Exemplo 8.4
(originalmente do tipo texto) e o regrava como arquivo binário.*/

#include <stdio.h>
#include <stdlib.h>
#define MEDIA_APROV 5.5
#define TNome 20
/* Aluno -------------------------------------------*/
typedef struct{
	char  nome[TNome];
	float media;
} Aluno;
void leAlunoTxt(FILE *arq, Aluno *a)
{
	fgets(a->nome,TNome,arq);
	fscanf(arq,"%f",&a->media);
	getc(arq);
}
void gravaAlunoBin(FILE *arq, Aluno *a)
{
	fwrite(a, sizeof(Aluno),1,arq);
}

/* arquivo------------------------------------------*/
FILE* AbreArquivo(char *identif, char *modo)
{
	FILE *p = fopen(identif, modo);
	if(p == NULL)
	{
		printf("Erro na abertura de '%s'\n",identif);
		exit(0);
	}
	return p;
}
/* -------------------------------------------------- */
int main()
{
	int qtd;
	Aluno aux;
	FILE *arqE, *arqS;
	arqE = AbreArquivo("notas.txt","r");
	arqS = AbreArquivo("result.dat","wb");
	printf("Gravando 'result.dat'...\n");
	leAlunoTxt(arqE, &aux);
	while(!feof(arqE))
	{
		gravaAlunoBin(arqS,&aux);
		leAlunoTxt(arqE, &aux);
	}
	fclose(arqE);
	fclose(arqS);
	return 0;
}
/* -------------------------------------------------- */