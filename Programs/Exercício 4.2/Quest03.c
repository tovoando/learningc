#include <stdio.h>
#include <locale.h>

int main()
{
	float nota;

	printf("Digite uma nota: ");
	scanf("%f", &nota);

		if(nota >= 8.5 && nota <= 10)
		{
			printf("A\n");
		}

		else if(nota >= 7 && nota < 8.5)
		{
			printf("B\n");
		}

		else if(nota >= 5 && nota < 7)
		{
			printf("C\n");
		}

		else if(nota >= 3.5 && nota < 5)
		{
			printf("D\n");
		}

		else if(nota >= 0 && nota < 3.5)
		{
			printf("E\n");
		}

		else
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Nota inválida\n");
		}

	return 0;;
}