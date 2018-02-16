#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	int i;
	float height, larger = 0, smaller = 10000;
	char name[100], info[100], tallChild[100], shortChild[100];

		while(1)
		{
			scanf(" %[^\n]", name);

			for(i = 0 ; name[i] != '\0' ; i++)
			{
				name[i] = tolower(name[i]);
			}

			scanf("%f", &height);

			if(height > larger)
			{
				larger = height;

				for(i = 0 ; i < 100 ; i++)
				{
					if(name[i] == '\0')
					{
						tallChild[i] = name[i];
						break;
					}

					tallChild[i] = toupper(name[i]);
				}
			}

			if(height < smaller)
			{
				smaller = height;

				for(i = 0 ; i < 100 ; i++)
				{
					if(name[i] == '\0')
					{
						shortChild[i] = name[i];
						break;
					}

					shortChild[i] = toupper(name[i]);
				}
			}

			scanf(" %[^\n]", info);

			for(i = 0 ; info[i] != '\0' ; i++)
			{
				info[i] = tolower(info[i]);
			}

			if(strcmp(info, "fim") == 0)
			{
				break;
			}

		}

		printf("%s\n%s", shortChild, tallChild);

	return 0;
}