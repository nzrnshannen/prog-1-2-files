#include <stdio.h>
int factorialFunc(int);

int main()
{
	int n;
	printf ("Enter a number: ");
	scanf ("%d", &n);
	int fact = factorialFunc(n);
	
	printf ("The factorial of %d is: %d", n, factorialFunc(n));
	
	return 0;
}


int factorialFunc(int n)
{
	int fact;
	
	if (n==1)
	{
		return n;
	}
	
	else
	{
		return fact = n * factorialFunc(n-1);
	}
}

