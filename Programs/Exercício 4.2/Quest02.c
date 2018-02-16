#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main()
{
	int class, sub;

	setlocale(LC_ALL,"Portuguese");
	printf("Digite:\n1 - para Mamíferos\n2 - para Aves\n3 - para Répteis\n");
	scanf("%d", &class);

		switch(class)
		{

			case 1:
			{
				setlocale(LC_ALL,"Portuguese");
				printf("Digite\n1 - para Bípede\n2 - para Quadrúpede\n3 - para Voadores\n4 - para Aquáticos\n");
				scanf("%d", &sub);

					if(sub == 1)
					{
						printf("Homem\n");
					}

					else if(sub == 2)
					{
						setlocale(LC_ALL,"Portuguese");
						printf("Leão\n");
					}

					else if(sub == 3)
					{
						printf("Morcego\n");
					}

					else if(sub == 4)
					{
						printf("Baleia\n");
					}

					else
					{
						setlocale(LC_ALL,"Portuguese");
						printf("Opção inválida\n");
					}

				break;
			}

			case 2:
			{
				setlocale(LC_ALL,"Portuguese");
				printf("Digite\n1 - para Não-voadores\n2 - para Nadadores\n3 - para De rapina\n");
				scanf("%d", &sub);

					if(sub == 1)
					{
						printf("Avestruz\n");
					}

					else if(sub == 2)
					{
						printf("Pato\n");
					}

					else if(sub == 3)
					{
						setlocale(LC_ALL,"Portuguese");
						printf("Águia\n");
					}

					else
					{
						setlocale(LC_ALL,"Portuguese");
						printf("Opção inválida\n");
					}

				break;
			}

			case 3:
			{
				setlocale(LC_ALL,"Portuguese");
				printf("Digite\n1 - para Com casco\n2 - para Carnívoros\n3 - para Sem patas\n");
				scanf("%d", &sub);

					if(sub == 1)
					{
						printf("Tartaruga\n");
					}

					else if(sub == 2)
					{
						printf("Crocodilo\n");
					}

					else if(sub == 3)
					{
						printf("Cobra\n");
					}

					else
					{
						setlocale(LC_ALL,"Portuguese");
						printf("Opção inválida\n");
					}

				break;
			}

			default:
			{
				setlocale(LC_ALL,"Portuguese");
				printf("Opção inválida\n");
			}
		}

	return 0;
}