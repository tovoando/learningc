#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int age, largestAge = 0, totalPeople = 0, restriction = 0;
	double percent;
	char sex[5], eyeColor[5], hair[5];

	scanf("%d", &age);

	while(age != -1)
	{
		scanf("\n%s %s %s", sex, hair, eyeColor);

		totalPeople++;

		if(age >= 18 && age <= 35 && strcmp(sex, "f") == 0 && strcmp(hair, "l") == 0 && strcmp(eyeColor, "v") == 0)
		{
			restriction++;
		}

		if(age > largestAge)
		{
			largestAge = age;
		}

		scanf("%d", &age);
	}

	percent = (restriction * 100.00) / totalPeople;

	printf("Mais velho: %d\n", largestAge);
	printf("Mulheres com olhos verdes, loiras com 18 a 35 anos: %.2lf%%", percent);

	return 0;
}