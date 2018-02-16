/*Resolva a questão abaixo e faça a postagem da solução (arquivo .c).

Questão(2,0ptos):

Considere o funcionamento de um caixa eletrônico somente para saques (em R$).
Elabore um programa que repete a exibição de um menu com apenas duas opções,
“(S)aque” ou “(E)ncerra”, até que o usuário digite “E”, executando as seguintes ações:

-Se o usuário digitar “S”, o programa informa os valores das notas disponíveis, lê o
valor do saque e, em seguida, escreve quantas notas de cada valor (desde que haja pelo
menos uma nota do valor respectivo) serão fornecidas com um número mínimo de notas;
-Se digitar “E”, o programa informa o total em reais dos saques realizados, quantas
notas de cada valor foram utilizadas enquanto o caixa esteve em funcionamento e se encerra em seguida.

Considerar o seguinte:
-As notas inicialmente disponíveis são as de 2, 5, 10, 20 e 50 reais;
-O programa não deve se preocupar com as quantidades das notas ainda existentes na máquina,
exceto a de notas de 10 reais. Estas notas estão com uma quantidade limitada e pode se esgotar.
No programa, definir a quantidade inicial dessas notas no pré-processamento;
-É definido um valor máximo de cada saque (Não há limite diário). O programa deve prefixar
esse limite de saque no pré-processamento;
-O programa deve criticar com mensagem de erro a tentativa de um saque fora do limite,
ou quando a combinação de notas não puder ser feita.

Obs.:
-Esta prova é estritamente individual (Não veja o código do colega, nem permita que seja visto o seu);
-A pontuação será aplicada proporcional aos requisitos atendidos pela implementação. A condição mínima é não haver erros de sintaxe.*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#define MAX_10 1
#define SAQUE_MAX 500

int main()
{
	int saque, cinquenta, vinte, dez, cinco, dois, cont_10 = 0, val_sacado = 0, flag = 0;
	int soma = 0, sum50 = 0, sum20 = 0, sum10 = 0, sum5 = 0, sum2 = 0;
	char start[2];

	setlocale(LC_ALL,"Portuguese");
	printf("Digite uma das opções abaixo:\nS - para efetuar um saque\nE - para encerrar a operação\n");
	scanf(" %s", start);

	start[0] = toupper(start[0]);

	while(start[0] != 'E')
	{

		if(cont_10 < MAX_10)
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Digite o valor do saque:\nNotas disponíveis (2, 5, 10, 20 e 50)\nSaque máximo de %d\n", SAQUE_MAX);
		}

		else
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Digite o valor do saque:\nNotas disponíveis (2, 5, 20 e 50)\nSaque máximo de %d\n", SAQUE_MAX);
		}
		
		scanf("%d", &saque);

		if(saque <= 1 || saque == 3 || saque > SAQUE_MAX)
		{
			setlocale(LC_ALL,"Portuguese");
			printf("Saque não disponível\n");
		}

		else
		{
			cinquenta = saque / 50;
			
			if(cinquenta != 0)
			{
				if(saque % (cinquenta * 50) == 3 || saque % (cinquenta * 50) == 1)
				{
					--cinquenta;
				}
			}

			val_sacado += (cinquenta * 50);

			vinte = (saque - val_sacado) / 20;
			
			if(vinte != 0)
			{
				if((saque - val_sacado) % (vinte * 20) == 3 || (saque - val_sacado) % (vinte * 20) == 1)
				{
					--vinte;
				}
			}
			
			val_sacado += (vinte * 20);

			dez = (saque - val_sacado) / 10;
			
			if(dez != 0)
			{
				if((saque - val_sacado) % (dez * 10) == 3 || ((saque - val_sacado) % (dez * 10)) == 1)
				{
					--dez;
				}
			}
			
			cont_10 += dez;

			if(cont_10 > MAX_10 && flag == 0)
			{
				dez -= (cont_10 - MAX_10);
				flag = 1;
			}
			
			else if(flag == 1)
			{
				dez = 0;
			}

			val_sacado += (dez * 10);

			cinco = (saque - val_sacado) / 5;
			
			if(cinco != 0)
			{
				if((saque - val_sacado) % (cinco * 5) == 3 || (saque - val_sacado) % (cinco * 5) == 1)
				{
					--cinco;
				}
			}
			
			val_sacado += (cinco * 5);

			dois = (saque - val_sacado) / 2;

			printf("Seu saque possui:\n");

			if(cinquenta > 0)
			{
				printf("%d nota(s) de R$ 50.00\n", cinquenta);
			}

			if(vinte > 0)
			{
				printf("%d nota(s) de R$ 20.00\n", vinte);
			}

			if(dez > 0)
			{
				printf("%d nota(s) de R$ 10.00\n", dez);
			}

			if(cinco > 0)
			{
				printf("%d nota(s) de R$ 5.00\n", cinco);
			}

			if(dois > 0)
			{
				printf("%d nota(s) de R$ 2.00\n", dois);
			}

			val_sacado = 0;
			soma += saque;
			sum50 += cinquenta;
			sum20 += vinte;
			sum10 += dez;
			sum5 += cinco;
			sum2 += dois;
		}

		setlocale(LC_ALL,"Portuguese");
		printf("Digite uma das opções abaixo:\nS - para efetuar um saque\nE - para encerrar a operação\n");
		scanf(" %s", start);
		
		start[0] = toupper(start[0]);
	}

	setlocale(LC_ALL,"Portuguese");
	printf("O total sacado nas transações foi de: R$ %d.00\n", soma);
	setlocale(LC_ALL,"Portuguese");
	printf("O total de notas retiradas nas transações foram de:\n");

	if(sum50 > 0)
	{
		printf("%d nota(s) de R$ 50.00\n", sum50);
	}

	if(sum20 > 0)
	{
		printf("%d nota(s) de R$ 20.00\n", sum20);
	}

	if(sum10 > 0)
	{
		printf("%d nota(s) de R$ 10.00\n", sum10);
	}

	if(sum5 > 0)
	{
		printf("%d nota(s) de R$ 5.00\n", sum5);
	}

	if(sum2 > 0)
	{
		printf("%d nota(s) de R$ 2.00\n", sum2);
	}

	return 0;
}