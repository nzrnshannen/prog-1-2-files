#include <stdio.h>
int main()
{
	int i, j, rows, cols, rowSum, colSum;
	rowSum = colSum = 0;
	printf ("Input the size of the matrix: ");
	scanf ("%d", &rows);
	cols = rows;
	
	int matrix[rows][cols];
	
	printf ("Input %d elements in the matrix:\n", rows*cols);
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("element - [%d],[%d]: ", i, j);
			scanf ("%d", &matrix[i][j]);
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
	
	//calculating the rowsum
	
	printf ("\nThe sum of rows and columns of the matrix is:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("%3d", matrix[i][j]);
			rowSum+=matrix[i][j];
		}
		printf ("%6d\n", rowSum);
		rowSum = 0;
	}
	
	printf ("\n");
	for(j=0; j<cols; j++)
	{
		for(i=0; i<rows; i++)
		{
			colSum+=matrix[i][j];
		}
		printf ("%4d", colSum);
		colSum =0;
	}
	
	return 0;
}