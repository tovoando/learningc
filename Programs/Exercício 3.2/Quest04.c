#include <stdio.h>

int main()
{
	float a, b, c;
	
	printf("Digite um numero: ");
	scanf("%f", &a);
	printf("Digite outro numero: ");
	scanf("%f", &b);
	printf("Digite mais um numero: ");
	scanf("%f", &c);
	
	(a <= b && a <= c) ? printf("O menor numero e: %f", a) : (b <= a && b <= c) ? printf("O menor numero e: %f", b) : printf("O menor numero e: %f", c);

	return 0;
}