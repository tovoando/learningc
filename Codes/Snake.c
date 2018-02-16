#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int n;

	scanf("%d", &n);
	
	int i, j;
	char board[n][n], comands[100];

	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			scanf(" %c", &board[i][j]);
		}
	}

	scanf(" %s", comands);

	board[n - 1][0] = '*';

	int length = strlen(comands), k = 0, k2 = 0, tail_i = n - 1, tail_j = 0, head_i = n - 1, head_j = 0;

	for(k = 0 ; k < length ; k++)
	{
		switch(comands[k])
		{
			case 'C':

				if(board[head_i - 1][head_j] == 'o')
				{
					board[head_i - 1][head_j] = '*';
					head_i -= 1;
				}

				else
				{
					board[head_i - 1][head_j] = '*';
					head_i -= 1;
					board[tail_i][tail_j] = '.';
					
					if(comands[k2] == 'C')
					{
						tail_i -= 1;
					}

					else if(comands[k2] == 'B')
					{
						tail_i += 1;
					}

					else if(comands[k2] == 'E')
					{
						tail_j -= 1;
					}

					else if(comands[k2] == 'D')
					{
						tail_j += 1;
					}

					k2++;
				}

			break;

			case 'B':

				if(board[head_i + 1][head_j] == 'o')
				{

					board[head_i + 1][head_j] = '*';
					head_i += 1;
				}

				else
				{

					board[head_i + 1][head_j] = '*';
					head_i += 1;
					board[tail_i][tail_j] = '.';

					if(comands[k2] == 'C')
					{
						tail_i -= 1;
					}

					else if(comands[k2] == 'B')
					{
						tail_i += 1;
					}

					else if(comands[k2] == 'E')
					{
						tail_j -= 1;
					}

					else if(comands[k2] == 'D')
					{
						tail_j += 1;
					}

					k2++;
				}

			break;

			case 'D':

				if(board[head_i][head_j + 1] == 'o')
				{

					board[head_i][head_j + 1] = '*';
					head_j += 1;
				}

				else
				{
					board[head_i][head_j + 1] = '*';
					head_j += 1;
					board[tail_i][tail_j] = '.';

					if(comands[k2] == 'C')
					{
						tail_i -= 1;
					}

					else if(comands[k2] == 'B')
					{
						tail_i += 1;
					}

					else if(comands[k2] == 'E')
					{
						tail_j -= 1;
					}

					else if(comands[k2] == 'D')
					{
						tail_j += 1;
					}

					k2++;
				}

			break;

			case 'E':

				if(board[head_i][head_j - 1] == 'o')
				{

					board[head_i][head_j - 1] = '*';
					head_j -= 1;
				}

				else
				{
					board[head_i][head_j - 1] = '*';
					head_j -= 1;
					board[tail_i][tail_j] = '.';

					if(comands[k2] == 'C')
					{
						tail_i -= 1;
					}

					else if(comands[k2] == 'B')
					{
						tail_i += 1;
					}

					else if(comands[k2] == 'E')
					{
						tail_j -= 1;
					}

					else if(comands[k2] == 'D')
					{
						tail_j += 1;
					}

					k2++;
				}

			break;
		}
	}

	int len = 0;

	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			if(board[i][j] == '*')
			{
				len++;
			}

			if(board[i][j] == 'o')
			{
				board[i][j] = '.';
			}
		}
	}

	printf("%d\n", len);

	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			printf("%c", board[i][j]);
		}

		puts("");
	}

	return 0;
}