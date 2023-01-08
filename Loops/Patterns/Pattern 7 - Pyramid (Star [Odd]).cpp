/*
	Printing star pyramid
*/
#include <stdio.h>
int main()
{
	int i, j, num;
	printf ("Enter number of rows: ");
	scanf ("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		for(int space=1; space<=(num-i); space++)
		{
			printf (" ");
		}
		
		for(j=1; j<=(2*i-1); j++)  //2*i-1 for the odd numbers
		{
			printf ("*");
		}
		printf ("\n");
	}
	
	return 0;
}