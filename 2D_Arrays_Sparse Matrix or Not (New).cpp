#include <stdio.h>
int main()
{
	int i, j, rows, cols, zeroCount = 0, nonZeroCount = 0;
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	printf ("Enter number of columns: ");
	scanf ("%d", &cols);
	
	int matrix[rows][cols];
	printf ("\nInput %d elements in the matrix:\n", rows*cols);
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("element - [%d],[%d]: ",i, j);
			scanf ("%d", &matrix[i][j]);
			if (matrix[i][j]==0)
			{
				zeroCount++;
			}
			else
			{
				nonZeroCount++;
			}
		}
	}
	
	printf ("\nThe given matrix is:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("%3d", matrix[i][j]);
		}
		printf ("\n");
	}
	
	
	if (zeroCount > nonZeroCount)
	{
		printf ("\nThe given matrix is a sparse matrix.");
	}
	else
	{
		printf ("\nThe given matrix is not a sparse matrix.");
	}
}