/*Considere-se o seguinte problema: Ler os dados armazenados em um arquivo do tipo
texto, onde cada linha do arquivo contém o nome e a média de um aluno. Em seguida,
disponibilizar os dados para consulta, da seguinte maneira: é digitado um nome ou uma sequência
com os primeiros caracteres do nome. Em seguida, são exibidos os dados de um ou mais alunos
cujos nomes começam com a sequência digitada. É mostrado também o resultado "aprov.", ou
"reprov.", sabendo-se que a média para aprovação é 5.5. A consulta se encerra ao ser digitado um
nome em branco.
Temos a seguir duas versões de solução. Ambas tentam carregar todos os dados do
arquivo na memória, no entanto, a primeira determina inicialmente o total de alunos. A segunda
passa a conhecer essa quantidade ao longo do processamento. Isto é, carrega os dados linha por
linha enquanto houver espaço na memória.
A) Versão exm84a.c - As linhas do arquivo são contadas inicialmente e, em seguida, um
vetor é alocado dinamicamente com a quantidade posições igual à de linhas.*/

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
void leAlunoTxt(FILE *arq, Aluno *a)
{
	fgets(a->nome,TNome,arq);
	fscanf(arq,"%f",&a->media);
	getc(arq);
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
	int i, n = 0;
	Aluno aux;
	VetorAluno L;
	//lê todo arquivo para det. a quantidade de alunos
	rewind(arq); //garante posição do ponteiro no início do arq.
	leAlunoTxt(arq, &aux);
	while(!feof(arq))
	{
		n++;
		leAlunoTxt(arq, &aux);
	}
	rewind(arq); //reposiciona ponteiro no início do arq.
	L = alocaVetorAluno(n);
	for(i=0; i<n; i++) //preenche finalmente o vetor L
	{
		leAlunoTxt(arq, &L[i]);
	}
	*qt = n; //comunica o tamanho do vetor
	return L; //retorna o vetor
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
/* -------------------------------------------------*/
int main()
{
	int qtd;
	FILE *arqAl = AbreArquivo("notas.txt","r");
	VetorAluno lista = CarregaLista(arqAl,&qtd);
	ConsultaLista(lista,qtd);
	putchar('\n');
	free(lista);
	fclose(arqAl);
	return 0;
}