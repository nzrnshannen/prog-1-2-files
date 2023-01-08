/*
	A C program that calculates the sum of n natural numbers in which n is
	being inputted by user.
*/

#include <stdio.h>
int sumOfNum(int, int, int);

int main()
{
	int n, i = 0, sum = 0;
	printf ("Input the last number: ");
	scanf ("%d", &n);
	
	printf ("\nThe sum of all %d integers is: %d", n, sumOfNum(i, n, sum));
	
	return 0;
}

int sumOfNum(int i, int num, int sum)
{
	if(i>num)
	{
		return sum;
	}
	
	else
	{
		sum+=i;
		i++;
		sumOfNum(i, num, sum);
	}
}