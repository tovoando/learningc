#include <stdio.h>
#include <locale.h>

int main()
{
	int code;

	setlocale(LC_ALL,"Portuguese");
	printf("Digite um número: ");
	scanf("%d", &code);

		if(code == 1)
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Alimento não perecível\n");
		}

		else if(code >= 2 && code <= 4)
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Alimento perecível\n");
		}

		else if(code == 5 || code == 6)
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Vestuário\n");
		}

		else if(code == 7)
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Higiene Pessoal\n");
		}

		else if(code >= 8 && code <= 15)
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Limpeza e utensílios domésticos\n");
		}

		else
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Inválido\n");
		}

	return 0;;
}