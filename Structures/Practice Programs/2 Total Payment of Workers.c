#include<stdio.h>

typedef struct{
	char name[20];
	int wage;
	int wdays;
}Worker;

void printDetails(Worker p[2])
{
	int i;
	for(i=0; i<2; i++)
	{
		printf ("[WORKER %d]\n", i+1);
		printf ("------------\n");
		printf ("Name: %s\n", p[i].name);
		printf ("Wage: %d\n", p[i].wage);
		printf ("Wdays: %d\n", p[i].wdays);
		printf ("Payment: %.2f\n\n",( float)p[i].wage *p[i].wdays);
		printf ("\n\n");
	}
	
	
}

int main()
{
	Worker a[2];
	int i;
	
	for(i=0; i<2; i++)
	{
		printf ("---WORKER %d---\n", i+1);
		printf ("===============\n");
		printf ("Enter worker %d's name: ", i+1);
		scanf ("%s", a[i].name);
		printf ("Enter worker %d's wage: ", i+1);
		scanf ("%d", &a[i].wage);
		printf ("Enter worker %d's wdays: ", i+1);
		scanf ("%d", &a[i].wdays);
		printf ("\n===========================\n\n");
	}
	
	printDetails(a);
	
}