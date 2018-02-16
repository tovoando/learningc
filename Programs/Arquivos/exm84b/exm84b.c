/*Considere-se o seguinte problema: Ler os dados armazenados em um arquivo do tipo
texto, onde cada linha do arquivo cont�m o nome e a m�dia de um aluno. Em seguida,
disponibilizar os dados para consulta, da seguinte maneira: � digitado um nome ou uma sequ�ncia
com os primeiros caracteres do nome. Em seguida, s�o exibidos os dados de um ou mais alunos
cujos nomes come�am com a sequ�ncia digitada. � mostrado tamb�m o resultado "aprov.", ou
"reprov.", sabendo-se que a m�dia para aprova��o � 5.5. A consulta se encerra ao ser digitado um
nome em branco.
Temos a seguir duas vers�es de solu��o. Ambas tentam carregar todos os dados do
arquivo na mem�ria, no entanto, a primeira determina inicialmente o total de alunos. A segunda
passa a conhecer essa quantidade ao longo do processamento. Isto �, carrega os dados linha por
linha enquanto houver espa�o na mem�ria.
B) Vers�o exm84b.c � Nesta vers�o, n�o se conhece previamente a quantidade de linhas
do arquivo. Um vetor din�mico tamb�m � criado, mas � realocado a cada leitura de uma nova linha
do arquivo de entrada. Em rela��o � vers�o anterior, apenas a fun��o CarregaLista() deve
receber nova implementa��o:*/

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
	int n = 0;
	VetorAluno L, L_aux;
	Aluno aux;
	rewind(arq);
	leAlunoTxt(arq, &aux);
	L_aux = (VetorAluno)calloc(1, sizeof(Aluno));
	while (!feof(arq) && L_aux!=NULL)
	{
		n++;
		L = L_aux;
		L[n-1] = aux; //O aluno lido ser� o �ltimo da lista
		leAlunoTxt(arq, &aux); //Leitura do pr�ximo aluno
		L_aux = (VetorAluno)realloc(L, (n+1)*sizeof(Aluno));    //Tenta
									 //acrescentar o espa�o de um aluno
		if(L_aux==NULL)
		{
			puts("Nao ha mais espaco na memoria!");
		}
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