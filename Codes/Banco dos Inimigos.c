#include <stdio.h>
#include <stdlib.h>

struct enemy
{
	char name[50];
	int id, level, life, attack, defense;
};

int main()
{
	struct enemy enemy [4];
	int i = 0, n;

	scanf("%d", &n);

	for(i = 0 ; i < n ; i++)
	{
		scanf(" %[^\n]s", &enemy[i].name);
		scanf("%d", &enemy[i].id);
		scanf("%d", &enemy[i].level);
		scanf("%d", &enemy[i].life);
		scanf("%d", &enemy[i].attack);
		scanf("%d", &enemy[i].defense);
	};

	for(i = 0; i < n ; i++)
	{
		printf("Nome: %s\n", enemy[i].name);
		printf("ID: %d\n", enemy[i].id);
		printf("Level: %d\n", enemy[i].level);
		printf("Vida: %d\n", enemy[i].life);
		printf("Ataque: %d\n", enemy[i].attack);
		printf("Defesa: %d\n", enemy[i].defense);
	};

	return 0;
}