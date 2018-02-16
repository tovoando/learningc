#include <stdio.h>

int main()
{
	float a, b, menor;
	
	printf("Digite um numero: ");
	scanf("%f", &a);
	printf("Digite outro numero: ");
	scanf("%f", &b);
	
	menor = (a < b) ? a : b;

	printf("O menor numero e: %f", menor);

	return 0;
}