/*A) O programa abaixo (exm86a.c) é uma reescrita do Exemplo 8.4a (contando
previamente a quantidade de alunos gravados no arquivo) usando desta vez o arquivo binário
gerado no Exemplo 8.5.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MEDIA_APROV 5.5
#define TNome 20
/* Aluno--------------------------------------------*/
typedef struct{
	char  nome[TNome];
	float media;
} Aluno;
void leAlunoBin(FILE *arq, Aluno *a)
{
	fread(a, sizeof(Aluno),1,arq);
}
void escreveAluno(Aluno *a)
{
	printf("\nAluno: %s, media: %.1f", a->nome, a->media);
}
int VerificaAprov(Aluno a)
{
	return(a.media >= MEDIA_APROV); //1-aprov.,0-reprov.
}
/* VetorAluno --------------------------------------*/
typedef Aluno* VetorAluno;
VetorAluno alocaVetorAluno(int n)
{
	VetorAluno L = (VetorAluno)calloc(n, sizeof(Aluno));
	if(L == NULL)
	{
		puts("Nao ha espaco na memoria!");
		exit(0);
	}
	return L;
}
VetorAluno CarregaLista(FILE *arq, int *qt)
{
	int i, n;
	Aluno aux;
	VetorAluno L;
	//det. a quantidade de alunos contando o num. de registros
	fseek(arq,0,2); //posiciona o ponteiro do arquivo no fim deste
	n = (int)(ftell(arq)/sizeof(Aluno));//det a qtde de reg Aluno
	rewind(arq); //reposiciona o pont do arquivo
	L = alocaVetorAluno(n);
	for(i=0; i<n; i++) //preenche finalmente o vetor L
	{
		leAlunoBin(arq, &L[i]);
	}
	*qt = n;
	return L;
}
void ConsultaLista(VetorAluno L, int qt)
{
	int i, existe;
	char nome[TNome], aux[TNome];
	puts("------------------");
	printf("Consulta Aluno:\nNome (ENTER-encerra)-> ");
	gets(nome);
	while(strlen(strupr(nome))!=0)
	{
		existe = 0;
		for (i=0; i<qt; i++)
		{
			strcpy(aux,L[i].nome);
			aux[strlen(nome)]='\0';
			if(strcmp(nome,strupr(aux))==0)
			{
				existe = 1;
				escreveAluno(&L[i]);
				printf(" (%s)",(VerificaAprov(L[i]) ? "Apr.":"Repr."));
			}
		}
		if(!existe)
		{
			printf("--> Aluno inexistente!");
		}
		putchar('\n');
		printf("\nConsulta Aluno:\nNome (ENTER-encerra)-> ");
		gets(nome);
	}
}
/* arquivo-------------------------------------------*/
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
/* --------------------------------------------------*/
int main()
{
	int qtd;
	FILE *arqAl = AbreArquivo("result.dat","rb");
	VetorAluno lista = CarregaLista(arqAl,&qtd);
	ConsultaLista(lista,qtd);
	putchar('\n');
	free(lista);
	fclose(arqAl);
	return 0;
}