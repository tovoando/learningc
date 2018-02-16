#include <stdio.h>
#include <stdlib.h>

int main()
{
	float notas[3][4];
	int linhas, colunas;
	
		for(linhas = 0 ; linhas < 3 ; linhas++)
		{
			for(colunas = 0 ; colunas < 4 ; colunas++)
			{
				printf("Digite a %d nota do aluno %d: ", colunas + 1, linhas + 1);
				scanf("%f", &notas[linhas][colunas]);
			}
		}

		for(linhas = 0 ; linhas < 3 ; linhas++)
		{
			for(colunas = 0 ; colunas < 4 ; colunas++)
			{
				printf("%.2f ", notas[linhas][colunas]);
			}
		}
		
	return 0;
}