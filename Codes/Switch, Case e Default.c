#include <stdio.h>
#include <stdlib.h>

int main()
{
	int canal;

	scanf("%d", &canal);

		switch(canal)
		{
			case 2:
			printf("SBT");
			break;

			case 4:
			printf("BAND");
			break;
			
			case 6:
			printf("REDETV!");
			break;
			
			case 9:
			printf("RECORD");
			break;
			
			case 13:
			printf("GLOBO");
			break;
			
			default:
			printf("Canal Invalido");
		}
		
	return 0;
}