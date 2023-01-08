/*
	Printing right triangle (flipped) using star
*/

#include <stdio.h>
int main()
{
	int num;
	printf ("Enter num: ");
	scanf ("%d", &num);
	
	int i, j;
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=num; j++)
		{
			if((i+j)<=num)
			{
				printf (" ");
			}
			else
			{
			
				printf ("*");
			}
		}
		printf ("\n");
	}
	
	return 0;
}