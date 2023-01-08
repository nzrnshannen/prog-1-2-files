#include <stdio.h>
int main()
{
	int rows;
	printf ("Enter number of rows: ");
	scanf ("%d", &rows);
	
	int i, j;
	
	for(i=rows; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf ("%c", j+64);
		}
		printf ("\n");
	}
}