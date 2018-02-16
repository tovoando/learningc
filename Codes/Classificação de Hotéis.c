#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, j, star, starCount = 0;
	int jpHotel5Star = 0, cgMediaStar = 0, rtHostel = 0;
	/*int lengthEstablishment = 0, lengthCity = 0;*/
	char establishment[100], city[100];

		for(j = 0 ; j < 10 ; j++)
		{
			scanf(" %[^\n]", establishment);
			scanf("%d", &star);
			scanf(" %[^\n]", city);

			/*lengthEstablishment = strlen(establishment);
			lengthCity = strlen(city);*/

			for(i = 0 ; establishment[i] != '\0' ; i++)
			{
				establishment[i] = tolower(establishment[i]);
			}

			for(i = 0 ; city[i] != '\0' ; i++)
			{
				city[i] = tolower(city[i]);
			}

			/*for(i = 0 ; i < lengthEstablishment ; i++)
			{
				establishment[i] = tolower(establishment[i]);
			}

			for(i = 0 ; i < lengthCity ; i++)
			{
				city[i] = tolower(city[i]);
			}

			for(i = 0 ; establishment[i] ; i++)
			{
				establishment[i] = tolower(establishment[i]);
			}

			for(i = 0 ; city[i] ; i++)
			{
				city[i] = tolower(city[i]);
			}*/

				if(strcmp(establishment, "hotel") == 0 && star == 5 && strcmp(city, "joão pessoa") == 0)
				{
					jpHotel5Star++;
				}

				if(strcmp(city, "campina grande") == 0)
				{
					starCount += star;
					cgMediaStar++;
				}

				if(strcmp(establishment, "pousada") == 0 && strcmp(city, "rio tinto") == 0)
				{
					rtHostel++;
				}

			/*lengthEstablishment = 0;
			lengthCity = 0;*/
		}

		if(cgMediaStar == 0)
		{
			printf("%d\n%d\n%d\n", jpHotel5Star, cgMediaStar, rtHostel);
		}
		
		else
		{
			printf("%d\n%d\n%d\n", jpHotel5Star, starCount / cgMediaStar, rtHostel);
		}

	return 0;
}