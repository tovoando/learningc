#include <stdio.h>
#include <stdlib.h>

int main()
{
	int valor, i;
	
	scanf("%d", &valor);
			
		for(i = 1 ; i <= valor ; i++) //ordem crescente
		{
			if(valor % i == 0)
			{
				printf("%d\n", i);
			}
		}
		
		for(i = valor ; i >= 1 ; i--) //ordem decrescente
		{
			if(valor % i == 0)
			{
				printf("%d\n", i);
			}
		}

	return 0;
}