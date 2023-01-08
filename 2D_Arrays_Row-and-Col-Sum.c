/*
	A C program about calculating the sum of rows and columns of a matrix.
	
	Note: Needs modification in terms of layout.
*/

#include <stdio.h>
int main()
{
	int n;
	printf ("Input the size of the square matrix: ");
	scanf ("%d", &n);
	int rows, cols;
	rows = cols = n;
	int arr[rows][cols];
	int i, j;
	
	printf ("Input %d elements in the matrix:\n", rows*cols);
	for (i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("element - [%d],[%d]: ", i, j);
			scanf ("%d", &arr[i][j]);
		}
	}
	
	printf ("\n\nThe matrix is: \n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("%3d", arr[i][j]);
		}
		printf ("\n");
	}
	
	printf ("\n\n");
	int resultant[rows][cols];
	int sum = 0;
	
	//solving for row sum
	printf ("Row sum: ");
	for (i=0; i<rows; i++)
	{
		for (j=0; j<cols; j++)
		{
			sum += arr[i][j];
		}
		printf ("%3d", sum);
		sum = 0;
	}
	
	//solving for col sum
	printf ("\nColumn sum: ");
	for (j=0; j<cols; j++)
	{
		for(i=0; i<rows; i++)
		{
			sum += arr[i][j];
		}
		printf ("%3d", sum);
		sum = 0;
	}
	
	return 0;
}

/*
Updated:

#include <stdio.h>
int main()
{
	int n;
	printf ("Input the size of the square matrix: ");
	scanf ("%d", &n);
	
	int rows, cols, i, j, rowsum, colsum;
	rowsum = colsum = 0;
	rows = cols = n;
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
	
	printf ("\n\nThe matrix is:\n");
	for (i=0; i<rows;i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("%d ", arr[i][j]);
		}
		printf ("\n");
	}
	
	printf ("\n\nThe sum or rows and columns of the matrix is:\n");
	for (i=0; i<rows; i++)
	{
		for (j=0; j<cols ;j++)
		{
			printf ("%d ", arr[i][j]);
			rowsum += arr[i][j];
		}
		printf ("%d", rowsum);
		printf ("\n");
		rowsum = 0;
	}
	
	printf ("\n");
	
	for (j=0; j<cols; j++)
	{
		for (i=0; i<rows; i++)
		{
			colsum += arr[i][j];
		}	
		
		printf ("%d ", colsum);
		colsum = 0;
	}
	
	return 0;
}

*/