#include <stdio.h>
int main()
{
	int rows1, cols1;
	int rows2, cols2;
	int i, j;

input:
	printf ("Enter contents for matrix 1:\n");
	printf ("Rows: ");
	scanf("%d", &rows1);
	printf ("Columns: ");
	scanf ("%d", &cols1);
	
	printf ("\n");
	printf ("Enter contents for matrix 2:\n");
	printf ("Rows: ");
	scanf ("%d", &rows2);
	printf ("Columns: ");
	scanf ("%d", &cols2);
	
	int matrix_A[rows1][cols1], matrix_B[rows2][cols2];
	int n1, n2;
	n1 = rows1 * cols1;
	n2 = rows2 * cols2;
	
	
	if (n1!=n2)
	{
		printf ("\nBoth matrices differ in size. Enter a different size.\n");
		goto input;
	}
	else
	{
		printf ("\nThe matrices can be compared.\n");
		printf ("\nInput %d elements in the first matrix:\n", n1);
		for(i=0; i<rows1; i++)
		{
			for(j=0; j<cols1; j++)
			{
				printf ("element - [%d],[%d]: ", i, j);
				scanf ("%d", &matrix_A[i][j]);
			}
		}
		
		printf ("\nInput %d elements in the second matrix:\n", n2);
		for(i=0; i<rows2; i++)
		{
			for(j=0; j<cols2; j++)
			{
				printf ("element - [%d],[%d]: ", i, j);
				scanf ("%d", &matrix_B[i][j]);
			}
		}
		
		printf ("\n");
		printf ("The first matrix is:\n");
		for(i=0; i<rows1; i++)
		{
			for(j=0; j<cols1; j++)
			{
				printf ("%d ", matrix_A[i][j]);
			}
			printf ("\n");
		}
		printf ("\nThe second matrix is:\n");
		for(i=0; i<rows2; i++)
		{
			for(j=0; j<cols2; j++)
			{
				printf ("%d ", matrix_B[i][j]);
			}
			printf ("\n");
		}
	}
	
	int flag = 0;
	for(i=0; i<rows1; i++)
	{
		for(j=0; j<cols2; j++)
		{
			if(matrix_A[i][j]!=matrix_B[i][j])
			{
				flag = 1;
			}
		}
	}
	
	printf ("\n");
	if (flag==1)
	{
		printf ("\nTwo matrices are not equal.");
	}
	else
	{
		printf ("\nTwo matrices are equal.");
	}
	
	return 0;
}