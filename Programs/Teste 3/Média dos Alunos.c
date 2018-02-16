#include <stdio.h>

int main()
{

	float ab1, ab2, reav, media, menor;

	printf("Digite o valor da AB1: ");
	scanf("%f", &ab1);
	printf("Digite o valor da AB2: ");
	scanf("%f", &ab2);
	printf("Digite o valor da Reav: ");
	scanf("%f", &reav);

	menor = (ab1 <= ab2 && ab1 <= reav) ? ab1 : (ab2 <= ab1 && ab2 <= reav) ? ab2 : reav;
	media = ((ab1 + ab2 + reav) - menor) / 2;

	(media >= 7) ? printf("Aprovado") : (media < 5) ? printf("Reprovado") : printf("Na Final");

	return 0;
}