#include <stdio.h>

int main()
{

	int num = 0, x = 0, y = 5, z = 10;

	num = num + 1;
	num++;

	num = num + 2;
	num += 2;

	x += y += z += 7;
	z = z + 7;
	y = y + z;
	x = x + y;

	return 0;
}