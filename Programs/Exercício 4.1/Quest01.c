#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	float a, b, c, delta, raiz, x1, x2;
	
	printf("Digite o valor referente ao coeficiente a: ");
	scanf("%f", &a);
	printf("Digite o valor referente ao coeficiente b: ");
	scanf("%f", &b);
	printf("Digite o valor referente ao coeficiente c: ");
	scanf("%f", &c);

	delta = b * b - (4 * a * c);
	raiz = sqrt(delta);
	x1 = (-b + raiz) / (2 * a);
	x2 = (-b - raiz) / (2 * a);
	
		if(a != 0)
		{

			if(delta < 0)
			{
				setlocale(LC_ALL,"Portuguese");
				printf("A equação não possui raízes reais\n");
			}

			else if(delta == 0)
			{
				setlocale(LC_ALL,"Portuguese");
				printf("A equação possui uma raiz real:\nx = %.2f\n", x1);
			}
				
			else
			{
				setlocale(LC_ALL,"Portuguese");
				printf("A equação possui duas raízes reais:\nx' = %.2f\nx'' = %.2f\n", x1, x2);
			}
		}

		else
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Não é uma equação de segundo grau\n");
		}
	
	return 0;
}