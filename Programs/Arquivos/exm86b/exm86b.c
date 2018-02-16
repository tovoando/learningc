/*B) Na versão abaixo (exm86b.c), analogamente ao Exemplo 8.4b, um vetor é realocado
sob demanda. A função CarregaLista() foi adaptada para ler arquivo binário:*/

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
	int n = 0;
	VetorAluno L, L_aux;
	Aluno aux;
	rewind(arq);
	leAlunoBin(arq, &aux);
	L_aux = (VetorAluno)calloc(1, sizeof(Aluno));
	while (!feof(arq) && L_aux!=NULL)
	{
		n++;
		L = L_aux;
		L[n-1] = aux;
		leAlunoBin(arq, &aux);
		L_aux = (VetorAluno)realloc(L, (n+1)*sizeof(Aluno));
		if(L_aux==NULL)
		{
			puts("Nao ha mais espaco na memoria!");
		}
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