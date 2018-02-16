#include <stdio.h>
#include <locale.h>

int main()
{
	float num;
	int numInt, h, m;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Escreva um horário dado em hh.mm: ");
	scanf("%f", &num);
	
	numInt = num * 100;
	h = ((numInt / 1000) * 10) + ((numInt % 1000) / 100);
	m = (numInt % 1000) % 100;

		if(h < 24 && h >= 0 && m < 60 && m >= 0)
		{
			setlocale(LC_ALL,"Portuguese");
			printf("O valor dado é de: %02d hora(s) %02d minuto(s)", h, m);
		}

		else
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Erro: hora inválida!");
		}

	return 0;
}