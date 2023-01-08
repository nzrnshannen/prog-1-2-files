/*
	A C program to display n number of multiplication table vertically.
*/

#include <stdio.h>
int main()
{
	int n;
	printf ("Input upto the table number starting from 1: ");
	scanf ("%d", &n);
	int i, j, mul;
	
	for(i=1; i<=10; i++)
	{
		for (j=1; j<=n; j++)
		{
			mul = 1;
			mul = j * i;
			printf ("%d X %d = %d, ", j, i, mul);
		}
		
		printf ("\n");
	}
}