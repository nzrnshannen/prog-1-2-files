/*
	A C program to display the N terms of odd natural numbers and their sum.	
*/

#include <stdio.h>
int main()
{
	int n;
	printf ("Input number of terms: ");
	scanf ("%d", &n);
	int i, j = 1, sum = 0, c = 0;
	
	printf ("\nThe odd numbers are: ");
	
	for (i=1; i<=n; i++)
	{
//getting the odd number:
		c = 2*i-1; //if i = 1, 2 * 1 = 2, 2 - 1 is 1 (Odd number)
		printf ("%d ", c);
		sum += c;
	}
	
	printf ("\n\nThe sum of odd natural numbers up to %d terms: %d", n, sum);
	
	return 0;
}