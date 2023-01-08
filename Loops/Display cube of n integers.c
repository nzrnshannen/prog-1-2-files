/*
	A C program to display the cube of the number up to n (the given integer by user).
*/

#include <stdio.h>
int main()
{
	int n;
	printf ("Input number of terms: ");
	scanf ("%d", &n);
	
	int i, j, cube = 1;
	
	for (i=1; i<=n; i++)
	{
		cube = i * i * i;
		printf ("Number is: %d and cube of the %d is: %d\n", i, i, cube);
	}
	
	return 0;
}