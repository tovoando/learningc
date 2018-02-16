#include <stdio.h>

int main()
{
	float nota;
	
	printf("Digite a nota do aluno: ");
	scanf("%f", &nota);
	
	(nota <= 5.5) ? printf("O aluno foi Reprovado") : printf("O aluno foi Aprovado");

	return 0;
}