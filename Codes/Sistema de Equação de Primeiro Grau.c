#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a1, b1, c1, d1, e1, f1;
	double a, b, c, d, e, f, x, y;

	scanf("%dx + %dy = %d", &a1, &b1, &c1);
	scanf("%dx + %dy = %d", &d1, &e1, &f1);
	
	a = a1;
	b = b1;
	c = c1;
	d = d1;
	e = e1;
	f = f1;

	y = (f - ((d * c) / a)) / (e - ((d * b) / a));
	x = (c - (b * y)) / a;

	printf("%.2lf\n%.2lf", x, y);

	return 0;
}