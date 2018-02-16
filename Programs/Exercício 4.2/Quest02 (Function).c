#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

void toLower(char *s)
{
	const int size = strlen(s);
	int i;
	
	for(i = 0 ; i < size ; i++)
	{
		s[i] = (char) tolower(s[i]);
	}
}

void mamiferosMenu()
{
	char otherClass[100];
	
	setlocale(LC_ALL,"Portuguese");
	printf("Digite uma sub-classe (Bípede, Quadrúpede, Voadores ou Aquáticos): ");
	scanf("%[^\n]", otherClass);
	getchar();
	
	toLower(otherClass);
	
		if(!strcmp(otherClass, "bípede") || !strcmp(otherClass, "bÍpede"))
		{
			printf("Homem\n");
		}
		
		else if(!strcmp(otherClass, "quadrúpede") || !strcmp(otherClass, "quadrÚpede"))
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Leão\n");
		}
		
		else if(!strcmp(otherClass, "voadores"))
		{
			printf("Morcego\n");
		}
		
		else if(!strcmp(otherClass, "aquáticos") || !strcmp(otherClass, "aquÁticos"))
		{
			printf("Baleia\n");
		}
		
		else
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Texto inválido\n");
		}
}

void avesMenu()
{
	char otherClass[100];
	
	setlocale(LC_ALL,"Portuguese");
	printf("Digite uma sub-classe (Não-voadores, Nadadores ou De rapina): ");
	scanf("%[^\n]", otherClass);
	getchar();
	
	toLower(otherClass);
	
		if(!strcmp(otherClass, "não-voadores") || !strcmp(otherClass, "nÃo-voadores"))
		{
			printf("Avestruz\n");
		}
		
		else if(!strcmp(otherClass, "nadadores"))
		{
			printf("Pato\n");
		}
		
		else if(!strcmp(otherClass, "de rapina"))
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Águia\n");
		}
		
		else
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Texto inválido\n");
		}
}

void repteisMenu()
{
	char otherClass[100];
	
	setlocale(LC_ALL,"Portuguese");
	printf("Digite uma sub-classe (Com casco, Carnívoros ou Sem patas): ");
	scanf("%[^\n]", otherClass);
	getchar();
	
	toLower(otherClass);
	
		if(!strcmp(otherClass, "com casco"))
		{
			printf("Tartaruga\n");
		}
		
		else if(!strcmp(otherClass, "carnívoros") || !strcmp(otherClass, "carnÍvoros"))
		{
			printf("Crocodilo\n");
		}
		
		else if(!strcmp(otherClass, "se patas"))
		{
			printf("Cobra\n");
		}
		
		else
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Texto inválido\n");
		}
}

int main()
{
	char class[21];
	
	setlocale(LC_ALL,"Portuguese");
	printf("Digite uma classe (Mamíferos, Aves ou Répteis): ");
	scanf("%[^\n]", class);
	getchar();
	
	toLower(class);
	
		if(!strcmp(class, "mamíferos") || !strcmp(class, "mamÍferos"))
		{
			mamiferosMenu();
		}

		else if(!strcmp(class, "aves"))
		{
			avesMenu();
		}

		else if(!strcmp(class, "reptéis") || !strcmp(class, "reptÉis"))
		{
			repteisMenu();
		}

		else
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Texto inválido\n");
		}

	return 0;
}