#include <stdio.h>
#include <locale.h>

int main()
{
	float altura, peso1, peso2;
	char sexo;
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	printf("Digite o sexo:\nM - para Homem\nF - para Mulher\n");
	scanf("%s", &sexo);
	getchar();

	peso1 = (72.7 * altura) - 58.0;
	peso2 = (62.1 * altura) - 44.7;
	
		if(sexo == 'm' || sexo == 'M')
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Seu peso ideal é: %.2fkg", peso1);
		}

		else if (sexo == 'f' || sexo == 'F')
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Seu peso ideal é: %.2fkg", peso2);
		}

		else
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Caracter inválido\n");
		}

	return 0;
}