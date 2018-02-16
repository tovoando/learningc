#include <stdio.h>

int main()
{

	printf("%04d\n", 34); //Mostra o numero com 4 digitos
	printf("%06d\n", 34); //Mostra o numero com 6 digitos
	printf("%6.4d\n", 34); //Mostra o numero com 4 digitos, completando-o com 2 espacos na frente
	printf("%6.0d\n", 34); //Mostra o numero, completando-o com 4 espacos na frente

	return 0;
}