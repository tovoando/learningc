#include <stdio.h>
#include <locale.h>

int main()
{
	int saque, cem, cinquenta, dez, cinco, um;

	setlocale(LC_ALL,"Portuguese");
	printf("Digite o valor do saque:\n(Notas disponíveis de 1, 5, 10, 50 e 100)\n");
	scanf("%d", &saque);

	cem = saque / 100;
	cinquenta = (saque % 100) / 50;
	dez = ((saque % 100) % 50) / 10;
	cinco = (((saque % 100) % 50) % 10) / 5;
	um = (((saque % 100) % 50) % 10) % 5;

		if(saque < 10 || saque > 600)
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Saque indisponível\n");
		}

		else
		{
			printf("Seu saque possui:\n");
			printf("%d nota(s) de R$ 100.00\n", cem);
			printf("%d nota(s) de R$ 50.00\n", cinquenta);
			printf("%d nota(s) de R$ 10.00\n", dez);
			printf("%d nota(s) de R$ 5.00\n", cinco);
			printf("%d nota(s) de R$ 1.00\n", um);
		}

	return 0;
}