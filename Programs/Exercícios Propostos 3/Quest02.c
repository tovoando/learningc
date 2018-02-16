#include <stdio.h>

int main()
{
	int num, mil, cen, dez, uni;
	
	printf("Digite um numero com quatro algarismos: ");
	scanf("%d", &num);
	
	mil = num / 1000;
	cen = (num % 1000) / 100;
	dez = ((num % 1000) % 100) / 10;
	uni = ((num % 1000) % 100) % 10;

	printf("Unidade: %d\nDezena: %d\nCentena: %d\nMilhar: %d", uni, dez, cen, mil);

	return 0;
}