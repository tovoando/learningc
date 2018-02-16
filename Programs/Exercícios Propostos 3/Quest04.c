#include <stdio.h>

int main()
{
	int a, b, res;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite outro numero: ");
	scanf("%d", &b);
	
	res = a - ((a / b) * b);

	printf("O resto da divisao de %d por %d e: %d", a, b, res);

	return 0;
}