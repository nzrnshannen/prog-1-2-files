#include <stdio.h>
int main()
{
	int rows1, cols1, rows2, cols2;
	printf ("Input the following for matrix 1: ");
	printf ("\n\tRows: ");
	scanf ("%d", &rows1);
	printf ("\tColumns: ");
	scanf  ("%d", &cols1);
	
	printf ("\n\nInput the following for matrix 2: ");
	printf ("\n\tRows: ");
	scanf ("%d", &rows2);
	printf ("\tColumns: ");
	scanf  ("%d", &cols2);
	
	int matrix_A[rows1][cols1], matrix_B[rows1][cols1];
	int i, j;
	int flag = 0;
	
	printf ("\n\nInput %d elements for matrix A:\n", rows1*cols1);
	for (i=0; i<rows1; i++)
	{
		for (j=0; j<cols1; j++)
		{
			printf ("element [%d],[%d]: ", i, j);
			scanf ("%d", &matrix_A[i][j]);		
		}		
	}
	
	printf ("\n\nInput %d elements for matrix B:\n", rows2 * cols2);
	for (i=0; i<rows2; i++)
	{
		for (j=0; j<cols2; j++)
		{
			printf ("element [%d],[%d]: ", i, j);
			scanf ("%d", &matrix_B[i][j]);
		}
	}
	
	printf ("\n\n");
	
	printf ("Matrix A: \n");
	for (i=0; i<rows1; i++)
	{
		for (j=0; j<cols1; j++)
		{
			printf ("%d ", matrix_A[i][j]);
		}
		printf ("\n");
	}
	
	printf("\n\n");
	printf ("Matrix B: \n");
	for (i=0; i<rows2; i++)
	{
		for(j=0; j<cols2; j++)
		{
			printf ("%d ", matrix_B[i][j]);
		}
		printf ("\n");
	}
	
	if (rows1==cols2 && cols2 == rows2)
	{
		for (i=0; i<rows1; i++)
		{
			for(j=0; j<cols2; j++)
			{
				if(matrix_A[i][j]!=matrix_B[i][j])
				{
					flag = 0;
				}
				else
					flag = 1;
			}
		}
	}
	
	if (flag==1)
		printf ("\nTwo matrices are equal.");
	else
		printf ("\nTwo matrices are not equal.");
		
		return 0;
}