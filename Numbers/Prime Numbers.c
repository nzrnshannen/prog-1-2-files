#include <stdio.h>
int main()
{
	int i, j, n, c = 0;
	printf ("Enter a number: ");
	scanf ("%d", &n);
	
	printf ("\nThe prime numbers under %d is/are: ", n);
	for(i=2; i<=n;i++)//all numbers are a factor of 1, that's why we started with 2
	{
		for(j=1; j<=i; j++) //j should start from 1 as a prime number is a factor to 1 and itself (that's why there's j<=i)
		{
			if (i%j==0)
			{
				c++; //counting if the factors of i are only 2 in order to consider it a prime
			}

		}
		
		if (c==2) //if c is 2, meaning there are only 2 factors of that number, it is considered to be a prime
		{
			printf ("%d ", i);
		}
		
		c =0;
	}
	
	return 0;
}