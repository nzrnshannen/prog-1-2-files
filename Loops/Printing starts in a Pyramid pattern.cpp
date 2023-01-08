#include <stdio.h>
int main()
{
	int rows, i, j, k, space;
	
	printf ("Input number of rows: ");
	scanf ("%d", &rows);
	
	space = rows + 4 - 1;
	
	//i = 1 for easier tracking
	//i<=rows because if rows is 4, then if i<=4, it will exactly print pyramid in 4 rows
	for (i=1; i<=rows; i++)
	{
		for (k=space; k>=1; k--)
		{
			printf (" ");
		}
		
		space--;
		
		for (j=1; j<=i; j++)
		{
			printf ("* ");
		}
		
		printf ("\n");
	}
	
	return 0;
}