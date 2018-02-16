#include <stdio.h>
#include <stdlib.h>

int main()
{
	double money_1;
	int money, money2, cem, cinquenta, vinte, dez, cinco, dois;
	int um, meio, quarto, decimo, vigesimo, centesimo;
	printf("Digite o valor do saque: ");
	scanf("%lf", &money_1);

	money = money_1;
	money2 = money_1 * 100;
	cem = money / 100;
	cinquenta = (money % 100) / 50;
	vinte = ((money % 100) % 50) / 20;
	dez = (((money % 100) % 50) % 20) / 10;
	cinco = ((((money % 100) % 50) % 20) % 10) / 5;
	dois = (((((money % 100) % 50) % 20) % 10) % 5) / 2;
	um = (((((money % 100) % 50) % 20) % 10) % 5) % 2;
	meio = (money2 % 100) / 50;
	quarto = ((money2 % 100) % 50) / 25;
	decimo = (((money2 % 100) % 50) % 25) / 10;
	vigesimo = ((((money2 % 100) % 50) % 25) % 10) / 5;
	centesimo = ((((money2 % 100) % 50) % 25) % 10) % 5;

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", cem);
	printf("%d nota(s) de R$ 50.00\n", cinquenta);
	printf("%d nota(s) de R$ 20.00\n", vinte);
	printf("%d nota(s) de R$ 10.00\n", dez);
	printf("%d nota(s) de R$ 5.00\n", cinco);
	printf("%d nota(s) de R$ 2.00\n", dois);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", um);
	printf("%d moeda(s) de R$ 0.50\n", meio);
	printf("%d moeda(s) de R$ 0.25\n", quarto);
	printf("%d moeda(s) de R$ 0.10\n", decimo);
	printf("%d moeda(s) de R$ 0.05\n", vigesimo);
	printf("%d moeda(s) de R$ 0.01\n", centesimo);

	return 0;
}