#include <stdio.h>
#include <locale.h>

int main()
{

	float a = 34.32, b = 40.215, c = 23.273, media;

	media = (a + b + c) / 3;

	setlocale(LC_ALL, "Portuguese");
	printf("A média aritmética entre %.3f, %.3f e %.3f é %.3f", a, b, c, media);

	return 0;
}