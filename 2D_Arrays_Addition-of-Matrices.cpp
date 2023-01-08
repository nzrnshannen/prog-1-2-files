/*
	A C program about the addition of two matrices of the same size.
*/

#include <stdio.h>
int main()
{
	int rows1, cols1;
	int rows2, cols2;
	int i, j, k;
	int sum = 0;
	int n;
	printf ("Input the size of square matrix: ");
	scanf ("%d", &n);
	
	rows1 = rows2 = cols1 = cols2 = n;
	
	int arr1[rows1][cols1];
	int arr2[rows2][cols2];
	
	printf ("Input %d elements in the first matrix:\n", n*n);
	for (i=0; i<rows1; i++)
	{
		for (j=0; j<cols1; j++)
		{
			printf ("element - [%d][%d]: ", i, j);
			scanf ("%d", &arr1[i][j]);
		}
	}
	
	printf ("\nInput %d elements in the second matrix:\n", n*n);
	for (i=0; i<rows2; i++)
	{
		for (j=0; j<cols2; j++)
		{
			printf ("element - [%d][%d]: ", i, j);
			scanf ("%d", &arr2[i][j]);
		}
	}
	
	printf ("\n\n");
	
	printf ("First matrix:\n");
	for (i=0; i<rows1; i++)
	{
		for (j=0; j<cols1; j++)
		{
			printf ("%d ", arr1[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n\n");
	
	printf ("Second matrix:\n");
	for (i=0; i<rows2; i++)
	{
		for (j=0; j<cols2; j++)
		{
			printf ("%d ", arr2[i][j]);
		}
		printf ("\n");
	}
	
	printf ("\n\n");
	printf ("The addition of two matrices is:\n");
	
	int resultant[rows1][cols2];
	
	for (i=0; i<rows1; i++)
	{
		for (j=0; j<cols2; j++)
		{
			sum = arr1[i][j] + arr2[i][j];
			
			resultant[i][j] = sum;
		}
		
		sum = 0;
	}
	
	//printing the resultant
	
	for (i=0; i<rows1; i++)
	{
		for (j=0; j<cols2; j++)
		{
			printf ("%d ", resultant[i][j]);
		}
		
		printf ("\n");
	}
	return 0;
}