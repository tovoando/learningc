/*Exercício 7.2 Questão 3

Dadas duas matrizes A e B lidas do teclado:
a) Determinar e escrever a matriz soma A+BmXn (se AmXn e BmXn);
b) Determinar e escrever a matriz produto AxBmXn (se AmXp e BpXn , para qualquer p).*/

#include <stdio.h>
#include <locale.h>

int main()
{
	int i, j, k, m, n, o, p;

	setlocale(LC_ALL,"Portuguese");
	printf("Digite os valores M e N referentes à ordem da Matriz A:\n");
	scanf("%d%d", &m, &n); //Escaneio a ordem da matriz A

	setlocale(LC_ALL,"Portuguese");
	printf("Digite os valores O e P referentes à ordem da Matriz B:\n");
	scanf("%d%d", &o, &p); //Escaneio a ordem da matriz B

	int matrix1[m][n], matrix2[o][p];

		setlocale(LC_ALL,"Portuguese");
		printf("Digite os valores que serão armazenados na Matriz A de ordem %dx%d:\n", m, n);

		for(i = 0 ; i < m ; i++)
		{
			for(j = 0 ; j < n ; j++)
			{
				scanf("%d", &matrix1[i][j]);
			}
		} //Escaneio os elementos da matriz A

		setlocale(LC_ALL,"Portuguese");
		printf("Digite os valores que serão armazenados na Matriz B de ordem %dx%d:\n", o, p);

		for(i = 0 ; i < o ; i++)
		{
			for(j = 0 ; j < p ; j++)
			{
				scanf("%d", &matrix2[i][j]);
			}
		} //Escaneio os elementos da matriz B		

			if(m == o && n == p) //Para que haja soma, as matrizes precisam ter ordem igual
			{
				setlocale(LC_ALL,"Portuguese");
				printf("A matriz resultante da soma das matrizes A e B é:\n");

					for(i = 0 ; i < m ; i++)
					{
						for(j = 0 ; j < n ; j++)
						{
							if(j == n - 1) //Imprime o elemento da última coluna de cada linha sem espaço
							{
								printf("%d", matrix1[i][j] + matrix2[i][j]);
							}

							else
							{
								printf("%d ", matrix1[i][j] + matrix2[i][j]);
							}
						}

						printf("\n");
					} //Executo a soma das matrizes
			}

			else
			{
				setlocale(LC_ALL,"Portuguese");
				printf("A matriz resultante da soma das matrizes A e B é inexistente\n");
			}

			if(n == o) //Para que haja multiplicação, a matriz A deve ter o número de colunas igual ao número de linhas da matriz B
			{
				int auxMult = 0, matrixMult[m][p];

				setlocale(LC_ALL,"Portuguese");
				printf("A matriz resultante da multiplicação das matrizes A e B é:\n");

				for(i = 0 ; i < m ; i++)
				{
					for(j = 0 ; j < p ; j++)
					{
						for(k = 0 ; k < n ; k++)
						{
							auxMult += matrix1[i][k] * matrix2[k][j];
						}

							matrixMult[i][j] = auxMult;

							if(j == p - 1) //Imprime o elemento da última coluna de cada linha sem espaço
							{
								printf("%d", matrixMult[i][j]);
							}

							else
							{
								printf("%d ", matrixMult[i][j]);
							}

							auxMult = 0;
					}

					printf("\n");
				} //Executo a multiplicação das matrizes					
			}

			else
			{
				setlocale(LC_ALL,"Portuguese");
				printf("A matriz resultante da multiplicação das matrizes A e B é inexistente\n");
			}

	return 0;
}