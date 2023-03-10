/*===============================================================================
PROGRAM: A Simple C Program to Check if a 2D Array is an Identity Matrix or Not.
Created by: Shannen T. Nazareno
Date: 10/18/2022
=================================================================================*/

#include <stdio.h>
int main()
{
	int rows, cols, i, j, zeroCount, oneCount;
	zeroCount = oneCount = 0;
	printf ("Enter number of rows: ");
	scanf ("%d", &rows);
	printf ("Enter number of columns: ");
	scanf ("%d", &cols);
	
	int matrix[rows][cols];
	
	printf ("Input %d elements in the matrix:\n", rows*cols);
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			
			input:
			printf ("element - [%d],[%d]: ", i, j);
			scanf ("%d", &matrix[i][j]);
			
			if (matrix[i][j]!=0 && matrix[i][j]!=1)
			{
				printf ("Input at location [%d],[%d] not eligible for this program. Try again.\n\n");
				goto input;
			}
			else
			{
				if (matrix[i][j]==0)
				{
					zeroCount++;
				}
				else
				{
					oneCount++;
				}
			}
		}
	}
	
	printf ("\nNumber of zeroes: %d\n", zeroCount);
	printf ("Number of ones: %d\n", oneCount);
	
	
	int flag = 0;
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			if (i==j)
			{
				if(matrix[i][j]==1)
				{
					flag = 1;
				}
				else
				{
					flag = 0;
					break;
				}
			}
		}
		
		if (flag==0)
		{
			break;
		}
	}
	
	j = cols - 1;
	
	if (flag == 0)
	{
		for(i=0; i<rows; i++)
		{
			if (matrix[i][j--]==1)
			{
				flag = 1;
			}
			else
			{
				flag = 0;
				break;
			}
		}
	}
	
	printf ("\nMatrix:\n");
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("%4d", matrix[i][j]);
		}
		printf ("\n");
	}
	
	int n = (rows*cols)/rows;
	
	if (flag==1)
	{
		if(n==oneCount)
		{
			printf ("\nIt is an identity matrix.\n");
		}
		else
		{
			printf ("\nIt is not an identity matrix.\n");
		}
	}
	
	else
	{
		printf ("\nIt is not an identity matrix.\n");
	}
	
	return 0;
	
}