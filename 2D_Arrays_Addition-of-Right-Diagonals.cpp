/*
	A C program about the addiition of right diagonls of a matrix.
*/

#include <stdio.h>
int main()
{
	int n;
	printf ("Input the size of the square matrix: ");
	scanf ("%d", &n);
	
	int sum =0;
	int rows, cols;
	rows = cols = n;
	int arr[rows][cols];
	int i, j;
	
	printf ("Input %d elements in the first matrix:\n", n*n);
	for (i=0; i<rows; i++)
	{
		for (j=0; j<cols; j++)
		{
			printf ("element - [%d],[%d]: ", i, j);
			scanf ("%d", &arr[i][j]);
			
			if(i==j) //add elements if i and j are the same
			{
				sum+= arr[i][j];
			}
		}
	}
	
	printf ("\nThe matrix is:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("%3d", arr[i][j]);
		}
		printf ("\n");
	}
	
	printf ("Addition of the right diagonal elements is: %d", sum);
	
}