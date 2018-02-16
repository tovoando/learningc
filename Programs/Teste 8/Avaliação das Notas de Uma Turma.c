#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define len 200

typedef struct
{
	char name[50], answer[5];
} student;

student stdt[len];

int gradeCalc(char a[], char b[]) 
{
	int i, grade = 0;
	
	for(i = 0 ; i < 5 ; i++)
	{
		if(a[i] == b[i])
		{
			grade++;
		}
	}

	return grade;
}

int biggest(int c, int d)
{
	if(c > d)
	{
		return c;
	}

	return d;
}

int smallest(int e, int f)
{
	if(e < f)
	{
		return e;
	}

	return f;
}

int alreadyHas(char x[], int y, int z)
{
	int w;

	for(w = y + 1 ; w < z ; w++)
	{
		if(strcmp(stdt[w].name, x) == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	float media, countValue = 0, gradeValue = 0;
	int i = 0, j;
	int saveValue = 0, big = 0, small = 10;
	char gab[5];

	while(scanf(" %s", stdt[i].name) && stdt[i].name[0] != '*')
	{
		scanf(" %s", stdt[i].answer);
		i++;
	}

	scanf(" %s", gab);

	for(j = i - 1 ; j >= 0 ; j--)
	{
		if(alreadyHas(stdt[j].name, j, i))
		{
			saveValue = gradeCalc(stdt[j].answer, gab);
			countValue++;
			gradeValue += saveValue;
			big = biggest(saveValue, big);
			small = smallest(saveValue, small);
		}
	}

	media = gradeValue / countValue;

	printf("Maior: %d\n", big);
	printf("Menor: %d\n", small);
	printf("Media: %.2f\n", media);

	return 0;
}