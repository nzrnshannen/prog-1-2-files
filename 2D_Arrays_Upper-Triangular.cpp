/*
	A C program to print or display upper triangular matrix.
	
	Note: Needs to review.
*/

#include <stdio.h>
int main()
{
	int n;
	printf ("Input the size of the square matrix: ");
	scanf ("%d", &n);
	int rows, cols;
	int i, j;
	rows = cols = n;
	int arr[rows][cols];
	
	printf ("Input %d elements in the matrix:\n", rows*cols);
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("element - [%d],[%d]: ", i, j);
			scanf ("%d", &arr[i][j]);
		}
	}
	
	printf ("\n");
	printf ("The matrix is:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("%3d", arr[i][j]);
		}
		
		printf ("\n");
	}
	
	for (i=0; i<rows; i++)
	{
		for (j=0; j<cols; j++)
		{
			if (i>=j)
				continue;
			else
				arr[i][j] = 0;
	
		}
	}
	
	printf ("\nSetting zero in upper triangular matrix:\n");
	for (i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("%3d", arr[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
}

/*
EXPLANATION
Note: Draw the matrix on a paper for better visualization.

If arr[rows][cols] = {1, 2, 3, 4, 5, 6,7 , 8, 9}, and n is 3

Visualization:
	1	2	3
	4	5	6
	7	8	9
	
Output of the program:
	1	0	0
	4	5	0
	7	8	9

This means that the elements in these indexes:
[0][1] <---- row is less than the column (still in index 0, as column is less than n)
[0][2] <---- row is less than the column (stil in index 0, as column is less than n)
[1][2] <---- row is less than the column (now in index 1, as column is less than n)

Will be zero. 

If n = 3;
If i = 0, j = 1, j = 2 wil be 0 (2 elements)
if i = 1, j = 2 (1 element)

If i < j while they are less than n, elements in those indexes will be 0. If i >= j, the program will continue instead. 
The row is less than the column.  


*/