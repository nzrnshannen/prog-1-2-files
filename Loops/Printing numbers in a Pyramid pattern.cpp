#include <stdio.h>
int main()
{
	int i, j, k, space, t = 1, rows;
	
	printf ("Input rows: ");
	scanf ("%d", &rows);
	
	space = rows + 4 - 1;
	
	for (i=1; i<=rows; i++)
	{
		for (k=space; k>=1; k--)
		{
			printf (" ");
		}
		
		space--; //decrementing space in order for the next looping, it will more likely to print numbers in a pyramid form
		
		//after space, we can now print value of t
		
		for (j=1; j<=i; j++)
		{
			printf ("%d ", t++); //the value of t won't be affected here as we keep on looping (like decrease or what), it will just increment on its own
		}
		
		printf ("\n");
	}
	
	return 0;
}