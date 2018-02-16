/*TRANSFORMAR ULTIMO CARACTER DE UMA STRING EM UM INTEIRO*/

#include <stdio.h>
#include <stlib.h>

int main()
{
	int midias, numero;
	char candidato[20];

	scanf(" %[^\n]", candidato); //le uma string eliminando o buffer e ignorando o \n

		numero = strlen(candidato) - 1;
		midias = candidato[numero] - '0'; //transforma qualquer caracter em um inteiro ('0' na tabela ascii equivale a 48)

		printf("%d", midias);

	return 0;
}