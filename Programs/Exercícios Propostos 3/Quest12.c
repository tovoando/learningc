#include <stdio.h>

int main()
{
	float num;
	int numInt, h, m;
	
	printf("Escreva um horario dado em hh.mm: ");
	scanf("%f", &num);
	
	numInt = num * 100;
	h = ((numInt / 1000) * 10) + ((numInt % 1000) / 100);
	m = (numInt % 1000) % 100;

	(h < 24 && h >= 0 && m < 60 && m >= 0) ? printf("O valor dado e de: %02d horas %02d minutos", h, m) : printf("O horario nao foi escrito de forma correta");

	return 0;
}