#include <stdio.h>

int main()
{
	float num, abs;
	
	printf("Digite um valor real qualquer: ");
	scanf("%f", &num);
	
	abs = (num < 0) ? -num : num;

	printf("O valor absoluto de %f e: %f", num, abs);

	return 0;
}