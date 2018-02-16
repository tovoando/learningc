/*Considere-se o seguinte problema: O arquivo do tipo texto “cand.txt” contém os dados
de candidatos e candidatas em um concurso, onde cada linha contém o nome (até 20 caracteres),
a altura e o sexo (‘M’ - masculino ou ‘F’ - feminino). Ler o arquivo dado e gravar os arquivos
“candMasc.txt” com os dados dos homens e “candFem.txt” com os das mulheres.
Finalmente, escrever na tela as quantidades e as médias de altura das mulheres e dos homens.
Temos então a solução seguinte (exm83.c):*/

#include <stdio.h>
#include <stdlib.h>
#define MEDIA_APROV 5.5
#define TNome 20
/* candidato ---------------------------------------*/
typedef struct
{
	char  nome[TNome];
	float altura;
	char sexo;
} Candidato;
void leCandTxt(FILE *arq, Candidato *c)
{
	fgets(c->nome,TNome,arq);
	fscanf(arq,"%f %c",&c->altura, &c->sexo);
	getc(arq); //lê e descarta o '\n' do fim da linha
}
void gravaCandTxt(FILE *arq, Candidato *c)
{
	fprintf(arq,"%s %.2f %c\n",c->nome,c->altura,c->sexo);
}
/* arquivo -----------------------------------------*/
FILE* AbreArquivo(char* identif, char* modo)
{
	FILE* p = fopen(identif, modo);
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
	int qM=0, qF=0;
	float sM=0, sF=0; //as médias serão sM/qM e sF/qF
	FILE *pE, *pM, *pF;
	Candidato aux;

	pE = AbreArquivo("cand.txt","r");
	pM = AbreArquivo("candMasc.txt","w");
	pF = AbreArquivo("candFem.txt","w");
	leCandTxt(pE, &aux);
	while(!feof(pE))
	{
		if(aux.sexo=='M')
		{
			qM++;
			sM += aux.altura;
			gravaCandTxt(pM, &aux);
		}
		else
		{
			qF++;
			sF += aux.altura;
			gravaCandTxt(pF, &aux);
		}
		leCandTxt(pE, &aux);
	}
	printf("Qtde de homens: %d\nQtde de mulheres: %d\n", qM,qF);
	if(qM)
	{
		printf("Media de altura dos homens: %.2f\n",sM/qM);
	}
	if(qF)
	{
		printf("Media de altura das mulheres: %.2f\n",sF/qF);
	}
	fclose(pE);
	fclose(pM);
	fclose(pF);
	return 0;
}

/*Obs.: Foi elaborada a função AbreArquivo(), aqui usada com o objetivo de reduzir o espaço do
código repetitivo (há três aberturas de arquivos).*/