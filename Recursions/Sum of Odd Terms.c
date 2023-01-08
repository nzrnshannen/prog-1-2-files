#include <stdio.h>

int sumOfOddTerms(int i, int n)
{
	int c, sum = 0;
	
	if (i>n)
	{
		return sum;
	}
	else
	{
		c = 2*i-1;
		printf ("%d ", c);
		sum+=c;
		
		return sum + sumOfOddTerms(i+1, n);
	}
}

int main()
{
	int n;
	printf ("Input number of terms: ");
	scanf ("%d", &n);
	
	int i = 1;
	
	int result = sumOfOddTerms(i, n);
	printf ("\nThe sum of odd natural numbers up to %d terms: %d", n, result);
	
	return 0;
}