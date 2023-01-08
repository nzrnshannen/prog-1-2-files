/*
	A C program to read 10 numbers from keyboard and find their sum and 
		average.
*/

#include <stdio.h>
int main()
{
	int test = 10;
	int i, sum = 0, c = 0;
	float average = 0;
	int num;
	printf ("Input 10 numbers:\n");
	
	for (i=1; i<=test; i++)
	{
		printf ("Number - %d: ", i);
		scanf ("%d", &num);
		
		sum += num;
		c++;
	}
	
	average = (float)sum/c;
	
	printf ("The sum of 10 numbers is: %d", sum);
	printf ("\nThe average is: %f", average);
	
	return 0;
}