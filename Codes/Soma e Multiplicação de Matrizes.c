/*Exercicio 7.2 Questao 3

Dadas duas matrizes A e B lidas do teclado:
a) Determinar e escrever a matriz soma A+BmXn (se AmXn e BmXn);
b) Determinar e escrever a matriz produto AxBmXn (se AmXp e BpXn , para qualquer p).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k, m, n, o, p;

	printf("Digite os valores M e N referentes a ordem da Matriz A:\n");
	scanf("%d%d", &m, &n); //Escaneio a ordem da matriz A

	printf("Digite os valores O e P referentes a ordem da Matriz B:\n");
	scanf("%d%d", &o, &p); //Escaneio a ordem da matriz B

	int matrix1[m][n], matrix2[o][p];

		printf("Digite os valores que serao armazenados na Matriz A de ordem %dx%d:\n", m, n);

		for(i = 0 ; i < m ; i++)
		{
			for(j = 0 ; j < n ; j++)
			{
				scanf("%d", &matrix1[i][j]);
			}
		} //Escaneio os elementos da matriz A

		printf("Digite os valores que serao armazenados na Matriz B de ordem %dx%d:\n", o, p);

		for(i = 0 ; i < o ; i++)
		{
			for(j = 0 ; j < p ; j++)
			{
				scanf("%d", &matrix2[i][j]);
			}
		} //Escaneio os elementos da matriz B		

			if(m == o && n == p) //Para que haja soma, as matrizes precisam ter ordem igual
			{
				printf("A matriz resultante da soma das matrizes A e B e:\n");

					for(i = 0 ; i < m ; i++)
					{
						for(j = 0 ; j < n ; j++)
						{
							if(j == n - 1) //Imprime o elemento da ultima coluna de cada linha sem espaco
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
				printf("A matriz resultante da soma das matrizes A e B e inexistente\n");
			}

			if(n == o) //Para que haja multiplicacao, a matriz A deve ter o numero de colunas igual ao numero de linhas da matriz B
			{
				int auxMult = 0, matrixMult[m][p];

				printf("A matriz resultante da multiplicacao das matrizes A e B e:\n");

				for(i = 0 ; i < m ; i++)
				{
					for(j = 0 ; j < p ; j++)
					{
						for(k = 0 ; k < n ; k++)
						{
							auxMult += matrix1[i][k] * matrix2[k][j];
						}

							matrixMult[i][j] = auxMult;

							if(j == p - 1) //Imprime o elemento da ultima coluna de cada linha sem espaco
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
				} //Executo a multiplicacao das matrizes					
			}

			else
			{
				printf("A matriz resultante da multiplicacao das matrizes A e B e inexistente\n");
			}

	return 0;
}