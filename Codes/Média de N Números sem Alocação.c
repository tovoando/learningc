#include <stdio.h>
#include <stdlib.h>

int main()
{
	int id, cont;
	float soma = 0, media;

	scanf("%d", &id);
	
		while(id >= 0)
		{
			cont++;
			soma += id;
			scanf("%d", &id);
		}

		media = soma / cont;
		
		printf("%.2f", media);
		
	return 0;
}