/*
	A C program to display the multiplication table of a given integer.
*/

#include <stdio.h>
int main()
{
	int n;
	printf ("Input the number (Table to be calculated): ");
	scanf ("%d", &n);
	int i, mul;
	int limit = 10;
	for (i=1; i<= 10; i++)
	{
		mul = 1;
		mul = n * i;
		printf ("%d X %d = %d\n", n, i, mul);
	}
	
	return 0;
}