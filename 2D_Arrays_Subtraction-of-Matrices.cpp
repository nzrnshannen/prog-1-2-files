/*
	C program of two matrices being subtraced.
*/
#include <stdio.h>
int main()
{
	int n, i, j;
	printf ("Input the size of the square matrix (less than 5): ");
	scanf ("%d", &n);
	int rows1, cols1, rows2, cols2;
	
	rows1 = cols1 = rows2 = cols2 = n;
	int arr1[rows1][cols1];
	int arr2[rows2][cols2];
	int resultant[rows1][cols2];
	int diff = 0;
	
	printf ("Input %d elements on the first matrix:\n", n * n);
	for (i=0; i<rows1; i++)
	{
		for (j=0; j<cols1; j++)
		{
			printf ("element - [%d][%d]: ", i, j);
			scanf ("%d", &arr1[i][j]);
		}
	}
	
	printf ("\n\nInput %d elements on the second matrix:\n", n * n);
	for (i=0; i<rows2; i++)
	{
		for (j=0; j<cols2; j++)
		{
			printf ("element - [%d][%d]: ", i, j);
			scanf ("%d", &arr2[i][j]);
		}
	}
	
	printf ("\nFirst matrix:\n");
	for (i=0; i<rows1; i++)
	{
		for (j=0; j<cols1; j++)
		{
			printf ("%3d", arr1[i][j]);
		}
		printf ("\n");
	}
	
	printf ("\nSecond matrix:\n");
	for (i=0; i<rows2; i++)
	{
		for (j=0; j<cols2; j++)
		{
			printf ("%3d", arr2[i][j]);
		}
		printf ("\n");
	}
	
	for(i=0; i<rows1; i++)
	{
		for(j=0; j<cols2; j++)
		{
			diff = arr1[i][j] - arr2[i][j];
			resultant[i][j] = diff;
		}
	}
	
	printf ("\n\nThe subtraction of the two matrices is: \n");
	for (i=0; i<rows1; i++)
	{
		for (j=0; j<cols2; j++)
		{
			printf ("%3d", resultant[i][j]);
		}
		
		printf ("\n");
	}
	
	return 0;
}