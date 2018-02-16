#include <stdio.h>

int main()
{
	float num;
	int new, next;
	
	printf("Digite um valor real qualquer: ");
	scanf("%f", &num);
	
	new = num;

	next = ((num - new) < 0.5) ? num : num + 1;

	printf("O inteiro mais proximo de %f e: %d", num, next);

	return 0;
}