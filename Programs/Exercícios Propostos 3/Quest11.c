#include <stdio.h>

int main()
{
	float b, c, delta;
	
	printf("Digite o valor referente ao coeficiente b: ");
	scanf("%f", &b);
	printf("Digite o valor referente ao coeficiente c: ");
	scanf("%f", &c);

	delta = b * b - (4 * c);
	
	(delta < 0) ? printf("A equacao nao tem raizes reais") : printf("A equacao tem raizes reais");

	return 0;
}