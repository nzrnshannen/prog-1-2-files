#include <stdio.h>
int main()
{
	int start, end, i, j, c = 1;
	printf ("Starting point: ");
	scanf ("%d", &start);
	printf ("Ending point: ");
	scanf ("%d", &end);
	
	for(i=start; i<=end; i++)
	{
		for(j=0; j<3; j++)
		{
			c*= i; 
		}
		printf ("cube of %d: %d\n", i, c);
		c = 1;
	}
}