#include <stdio.h>

int main()
{
	float num1, num2, num3;
	
	printf("Escreva um numero: ");
	scanf("%f", &num1);
	printf("Escreva outro numero: ");
	scanf("%f", &num2);
	printf("Escreva mais um numero: ");
	scanf("%f", &num3);
	
	(num1 == num2 && num2 == num3) ? printf("3") : (num1 != num2 && num2 != num3 && num1 != num3) ? printf("1") : printf("2");
		
	return 0;
}