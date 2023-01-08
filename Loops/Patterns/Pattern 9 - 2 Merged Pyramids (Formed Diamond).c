/*
	Printing a diamond by combining 2 full star pyramids
*/
#include <stdio.h>
int main()
{
	int num, i, j, space;
	printf ("Enter num: ");
	scanf ("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		for(space=1; space<=(num-i); space++)
		{
			printf(" ");
		}
		for(j=1; j<=(2*i-1); j++)
		{
			printf ("*");
		}
		printf ("\n");
	}
	
	for(i=num-1; i>=1; i--)
	{
		for(space=1; space<=(num-i); space++)
		{
			printf (" ");
		}
		for(j=1; j<=(2*i-1); j++)
		{
			printf ("*");
		}
		printf ("\n");
	}
}