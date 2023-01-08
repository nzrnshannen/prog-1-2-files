/*
	A C program to display the n terms of even natural numbers and their sum.
*/

#include <stdio.h>
int main()
{
	int n;
	printf ("Input number of terms: ");
	scanf ("%d", &n);
	int i, sum = 0;
	
	printf ("The even numbers are: ");
	for (i=1; i<=n; i++)
	{
		int c;
		
		c = i*2;
		
		printf ("%d ", c);
		sum+=c;
	}
	
	printf ("\nThe sum of even natural numbers up to %d terms: %d", n, sum);
	
	return 0;
}