#include <stdio.h>
int main()
{
	int rows, cols, i, j, countZero = 0, countNoneZero = 0;
	printf ("Input rows: ");
	scanf ("%d", &rows);
	printf ("Input columns: ");
	scanf ("%d", &cols);
	
	int matrix[rows][cols];
	
	printf ("Input %d elements in the matrix:\n", rows*cols);
	for (i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("element - [%d],[%d]: ", i, j);
			scanf ("%d", &matrix[i][j]);
			
			if (matrix[i][j]!=0)
			{
				countNoneZero++;
			}
			else
			{
				countZero++;
			}
		}
	}

	printf ("\n");
	
	printf ("The given matrix is:\n");
	for (i=0; i<rows; i++)
	{
		for (j=0; j<cols; j++)
		{
			printf ("%3d ", matrix[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n\n");
	
	if (countZero>countNoneZero)
	{
		printf("The given matrix is sparse matrix.\n");
		printf ("There are %d number of zeroes in the matrix.", countZero);
	}
	else
	{
		printf ("The given matrix is not a sparse matrix.\n");
	}
	
	return 0;
}