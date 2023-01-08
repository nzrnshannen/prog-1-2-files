#include <stdio.h>

void displayMessage()
{
	printf ("It is an identity matrix.");
}

int main()
{
	int rows, cols, i, j, flag = 1;
	printf ("Input number of rows for the matrix: ");
	scanf ("%d", &rows);
	printf ("Input number of columns for the matrix: ");
	scanf ("%d", &cols);
	
	int arr[rows][cols];
	printf ("\nInput %d elements:\n", rows*cols);
	for (i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("element [%d],[%d]: ", i, j);
			scanf ("%d", &arr[i][j]);
		}
	}
	
	int size = sizeof(arr)/sizeof(arr[0]);
	printf ("\n\n");
	printf ("The matrix is:\n");
	for (i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("%d ", arr[i][j]);
		}
		printf ("\n");
	}
	
	printf ("\n");
	
	for (i=0; i<rows; i++)
	{
		for (j=0; j<cols; j++)
		{
			if (arr[i][j]!= 0 && arr[i][j] !=1)
			{
				printf ("\nMatrix not suitable for this program.");
				return 0;
			}
			else
				continue;
		}
	}
	
	for (i=0; i<rows; i++)
	{
		for (j=0; j<cols; j++)
		{
			if (i==j)
			{
				if (arr[i][j]==1)
					flag = 1;
			}	
		}
	}
	
	if (flag == 1)
	{
		displayMessage();
	}
	else
	{
		for(i=0; i<rows; i++)
		{
			j = size;
			if(arr[i][j]==1)
			{
				continue;
			}
			else
				flag = 0;
				
			j--;
		}
		
		printf ("\n\n");
		
		if (flag!=1)
			printf ("It is not an identity matrix.");
		else
			printf ("It is an identity matrix.");
	}
	
	return 0;
}