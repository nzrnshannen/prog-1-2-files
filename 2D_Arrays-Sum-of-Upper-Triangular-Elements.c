#include <stdio.h>

int main()
{
	int rows, cols, i, j; 
	printf ("Enter rows: ");
	scanf ("%d", &rows);
	printf ("Enter columns: ");
	scanf ("%d", &cols);
	
	int arr[rows][cols];
	printf ("Input %d elements in the matrix:\n", rows*cols);
	for (i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("element - [%d],[%d]: ", i, j);
			scanf ("%d", &arr[i][j]);
		}
	}
	
	printf ("\n\nThe given matrix is:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("%2d ", arr[i][j]);
		}
		printf ("\n");
	}
	
	printf ("\n\nThe elmeents being summed of the upper triangular matrix are: ");
	
	for (i=0; i<rows; i++)
	{
		for (j=i+1; j<cols; j++)
		{
			printf ("%d ", arr[i][j]);
		}
	}
	int sum = 0;
	
	for (i=0; i<rows; i++)
	{
		for(j=i+1; j<cols; j++)
		{
			sum += arr[i][j];
		}
	}
	
	printf ("\nSum of the upper triangular matrix elements: %d", sum);
	
	return 0;
	
	
}