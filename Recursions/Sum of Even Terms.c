#include <stdio.h>

int sumOfEvenTerms(int i, int n)
{
	int sum = 0, c;
	
	if (i>n)
	{
		return sum;
	}
	else
	{
		c = i*2;
		printf ("%d ", c);
		sum += c;
		return sum + sumOfEvenTerms(i+1, n);
	}
}

int main()
{
	int n;
	printf ("Input number of terms: ");
	scanf ("%d", &n);
	
	int i = 1;
	printf ("\nThe even numbers are: ");
	int result = sumOfEvenTerms(i, n);
	
	printf ("\nThe sum of even natural numbers up to %d terms: %d", n, result);
	
	return 0;
}