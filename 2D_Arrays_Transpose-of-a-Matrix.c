/*
	A C program about a transpose of a matrix.
*/

#include<stdio.h>

int main()
{
	int rows, cols;
	printf ("Input the following contents:\n");
	printf ("\tRows: ");
	scanf ("%d", &rows);
	printf ("\tColumuns: ");
	scanf ("%d", &cols);
	
	int i, j;
	int arr[rows][cols];
	
	printf ("Input %d elements in the matrix: \n", rows * cols);
	for (i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("element - [%d],[%d]: ", i, j);
			scanf ("%d", &arr[i][j]);
		}
	}
	
	printf ("\n\nThe matrix is:\n");
	for (i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("%2d", arr[i][j]);
		}
		printf ("\n");
	}
	
	int resultant[rows][cols];
	
	for(j=0; j<cols; j++)
	{
		for (i=0; i<rows; i++)
		{
			resultant[i][j] = arr[j][i];
		}
	}
	
	printf ("The transpose of a matrix is:\n");
	for (i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("%2d", resultant[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}