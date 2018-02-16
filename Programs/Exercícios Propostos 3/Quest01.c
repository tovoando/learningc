#include <stdio.h>

int main()
{
	int num, dez, uni, new, square;
	
	printf("Digite um numero com dois algarismos: ");
	scanf("%d", &num);
	
	dez = num / 10;
	uni = num % 10;
	new = (uni * 10) + dez;
	square = new * new;

	printf("Dezena: %d\nUnidade: %d\nO inverso de %d ao quadrado e: %d", dez, uni, num, square);

	return 0;
}