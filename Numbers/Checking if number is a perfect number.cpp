#include <stdio.h>
int main()
{
	int i, num, sum = 0;
	printf ("Enter a number: ");
	scanf ("%d", &num);
	
	for(i=1; i<num; i++)
	{
		if (num%i==0)
		{
			sum+=i;
		}
	}
	
	if (sum==num)
	{
		printf ("\nThe number %d is a perfect number.", num);
	}
	else
	{
		printf ("\nThe number %d is not a perfect number.", num);
	}
	
	return 0;
}