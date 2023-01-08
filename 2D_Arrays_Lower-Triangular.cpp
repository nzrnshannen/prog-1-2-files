/*
	A C program to print or display the lower triangular of a given matrix.
	
	Note: Needs to study more.
*/
#include <stdio.h>
int main()
{
	int n;
	printf ("Input the size of the square matrix: ");
	scanf ("%d", &n);
	int i, j;
	int rows, cols;
	rows = cols = n;
	int arr[rows][cols];
	printf ("Input %d elements in the first matrix:\n", n*n);
	for (i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("element - [%d],[%d]: ", i, j);
			scanf ("%d", &arr[i][j]);
		}
	}
	
	printf ("\nThe matrix is:\n");
	for (i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("%3d", arr[i][j]);
		}
		printf ("\n");
	}
	
	//draw this on a scratch paper for better visualization
	for (i=0; i<rows; i++)
	{
		for(j=0; j<i; j++) //elements that are j < i will be 0
		{
			arr[i][j] = 0;
		}
	}
	
	printf ("\n\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf ("\n");
	}
	
	return 0;	
}

/*
Elements for example in the arr[rows][cols]: {1, 2, 3, 4, 5, 6, 7, 8, 9}

[1][0] 
[2][0]
[2][1]
[3][0]
[3][1]
[3][2]

If i is 0, then no element in that row will be zero
If i is 1, then 1 element in that row will be zero
if i is 2, then 2 elements in that row will be zer0
If i is 3, then 3 elements in that row will be zero

j < i



*/