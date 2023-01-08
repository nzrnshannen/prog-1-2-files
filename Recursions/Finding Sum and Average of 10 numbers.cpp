#include <stdio.h>

int findSum(int i, int n)
{
	int sum = 0;
	int num;
	
	if (i>n)
	{
		return (0);
	}
	else
	{
		printf ("Number %d: ", i);
		scanf ("%d", &num);
		sum+=num;
		return sum + findSum(i+1, n);
	}
}
int main()
{
	printf ("Enter 10 numbers: \n");
	int result = findSum(1, 10);
	printf ("\nSum: %d\n", result);
	printf ("\nAverage: %.2f", (float)result/10);
	return 0;
}