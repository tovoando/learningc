#include <stdio.h>

int main()
{
	int k, n, mult;
	
	printf("Digite um numero: ");
	scanf("%d", &k);
	printf("Digite outro numero: ");
	scanf("%d", &n);
	
	mult = (n / k) * k;

	printf("O maior multiplo de %d, inferior ou igual a %d e: %d", k, n, mult);

	return 0;
}