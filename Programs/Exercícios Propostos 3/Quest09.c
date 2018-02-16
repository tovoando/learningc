#include <stdio.h>

int main()
{
	float num, min;
	int h, m;
	
	printf("Escreva um horario dado em hh.mm: ");
	scanf("%f", &num);
	
	h = num;
	min = (num - h) * 100;
	m = min;

	printf("O valor dado e de: %02d horas e %02d minutos", h, m);

	return 0;
}