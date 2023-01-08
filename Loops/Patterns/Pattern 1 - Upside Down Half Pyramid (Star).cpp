/*
	An upside down half pyramid pattern using nested for loop.
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
		for(j=num; j>=i; j--)
		{
			printf ("*");
		}
		printf ("\n");
	}
}

/*
	Second program:
	
	int num;
	printf ("Enter num: ");
	scanf ("%d", &num);
	
	int i, j;
	for(i=num; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf ("*");
		}
		printf ("\n");
	}


*/