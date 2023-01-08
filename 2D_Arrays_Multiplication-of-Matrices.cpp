/*
	C program about multiplication of two matrices.
*/

#include <stdio.h>
int main()
{
	int rows1, cols1;
	int rows2, cols2;
	int i, j, product = 0, k;
	printf ("Input contents for the first matrix:\n");
	printf ("\tRows: ");
	scanf ("%d", &rows1);
	printf ("\tColumns: ");
	scanf ("%d", &cols1);
	
	printf ("\nInput contents for the second matrix:\n");
	printf ("\tRows: ");
	scanf ("%d", &rows2);
	printf ("\tColumns: ");
	scanf ("%d", &cols2);
	printf ("\n");
	
	int arr1[rows1][cols1], arr2[rows2][cols2];
	int resultant[rows1][cols2];
	printf ("Input %d elements for the first matrix:\n", rows1*cols1);
	for (i=0; i<rows1; i++)
	{
		for (j=0; j<cols1; j++)
		{
			printf ("element - [%d],[%d]: ", i, j);
			scanf ("%d", &arr1[i][j]);
		}
	}
	
	printf ("\nInput %d elements for the second matrix:\n", rows2*cols2);
	for (i=0; i<rows2; i++)
	{
		for(j=0; j<cols2; j++)
		{
			printf ("element - [%d],[%d]: ", i, j);
			scanf ("%d", &arr2[i][j]);
		}
	}
	
	printf ("\nFirst matrix:\n");
	for (i=0; i<rows1; i++)
	{
		for(j=0; j<cols1; j++)
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
			printf("%3d", arr2[i][j]);
		}
		printf ("\n");
	}
	
	for (i=0; i<rows1; i++)
	{
		for(j=0; j<cols2; j++)
		{
			for (k=0; k<rows2; k++)
			{
				product += arr1[i][k] * arr2[k][j];
			}
			resultant[i][j] = product;
			product = 0;
		}
	}
	
	printf("\n\nThe multiplication of two matrices:\n");
	for(i=0; i<rows1; i++)
	{
		for(j=0; j<cols2; j++)
		{
			printf ("%3d", resultant[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
}