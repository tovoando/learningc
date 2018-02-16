#include <stdio.h>
#include <locale.h>

int main()
{

	float a, b, c, media;

	printf("Digite o valor de a: ");
	scanf("%f", &a);
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	printf("Digite o valor de c: ");
	scanf("%f", &c);

	media = (a + b + c) / 3;

	setlocale(LC_ALL, "Portuguese");
	printf("A média aritmética entre %.3f, %.3f e %.3f é %.3f", a, b, c, media);

	return 0;
}