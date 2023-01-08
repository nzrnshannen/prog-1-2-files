/*
	A C program on how to calculate the sum of left diagonals in a matrix.
*/

#include <stdio.h>
int main()
{
	int n;
	printf ("Input the size of the square matrix (less than 5): ");
	scanf ("%d", &n);
	int rows, cols;
	rows = cols = n;
	int arr[rows][cols];
	printf ("Input %d elements in the matrix:\n", n*n);
	int i,j;
	
	for (i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("element - [%d],[%d]: ", i, j);
			scanf ("%d", &arr[i][j]);
		}
	}
	
	printf ("\n\n");
	printf ("The matrix is:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("%3d", arr[i][j]);
		}
		printf ("\n");
	}
	
	printf ("\n\n");
	
	int sum = 0;
	j = cols - 1;
	for (i=0; i<rows; i++)
	{
		sum += arr[i][j];
		j--;
	}
	
	printf ("\nAddition of the left diagonal elements: %d", sum);
}