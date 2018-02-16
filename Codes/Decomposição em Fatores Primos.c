#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int numero, divisor = 2;

	printf("Digite um inteiro positivo: ");
	scanf ("%d", &numero);
	printf("%d = ", numero);

	while(numero != divisor) //o loop se encerra quando chegarmos no proprio numero
	{
		if (numero % divisor == 0) //se o numero for divisivel, imprimo ele e confiro o proximo numero ja apos a divisao
		{
			printf("%d ", divisor);
			numero /= divisor;
		}

		else
		{
			divisor++; //quando o divisor nao for mais 2 eu incremento
		}
	}

	printf("%d", divisor); //quando o loop se encerrar, imprimo o ultimo divisor

	return 0;
}