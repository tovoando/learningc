#include <stdio.h>

int main()
{
	float num;
	int new, next;
	
	printf("Digite um valor real qualquer: ");
	scanf("%f", &num);
	
	new = num;

	next = ((num - new) != 0) ? num + 1 : num;

	printf("O valor arredondado em excesso de %f e: %d", num, next);

	return 0;
}