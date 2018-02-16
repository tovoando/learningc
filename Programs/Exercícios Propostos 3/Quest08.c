#include <stdio.h>

int main()
{
	float a, b, abs1, abs2, res;

	printf("Digite o valor referente ao coeficiente a: ");
	scanf("%f", &a);
	printf("Digite o valor referente ao coeficiente b: ");
	scanf("%f", &b);

	abs1 = (a < 0) ? -a : a;
	abs2 = (b < 0) ? -b : b;
	res = (abs2 * (abs2 / abs1)) / 2;

	printf("O valor absoluto da area que a reta do grafico faz com os eixos coordenados e: %f", res);

	return 0;
}