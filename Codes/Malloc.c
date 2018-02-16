#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numb;
	
	scanf("%d", &numb);
	
	int n = malloc(numb*sizeof(int)); //int n[numb], i, id, idm, idg;
	int i, id, idm, idg;
	double peso, g = 0, m = 10000000;
	
			for(i = 0 ; i < numb ; i++)
			{
				scanf("%d%lf", &id, &peso);
				
				if(peso > g)
				{
					idg = id;
					g = peso;
				}
				
				if(peso < m)
				{
					idm = id;
					m = peso;
				}
			}
					
			printf("Gordo: id: %d peso: %.2lfKg\n", idg, g);
			printf("Magro: id: %d peso: %.2lfKg", idm, m);

	return 0;
}