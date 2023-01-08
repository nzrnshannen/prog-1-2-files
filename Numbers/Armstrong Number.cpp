#include <stdio.h>
int main()
{
	int n, temp, sum = 0, rem, mult = 1, result =0 ;
	printf ("Enter a number: ");
	scanf ("%d", &n);
	
	temp = n;
	
	while (temp!=0)
	{
		rem = temp%10;
		mult = rem*rem*rem;
		
		temp = temp/10;
		sum += mult;
		
		result+=sum;
		sum = 0;
		mult = 1;

	}
	
	
	printf ("\n");
	if (result==n)
	{
		printf ("The number %d is an armstrong number.", n);
	}
	else
	{
		printf ("The number %d is not an armstrong number.", n);
	}
}