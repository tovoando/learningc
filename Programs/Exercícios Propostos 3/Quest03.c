#include <stdio.h>

int main()
{
	float num;
	int h, m, s, new;
	
	printf("Digite um valor real qualquer: ");
	scanf("%f", &num);
	
	new = num * 60;
	h = new / 3600;
	m = (new % 3600) / 60;
	s = (new % 3600) % 60;

	printf("%fmin equivale a: %dh %dmin %dseg", num, h, m, s);

	return 0;
}