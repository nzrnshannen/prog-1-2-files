#include <stdio.h>
int sumOfNum(int, int, int);

int main()
{
	int i=1, num, sum = 0;
	printf ("Input the last number of the range starting from 1: ");
	scanf ("%d", &num);
	
	printf ("\nThe sum of numbers from 1 to %d: %d\n", num, sumOfNum(i, num, sum));
	
	return 0;
}

int sumOfNum(int i, int num, int sum)
{
	if(i==num)
	{
		return i;
	}
	
	else
	{
		return sum + sumOfNum(i+1, num, sum+i);
	}
}