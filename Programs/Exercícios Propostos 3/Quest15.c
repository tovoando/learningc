#include <stdio.h>

int main()
{
	float a, b, c;
		
	printf("Escreva um numero: ");
	scanf("%f", &a);
	printf("Escreva outro numero: ");
	scanf("%f", &b);
	printf("Escreva mais um numero: ");
	scanf("%f", &c);
		
	(a + b <= c || a + c <= b || b + c <= a) ? printf("0") : (a == b && b == c) ? printf("3") : (a == b || a == c || b == c) ? printf("2") : printf("1");

	return 0;
}