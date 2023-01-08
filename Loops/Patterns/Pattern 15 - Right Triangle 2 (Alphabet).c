#include <stdio.h>
int main()
{
	int rows;
	printf ("Enter number of rows: ");
	scanf ("%d", &rows);
	
	int i, j;
	
	for(i=1; i<=rows; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf ("%c", 64+i);
		}
		printf ("\n");
	}
}