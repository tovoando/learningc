#include <stdio.h>

int main()
{
	float altura, peso1, peso2;
	char sexo;
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	printf("Digite o sexo (M/F): ");
	scanf("%s", &sexo);

	peso1 = (72.7 * altura) - 58.0;
	peso2 = (62.1 * altura) - 44.7;
	
	(sexo == 'm' || sexo == 'M') ? printf("Seu peso ideal e: %f", peso1) : (sexo == 'f' || sexo == 'F') ? printf("Seu peso ideal e: %f", peso2) : printf("Sexo inexistente");

	return 0;
}