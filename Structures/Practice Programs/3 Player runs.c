#include <stdio.h>

struct Player{
	char name[20];
	int runs;
};

int main()
{
	int i, s=0;
	
	struct Player p[11];
	
	printf ("Enter name of player runs scored:\n");
	printf ("--------------------------------------------\n");
	for(i=0; i<11; i++)
	{
		printf ("Player [%d] name: ", i+1);
		scanf ("%s", p[i].name);
		printf ("Player [%d] runs: ", i+1);
		scanf ("%d", &p[i].runs);
		printf ("\n");
	}
	
	for(i=0; i<11; i++)
	{
		s+=p[i].runs;
	}
	
	printf ("\n---------------------------------------\n");
	printf ("Total Runs scored by team: %d", s);
	
	return 0;
}