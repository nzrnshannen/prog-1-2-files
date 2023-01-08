#include <stdio.h>
#include <stdlib.h>

int main()
{
	int rows, cols, i, j;
	printf ("Enter number of rows: ");
	scanf ("%d", &rows);
	printf ("Enter number of columns: ");
	scanf ("%d", &cols);
	
	int matrix[rows][cols], max, c = 0;
	
	printf ("Enter %d elements in the matrix:\n", rows*cols);
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
		enterElement:
			printf ("element - [%d],[%d]: ", i, j);
			scanf ("%d",&matrix[i][j]);
			
			if (matrix[i][j] != 1 && matrix[i][j] != 0)
			{
				printf ("\nInput in element[%d][%d] is eligible for this program. Try a different digit.\n", i, j);
				goto enterElement;
			}
		}
	}
	
	printf ("\n\nThe given matrix is:\n");
	for (i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("%d ", matrix[i][j]);
		}
		printf ("\n");
	}
	
	int index[rows];
	for(i=0; i<rows; i++)
	{
		for (j=0; j<cols; j++)
		{
			if (matrix[i][j]==1)
				c++;
		}
		
		index[i] = c;
		c = 0;
	}
	
	int finalPos;

	i = 0;
	max = index[i];
	finalPos = i;
	for (i=1; i<rows; i++)
	{
		if(max<index[i])
		{
			finalPos = i;
		}
		else if (max == index[i])
		{
			printf ("\n\nThere are more than one row of the array that have the same number of 1s.\n\n");
			exit(1);
		}
	}

	printf ("\n\nThe index of the row with the maximum 1s is: %d", finalPos);
	
	return 0;
}