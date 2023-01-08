#include <stdio.h>
int main()
{
	int n, result = 0, quot, rem;
	printf ("Enter a number: ");
	scanf ("%d", &n);
	
	quot = n; //will act like a temp variable
	
	while (quot!=0) //will keep onfetting the remainder and quotient if quot is not yet 0
	{
		rem = quot%10; //getting the last digit
		result= result * 10 + rem; //solving for the placement of numbers (1, 10, 100...)
		quot = quot/10; //removing the last digit
	}
	
	if (result==n)
	{
		printf ("%d is a palindrome.", n);
	}
	else
	{
		printf ("%d is not a palindrome.", n);
	}
}